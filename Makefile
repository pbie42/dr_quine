# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbie <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/15 11:55:43 by pbie              #+#    #+#              #
#    Updated: 2016/05/19 14:54:01 by pbie             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang

CFLAGS = -g

COLLEEN = Colleen
COLLEEN_SRC = src/Colleen.c

GRACE = Grace
GRACE_SRC = src/Grace.c

SULLY = Sully
SULLY_SRC = src/Sully.c

SRC = $(COLLEEN_SRC) $(GRACE_SRC) $(SULLY_SRC)
OBJ = $(SRC:.c=.o)
EXE = $(COLLEEN) $(GRACE) $(SULLY)

all : $(EXE)

$(COLLEEN): $(COLLEEN_SRC:.c=.o)
	$(CC) -o $@ $<

$(GRACE): $(GRACE_SRC:.c=.o)
	$(CC) -o $@ $<

$(SULLY): $(SULLY_SRC:.c=.o)
	$(CC) -o $@ $<

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(EXE)

re: fclean all

.PHONY: all clean fclean re
