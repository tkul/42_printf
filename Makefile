# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkul <tkul@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/02 00:57:38 by tkul              #+#    #+#              #
#    Updated: 2023/12/02 00:57:38 by tkul             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra -g
AR			= ar -rc
LIBFT_DIR	= libft
LIBFT_LIB	= libft.a
LIBFT		= $(LIBFT_DIR)/$(LIBFT_LIB)

SRC = ft_printf.c functions.c functions2.c functions3.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	@make -C $(LIBFT_DIR)
	@$(CC) $(CFLAGS) -c $(SRC)
	@$(AR) $(NAME) $(OBJ) $(LIBFT_DIR)/*.o
	

clean:
	@$(RM) $(OBJ)
	

fclean: clean
	@$(RM) $(NAME)
	

re: fclean all
	