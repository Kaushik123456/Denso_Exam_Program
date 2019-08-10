#include<stdio.h>

int main(){
  int a,b,sum=0;
  scanf("%d %d",&a,&b);
  sum=a;
  b=b/100;
  while(a){
    a=a-(a*b);
    sum=sum+a;
  }
  printf("The amount requried is : %d",sum);
}
