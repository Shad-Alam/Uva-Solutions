#include <bits/stdc++.h>

using namespace std;

int main()
{
    string i = " `1234567890-=",i1 = "qwertyuiop[]\\",i2 = "asdfghjkl;'",i3 = "zxcvbnm,./";
    string i4 = "~!@#$%^&*()_+",i5 = "QWERTYUIOP{}|";
    string i6 = "ASDFGHJKL:\"",i7 = "ZXCVBNM<>?";
    string j = " `123qjlmfp/[]",j1 = "456.orsuyb;=\\";
    string j2 = "789aehtdck-",j3 = "0zx,inwvg'";
    string j4 = "~!@#QJLMFP?{}",j5 = "$%^>ORSUYB:+|";
    string j6 = "&*(AEHTDCK_",j7 = ")ZX<INWVG\"",s;

    while(getline(cin,s)){ string p="";
        i+=i1;i+=i2;i+=i3;i+=i4;i+=i5;i+=i6;i+=i7;
        j+=j1;j+=j2;j+=j3;j+=j4;j+=j5;j+=j6;j+=j7;

        for(int a=0; a<s.size(); a++)
            for(int b=0; b<i.size(); b++)
                if(s[a]==i[b]){
                    p+=j[b];
                    break;
                }
        cout << p << endl;
    }


    return 0;
}

