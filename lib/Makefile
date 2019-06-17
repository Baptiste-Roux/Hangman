##
## EPITECH PROJECT, 2019
## CPE_matchstick_2018
## File description:
## makefile
##

RM		=		rm -f

CC		=		gcc -c

AR		=		ar rc

CFLAGS	=		-W -Werror -Wextra -Wall -g3

SRC 	=	$(wildcard *.c)

OBJ		=		$(SRC:.c=.o)

NAME	=	libmy.a

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(SRC) $(CFLAGS)
			$(AR) $(NAME) $(OBJ)
clean:
			$(RM) $(OBJ)

fclean:		fclean
			$(RM) $(NAME)

re:			fclean all
