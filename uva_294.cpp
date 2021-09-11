#include <bits/stdc++.h>

using namespace std;
using lp=long long int;

int factors(lp n){
    int c,s=1;
    for(int a=2; a*a<=n; a++){ c=0;
        while(n%a==0)
        {
            n/=a;
            c++;
        } s*=(c+1);
    }
    c=0;
    if(n>1){
        c++;
        s*=(c+1);
    }return s;
}

int main(){
    int N; lp L,U,P; cin >> N;

    while(N--){
        cin >> L >> U;
        int D=-1;
        for(lp a=L; a<=U; a++){
            int j = factors(a);
            if(D<j){
                D = j, P = a;
            }
        }cout << "Between " << L << " and " << U << ", " <<  P << " has a maximum of " << D << " divisors." << endl;
    }
    return 0;
}

