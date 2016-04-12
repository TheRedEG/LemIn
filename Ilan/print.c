/*
** print.c for print in /home/cohen_i/rendu/LemIn/Ilan
** 
** Made by Ilan Cohen
** Login   <cohen_i@epitech.net>
** 
** Started on  Tue Apr 12 15:35:45 2016 Ilan Cohen
** Last update Tue Apr 12 15:36:09 2016 Ilan Cohen
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
      i = i + 1;
    }
}
