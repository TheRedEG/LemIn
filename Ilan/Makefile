##
## Makefile for Makefile in /home/cohen_i/rendu/LemIn/Ilan
## 
## Made by Ilan Cohen
## Login   <cohen_i@epitech.net>
## 
## Started on  Tue Apr 12 15:30:59 2016 Ilan Cohen
## Last update Tue Apr 12 15:35:12 2016 Ilan Cohen
##

NAME    = lem_in

FILE    = lem_in.c \
	  print.c

RM      = rm -f

CC      = gcc -o

all:	compil

compil:
	$(CC) $(NAME) $(FILE) -lncurses

clean:
	$(RM) $(NAME)
	$(RM) *~ \#*\#

fclean:	clean

re:	fclean all
