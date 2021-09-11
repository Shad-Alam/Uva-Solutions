#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s1,d1,a,b,a1,b1,n,s,d;

    cin >> n;

    while(n--){
        cin >> s >> d;

        s1 = (s>d) ? s : d;
        d1 = (s>d) ? d : s;

        a = (s1+d1)/2;
        b = (s1-a);

        a1 = (a>b) ? a : b;
        b1 = (a>b) ? b : a;

        int r1 = a1 + b1;
        int r2 = a1 - b1;

        if(r1==s && r2==d){
            cout << a1 << " " << b1 << endl;
        }else{
            cout << "impossible" << endl;
        }
    }

    return 0;
}

