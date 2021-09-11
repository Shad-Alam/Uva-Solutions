#include<bits/stdc++.h>

using namespace std;

int main()
{
    string i;

    while(getline(cin,i)){

    string::iterator a=i.begin();

    for(;a!=i.end(); a++)
    {
    if(*a=='Z')
    {
        cout << "X";
    }else if(*a=='X')
    {
        cout << "Z";
    }else if(*a=='C')
    {
        cout << "X";
    }else if(*a=='V')
    {
        cout << "C";
    }else if(*a=='B')
    {
        cout << "V";
    }else if(*a=='N')
    {
        cout << "B";
    }else if(*a=='M')
    {
        cout << "N";
    }else if(*a==',')
    {
        cout << "M";
    }else if(*a=='.')
    {
        cout << ",";
    }else if(*a=='/')
    {
        cout << ".";
    }else if(*a=='A')
    {
        cout << "S";
    }else if(*a=='S')
    {
        cout << "A";
    }else if(*a=='D')
    {
        cout << "S";
    }else if(*a=='F')
    {
        cout << "D";
    }else if(*a=='G')
    {
        cout << "F";
    }else if(*a=='H')
    {
        cout << "G";
    }else if(*a=='J')
    {
        cout << "H";
    }else if(*a=='K')
    {
        cout << "J";
    }else if(*a=='L')
    {
        cout << "K";
    }else if(*a==';')
    {
        cout << "L";
    }else if(*a=='Q')
    {
        cout << "W";
    }else if(*a=='W')
    {
        cout << "Q";
    }else if(*a=='E')
    {
        cout << "W";
    }else if(*a=='R')
    {
        cout << "E";
    }else if(*a=='T')
    {
        cout << "R";
    }else if(*a=='Y')
    {
        cout << "T";
    }else if(*a=='U')
    {
        cout << "Y";
    }else if(*a=='I')
    {
        cout << "U";
    }else if(*a=='O')
    {
        cout << "I";
    }else if(*a=='P')
    {
        cout << "O";
    }else if(*a=='[')
    {
        cout << "P";
    }else if(*a==']')
    {
        cout << "[";
    }else if(*a=='\\')
    {
        cout << "]";
    }else if(*a=='`')
    {
        cout << "";
    }else if(*a=='1')
    {
        cout << "`";
    }else if(*a=='2')
    {
        cout << "1";
    }else if(*a=='3')
    {
        cout << "2";
    }else if(*a=='4')
    {
        cout << "3";
    }else if(*a=='5')
    {
        cout << "4";
    }else if(*a=='6')
    {
        cout << "5";
    }else if(*a=='7')
    {
        cout << "6";
    }else if(*a=='8')
    {
        cout << "7";
    }else if(*a=='9')
    {
        cout << "8";
    }else if(*a=='0')
    {
        cout << "9";
    }else if(*a=='-')
    {
        cout << "0";
    }else if(*a=='=')
    {
        cout << "-";
    }else if(*a=='\'')
    {
        cout << ";";
    }else
    {
        cout << " ";
    }
    }cout << endl;
    }

    return 0;
}

