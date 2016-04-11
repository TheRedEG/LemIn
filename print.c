/*
** print.c for print in /home/cohen_i/rendu/LemIn
** 
** Made by Ilan Cohen
** Login   <cohen_i@epitech.net>
** 
** Started on  Mon Apr 11 15:20:56 2016 Ilan Cohen
** Last update Mon Apr 11 15:22:36 2016 Ilan Cohen
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}
