//implement stack operations
#include<stdio.h>
#include <stdlib.h>
#define SIZE 10
int stk[SIZE];
int sp=-1;
void main()
{
void push(int);
int pop(),opt,item;
void display();
do
{
printf("\n1.push\n2.pop\n3.display\n4.exit\n");
printf("your option:");
scanf("%d",&opt);
switch(opt)
{
case 1:printf("Enter item:");
scanf("%d",&item);
push(item);
break;
case 2:item=pop();
printf("poped value=%d",item);
break;
case 3:display();
break;
case 4:exit(0);
}
}
while(-991);
}


//function to push an item from stack
void push(int x)
{
if(sp==SIZE-1)
{
printf("stack is full \n");
return;
}
else
stk[++sp]=x;
return;
}


//function to pop an item from stack
int pop()
{
if(sp== -1)
{
printf(" empty stack\n ");
return -1;
}
else 
{
return stk[sp--];
}
}


//display the contents
void display()
{
int i;
if(sp==-1)
{
printf("Empty stacks \n");
return;
}
printf("Stack elements are: ");
for(i=sp;i>=0;i--)
{
printf("%d ",stk[i]);
}
printf("\n");
}










