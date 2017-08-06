#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
 				int n,a,i,test,j;
            long b;
            printf("Enter the number of test cases: ");
            scanf("%d",&test);
            for(j=0;j<test;j++){
            printf("Enter the number in decimal system: ");
            scanf("%d",&a);
            printf("Enter the required base: ");
            scanf("%d",&n);
            b=a%n;
            for(i=1;a!=0;i++){
                              a=a/n;
                              b=(a%n)*pow(10,i) + b;
            }
            printf("%ld\n", b);
            }
            getch();
}