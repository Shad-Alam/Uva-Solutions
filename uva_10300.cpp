#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,f,sum,source,c1,c2,c3;

    while(scanf("%d",&n)!=EOF){
        while(n--){
            cin >> f;
            sum=0;
            while(f--){
                cin >> c1 >> c2 >> c3;
                source = (c1)*(c2/c2)*c3;
                sum+=source;
            }cout << sum << endl;
        }
    }
    return 0;
}

