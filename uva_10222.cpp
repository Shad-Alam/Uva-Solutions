#include <bits/stdc++.h>

using namespace std;

int main()
{
    string j,i="";

    getline(cin,j);

    int n = j.size();

    for(int a=0; a<n; a++){
        if(int(j[a])>=65 && int(j[a])<=90){
            i+=(j[a]+32);
        }else{
            i+=j[a];
        }
    }

    for(int a=0; a<n; a++)
    {
        if(i[a]=='a')
        {
            cout << "d";
        }else if(i[a]=='s')
        {
            cout << "f";
        }else if(i[a]=='d')
        {
            cout << "a";
        }else if(i[a]=='f')
        {
            cout << "s";
        }else if(i[a]=='g')
        {
            cout << "d";
        }else if(i[a]=='h')
        {
            cout << "f";
        }else if(i[a]=='j')
        {
            cout << "g";
        }else if(i[a]=='k')
        {
            cout << "h";
        }else if(i[a]=='l')
        {
            cout << "j";
        }else if(i[a]==';')
        {
            cout << "k";
        }else if(i[a]=='\'')
        {
            cout << "l";
        }else if(i[a]=='q')
        {
            cout << "e";
        }else if(i[a]=='w')
        {
            cout << "r";
        }else if(i[a]=='e')
        {
            cout << "q";
        }else if(i[a]=='r')
        {
            cout << "w";
        }else if(i[a]=='t')
        {
            cout << "e";
        }else if(i[a]=='y')
        {
            cout << "r";
        }else if(i[a]=='u')
        {
            cout << "t";
        }else if(i[a]=='i')
        {
            cout << "y";
        }else if(i[a]=='o')
        {
            cout << "u";
        }else if(i[a]=='p')
        {
            cout << "i";
        }else if(i[a]=='[')
        {
            cout << "o";
        }else if(i[a]==']')
        {
            cout << "p";
        }else if(i[a]=='\\')
        {
            cout << "[";
        }else if(i[a]=='`')
        {
            cout << "2";
        }else if(i[a]=='1')
        {
            cout << "3";
        }else if(i[a]=='2')
        {
            cout << "`";
        }else if(i[a]=='3')
        {
            cout << "1";
        }else if(i[a]=='4')
        {
            cout << "2";
        }else if(i[a]=='5')
        {
            cout << "3";
        }else if(i[a]=='6')
        {
            cout << "4";
        }else if(i[a]=='7')
        {
            cout << "5";
        }else if(i[a]=='8')
        {
            cout << "6";
        }else if(i[a]=='9')
        {
            cout << "7";
        }else if(i[a]=='0')
        {
            cout << "8";
        }else if(i[a]=='-')
        {
            cout << "9";
        }else if(i[a]=='=')
        {
            cout << "0";
        }else if(i[a]=='z')
        {
            cout << "c";
        }else if(i[a]=='x')
        {
            cout << "v";
        }else if(i[a]=='c')
        {
            cout << "z";
        }else if(i[a]=='v')
        {
            cout << "x";
        }else if(i[a]=='b')
        {
            cout << "c";
        }else if(i[a]=='n')
        {
            cout << "v";
        }else if(i[a]=='m')
        {
            cout << "b";
        }else if(i[a]==',')
        {
            cout << "n";
        }else if(i[a]=='.')
        {
            cout << "m";
        }else if(i[a]=='/')
        {
            cout << ",";
        }else
        {
            cout << " ";
        }
    }cout << endl;


    return 0;
}

