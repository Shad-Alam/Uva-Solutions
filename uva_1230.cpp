#include <bits/stdc++.h>

using namespace std;

typedef long long int lp;

int power(int a,lp n,int m){

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
    int x,z,c,n,i; lp y;

    while(cin >> c)
    {
        if(c==0)
        {
            break;
        }else
        {
            for(i=0; i<c; i++){
                cin >> x >> y >> n;
                z = power(x,y,n);
                cout << z << endl;
            }
        }
    }


    return 0;
}

