NAME = philo

SRC = main.c \
	  utils.c


OBJ = ${SRC:.c=.o}

CC = clang
CFLAGS = -Wextra -Werror -Wall

LIBERATE = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	$(LIBERATE) $(OBJ)

fclean: clean
	$(LIBERATE) $(NAME)

re: fclean all

sani: CFLAGS += -fsanitize=thread
sani: re
