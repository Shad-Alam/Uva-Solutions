#include <bits/stdc++.h>

using namespace std;

#define PIX 11111//1002000

typedef long long lp;

lp inv=0;

void merge(lp i[],lp left,lp mid,lp right){
    lp j[PIX],k[PIX];

    for(lp a=left; a<=mid; a++)
        j[a] = i[a];
    for(lp a=mid+1; a<=right; a++)
        k[a] = i[a];

    lp a=left,b=mid+1,c=left;

    while(a<=mid && b<=right){ // 1 2 4 3 5
        if(j[a]<=k[b]){
            i[c] = j[a]; a++;
        }else{
            i[c] = k[b]; b++;
            inv = inv + mid - a + 1;
            //cout << inv << " ";
        }c++;
    }

    while(a<=mid){
        i[c] = j[a]; a++; c++;
    }
    while(b<=right){
        i[c] = k[b]; b++; c++;
    }
}


void mergesort(lp i[],lp left,lp right){
    if(left<right){
        lp mid = left + (right-left)/2;
        mergesort(i,left,mid);
        mergesort(i,mid+1,right);
        merge(i,left,mid,right);
    }
}

int main()
{
    lp n,A[PIX];

    while(cin>>n){
        if(n==0){
            break;
        }else{
            for(int i=0; i<n; i++){
                cin >> A[i];
            }
            mergesort(A,0,n-1);
            cout << inv << endl;
            inv=0;
        }
    }

    return 0;
}

