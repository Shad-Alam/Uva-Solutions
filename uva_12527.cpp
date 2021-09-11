#include <bits/stdc++.h>

using namespace std;

int source(int n){
    int i[100],p=0;
    while(n){
        i[p] = n%10;
        p++;
        n/=10;
    }
    for(int a=0; a<p; a++){
        for(int b=a+1; b<p; b++){
            if(i[a]==i[b]){
                return 0;
            }
        }
    }return 1;
}

int main()
{
    int N,M,c;

    while(cin>>N>>M)
    {
        c=0;
        for(int a=N; a<=M; a++){
            int j = source(a);

            if(j==1){
                c++;
            }
        }cout << c << endl;
    }

    return 0;
}

