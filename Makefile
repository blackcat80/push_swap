# =============================== NAMES ====================================== #

NAME = push_swap
LIBFT = libft.a
LIBFT_DIR = ./libft/
HEADER = push_swap.h
INCLUDE = -I ./

# ============================= COMPILATE ==================================== #

RM						= rm -rf
AR         				= ar -rcs
CFLAGS					= -Wall -Werror -Wextra -g

# =========================== DIRECTORIES ==================================== #

OBJ_DIR				= obj_dir
OBJ_SRC 			= $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))

# =========================== SOURCES ======================================== #

SRC = main.c free_resources.c\
		parse/parse.c parse/sort_input.c\
		stack/stack.c\
		sort/sort.c sort/sort_all.c sort/return_stack_b.c\
 		operations/swap.c operations/push.c operations/rotate.c\
		operations/reverse_rotate.c 

# =========================== BOLD COLORS ==================================== #

DEF_COLOR 				= \033[1;39m
GRAY 	   				= \033[1;90m
RED		   				= \033[1;91m
GREEN	    			= \033[1;32m
YELLOW	    			= \033[1;93m
BLUE 					= \033[1;94m
MAGENTA     			= \033[1;95m
CYAN        			= \033[1;96m
WHITE		       		= \033[1;97m
	
# =========================== BACKGROUND COLORS ============================ #

BG_Black				=\033[40m

# ========================== MAKE RULES ===================================== #

all: $(NAME)
	@echo -e "\n\n$(BG_Purple)$(GREEN)==== Project push_swap compiled! ==== ✅$(DEF_COLOR)$(BG_Black)\n"
	@touch $(NAME)

$(NAME):$(OBJ_SRC)
	@$(CC) $(CFLAGS) $(OBJ_SRC) -L$(LIBFT_DIR)$(LIBFT) $(INCLUDE)$(LIBFT_DIR) -o $@

$(OBJ_DIR)/%.o: %.c $(HEADER)
	@make bonus -C  $(LIBFT_DIR)
	@mkdir -p $(dir $@)
	@printf "$(YELLOW)\r $@$(DEF_COLOR)"
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

# ========================== CLEAN   ===================================== #

.PHONY: all clean fclean re

clean:
	@$make clean -C ./libft/
	@$(RM) $(OBJ_DIR)
	@echo -e "\n$(CYAN)==== push_swap and libft object files cleaned! ==== ✅$(DEF_COLOR)\n"
	
fclean: clean 
	@$make fclean -C ./libft/
	@$(RM) $(NAME)
	@echo -e "\n$(CYAN)==== push_swap libft executable files and name cleaned! ==== ✅$(DEF_COLOR)\n"

re : fclean all
	@echo -e "\n$(GREEN)==== Cleaned and rebuilt everything for push_swap and libft! ==== ✅$(DEF_COLOR)\n"