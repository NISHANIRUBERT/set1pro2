#include <stdio.h>

int main(void) {
	// your code goes here
	long long int num;
scanf("%lld",&num);
if(num<=0)
printf("invalid");
else if(num%2==0)
printf("Even");
else if(num%2==1)
printf("Odd");
	
	
	
	
	return 0;
}
