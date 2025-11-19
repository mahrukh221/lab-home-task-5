#include <stdio.h>
int main()
{
	int age;
	
	printf("Please Enter Your Age ");
	scanf("%d", &age);
	
	if(age > 0 && age <= 5){
		printf("\nYour Entry is Free");
	}
	else if(age > 5 && age <= 65){
		printf("\nYour ticket price is Standard");
	}
	else{
		printf("\nYou got a discount on ticket price");
	}
	
	return 0;	
	}

