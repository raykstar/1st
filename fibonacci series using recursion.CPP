#include<stdio.h>
#include<conio.h>

int fibo(int a);

int main()
{
  int n;
  printf("Enter the no of terms: ");
  scanf("%d",&n);
  if(n<=0)
  return 1;
  int i;
  for(i=1;i<=n;i++)
  {
   printf("%d  ",fibo(i));
  }

  getch();
  return 0;
}


int fibo(int a)
{
 if(a==1)
 return 0;
 else if(a==2)
 return 1;
 else
 return(fibo(a-1)+fibo(a-2));

}