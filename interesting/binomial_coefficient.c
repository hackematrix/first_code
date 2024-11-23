long long C(int n,int m){
  int i;
  long long ans=1;
  if(m<n-m)
    m=n-m; //组合数特点 C(n,m)=C(n,n-m) 目的是优化算法
   for(i=m+1;i<=n;i++)
    ans*=i;
  for(i=1;i<=n-m;i++)
    ans/=i;
  return ans;
 }
//个人比较懒,代码就不写全了
//Becase i'm feeling a bit lazy,i just programmed some partial code.
