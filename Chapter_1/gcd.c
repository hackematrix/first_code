#include<stdio.h>
/** 欧几里得算法**/
int gcd(int a,int b,int *x,int *y ){
  int x_0=1,x_1=0;
  int y_0=0,y_1=1;
  int q,r;
  
  while(b!=0){
    int temp_x,temp_y;
    r=a%b;
    q=a/b;
    a=b;
    b=r;/** 迭代法求最大公因数**/
    

     
    temp_x=x_0;
    temp_y=y_0;
    x_0=x_1;
    x_1=temp_x-q*x_1;
    y_0=y_1;
    y_1=temp_y-q*y_1; 
  }

*x=x_0;
*y=y_0;
return a;  
}

int main(){
  int i,j;
  int x,y;
  printf("please enter two numbers:");
  scanf("%d %d",&i,&j);
  gcd(i,j,&x,&y);
  printf("gcd=%d,x=%d,y=%d",gcd(i,j,&x,&y),x,y);
  return 0;
}
