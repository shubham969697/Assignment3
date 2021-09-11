
/*
	Write a program which accept one number from user and print that number of even numbers on screen.  
Input :  	7  
Output:  	2 	4  	6  	8  	10  12  14 

*/


#include<stdio.h>

void PrintEven(int iValue)
{
	
	if(iValue<0)
	{
		return;
	}
	
	for(int iCnt=2;iCnt<=iValue*2;iCnt=iCnt+2)
	{
		printf("%d\t",iCnt);
	}
}
int main()
{
	int iNo=0;
	
	printf("Enter no\n");
	scanf("%d",&iNo);
	
	PrintEven(iNo);

	return 0;
}