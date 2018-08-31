#include<iostream>
#include<string>
#include <stdlib.h>
using namespace std;

string D(string C,int k) // k không được phép chia hết cho 26 nếu không việc giải mã là vô nghĩa
{
    string P="";
    if (k == 0) return "Key false";
    if (k >=26 ) return "Key false";
    for (int i=0; i<C.size(); i++)
    {

        if (((int(C[i]) >= int('a'))&&( int(C[i]) <= int('z'))) || ((int(C[i]) >= int('A'))&&( int(C[i]) <= int('Z'))))
        {

                int x = int(C[i]); // x là mã ascii của C[i]
                if ((x >= int('a'))&&( x <= int('z')))
                {
                    x = x-32; // Chuyển sang in hoa
                }

                char new_;
                if (x-k < 65)  new_ =90-abs(x-k-65)+1;
                else new_=x-k;
                P = P + new_;
        } else P = P + C[i];

    }
    return P;
}

int main()
{
    string banma; int key=0;
    cout<<"Moi ban nhap chuoi can giai ma:";
    getline(cin,banma);
    cout<<"Moi ban nhap key:";
    cin>>key;
    cout<<"Chuoi giai ma:"<<D(banma,key);
    return 0;
}
