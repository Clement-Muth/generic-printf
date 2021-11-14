GCC	=	gcc
CFLAGS	=	-Wall -Wextra -g

SRC =	main.c	\
		utils/strlen.c	\
		utils/memcpy.c	\
		utils/strdup.c
OBJ =	$(SRC:.c=.o)
EXEC =	printf

LDFLAGS	=	-Iincludes/

all: $(EXEC)

$(EXEC): $(OBJ)
	$(GCC) $(CFLAGS) -o $@ $(OBJ) $(LBLIBS) $(LDFLAGS)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(EXEC)

re:	fclean all

.PHONY:	clean fclean re all