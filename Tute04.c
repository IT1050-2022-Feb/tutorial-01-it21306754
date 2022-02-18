/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minimum(int a,int b);
int maximum(int a,int b);
int multiply(int a,int b);
int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}
minimum(int a, int b)
{
	int min;
	if(a>b)
	min=b;
	else 
	min=a;
	 return min;
}
maximum(int a, int b)
{
	int max;
	if(a>b)
	max=a;
	else 
	max=b;
	 return max;
}
multiply(int a, int b)
{
	int mal=a*b;
	 return mal;
}

