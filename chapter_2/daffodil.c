#include<stdio.h>
int main(){
  int i,num,digit,sum;
  for(i=100;i<=999;i++){
    num=i;
    sum=0;
    while(num>0){
      digit=num%10;
      sum+=digit*digit*digit;
      num/=10;
    }
    if(i==sum){
      printf("%4d",i);
    }
  }
  return 0;
}
