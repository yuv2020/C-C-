
#include<stdio.h>
int main()
{

 char ch='C',r,c,q,t,sp,st;
 st=ch;
 for(r='A'; r<=ch; r++,st--)
 {
  for(c='A';c<='B'; c++)
  {
    if(r=='C')
    {
      printf("A ");
      break;
    }
    else
      printf("%c",c);
  }
  for(sp=r; sp>'A'; sp--)
    printf(" ");
  for(t=st; t>='A'; t--)
    printf("%c",t);
  printf("\n");
 }
 for(r='A'; r<=ch-1; r++)
 {
  for(c='A'; c<='B'; c++)
     printf("%c", c);
  for(sp=r; sp<='A'; sp++)
     printf(" ");
  for(t=r+1; t>='A'; t--)
     printf("%c", t);
  printf("\n");
 }
 return 0;
}

