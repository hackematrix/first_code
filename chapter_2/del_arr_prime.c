#include<stdio.h>

void del(int a[],int *n,int x){
  int i,index;
  for(i=0;i<*n;i++)
  {
    if(a[i]==x){

      index=i;
      break;
    }
  }
for(i=index;i<*n-1;i++){
    a[i]=a[i+1];
  }//删除元素，元素前移,从index开始
(*n)--;
  
}

int is_prime(int n){
  int i;
  if(n==1)
    return 0;
  for(i=2;i*i<=n;i++)
    if(n%i==0)
      return 0;
  return 1;
}

int main(){
  int a[10],n,i;
  printf("please enter a integer");
  scanf("%d",&n);
 for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=0;i<n;i++){
    if(is_prime(a[i])){
      del(a,&n,a[i]);
      i--;}//注意索引也减少
  }
  for(i=0;i<n;i++)
  printf("%4d",a[i]);
  return 0;
}
