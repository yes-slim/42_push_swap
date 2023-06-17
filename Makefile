# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/01 15:29:33 by yes-slim          #+#    #+#              #
#    Updated: 2023/06/17 20:50:49 by yes-slim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#=================variables=========================#
CFLAGS = -Wall -Werror -Wextra -I includes -c
NAME = push_swap
NAME_B = checker
DEL = rm -f
#=================files=============================#
FT_PRINTF = ft_printf_helpers ft_printf
LIBFT = ft_list functions ft_join ft_split
HELPERS = check_args ft_error ft_fill arr_sort
INSTRUC = ins_push ins_swap ins_rotate ins_rev_rotate
SORT = sort_less_5 sort_hundred
BNS = ft_1 ins_rev_rotate_bonus ins_push_bonus ins_swap_bonus ins_rotate_bonus 
GNL = get_next_line get_next_line_utils
SRCS =	$(addsuffix .c, $(addprefix Srcs/ft_printf/, $(FT_PRINTF))) \
		$(addsuffix .c, $(addprefix Srcs/libft/, $(LIBFT))) \
		$(addsuffix .c, $(addprefix Srcs/helpers/, $(HELPERS))) \
		$(addsuffix .c, $(addprefix instructions/, $(INSTRUC))) \
		$(addsuffix .c, $(addprefix sorting/, $(SORT)))	
BSRCS = $(addsuffix .c, $(addprefix Srcs/gnl/, $(GNL))) \
		$(addsuffix .c, $(addprefix bonus/, $(BNS)))
OBJ = $(SRCS:.c=.o)
BOBJ = $(BSRCS:.c=.o)
#=================compile===========================#
%.o : %.c
	@echo $(grey)$(italic)"	~Compiling $<"$(reset)
	@cc $(CFLAGS) $< -o $@
#=================rules=============================#
all : $(NAME)

bonus : $(NAME_B)

$(NAME) : $(OBJ) push_swap.c
	@ar -rc push_swap.a $(OBJ)
	@cc push_swap.c push_swap.a -I includes  -o $(NAME)
	@echo $(cyan)$(underline)"$(NAME) is ready to run" $(reset)

$(NAME_B) : $(OBJ) $(BOBJ) checker.c
	@ar -rc push_swap_bonus.a $(OBJ) $(BOBJ)
	@cc checker.c push_swap_bonus.a -I includes -o $(NAME_B)
	@echo $(cyan)$(underline)"$(NAME_B) is ready to run" $(reset)

clean :
	@$(DEL) $(OBJ) $(BOBJ) push_swap.a push_swap_bonus.a
	@echo $(green)$(italic)$(bold)"	~Deleting files..."$(reset)

fclean : clean
	@$(DEL) $(NAME) $(NAME_B) 
	@echo $(green)$(italic)$(bold)"	~Deleting push_swap..."$(reset)

re : fclean all

.PHONY : all clean fclean re bonus
#================colors=============================#
black = "\033[0;30m"
red = "\033[0;31m"
green = "\033[0;32m"
yellow = "\033[0;33m"
blue = "\033[0;34m"
purple = "\033[0;35m"
cyan = "\033[0;36m"
grey = "\033[0;90m"
#================font===============================#
bold = "\033[1m"
italic= "\033[3m"
underline = "\033[4m"
inverse = "\033[7m"
#===================================================#
reset = "\033[0m"
#===================================================#