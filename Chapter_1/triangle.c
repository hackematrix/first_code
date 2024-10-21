#include<stdio.h>
int main(){
  int num_1,num_2,num_3;
  scanf("%d %d %d",&num_1,&num_2,&num_3);
  if(num_1+num_2>num_3 && num_1+num_3>num_2 && num_2+num_3>num_1)
    printf("yes");
  else 
  printf("no");
  return 0;
}
