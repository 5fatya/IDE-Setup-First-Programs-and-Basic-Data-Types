#include <stdio.h>
int main() {
float result; /* The result of the division */
int a = 5;
float b = 13.5;
result = a / b;
printf("The result is %f\n", result); 
return 0;
}

/* the problem in the code is the print function 
is supposed to have %f 
instead of d and int b is supposed to be 
float b because it contains decimals
*/