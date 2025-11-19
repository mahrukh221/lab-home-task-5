#include <stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter \'a\' of your Quadratic equation : ");
	scanf(" %d", &a);
	printf("Enter \'b\' of your Quadratic equation : ");
	scanf(" %d", &b);
	printf("Enter \'c\' of your Quadratic equation : ");
	scanf(" %d", &c);
	
	if((b*b) - (4*a*c) > 0){
		printf("Two real roots");
	} 
	else if((b*b) - (4*a*c) == 0){
		printf("One real root");
	} 
	else{
		printf("imaginary roots");
	} 
	
	
	return 0;
}
