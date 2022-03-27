#include "main.h"

/**
* leet - encode string in 1337
* @s: string to encode
* Return: char pointer to the input formatted string (sucess)
*/

char *leet(char *s)
{
int i = 0;
int dif[5] = {0, 4, 14, 19, 11};
char val[5] = {'4', '3', '0', '7', '1'};
while (s[i] != '\0')
{
int j = 0;
while (j < 5)
{
if ((s[i] == 65 + dif[j]) || (s[i] == 97 + dif[j]))
{
s[i] = val[j];
break;
}
j++;
}
i++;
}
return (s);
}


