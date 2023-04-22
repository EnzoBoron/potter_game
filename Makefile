##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Compilation project
##

SRC 	=	src/main.c								\
			src/loop.c								\
			src/menu/init_menu.c					\
			src/click_survol.c						\
			src/menu/survol_text.c	  				\
			src/menu/initialisation/init_text.c		\
			src/menu/initialisation/init_ptr.c		\
			src/menu/draw_exit.c					\
			src/menu/draw_credit.c					\


OBJ			=	$(SRC:.c=.o)

CC			=	gcc

NAME		=	Harry_Potter

LIBPRINT  	=	-L lib/printf -lmyprint

LIBMY		= 	-L lib/my -lmy

LIBLIST 	=	-L lib/list -lmylist

LIBSPRINT	=	-L lib/sprintf -lmysprint

CSFML_LIB	=	-L lib/csfml -lmycsfml

CFLAG		+=	-W -Wall -Wextra

VALGRIND	 =	-ggdb3

LIBALL		=	$(LIBMY) $(LIBPRINT) $(LIBLIST) $(LIBSPRINT)\
				$(CSFML_LIB) -I include

CSFML		=	-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

.SILENT: $(OBJ)

say_warning:
	@echo -e "\033[32;01m----->  Warning(s)  <-----\033[;0m"


all:	say_warning $(OBJ)
	@make -C  lib/my -s
	@make -C  lib/printf -s
	@make -C  lib/list -s
	@make -C  lib/sprintf -s
	@make -C  lib/csfml -s
	@$(CC) $(OBJ) -o $(NAME) $(LIBALL) $(CFLAG) $(CSFML)
	@echo -e "\033[32;01m----->  Done  <-----\033[;0m"

%.o: %.c
	$(CC) $(CFLAG) -c -o $@ $< $(LIBALL) $(CSFML)

my:
	@make -C  lib/my -s
	@make -C  lib/printf -s
	@make -C  lib/list -s
	@make -C  lib/sprintf -s
	@make -C  lib/csfml -s
	@$(CC) main.c -o $(NAME) $(LIBALL) $(CFLAG) $(VALGRIND) $(CSFML)

test_run:
	@$(CC) tests/test.c -o test -lcriterion --coverage

debug:
	@make -C  lib/my -s
	@make -C  lib/printf -s
	@make -C  lib/list -s
	@make -C  lib/sprintf -s
	@make -C  lib/csfml -s
	@$(CC) $(SRC) -o $(NAME) $(LIBALL) $(VALGRIND) $(CSFML)
	@echo -e "\033[33;01m----->  Debug  <-----\033[0m"


seg:
	@$(CC) -o seg seg.c my_putchar.c

clean:
	@make clean -C lib/my -s
	@make clean -C lib/printf -s
	@make clean -C lib/list -s
	@make clean -C lib/sprintf -s
	@make clean -C lib/csfml -s
	@rm -f $(NAME)
	@rm -f *.o
	@rm -f src/*.o
	@rm -f lib/my/*.o
	@rm -f lib/sprintf/*.o
	@rm -f lib/printf/*.o
	@rm -f src/menu/*.o
	@rm -f src/menu/initialisation/*.o


flag:
	$(CC) $(SRC) -o $(NAME) $(LIBALL) $(CFLAG) $(CSFML)

fclean: clean
	@make fclean -C  lib/my -s
	@make fclean -C  lib/printf -s
	@make fclean -C  lib/list -s
	@make fclean -C  lib/sprintf -s
	@make fclean -C  lib/csfml -s
	@rm -f coding-style-reports.log
	@rm -f include/*.a
	@rm -f *.a
	@echo -e "\033[31;01m----->  Remove  <-----\033[;0m"


re: fclean all
	@make re -C  lib/my -s
	@make re -C  lib/printf -s
	@make re -C  lib/list -s
	@make re -C  lib/sprintf -s
	@make re -C  lib/csfml -s
