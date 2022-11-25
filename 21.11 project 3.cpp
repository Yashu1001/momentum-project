#include<stdio.h>
main(){
 int w,x,y,z;
 int max;
      printf("ENTER W");
      scanf("%i",&w);
      printf("ENTER X");
      scanf("%i",&x);
      printf("ENTER Y");
      scanf("%i",&y);
      printf("ENTER Z");
      scanf("%i",&z);
 
 if(w>x){
 	if(w>y){
 		if(w>z){
 			printf("W IS MAX");
		 }
		else{
			printf("Z IZ MAX");
		} 
    }	
    else if(x>y){
	{
 	       if(x>z){
 	          printf("X IS MAX");
		  }
		   else{
		  	  printf("Z IS MAX");
		  }
}
}
}
else if(y>z){
 		printf("Y IS MAX");
	 }
 else
 	if(z>w){
     	if(z>x){
     		if(z>y){
     			printf("Z IS MAX");
			 }
			 else{
			 	printf("Y IS MAX");
			 }
		 }
}
 }
