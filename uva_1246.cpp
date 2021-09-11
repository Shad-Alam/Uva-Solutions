#include <bits/stdc++.h>

using namespace std;

bool primeFact(int s2){
    int n = s2;
    if(s2==1){
        return false;
    }
    int s = 1;
    for(int a=2; a*a<=s2; a++){
        if(s2%a==0){
            while(s2%a==0){
                s2/=a;
                s*=a;
            }
        }
    }
    if(s2>1){
        s*=s2;
    }
    return (s==n) ? true : false;
}

int main()
{
    int T,L,H;

    cin >> T;

    while(T--){
        cin >> L >> H;
        int c=0;
        for(int X=L; X<=H; X++){
            if(primeFact(X)){
                c++;
               cout << X  << " ";
            }
        }
        if(c==0){
            cout << -1;
        }cout << endl;
    }

    return 0;
}

