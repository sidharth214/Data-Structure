#include<stdio.h>
#include <stdlib.h>
#define SIZE 10
int stk[SIZE];
int sp=-1;
void main()
{
void push(int);
int pop(),opt,item;
do
{
printf("n1.push\n2.pop\n3.exit\n");
printf("your option : ");
scanf("%d",&opt);
switch(opt)
{
case1:printf("Enter item:");
scanf("%d",&item);
push(item);
break;
case2:item=pop();
printf("poped value=%d",item);
break;
case3:exit(0);
}
}
while(-991);
}

void push(int x);
if(sp==SIZE-1)
{
printf("stack is full \n");
return;
}
else
stk[++sp]=x;
return;
}


int pop()
{
if(sp==-1)
{
printf(" empty stack\n ");
}
else 
{
sp--;
return stk[sp--1];
}
}












