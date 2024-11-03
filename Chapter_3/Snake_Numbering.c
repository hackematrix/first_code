#include<stdio.h>
#include<string.h>
#define maxn 1010
int a[maxn][maxn];
int main(){
  int n;
  int x,y;
  int total;
  memset(a,0,sizeof(a));//数组初始化全为0
  scanf("%d",&n);
  total=a[x=0][y=n-1]=1;

  while(total<n*n){
    while(x+1<n&&!a[x+1][y])
      a[++x][y]=++total;
    while(y-1>=0&&!a[x][y-1])
      a[x][--y]=++total;
    while(x-1>=0&&!a[x-1][y])
      a[--x][y]=++total;
    while(y+1<n&&!a[x][y+1])
      a[x][++y]=++total;
  }

  for(x=0;x<n;x++){
    for(y=0;y<n;y++)
      printf("%3d",a[x][y]);
    printf("\n");
}
  return 0;
}
