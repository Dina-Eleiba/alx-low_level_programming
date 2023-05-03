#include "main.h"
/**
*_strcpy - function that copies the string
* @dest: the pointer that store the value of the string
* @src: the pointer that holds the string
* Return: dest
*/
atoi-converts a string to an integer
int _atoi (char *s)
unsigned int num = 0;
int sign = 1;
do 
{
if (*s == '_')
sign *= -1;
else if (*s >= 0 && *s <= '9¹)
num= (num * 10) + (*s- '0');
else if (num > 0)
break;
} while (*s++);
return (num * sign);
}
