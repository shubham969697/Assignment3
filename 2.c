

/*
	Write a program which accept number from user and print even factors of that number.  
Input :  	24 
Output:  	1 	2 	4 	6 	8 	12  
 

*/

#include<stdio.h>

void DisplayFactor(int iValue)
{
	int iCnt=0;
	
	if(iValue<=0)
	{
		return;
	}
	
	for(iCnt=1;iCnt<=iValue/2;iCnt++)
	{
		if(iValue % iCnt == 0)
		{
			if(iCnt % 2 == 0)
			printf("%d\t",iCnt);
		}
	}
}
int main()
{
	int iNo=0;
	
	printf("Enter no\n");
	scanf("%d",&iNo);
	
	DisplayFactor(iNo);

	return 0;
}