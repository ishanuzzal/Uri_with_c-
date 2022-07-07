#include<bits/stdc++.h>
using namespace std;
#define ll long long

void init() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    #endif 
}

bool Check(int N,int pos){return (bool)(N & (1<<pos));}
 int Set(int N,int pos){  return N=N | (1<<pos);}


int main() {
    init();
   int n = (int) 2e32;
    int arr[n/32+1];
  //clr(arr);

    for(int i=3; i*i<=n; i+=2){
      if(Check(arr[i/64],i%64)==0){
        for(int j=i*i; j<=n; j+=2*i){
        arr[j/64] = Set(arr[j/64],j%64);
        }
      }
    }

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<(Check(arr[n/64],n%64)?"YES":"NO")<<endl;
    }

    return 0;
}
