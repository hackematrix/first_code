#include<stdio.h>
#include<math.h>
int main(){
  const double pi=acos(-1.0);
  int n;
  float x;
  double sin_x,cos_x;

  scanf("%d",&n);
  x=(n*pi)/180.0;
  sin_x=sin(x);/** sin函数接受的是弧度**/
  cos_x=cos(x);/** cos函数接受的是弧度**/
  if(n>=0 &&n<=360)
    printf("%.5f %.5f",sin_x,cos_x);
  else 
  printf("it is wrong number");
  return 0;

}
