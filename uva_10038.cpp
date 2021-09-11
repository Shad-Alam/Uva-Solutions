#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

#define PIX 111111

void sw(ll *a,ll *b){
    ll sp = *a;
    *a = *b;
    *b = sp;
}

int main()
{
    int i[PIX],n;
    int j[PIX];

    while(scanf("%d",&n)!=EOF)
    {
        for(int a=0; a<n; a++){
            cin >> i[a];
        }

        int p=0;
        for(int a=0; a<n-1; a++){
            j[p] = abs(i[a]-i[a+1]);
            p++;
        }
        sort(j,j+p);
        int c=0;
        for(int a=0; a<p; a++){
            if(j[a]==a+1){
                c++;
            }
        }cout << ((c==n-1) ? "Jolly" : "Not jolly") << endl;
    }

    return 0;
}

