#include <bits/stdc++.h>

using namespace std;

int main()
{
    char i[1000],j[1000]; int G;

    while(scanf("%d",&G)!=0){
        if(G==0)
            break;
        scanf("%s",i);
        int n = strlen(i),m; m = n/G;
        int p=0;
        for(int a=0; a<n; a++){ j[p] = i[a];p++;
            if(p==m){
                for(int b=p-1; b>=0; b--)
                    cout << j[b] << "";p=0;
            }
        }cout << endl;
    }

    return 0;
}

