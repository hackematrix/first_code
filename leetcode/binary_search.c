#include<stdio.h>

int  binary_search(int *nums,int target,int left,int right){
    int mid=(left+right)/2;
    if(nums[mid]==target)
      return mid;
    if(nums[mid]<target)
      return binary_search(nums,target,mid+1,right);
    else{
      return binary_search(nums,target,left,mid-1);
  }
  if(left>right)
    return -1;
    
}
int search(int *nums,int numsize,int target){
  return binary_search(nums,target,0,numsize-1);
}

int main(){
    int nums[10]={-1,0,3,5,9,12};
    int target=9;
    int result;
    result=search(nums,6,target);
    printf("%d",result);
    return 0;
} 
