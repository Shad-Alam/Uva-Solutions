#include <bits/stdc++.h>

using namespace std;

#define PIX 60
#define AND &&
#define ORR ||

int main()
{
    char i[PIX];

    while(scanf("%s",i) !=EOF){
        int n = strlen(i); char s = '-',z;
        for(int a=0; a<n; a++){
            if(i[a]=='B' ORR i[a]=='F' ORR i[a]=='P' ORR i[a]=='V'){
                z = '1';
            }else if(i[a]=='C' ORR i[a]=='G' ORR i[a]=='J' ORR i[a]=='K' ORR i[a]=='Q' ORR i[a]=='S' ORR i[a]=='X' ORR i[a]=='Z'){
                z = '2';
            }else if(i[a]=='D' ORR i[a]=='T'){
                z = '3';
            }else if(i[a]=='L'){
                z = '4';
            }else if(i[a]=='M' ORR i[a]=='N'){
                z = '5';
            }else if(i[a]=='R'){
                z = '6';
            }else{
                z = '-';
            }
            if(z!='-' AND s!=z){
                cout << z;
            }s = z;
        }cout << endl;
    }

	return 0;
}

