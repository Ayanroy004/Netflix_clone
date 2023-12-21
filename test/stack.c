#include<stdio.h>
#include<stdlib.h>
#define max 100

int front=0,rear=0,queue[max];

void insert();
void deleted();
void display();
int main()
{
	int ch;
	printf("\n1= insert the element \n2= delete the element \n3= display \n4= exit");
	while(1)
	{
		printf("\nenter the choice=");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert();
				break;
			case 2:
				deleted();
				break;
			case 3:
			    display();
				break;
			case 4:
			    exit(0);
				defult: 
				printf("\n invalid choice\n");		
		}
	}
	return 0;
}
void insert()
{
	int elem;
	if (front==max-1)
	{
		printf("\n overflow\n");
	}
	else
	{
		printf("\n Enter the element=");
		scanf("%d",&elem);
        queue[front]=elem;
		front++;
	}
}
void deleted()
{
	if (rear==front)
	{
		printf("\n underflow\n");
	}
	else
	{
		int elem=queue[rear];
		printf("deleted element is =%d\n",elem);
        rear++;
	}
}
void display()
{
	int i;
	printf("\n The element in queue is =");
	for(i=rear;i<front;i++)
	printf("%d ",queue[i]);	
}