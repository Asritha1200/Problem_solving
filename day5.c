#include <stdio.h>
struct book{
	int book_id;
	char book_name[20];
	 char book_author[20];
	float book_price;
};typedef struct book b;

void insert(int *top,b stack[])
{
	if(*(top)==4)
	{
	
		printf("cant enter into the stack");
		return;
	}

	*(top)++;
	printf("enter the book_id");
	scanf("%d",&(stack[*(top)].book_id));
	
	printf("enetr the book_name");
	scanf("%s",(stack[*(top)].book_name));
	printf("enetr the book_author");
	scanf("%s",(stack[*(top)].book_author));
	printf("enetr the book price");
	scanf("%f",&(stack[*(top)].book_price));
}

void remove(int *top,b stack[])
{
	if(*(top)==-1)
	{
	
		printf("cnt remove the book");
		return;
	}

	
	printf("the book_id of the deleted book");
	printf("%d\n",(stack[*(top)].book_id));
	
	printf(" the book_name of the deleted book");
	printf("%s\n",(stack[*(top)].book_name));
	printf("the book_author of the deleted book");
	printf("%s\n",(stack[*(top)].book_author));
	printf("the book price of the deleted book");
	printf("%f\n",(stack[*(top)].book_price));
	*(top)--;
}
void display(int top,b stack[])
{
	for(int i=top;i>=0;i--)
	{
		printf("the book_id of the deleted book");
	printf("%d\n",(stack[i].book_id));
	
	printf(" the book_name of the deleted book");
	printf("%s\n",(stack[i].book_name));
	printf("the book_author of the deleted book");
	printf("%s\n",(stack[i].book_author));
	printf("the book price of the deleted book");
	printf("%f\n",(stack[i].book_price));
	}
}


int main()
{
	int top=-1;
	b stack[5];
	printf("enter choice \n");
	printf("choice one to insert book \n");
	printf("choice two to remove book \n");
	printf("choice three to display  books \n");
	printf("any key to exit \n");
	int ch;
	printf("enter the choice");
	scanf("%d",&ch);
	for(;;)
	{
	switch(ch)
	{
		case 1:
		insert(&top,stack);
		break;
		case 2:
		remove(&top,stack);
		break;
		case 3:
		display(top,stack);
		break;
		default:
		return 0;
	} 
	}	
		
}
