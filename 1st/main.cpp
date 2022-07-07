#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

  int a,b,i;
  string n[10]={ "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
  cin>> a>>b;
  for(i=a; i<b ; i++){
    if(1<=i<=9){
        cout<<n[a];
        cout<<n[b];

    }
    else if(i>9 && a%2==0 && b%2==0){
        cout<< "even";
    }
    else{
        cout<< "odd";
    }
  }

    return 0;


}
