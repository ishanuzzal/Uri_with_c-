#include <iostream>
#include<stdio.h>

using namespace std;
int countdigit(int n){
    int i=0;
    while(n>0){
        n/=10;
        i++;
    }
    return i;

}

int main()
{

    int i,j,k,start,n,sash,cont,cont2,dig,dig1,dig2;
    int a[101][101];

    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        sash=n;
        start=1;
        cont=1;
        cont2=1;
        while(sash!=0)
        {


            for(i=1; i<=n; i++)
            {
                 cont=cont2;
                for(j=1; j<=n; j++)
                {
                    if(i==start)
                    {
                        a[i][j]=cont;
                        cont=cont*2;
                    }


                }

            }
            cont2*=2;
            sash--;
            start++;
        }
         dig1=countdigit(a[n][n]);
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                dig2=countdigit(a[i][j]);
                dig=dig1-dig2;
                if(j==1){
                    printf("%*c", dig, ' ');
                    printf("%d",a[i][j]);
                }
                else {
                        printf("%*c", dig+1, ' ');
                        printf("%d",a[i][j]);
                }

            }
              printf("\n");
            }

        printf("\n");

    }

    //cout<<a[4][4];


    return 0;
}

