# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csitja-b <csitja-b@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/20 23:44:57 by csitja-b          #+#    #+#              #
#    Updated: 2023/07/22 17:02:26 by csitja-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# =============================== NAMES ====================================== #

NAME            = push_swap
NAME_BONUS      = checker 
INCLUDE         = -I ./includes/
SRC_DIR         = src/
BONUS_SRC_DIR   = bonus/
OBJ_DIR         = obj/
OBJ_BNS_DIR 	= objbns/

# ============================= COMPILATE RULES =============================== #

RM          = rm -rf
CFLAGS      = -Wall -Werror -Wextra 

# =========================== SOURCES ======================================== #

SRC         = main.c \
                input_check.c input_check_utils.c \
                initialization.c \
                stack.c \
                swap.c push.c rotate.c reverse_rotate.c \
                sort.c \
                position.c cost.c do_move.c \
                utils.c
SRCS = $(addprefix $(SRC_DIR), $(SRC))

BONUS_SRC	= checker_bonus.c \
				get_next_line_bonus.c get_next_line_utils_bonus.c \
				initialization_bonus.c \
				input_check_bonus.c input_check_utils_bonus.c \
				push_bonus.c reverse_rotate_bonus.c \
				rotate_bonus.c swap_bonus.c \
				stack_bonus.c utils_bonus.c \
				
BONUS = $(addprefix $(BONUS_SRC_DIR), $(BONUS_SRC))

# =========================== DIRECTORIES ==================================== #

OBJS = $(addprefix $(OBJ_DIR), $(SRCS:.c=.o))
OBJ_BONUS = $(addprefix $(OBJ_BNS_DIR), $(BONUS:.c=.o))

# =========================== BOLD COLORS ==================================== #

DEF_COLOR   = \033[1;39m
GRAY        = \033[1;90m
RED         = \033[1;91m
GREEN       = \033[1;32m
YELLOW      = \033[1;93m
BLUE        = \033[1;94m
MAGENTA     = \033[1;95m
CYAN        = \033[1;96m
WHITE       = \033[1;97m

# ========================== MAKE RULES ===================================== #

$(OBJ_DIR)%.o: %.c includes/push_swap.h
	@mkdir -p $(dir $@)
	@printf "$(YELLOW)\n $@$(DEF_COLOR)"
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(OBJ_BNS_DIR)%.o: %.c includes/push_swap_bonus.h
	@mkdir -p $(dir $@)
	@printf "$(YELLOW)\n $@$(DEF_COLOR)"
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@


all: $(NAME)
	
$(NAME): $(OBJS)
	@echo "\n\n$(GREEN)==== Project push_swap compiled! ==== $(DEF_COLOR)\n"
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

bonus: $(NAME_BONUS)	

$(NAME_BONUS): $(OBJ_BONUS)
	@echo "\n\n$(GREEN)==== Bonus push_swap compiled! ==== $(DEF_COLOR)\n"
	@$(CC) $(CFLAGS) $(OBJ_BONUS) -o $(NAME_BONUS)

clean:
	@$(RM) $(OBJ_DIR) $(OBJ_BNS_DIR)
	@echo "\n$(CYAN)==== push_swap and objects files cleaned! ==== $(DEF_COLOR)\n"

fclean: clean
	@$(RM) $(NAME) $(NAME_BONUS)
	@echo "\n$(CYAN)==== push_swap executable file and name cleaned! ==== $(DEF_COLOR)\n"

re: fclean all
	@echo "\n$(GREEN)==== Cleaned and rebuilt everything for push_swap! ==== $(DEF_COLOR)\n"

.PHONY: all clean fclean re bonus