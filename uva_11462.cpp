#include <bits/stdc++.h>

using namespace std;

#define PIX 2001000

typedef long long ll;

void mergesort(ll i[],ll left,ll mid,ll right){
    ll j[PIX],k[PIX];

    for(ll a=left; a<=mid; a++)
        j[a] = i[a];
    for(ll a=mid+1; a<=right; a++)
        k[a] = i[a];

    ll a=left,b=mid+1,c=left;

    while(a<=mid && b<=right){
        (j[a]<=k[b]) ? (i[c] = j[a]) && (a++) : (i[c] = k[b]) && (b++);
        c++;
    }
    while(a<=mid){
        i[c] = j[a];
        a++;
        c++;
    }
    while(b<=right){
        i[c] = k[b];
        b++;
        c++;
    }
}

void merge(ll i[],ll left,ll right){
    if(left<right){
        ll mid = left + (right-left)/2;
        merge(i,left,mid);
        merge(i,mid+1,right);
        mergesort(i,left,mid,right);
    }
}

int main()
{
    ll i[PIX]; int n;

    while(scanf("%d",&n)){
        if(n==0){
            break;
        }for(ll a=0; a<n; a++){
            scanf("%d",&i[a]);
        }
        merge(i,0,n-1);
        for(ll a=0; a<n; a++){
            if(a==n-1){
                printf("%d\n",i[a]);
                break;
            }printf("%d ",i[a]);
        }
    }

    return 0;
}

