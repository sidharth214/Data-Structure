#include <stdio.h>
struct bit
{
unsigned char x : 1;
};
int uset[]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9},size=10;
void readset(struct bit[],int n);
void printset(struct bit[]);
void unionset(struct bit[],struct bit[],struct bit[]);
void interset(struct bit[],struct bit[],struct bit[]);
void difference(struct bit[],struct bit[],struct bit[]);
int main()
{
struct bit a[10]={0},b[10]={0},c[10]={0};
int n,x;
printf("Number of elements in set A: ");
scanf("%d",&n);
readset(a,n);
printf("Number of elements in set B: ");
scanf("%d",&x);
readset(b,x);
printf("Set A: ");
printset(a);
printf("Set B: ");
printset(b);
unionset(a,b,c);
printf("A union B: ");
printset(c);
interset(a,b,c);
printf("A intersection B: ");
printset(c);
difference(a,b,c);
printf("A-B: ");
printset(c);
return 0;
}

// READ A SET AND STORE AS A BIT STRING
void readset(struct bit a[],int n)
{
int i,x,k;
printf("Enter %d elements: ",n);
for(i = 0;i<n;++i)
{
scanf("%d", &x);
for (k = 0; k < size; ++k)
{
if(uset[k]==x)
{
a[k].x=1;
break;
}
}
}
return;
}

// TO PRINT STRUCT BIT
void printset(struct bit a[])
{
int k;
printf("{");
for (k=0;k<size;++k)
{
if(a[k].x==1)
printf("%d ",uset[k]);
}
printf("}\n");
return;
}

// TO FIND UNION OF SETS
void unionset(struct bit a[],struct bit b[],struct bit c[])
{
int k;
for(k=0;k<size;++k)
c[k].x=a[k].x|b[k].x;
return;
}

// TO FIND INTERSECTION OF SETS
void interset(struct bit a[],struct bit b[],struct bit c[])
{
int k;
for(k=0;k<size;++k)
c[k].x=a[k].x&b[k].x;
return;
}

// TO FIND DIFFERENCE OF SETS
void difference(struct bit a[],struct bit b[],struct bit c[])
{
int k;
for(k=0;k<size;++k)
c[k].x=a[k].x&!b[k].x;
return;
}















