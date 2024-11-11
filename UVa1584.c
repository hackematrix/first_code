#include<stdio.h>
#include<string.h>
#define maxn 1010


int less(char *s,int p,int q){
      int n=strlen(s);
      for(int i=0;i<n;i++)
       if(s[(p+i)%n]!=s[(q+i)%n])
          return s[(p+i)%n]<s[(q+i)%n];
       return 0; 
}

  int main(){
  int T;
  char str[maxn];
  scanf("%d",&T);
  while(T--){
    scanf("%s",str);
    int ans=0;
    int n=strlen(str);
    for(int i=0;i<n;i++){
      if(less(str,i,ans))
        ans=i;
    }
    for(int i=0;i<n;i++)
    {
      putchar(str[(ans+i)%n]);
      
    }
    putchar('\n');
  }
  return 0;
    
  
}

