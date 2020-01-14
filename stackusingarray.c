#include<stdio.h>
#define CAPACITY 5
int stack[CAPACITY];
top = -1;
void push(int);
int pop(void);
int isfull(void);
int isempty(void);
void traverse(void);
void peek(void);
void main(void)
{
  int ch,item;
  while(1)
    {
    
      printf("1. push \n");
      printf("2. pop \n");
      printf("3. peek \n");
      printf("4. traverse \n");
      printf("5. quit \n");
      printf("enter your choice: ");
      scanf("%d",&ch);

      switch(ch)
	{
	case 1 : printf("enter element to push: ");
	         scanf("%d",&item);
	         push(item);
		 break;
		 
	case 2 :item = pop();
	  if(item == 0)
	    {
	      printf("stack is underflow \n");
	    }
	  else
	    {
	      printf("popped item is %d \n",item);
	    }
		break;
	  
	case 3 : peek();
		break;

	case 4 : traverse();
	  	break;
	case 5 : exit(0);
	default: printf("invalid input \n\n");
	}
    }
}

void push(int ele)
{
  if(isfull())
    {
      printf("stack is overflow \n");
    }
  else
    {
      top++;
      stack[top] = ele;
      printf("%d pushed \n",ele);

    }
  
}

int isfull()
{
  if(top == CAPACITY - 1)
    {
      return 1;
    }
  else
    {
      return 0;
    }

}

int pop()
{
  if(isempty())
    {
      return 0;
    }
  else
    {
      return stack[top--];
      
    }
}
int isempty()
{
  if(top == -1)
    {
      return 1;
    }
  else
    {
      return 0;
    }
}

void peek()
{
  if(isempty())
    {
      printf("stack is empty \n");
    }
  else
    {
      printf("peek element is : %d \n", stack[top]);
    }
}

void traverse()
{
  if(isempty())
    {
      printf("stack is empty \n");
    }
  else
    {
      int i;
      printf("stack elements are : \n");
      for(i =0;i<=top;i++)
	{
	  printf("%d \t",stack[i]);
	}
    }
}
