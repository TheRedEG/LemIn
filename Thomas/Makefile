##
## Makefile for Make in /home/gao_j/rendu/LemIn
## 
## Made by Julien Gao
## Login   <gao_j@epitech.net>
## 
## Started on  Tue Apr 12 11:39:06 2016 Julien Gao
## Last update Tue Apr 12 11:42:39 2016 Julien Gao
##

CC	=	CC

NAME	=	lem-in

RM	=	rm -f

SRCS	=	

OBJS	=	$(SRCS:.c=.o)

all	:	$(NAME)

$(NAME)	:	$(OBJS)
		$(CC) -o $(NAME) $(OBJS)

clean	:
		$(RM) $(NAME)

fclean	:	clean
		$(RM) $(OBJS)

re	:	fclean all
