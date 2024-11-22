#include<stdio.h>
#define maxn 1005
int search(int *nums,int numsSize,int target){
  int low=0;
  int high=numsSize-1;
  int mid;
  while(low<=high){
    mid=(low+high)/2;
    if(nums[mid]==target)
      return mid;
    else if(nums[mid]<target)
        low=mid+1;
    else 
      high=mid-1;
  }
  if(low>high)
    return -1;
  return mid;
}//二分查找
int main(){
  int a[maxn];
  int n;
  int i;
  int result,x;
  printf("enter an integer");
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("enter the target");
  scanf("%d",&x);
  result=search(a,n,x);
  printf("%d",result);
  return 0;

}
