##
## EPITECH PROJECT, 2019
## 104intersection
## File description:
## Makefile
##

SUCCESS				= /bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[32m $1\x1b[0m"
WARNING				= /bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[33m $1\x1b[0m"
ATTENTION			= /bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[31m $1\x1b[0m"
ERROR				= /bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[31m $1\x1b[0m"
DONE				= /bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[34m $1\x1b[0m"


## ========================================================================== ##
PATH_INIT		=	./sources/initialisation/
INIT			=	basics.c								\
					intersection.c							\
					main.c


## ========================================================================== ##
PATH_PROCESS		=	./sources/process/
PROCESS				=	cone_fct.c							\
						cylinder_fct.c						\
						sphere_fct.c						\
						do_process.c


## ========================================================================== ##
PATH_DISPLAY		=	./sources/display/
DISPLAY				=	display_process.c


## ========================================================================== ##
SRC				=	$(addprefix $(PATH_INIT), $(INIT))		\
					$(addprefix $(PATH_PROCESS), $(PROCESS))\
					$(addprefix $(PATH_DISPLAY), $(DISPLAY))


.PHONY:			 all, fclean, clean, re, library, tests_run

BIN				= 	104intersection

CC				= 	@gcc

INCLUDE_DIR		=	./include

CFLAGS			=	-g -I./include/ -D_GNU_SOURCE -pedantic -O3 -O2 -Wunused

LDFLAGS 		= 	-lm

FLAGS			=	$(CFLAGS) -I$(INCLUDE_DIR) -L./lib -lmy

UT_SRC			=	$(SRC)

UT_OBJ			=	$(UT_SRC:.c=.o)

UT_FLAGS		=	$(CFLAGS) -lcriterion -lgcov --coverage $(FLAGS)

all:			library $(BIN)

library:
				@$(MAKE) -C ./lib/my/

$(BIN):			$(SRC)
				@$(CC) -o $(BIN) $(SRC) $(FLAGS) $(LDFLAGS) $(CFLAGS)
				@$(call SUCCESS, "The binary has been created correctly.")

clean:			clean_lib_obj
				@$(RM) *.vgcore
				@$(RM) *.gc*
				@$(call DONE, "[ DONE 100% ]")

clean_lib:
				@$(MAKE) clean_lib -C ./lib/my/

clean_lib_obj:
				@$(MAKE) clean -C ./lib/my/

fclean:			clean clean_lib
				@$(RM) $(BIN)
				@$(call SUCCESS, "[ DONE ] All library cleaned.")

re:				fclean all

run:
				./$(BIN) 1 0 0 2 1 1 0 1

valgrind:
				valgrind -v ./$(BIN)

tests_run:
				gcc -o $(UT_FLAGS) $(UT_OBJ)
				./units