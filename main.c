#include<stdio.h>
#define maxsize 50
int item[maxsize];
int top=-1;
void push(int x)
{
	if (Is_full())
	{
		printf ("stack overflow");
	}
	else
	{
		top=top+1;
		item[top]=x;
	}
}
	void pop()
	{
		if (Is_empty())
		{
			printf("stack underflow");
		}
		else
		{
			top=top-1;
		}
	}
		  int Is_full()
		{
			if (top==maxsize)
				return 1;
			else
				return 0;
		}
		 int Is_empty()
		{
			if (top==-1)
				return 1;
			else
		return 0;
		}
		void print ()
		{
			int i=0;
			printf("stack:\t");
			
			for(i=0;i<=top;i++)
					printf("%d",item[i]);
			}
			int main()
			{
				push(20);
				print();
				pop();
				print();
				return 0;
			}
			
