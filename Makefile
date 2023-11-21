##
## EPITECH PROJECT, 2022
## my ls
## File description:
## Makefile
##

SRC_folder	=	src/
STAT_folder	=	$(SRC_folder)stat/
DISPLAY_folder	=	$(SRC_folder)display/

SRC =	$(SRC_folder)maplen.c \
		$(SRC_folder)pos.c \
		$(SRC_folder)win.c \
		$(SRC_folder)line.c \
		$(SRC_folder)move.c \
		$(SRC_folder)info.c \
		$(SRC_folder)left.c \
		$(SRC_folder)down.c \
		$(SRC_folder)cond.c \
		$(SRC_folder)up_p.c \
		$(SRC_folder)emp_f.c \
		$(SRC_folder)right.c \
		$(SRC_folder)detect.c \
		$(SRC_folder)test_box.c \
		$(SRC_folder)box_move.c \
		$(SRC_folder)disp_all.c \
		$(SRC_folder)my_strlen.c \
		$(SRC_folder)my_putstr.c \
		$(SRC_folder)my_putchar.c \
		$(SRC_folder)my_put_nbr.c \
		$(SRC_folder)my_sokoban.c \

OBJ		=		$(SRC:.c=.o)

NAME	=	my_sokoban

all:	$(NAME)

$(NAME):
	gcc $(SRC) -Wall -Wextra -I include -o $(NAME) -lncurses

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
