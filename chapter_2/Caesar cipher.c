#include<stdio.h>
#include<string.h>
int main(){
  char str[81],s[81];
  int k=0;
  int i;
  gets(str);
  for(i=0;i<strlen(str);i++){
    if(str[i]>='a'&&str[i]<='z')
      str[i]=(str[i]-'a'-3+26)%26+'a';  
    if(str[i]>='A'&&str[i]<='Z')
      str[i]=(str[i]-'A'-3+26)%26+'A';
  }
  for(i=strlen(str)-1;i>=0;i--)
    s[k++]=str[i];
  puts(s);
  s[k]='\0';
  return 0;
  
}
