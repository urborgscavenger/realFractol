# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbauer <mbauer@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/16 16:41:21 by mbauer            #+#    #+#              #
#    Updated: 2025/10/22 16:56:20 by mbauer           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol
OBJ_DIR = obj
SRC_DIR = srcs
SRCFILES =	$(SRC_DIR)/main.c $(SRC_DIR)/almondbread.c $(SRC_DIR)/surrender.c $(SRC_DIR)/parsing.c

OBJS = $(SRCFILES:srcs/%.c=$(OBJ_DIR)/%.o)
CC = cc
CFLAGS = -Ofast -funroll-loops -ftree-vectorize \
	-fomit-frame-pointer -finline-functions \
	-Wall -Wextra -Werror -I./includes/ -I./Libft/ \
	-pthread 
LDFLAGS := -ldl -lglfw -pthread -lm
UNAME_S :=$(shell uname -s)

LIBFT_DIR = ./Libft
LIBFT = $(LIBFT_DIR)/libft.a
LIBMLX := ./MLX42/build/libmlx42.a

MLX42_DIR = ./MLX42

ifeq ($(UNAME_S),Linux)
	LIBMLX = $(MLX42_DIR)/build/libmlx42.a -ldl -lglfw -pthread -lm
	CFLAGS += -D LINUX
else ifeq ($(UNAME_S),Darwin)
	LIBMLX = $(MLX42_DIR)/build/libmlx42.a -lglfw -framework Cocoa -framework OpenGL -framework IOKit
	CFLAGS += -D OSX
endif

CFLAGS += -I$(MLX42_DIR)/include/MLX42

all : $(LIBFT) $(LIBMLX) $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(LIBMLX) $(LIBFT) $(LDFLAGS) -o $(NAME)

$(OBJ_DIR)/%.o: srcs/%.c includes/fractol.h
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	$(MAKE) fclean -C $(LIBFT_DIR)
	$(MAKE) -C $(LIBFT_DIR)

$(LIBMLX):
	@if [ ! -d $(MLX42_DIR) ]; then \
		git clone https://github.com/codam-coding-college/MLX42.git \
		$(MLX42_DIR); \
	fi
	@if [ ! -f $(MLX42_DIR)/build/libmlx42.a ]; then \
		cmake $(MLX42_DIR) -B $(MLX42_DIR)/build && \
		cmake --build $(MLX42_DIR)/build -j4; \
	fi

clean:
		rm -rf $(OBJ_DIR)
		$(MAKE) clean -C $(LIBFT_DIR)
		@echo "library and object inna splee" 

fclean: clean
		rm -f $(NAME)
		$(MAKE) fclean -C $(LIBFT_DIR)
		@rm -rf $(MLX42_DIR)
		@echo "Everything dead"

re:
		$(MAKE) fclean
		$(MAKE) all

.PHONY: all bonus clean fclean re