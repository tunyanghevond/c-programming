#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a, b, c;
 printf("Enter A operand (int): ");
 scanf("%d", &a);

 printf("Enter B operand (int): ");
 scanf("%d", &b);
 printf("\n");

 c = a + b;
 printf("c = a + b --> %d\n", c);

 c = a - b;
 printf("c = a - b --> %d\n", c);

 c = a * b;
 printf("c = a * b --> %d\n", c);

 c = a / b;
 printf("c = a / b --> %d\n", c);

 // c = a % b;
 // printf("c = a %% b --> %d\n", c);

 return EXIT_SUCCESS;
}