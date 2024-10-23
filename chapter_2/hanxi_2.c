#include<stdio.h>
/** 没有用文件操作且输出和原题不同**/
int main(){
  int num_1,num_2,num_3,real_num;
  int flag=0;
  scanf("%d %d %d",&num_1,&num_2,&num_3);
  for(real_num=10;real_num<=100;real_num++){
    if(real_num%3==num_1 &&real_num%5==num_2 &&real_num%7==num_3){
      flag=1;
      break;
    }
  }
  if(flag==1)
    printf("%d",real_num);
  else
  printf("No answer");
  return 0;
}
