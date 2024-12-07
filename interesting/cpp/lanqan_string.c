#include<stdio.h>
#include<string.h>
int main(){
  char target[81]="LANQIAO";
  char str[81];
  gets(str);
  int len_0=strlen(target);
  int len_1=strlen(str);
  int i=0;
  int j=0;

  while(i<len_0&&j<len_1){
    if(target[i]==str[j])
      i++;
    j++;
  }
  if(i==len_0)
    printf("YES");
  else 
    printf("NO");
  return 0;
    

}

