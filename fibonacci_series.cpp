int fibcal(int n){
  if(n==0) return 0;
if(n==1) return 1;
if(vt[n]!=-1) return vt[n];
return vt[n]=fib(n-1)+fib(n-2);
}
int fib(int n){
  vector<int>vt(n+1,-1);
return fibcal(n,vt);
}
//Memoization
