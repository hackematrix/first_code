#include<iostream>
using namespace std;
int move_count=0;

void move(int i,char c1,char c2){
  move_count++;
  cout<<c1<<"->"<<c2<<endl;
}

void hanoi(int  n,char A,char B,char C){
    if(n==1)
      return move(1,A,C);
    else{
      hanoi(n-1,A,C,B);//将n-1个打包，当一个整体
      move(n,A,C);
      hanoi(n-1,B,A,C);
    }
}

int main(){
  int n;
  cout<<"enter the number of disks";
  cin>>n;
  hanoi(n,'A','B','C');
  
  cout<<move_count<<endl;
  return 0;
}
