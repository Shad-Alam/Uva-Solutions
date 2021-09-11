/**
#include <bits/stdc++.h>

using namespace std;

typedef long long int lp;

bool source(lp n){
    for(int a:{2,3,5}){
        while(n%a==0){
            n/=a;
        }
    }return n==1 ? true : false;
}
int c=0;
lp ugly(int s,lp n){
    while(n){
        if(source(n)){
            c++;
            n++;
            cout << n << endl;
        }else{
            n++;
        }
        if(c==s){
            return n;
        }
    }//cout << n-1 << endl;
}
// 859963393
int main()
{
    lp number= 859963392;
    cout << "The 1500'th ugly number is <" << number <<  ">." << endl;
    return 0;
}*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "The 1500'th ugly number is 859963392." << endl;
    return 0;
}

