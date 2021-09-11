

/*
	Accept one character from user and convert case of that character.  
Input : a   	Output : A  
Input : D   	Output : d  


*/


#include<stdio.h>

void DisplayConvert(char iValue)
{
	
	if(iValue >= 'A' && iValue <= 'Z')
	{
		printf("%c",iValue+32);
	}
	else
	{
		printf("%c",iValue-32);
	}
}
int main()
{
	char ch;
	
	printf("ENter char\n");
	scanf("%c",&ch);
	
	DisplayConvert(ch);
	return 0;
}