#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;


ll digitsum(ll n){
    ll sum=0; int s;
    while(n){
        s = n%10;
        sum+= s*s;
        n/=10;
    }return sum;
}
bool source(ll n){
    if(n==1)
        return true;

    ll j = digitsum(n);

    if(j==2 || j==4 || j==5)
        return false;

    return source(j);
}

int main()
{
    ll N; int n;

    cin >> n;

    int p=1;
    while(n--){
        cin >> N;
        int S = source(N);
        if(S==1){
            cout << "Case #" << p << ": " << N << " is a Happy number.\n";
            p++;
        }else if(S==0) {
            cout << "Case #" << p << ": " << N << " is an Unhappy number.\n";
            p++;
        }
    }

    return 0;
}

