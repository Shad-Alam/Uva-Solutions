#include <bits/stdc++.h>

using namespace std;

typedef long long lp;

#define AND &&
#define ORR ||

lp c=0,f;
lp source(lp n){
    if(n<=f){
        c++;
    }
    return (n==1 ORR n>f) ? c : (n%2==0) ? source(n/2) : source((3*n)+1);
}

int main()
{
    lp A,L,cs=1;
    while(cin >> A >> L){
        if(A<0 AND L<0){
            break;
        }else{
            lp n=A;f=L;
            cout << "Case " << cs << ": A = " << A << ", limit = " << L << ", number of terms = " <<source(n) << endl;
            c=0;cs++;
        }
    }
	return 0;
}

