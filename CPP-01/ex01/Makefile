# -=-=-=-=-    COLOURS -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

DEF_COLOR   = \033[0;39m
YELLOW      = \033[0;93m
CYAN        = \033[0;96m
GREEN       = \033[0;92m
BLUE        = \033[0;94m
RED         = \033[0;91m

# -=-=-=-=-    NAME -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= #

NAME        := horde

# -=-=-=-=-    FLAG -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= #

CPP          = c++
FLAGS       = -Werror -Wall -Wextra -std=c++98 -g -fsanitize=address

# -=-=-=-=-    PATH -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

RM          = rm -fr

# -=-=-=-=-    FILES -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

SRC         := main.cpp	\
				Zombie.cpp	\
				zombieHorde.cpp \

OBJS		= $(SRC:.cpp=.o)

# -=-=-=-=-    TARGETS -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

all: $(NAME)

%.o: %.cpp Makefile
	$(CPP) $(FLAGS) -c $< -o $@
	@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"

$(NAME): $(OBJS)
	@echo "$(GREEN)Linking $(NAME)!$(DEF_COLOR)"
	$(CPP) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)$(NAME) compiled!$(DEF_COLOR)"
	@echo "$(RED)To share is to care.$(DEF_COLOR)"


clean:
	@$(RM) $(OBJS) 
	@echo "$(RED)Cleaned object files$(DEF_COLOR)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)Cleaned all binaries$(DEF_COLOR)"

re: fclean all


.PHONY: all clean fclean re
