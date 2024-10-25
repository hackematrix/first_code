#include<stdio.h>
int main(){
  int a[100],n;
  int i,j,temp,count,max_count=0;
  
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  
  for(i=1;i<n;i++){
    for(j=0;j<n-i;j++){
      if(a[j]>a[j+1]){
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  } 
  count=1;
  for(i=0;i<n;i++){
    if(a[i]!=a[i+1]){
      if(count>max_count)
        max_count=count;
        count=1;
    }
    else 
      count++;
    
  }
  count=1;
  for(i=0;i<n;i++){
    if(a[i]!=a[i+1]){
      if(count==max_count)
        printf("%d %d\n",a[i],count);
          count=1;
    }
    else 
      count++;
  }
  return 0;
}  
