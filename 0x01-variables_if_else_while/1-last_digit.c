#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*main - This program will assign a random number to the variable n each time it is executed
*return - successful if zero
*/
int main(void)
{
int n;
int lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = n % 10;
if (n > 5)
  printif ("Last digit of",n,"is",lastDigit,"and is greater than 5","\n");
else if (n == 0)
printif ("Last digit of",n,"is",lastDigit,"and is 0","\n");
else if (n < 6 && n != 0)
printif ("Last digit of",n,"is",lastDigit,"and is less than 6 and not 0","\n");
return (0);
}
