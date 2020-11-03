#include <iostream>
using namespace std;
void funkcja (int &a, int *b)
{
        int c;
        c=a;
        a=(*b);
        (*b)=c;
}
int main ()
{
    int a,b;
    cout<<"Podaj wartosc a"<<endl;
    cin>>a;
    cout<<"Podaj wartosc b"<<endl;
    cin>>b;
    funkcja(a,&b);
    cout<<endl<<"a:\t"<<a<<endl<<"b:\t"<<b;
    return 0;
}
