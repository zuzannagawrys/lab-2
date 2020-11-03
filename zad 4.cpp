#include <iostream>
using namespace std;
int funkcja (int &a, int &b, int &s)
{
        int il;
        il=a*b;
        s=a+b;
        return il;
}
int main ()
{
    int a,b,s,il;
    cout<<"Podaj wartosc a"<<endl;
    cin>>a;
    cout<<"Podaj wartosc b"<<endl;
    cin>>b;
    il=funkcja(a,b,s);
    cout<<endl<<"a:\t\t"<<a<<endl<<"b:\t\t"<<b<<endl<<"suma:\t\t"<<s<<endl<<"iloczyn:\t"<<il;
    return 0;
}
