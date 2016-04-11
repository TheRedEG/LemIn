##
## Makefile for Makefile in /home/cohen_i/rendu/LemIn
## 
## Made by Ilan Cohen
## Login   <cohen_i@epitech.net>
## 
## Started on  Mon Apr 11 15:06:12 2016 Ilan Cohen
## Last update Mon Apr 11 15:23:08 2016 Ilan Cohen
##

NAME    = lem_in

FILE    = main.c \
	  lem_in.c \
	  print.c

RM      = rm -f

CC      = gcc -o

all:	compil

compil:
	$(CC) $(NAME) $(FILE)

clean:
	$(RM) $(NAME)
	$(RM) *~ \#*\#

fclean:	clean

re:	fclean all
