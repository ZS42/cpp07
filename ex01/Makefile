# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 17:39:35 by zsyyida           #+#    #+#              #
#    Updated: 2023/11/29 23:54:44 by zsyyida          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter

CXX = c++

RM = rm -rf

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

SRCS = main.cpp Student.cpp

OBJS := $(SRCS:.cpp=.o)

all: $(NAME)

.c.o:	${CC} ${CFLAGS} -I -c $< -o ${<:.cpp=.o}

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re .cpp.o