#include<Stdio.h>
#include<string.h>
int main(){
  char str[81],s;
  int count_num[26],i,flag=0;//flag为哨兵

  gets(str);//虽然gets已被弃用，但本人为新手仍然使用
  for(i=0;i<strlen(str);i++){
    s=str[i]
    if(s>='a' &&s<='z'){
      
      count_num[s-'a']++; //统计小写字母的个数
    }
  }

  for(i=0;i<26;i++){
    if(count_num[i]!=0){
        printf("%c:%d\n",i+'a',count_num[i]);
        flag=1;
    }
  }
  if(flag==0)
    printf("None");
  return 0;
  
}
