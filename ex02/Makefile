# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yichan <yichan@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/15 17:05:39 by yichan            #+#    #+#              #
#    Updated: 2023/05/15 23:07:34 by yichan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= account
CXX			= c++
RM			= rm -rf
CFLAGS		= -Wall -Werror -Wextra -g -std=c++98
CSAN 		=  -fsanitize=address -g
INCLUDES	= ./includes

SRC_PATH	= ./srcs
OBJ_PATH	= ./obj
SRCS		=	$(wildcard $(SRC_PATH)/*.cpp)
OBJS		=	$(patsubst $(SRC_PATH)/%.cpp, $(OBJ_PATH)/%.o, $(SRCS))


all			:	$(NAME)

$(NAME)		:	$(OBJS)
				$(CXX) $(CFLAGS) $(CSAN) $^ -o $@

$(OBJ_PATH)/%.o	:	$(SRC_PATH)/%.cpp* | $(OBJ_PATH)
					$(CXX) $(CFLAGS) $(CSAN) -c -I$(INCLUDES) $< -o $@

$(OBJ_PATH)	:
				mkdir -p $(OBJ_PATH)

clean		:	
				rm -rf $(OBJ_PATH)

fclean		:	clean
				rm -rf $(NAME)

re			:	fclean all

.PHONY		:	all clean fclean re