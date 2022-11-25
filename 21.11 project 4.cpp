#include<stdio.h>
main(){
	char days;
	printf("enter\n m for monday\n t for tuesday\n w for wednesday\n h for thursday\n f for friday\n s for saturday\n u for sunday\n");
	scanf("%c",&days);
	
	switch(days){
	    case 'm':
	printf("MONDAY");
	break;
		case 't':
	printf("TUESDAY");
	break;
		case 'w':
	printf("WEDNESDAY");
	break;
		case 'h':
	printf("THURSDAY");
	break;
		case 'f':
	printf("FRIDAY");
	break;
		case 's':
	printf("SATURDAY");
	break;

		case 'u':
	printf("SUNDAY");
	break;
	default:
	printf("DEFAULT");		
	}	
	
}
