#include<iostream>
#include<cstdio>
using namespace std;
int bigMod(int base,int power,int mod){
  if(power==0) return 1;
  else if(power%2==0){
    int r1= (bigMod(base,power/2,mod))%mod;
    return (r1*r1)%mod;
  }
  else{
    int r2=base%mod;
    int r3=(bigMod(base,power-1,mod))%mod;
    return (r2*r3)%mod;
  }
}
int main()
{
    int b,p,m;
    while(scanf("%d %d%d",&b,&p,&m)!=EOF){
    int result=bigMod(b,p,m);
    cout<<result<<endl;
    }
    return 0;
}
