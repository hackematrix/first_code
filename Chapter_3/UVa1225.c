#include<stdio.h>
#define maxn 10005
int main(){
  int n,k=0,count=0;
  int a[maxn],b[10];
  scanf("%d",&n);

  for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(int i=0;i<=9;i++){
    for(int j=0;j<n;j++){
      if(a[j]==i)
        count++;
    }
    b[k]=count;
    count=0;
    k++;
       
  }
  for(int i=0;i<k;i++)
    printf("%3d",b[i]);

  return 0;
  
  
}
