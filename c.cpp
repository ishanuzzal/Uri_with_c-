#include <bits/stdc++.h>
using namespace std;

#define ll long long

void init() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    #endif 
}

 
int main()
{
   init();
   int t;
   cin>>t;
   while(t--){
       int n,x,y;
       cin>>n>>x>>y;
       if(n==1){
           cout<<0<<endl;
       }
       else if(n&1){
           if(x==y && (n/2+1)==x){
               cout<<(3*(n-1))+(n-1)<<endl;
           }
           else{
               cout<<(3*(n-1))<<endl;
           }
       }
       else{
           if(x!=1 && y!=1 && x!=n && y!=n){
               cout<<(3*(n-1))+2<<endl;
           }
           else{
               cout<<(3*(n-1))<<endl;
           }
       }
   }
    return 0;
}