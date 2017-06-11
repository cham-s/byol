NAME = lispy
FLAGS = -Wall
OBJDIR = obj
OBJS = $(OBJDIR)/main.o
CC = cc

.PHONY: all clean fclean re

VPATH= src/

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME) -ledit

$(OBJDIR)/%.o : %.c
	@mkdir -p $(OBJDIR)
	$(CC) -c $(FLAGS) $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
