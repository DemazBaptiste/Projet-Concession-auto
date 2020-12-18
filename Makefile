
OBJ	=	$(SRC:.cpp=.o)

NAME	=	my_garage

SRC	=	main.cpp\
		Source/Customer.cpp\
		Source/Human.cpp\

LDFLAGS	=	-g3

CFLAGS	=	-Wall -Wextra -Werror -std=c++11 -stdlib=libc++

CC	=	g++

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CXXFLAGS) -o $(NAME) $(SRC) $(LDFLAGS) $(NCURSES)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

exec:	re
	$(RM) $(OBJ)

.PHONY:	all clean fclean re exec