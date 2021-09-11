#include <bits/stdc++.h>

using namespace std;

string s1 = "abcdefghijklmnopqrstuvwxyz";
string s2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int s3[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
int n = 26;

int source(string p,int n1){ int sum=0;
    for(int a=0; a<n1; a++){
        for(int b=0; b<n; b++){
            if(p[a]==s1[b] || p[a]==s2[b]){
                sum+=s3[b];
                break;
            }
        }
    }return sum;
}

int digit(int n){
    if(n<10){
        return n;
    }else{
        int sum=0;
        while(n){
            sum+=(n%10);
            n/=10;
        }return digit(sum);
    }
}

int main(){
    string p,c;

    while(getline(cin,p)){
        getline(cin,c);
        int n1 = p.size(),n2 = c.size();
        int ap1 = source(p,n1);
        int ap2 = source(c,n2);
        float a = digit(ap1),b = digit(ap2);
        float g1 = (a/b)*100,g2 = (b/a)*100;
        if(a>b){
            printf("%.2f %\n",g2);
        }else{
            printf("%.2f %\n",g1);
        }
    }

    return 0;
}

