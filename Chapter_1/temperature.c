#include<stdio.h>
int main(){
  double f,c; /** f是华氏度，s是摄氏度**/
  scanf("%lf",&f);
  c=(5.0*(f-32.0))/9.0;
  printf("%.3f",c);
  return 0;
}
