# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgomes-d <mgomes-d@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/20 11:44:12 by mgomes-d          #+#    #+#              #
#    Updated: 2023/06/23 10:10:03 by mgomes-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = interface
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 
RM = rm -rf

INC_DIR = includes
SRCS_DIR = srcs
OBJS_DIR = objs

SRCS = main.cpp AMateria.cpp Character.cpp Ice.cpp MateriaSource.cpp Cure.cpp
OBJS = $(addprefix ${OBJS_DIR}/, ${SRCS:%.cpp=%.o})

all: ${NAME}

${OBJS_DIR}/%.o: ${SRCS_DIR}/%.cpp
	@mkdir -p ${@D}
	${CC} ${CFLAGS} -I ${INC_DIR} -c $< -o $@

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
	${RM} ${OBJS_DIR}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re