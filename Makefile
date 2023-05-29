NAME = philo

SRC = main.c \


OBJ = ${SRC:.c=.o}

CC = clang
CFLAGS = -Wextra -Werror -Wall

LIBERATE = rm -f

all: $(NAME)

$(NAME): $(OBJ)

clean:
	$(LIBERATE) $(OBJ)

fclean: clean

re: fclean all

sani: CFLAGS += -fsanitize=thread
sani: re
