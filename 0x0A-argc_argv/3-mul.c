#include <stdio.h>
#include "main.h"
#include <stdlib.h>
*main - it all starts here
*@argc: the number of arguments
*@argv: array of pointers to arguments
*Return: Always 0.
*/
int _atoi(char *s)
int main(int argc, char *argv[])
int sum = 0;
char *c;
while (-argc)
{
for (c = argv[argc]; *c; c++)
if (*c < '0' || *c > '9')
return (printf("Error\n"), 1);
sum += atoi (argv[argc]);
}
printf("%d\n", sum);
return (0);
25,1
Number of Coins for Change #advanced
}
