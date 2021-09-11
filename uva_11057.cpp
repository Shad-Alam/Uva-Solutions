#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

#define PIX 111111
#define AND &&

void merger(ll i[],int left,int mid,int right){
    ll j[PIX],k[PIX];

    for(int a=left; a<=mid; a++)
        j[a] = i[a];
    for(int a=mid+1; a<=right; a++)
        k[a] = i[a];

    int a=left,b=mid+1,c=left;

    while(a<=mid AND b<=right){
        if(j[a]<=k[b]){
            i[c] = j[a]; a++;
        }else{
            i[c] = k[b]; b++;
        }c++;
    }

    while(a<=mid){
        i[c] = j[a];a++;c++;
    }
    while(b<=right){
        i[c] = k[b];b++;c++;
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
    int N; ll M,ii[PIX];

    while(scanf("%d",&N)!=EOF){
        for(int a=0; a<N; a++){
            cin >> ii[a];
        }cin >> M;

        mergesort(ii,0,N-1);

        ll z = 999999999,i,j,s1;
        for(int a=0; a<N; a++){
            for(int b=a+1; b<N; b++){
                if(ii[a]+ii[b]==M){
                    s1=abs(ii[a]-ii[b]);
                    if(s1<=z){
                        z = s1; i=ii[a],j=ii[b];
                    }
                }
            }
        }cout << "Peter should buy books whose prices are " << i << " and " << j <<"." << endl << endl;
    }

    return 0;
}

