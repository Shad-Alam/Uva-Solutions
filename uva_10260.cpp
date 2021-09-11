#include <bits/stdc++.h>

using namespace std;

#define PIX 60
#define AND &&
#define ORR ||

int main()
{
    char i[PIX],j[PIX];

    while(scanf("%s",i) !=EOF){
        int n = strlen(i);
        for(int a=0; a<n; a++){
            if(i[a]=='B' ORR i[a]=='F' ORR i[a]=='P' ORR i[a]=='V'){
                j[a] = '1';
            }else if(i[a]=='C' ORR i[a]=='G' ORR i[a]=='J' ORR i[a]=='K' ORR i[a]=='Q' ORR i[a]=='S' ORR i[a]=='X' ORR i[a]=='Z'){
                j[a] = '2';
            }else if(i[a]=='D' ORR i[a]=='T'){
                j[a] = '3';
            }else if(i[a]=='L'){
                j[a] = '4';
            }else if(i[a]=='M' ORR i[a]=='N'){
                j[a] = '5';
            }else if(i[a]=='R'){
                j[a] = '6';
            }else{
                j[a] = ' ';
            }
        }
        int c=0; char s;
        for(int a=0; a<n; a++){
            for(int b=a+1; b<n; b++){
                if(j[a]==j[b]){
                    j[a] = ' ';
                }else{
                    break;
                }
            }
            if(j[a]!=' '){
                cout << j[a];
            }
        }cout << endl;
    }

	return 0;
}

