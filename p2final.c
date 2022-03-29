#include<stdio.h>
int input()
{
  int a;
  printf("enter the numbers\n");
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{
  int l;
  if ((a>b)&&(a>c))
  printf("a is big\n");
  else if((b>c)&&(b>a))
  printf("b is big\n");
  else
  printf("c is big\n");
  return 0;
}
void output(int l)
{
  printf("largest number is:%d\n",l);
} 
int main()
{
  int a,b,c,l;
  a=input();
  b=input();
  c=input();
  l=cmp(a,b,c);
  return 0;
}
