#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

#define PIX 711111

ll inv=0;

void merger(ll i[],int left,int mid,int right)
{
    ll j[PIX],k[PIX];

    for(int a=left; a<=mid; a++)
        j[a] = i[a];
    for(int a=mid+1; a<=right; a++)
        k[a] = i[a];

    int a=left,c=left,b=mid+1;

    while(a<=mid && b<=right){
        if(j[a]<=k[b])
        {
            i[c] = j[a];
            a++;
        }else
        {
            i[c]=k[b];
            b++;
            inv = inv + mid - a + 1;
        }c++;
    }

    while(a<=mid){
        i[c] = j[a],a++,c++;
    }
    while(b<=right){
        i[c] = k[b],b++,c++;
    }
}

void mergesort(ll i[],int left,int right){
    if(left<right){
        int mid = left + (right-left)/2;
        mergesort(i,left,mid);
        mergesort(i,mid+1,right);
        merger(i,left,mid,right);
    }
}

int main()
{
    ll a[PIX]; int n;

    while(scanf("%d",&n)){
        if(n==0){
            break;
        }

        for(int i=0; i<n; i++)
            cin >> a[i];

        mergesort(a,0,n-1);

        ll op = inv; inv=0;
        cout << op << endl;
    }

    return 0;
}

