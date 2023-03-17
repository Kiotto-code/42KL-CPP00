# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yichan <yichan@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/05 18:29:34 by yichan            #+#    #+#              #
#    Updated: 2023/03/16 23:43:46 by yichan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone
CC      =   c++
RM      =   rm -rf
CFLAGS  =   -Wall -Werror -Wextra -g -std=c++98
CSAN  =  -fsanitize=address -g
# INCLUDES    = ./includes
SRC_PATH    = ./srcs
OBJ_PATH    = ./obj
LIBFT_PATH	= ./libft

SRCS	= $(wildcard $(SRC_PATH)/*.cpp)
# SRCS	= $(SRC_PATH)/megaphone.cpp
# SRCS    = $(wildcard ./srcs/*/*.cpp)
# OBJS    = ${SRCS:./srcs/%.cpp=${OBJ_PATH}/%.o}
# SRCS	= ${shell find ./src/libft/ -name "*.cpp"}
OBJS	= $(addprefix $(OBJ_PATH)/,$(patsubst %.cpp,%.o,$(notdir $(SRCS))))
# SRCS	= $(foreach x, $(SRC_PATH), $(wildcard $(addprefix $(x)/*/*,.cpp*)))
# OBJS	= $(addprefix $(OBJ_PATH)/, $(addsuffix .o, $(notdir $(basename $(SRCS)))))


all				:	$(NAME)

$(NAME)			:	$(OBJS)
					$(CC) $(CFLAGS) $(CSAN) $^ -o $@

# $(NAME)			:	$(OBJS)
# 					make -C libft
# 					$(CC) $(CFLAGS) $^ -lreadline -lncurses -L$(LIBFT_PATH) -lft -o $@


$(OBJ_PATH)/%.o	:	$(SRC_PATH)/%.cpp* | $(OBJ_PATH) 
					$(CC) $(CFLAGS) -c $< -o $@

# $(OBJ_PATH)/%.o	:	$(SRC_PATH)/%.cpp* ./includes/*.h ./Makefile | $(OBJ_PATH) 
# 					$(CC) $(CFLAGS) -c -I$(INCLUDES) $< -o $@


$(OBJ_PATH)		:
					mkdir -p $(OBJ_PATH)


clean			:
# $(MAKE) -C $(LIBFT_PATH) $@
					rm -rf $(OBJ_PATH)


fclean			:	clean
# $(MAKE) -C $(LIBFT_PATH) $@
					rm -rf $(NAME)


re				:   fclean all


.PHONY			:	all clean fclean re
