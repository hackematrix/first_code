#include<stdio.h>
int main(){
  int num_1,num_2,num_3;
  double average;

  scanf("%d %d %d",&num_1,&num_2,&num_3);
  average=(int)(num_1+num_2+num_3)/3.0;

  printf("%.3f",average);
  return 0;

}
