# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 17:39:45 by zsyyida           #+#    #+#              #
#    Updated: 2023/12/02 23:36:14 by zsyyida          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = array

CXX = c++

RM = rm -rf

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

SRCS = main.cpp

OBJS := $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re .cpp.o