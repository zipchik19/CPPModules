NAME = phonebook

SRCS = PhoneBook.cpp Contact.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS =  -std=c++98 -fsanitize=address #-Wall -Wextra -Werror

RM = rm -f

all : $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME) : $(OBJS) Makefile
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
