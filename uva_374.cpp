#include <bits/stdc++.h>

using namespace std;

typedef long long int lp;

int power(lp a,lp n,int m){

    int c=1;
    while(n){
        if(n%2==1){
            c = (c*a)%m; n--;
        }else{
            a= (a*a)%m; n/=2;
        }
    }return c;
}

int main()
{
    int M,R; lp P,B;

    while(cin>>B>>P>>M){
        R = power(B,P,M);
        cout << R << endl;
    }
    return 0;
}

