#include <bits/stdc++.h>

using namespace std;

int main()
{
    char i[1000]; int G; stack<char> v;

    while(scanf("%d",&G)!=0){
        if(G==0)
            break;
        scanf("%s",i);
        int n = strlen(i),m; m = n/G;
        int p=0;
        for(int a=0; a<n; a++){
            v.push(i[a]);p++;
            if(p==m){
                while(!v.empty()){
                    cout << v.top() << "";
                    v.pop();
                }p=0;
            }
        }cout << endl;
    }

    return 0;
}

