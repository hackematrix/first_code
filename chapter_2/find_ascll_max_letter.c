#include<stdio.h>
#include<string.h>
int main(){
  char str[81],temp_char;
  int i,max_index=0;
  
  gets(str);
  for(i=0;str[i]!='\0';i++)
  {
    if(str[max_index]<str[i])
      max_index=i;//找到最大ASCII码的索引
  }
  temp_char=str[max_index];  

  for(i=max_index;i>0;i--)
    str[i]=str[i-1];
  
  str[0]=temp_char;

  puts(str);
  return 0;
}  
