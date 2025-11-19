#include <stdio.h>
int main()
{
	char room,action;
	
	
	printf("Which room\'s appliances do you want to control : ");
	scanf(" %c", &room);
	printf("\nwhat action do you want to perform : ");
	scanf(" %c", &action);
	
	switch(room){
		case 'L' : 
		    switch(action){
		    	
		    	case 'L' : printf("\n you opted for Living Room Lights: \"Adjusting ambient lighting\" ");
		    	break;
		    	case 'T' : printf(" you opted for Living Room Thermostat: \"Setting living room temperature\" ");
		    	break;
		    	
		}
		break;
	    case 'T' :
		    switch(action){
		    	
		    	case 'L' : printf("\n you opted for Kitchen Lights: \"Turning on bright task lighting\"");
		    	break;
		    	case 'T' : printf(" you opted for Kitchen Thermostat: \"Setting kitchen temperature\" ");
		    	break;
		}
		break;
   	}
	   	    	

	
	
	return 0;
}
