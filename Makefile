##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror -W -g3 -o

LIB 	=	-I./lib/ -L./lib/ -lmy

SRC		=	$(wildcard *.c)

OBJ		=	$(SRC:.c=.o)

NAME	=	hangman

all: $(NAME)

$(NAME):	$(SRC)
			make -C ./lib
			$(CC) $(CFLAGS) $(NAME) $(SRC) $(LIB)

clean:
	rm -f $(OBJ)
	make clean -C ./lib

fclean: clean
	rm -f $(NAME)
	make clean -C ./lib

re: fclean all
	make clean -C ./lib
