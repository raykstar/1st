#include<stdio.h>
#include<conio.h>

int a[10];

void bubble(void);

int main(){
 int i;
 for(i=0;i<10;i++){
  scanf("%d",&a[i]);
  }

 printf("The array before sorting is: ");
 for(i=0;i<10;i++){
  printf("%d ",a[i]);
  }
  printf("\n");
  bubble();

 printf("The array after sorting is: ");
 for(i=0;i<10;i++){
  printf("%d ",a[i]);

 }
 printf("\n");
 getch();
}

void bubble (void){
 int temp,i,j,ptr;
 for(i=0;i<9;i++){
 ptr = 0;
  while(ptr<=8-i){
   if(a[ptr]>a[ptr+1]){
    temp =a[ptr];
    a[ptr]=a[ptr+1];
    a[ptr+1]=temp;
   }
   ptr++;

  }
  printf("The array after %d iteration: ",i+1);
   for(j=0;j<10;j++){
  printf("%d ",a[j]);
  }
  printf("\n");

  }
 }
