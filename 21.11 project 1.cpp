#include<stdio.h>

main(){
	char ch;
	printf("Enter Character.");
	scanf("%c",&ch);
	
if(ch>='0'&&ch<='9')
{
   printf("Character is Digit");
}
else if(ch>='A'&&ch<='Z')
{
   printf("Character is Capital Alphabet");
}
else if(ch>='a'&&ch<='z')
{
	printf("Character is Small Alphabet");
}
else
{
	printf("Character is Special Character");
}	
}
