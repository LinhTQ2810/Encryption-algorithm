#include<iostream>
#include<string>
using namespace std;

string E(string P,int k) // k không được phép chia hết cho 26 nếu không việc mã hóa là vô nghĩa
{
    string C="";
    if (k == 0) return "MA HOA VO NGHIA KHI BAN CHON Key == 0";
    if (k >= 26) return "MA HOA VO NGHIA KHI BAN CHON Key >= 26";
    for (int i=0; i<P.size(); i++)
    {

        if (((int(P[i]) >= int('a'))&&( int(P[i]) <= int('z'))) || ((int(P[i]) >= int('A'))&&( int(P[i]) <= int('Z'))))
        {

                int x = int(P[i]); // x là mã ascii của P[i]
                if ((x >= int('a'))&&( x <= int('z')))
                {
                    x = x-32; // Chuyển sang in hoa
                }

                char new_;
                if (x+k > 90)  new_ =65+((x+k) -90)-1;//cout<< (x+k) -90<<endl;
                else new_=x+k;//cout<<x+k<<endl;
                //cout<<int(new_)<<"-"<<endl;
                C = C + new_;
        } else C = C +P[i];

    }
    return C;
}
//HAUS GUC PY KOY HABC FY KOIW EBUHB HOIW PCYN HUG!
int main()
{
    string banro; int key=0;
    cout<<"Moi ban nhap chuoi can ma hoa:";
    getline(cin,banro);
    cout<<"Moi ban nhap key:";
    cin>>key;
    cout<<"Chuoi ma hoa:"<<E(banro,key);
    return 0;
}
