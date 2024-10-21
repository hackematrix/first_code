#include<stdio.h>
int main(){
  int n;
  double sum=0;
  
  scanf("%d",&n);
  sum=95*n;
  if(sum>=300)
    sum=sum*0.85;
  printf("%.2f",sum);
  return 0;
}
