# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/01 15:29:33 by yes-slim          #+#    #+#              #
#    Updated: 2023/02/17 18:33:47 by yes-slim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Werror -Wextra -c
NAME = push_swap
DEL = rm -f

FT_PRINTF = ft_printf_helpers ft_printf
LIBFT = ft_list functions ft_join ft_split
HELPERS = check_args ft_error ft_fill arr_sort
INSTRUC = ins_push ins_swap ins_rotate ins_rev_rotate
SORT = sort_less_5 sort_hundred

SRCS =	$(addsuffix .c, $(addprefix Srcs/ft_printf/, $(FT_PRINTF))) \
		$(addsuffix .c, $(addprefix Srcs/libft/, $(LIBFT))) \
		$(addsuffix .c, $(addprefix Srcs/helpers/, $(HELPERS))) \
		$(addsuffix .c, $(addprefix instructions/, $(INSTRUC))) \
		$(addsuffix .c, $(addprefix sorting/, $(SORT))) \

OBJ = $(SRCS:.c=.o)


all : $(NAME)

$(NAME) : $(OBJ) push_swap.c
	@ar -rc push_swap.a $(OBJ)
	@cc push_swap.c push_swap.a -o $(NAME)
	@echo "✅\033[0;35m Your \033[0;33mpush_swap \033[0;35mprogram is created \033[0m"

clean :
	@$(DEL) $(OBJ) push_swap.a 
	@echo "✅ \033[0;32mCleaning done\033[0m"

fclean : clean
	@$(DEL) $(OBJ) $(NAME)

re : fclean all


.PHONY : all clean fclean re