#include <stdio.h>
int main()
{
	
	
	int balloons[8];
	printf("enter the values of the balloons ");
	int val;
	
	for(int i=0;i<8;val=0)
	{
	scanf("%d",&val);
	if(val>=0 && val<=9)
	{
		balloons[i]=val;i++;
		
	}
	else 
	{
		printf("the value of the ballons must be between 0-9");
	}

	}
	int visited[8];
	for(int i=0;i<8;i++)
	{
		visited[i]=-1;
	}
	for(int i=0;i<8-1;i++)
	{
		for(int j=i+1;j<8;j++)
		{
			if(balloons[j]==balloons[i])
			{
				visited[j]=1;
			}
		}
	}
	for(int i=0;i<8;i++)
	{
	if(visited[i]!=1)
	{
		printf("%d\n",balloons[i]);
	}
	}
		
}
