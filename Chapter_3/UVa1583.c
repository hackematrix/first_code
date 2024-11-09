#include<stdio.h>
#include<string.h>
#define maxn 100005
int a[maxn];

int main(){
  int n,T;
  memset(a,0,sizeof(a));
  for(int m=0;m<maxn;m++){
    int x=m;
    int y=m;
    while(x!=0)
    {
      y+=x%10;
      x=x/10;

    }//求一个数的各个数字相加
    
    if(a[y]==0&&a[y]<m)
      a[y]=m;

  }
  scanf("%d",&n);
  while(n--){
    scanf("%d",&T);
    printf("%d\n",a[T]);
  }
  return 0;
}
