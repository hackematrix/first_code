#include<iostream>
#include<string>
int main(){
    string target="LANQIAO";
    string str;
    cin>>str;
    int target_len=target.length();
    int str_len=str.length();
    int i=0;
    int j=0;
    for(i<target_len&&j<str_len){
        if(target[i]==string[j])
            i++;
        j++;    
    }
    if(i==target_len)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;    
}
