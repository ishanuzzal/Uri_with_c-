#include<bits/stdc++.h>
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
    string s;
    while(getline(cin,s)){
        if(s[0]=='*') break;
        string s1 = " ";
        s = s1+s;
        char c = s[1];
        char c2 = c+32;

        bool flag = false;
        for(int i=0; i<s.size()-1; i++){
            if(s[i]==' ' && !(c==s[i+1] || c2==s[i+1])){
                 flag = true;
                 break;
            } 
        }

        if(!flag) cout<<"Y"<<endl;
        else cout<<"N"<<endl;
    }
    return 0;
}