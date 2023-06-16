#include <stdio.h>
#include <stdlib.h>

int main()
{
 /* 1.23456789 */
 double decimalDigit = 1.23456789;

 /* 7.801 x 10^9 */
 double worldPopulation = 7.801E9;

 printf("%12.1f | 1 decimal digit\n", decimalDigit);
 printf("%12.3f | 3 decimal digits\n", decimalDigit);
 printf("%12.1f | worldPopulation, decimal, 1 digit of precision\n", worldPopulation);
 printf("%12.1e | worldPopulation, scientific, 1 digit of precision\n", worldPopulation);
 printf("%12.3e | worldPopulation, scientific, 3 digits of precision\n", worldPopulation);

 return EXIT_SUCCESS;
}