#include<stdio.h>
main(){
     float rs,u,s,bill;
     printf("Type unit=");
     scanf("%f",&u);
     if(u<=50){
     	rs=u*0.50;    	
	 }
	 else if(u<=150){
	 	rs=25+(u-50)*0.75;
	 }
	 else if(u<=250){
	 	rs=100+(u-150)*1.20;
	 }
	 else{
	 	rs=220+(u-250)*1.50;	 	
	 }
	s=rs*0.20;
	bill=rs+s;
	printf("Total Bill %.2f",bill);	
}
