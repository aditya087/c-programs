#include<stdio.h>
#include<conio.h>

int main()
{
  int n,x;
  clrscr();
  printf("Enter an integer\n");
  scanf("%d", &n);
  if (n%2==0)
  {
    x=1;
  }
  else
  {
    x=0;
  }
  if(x==1)
  {
    printf("Number is even");
  }
  else
  {
    printf("Number is odd");
  }
  getch();
  return 0;
}
