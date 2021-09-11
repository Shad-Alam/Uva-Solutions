#include <bits/stdc++.h>

using namespace std;

int c=0;
int source(int n){c++;
    return n==1 ? c : (n%2==0) ? source(n/2) : source((3*n)+1);
}

int main()
{
    int i,j,i1,j1;
    while(scanf("%d%d",&i,&j)!=EOF){
        i1 = (i>j) ? j : i;
        j1 = (i>j) ? i : j;
        int s=0;
        for(int a=i1; a<=j1; a++){
           int n = source(a);c=0;
           if(s<n){
               s = n;
           }
        }cout << i << " " << j <<  " " << s << endl;
    }

    return 0;
}

