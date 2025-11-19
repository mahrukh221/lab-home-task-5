#include <stdio.h>
int main()
{
	int power;
	char lightcolor;
	
	printf("Is the power on or off \n\"Enter 1 for on\" \n");
	scanf("%d", &power);
	
	
	if(power == 1){
		printf("\nWhat is the traffic light color \nEnter the first letter of the color : ");
	    scanf(" %c", &lightcolor);
	    
		if(lightcolor =='R' || lightcolor=='r'){
			printf("STOP");
		}
			else if(lightcolor =='Y' || lightcolor=='y'){
			printf("CAUTION");
		}
			else if(lightcolor =='G' || lightcolor=='g'){
			printf("GO");
		}
	}
	else{
		printf("Signal off");
	}
	
	return 0;
}
