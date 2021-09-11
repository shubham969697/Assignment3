

/*
	Accept one character from user and check whether that character is vowel  (a,e,i,o,u) or not.  
Input : E   	Output : TRUE  
Input : d   	Output : FALSE  



*/

#include<stdio.h>

typedef int bool;

#define TRUE 1
#define FALSE 0

bool CheckVowel(char iValue)
{
	if(iValue=='a' || iValue=='A' || iValue=='e' || iValue=='E' || iValue=='i' || iValue=='I' || iValue=='o' || iValue=='O' || iValue=='u' ||iValue=='U')
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
	
}
int main()
{
	char ch='\0';
	bool bRet=FALSE;
	
	printf("ENter char\n");
	scanf("%c",&ch);
	
	bRet=CheckVowel(ch);
	
	if(bRet==TRUE)
	{
		printf("Char is vowel\n");
	}
	else
	{
		printf("Char is Not vowel\n");
	}
	
	return 0;
}