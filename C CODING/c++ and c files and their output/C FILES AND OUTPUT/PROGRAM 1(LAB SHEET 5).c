#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,i,sum=0;
printf("enter two numbers:");
scanf("%d%d",&a,&b);
if(a>b)
{
for (i=b; i<=a;i++)
{ if(i%2==0)
{ sum=sum+i;}
}
}
else
{
for(i=a;i<=b;i++)
{ if(i%2==0)
{ sum=sum+i;}
}
}
printf("\n%d",sum);
getch();
return 0;
}
