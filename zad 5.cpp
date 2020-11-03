#include <iostream>
#include <algorithm>
using namespace std;
void funkcja (int &a, int &b)
{
        swap(a,b);
}
void funkcja (float &a, float &b)
{
        swap(a,b);
}
void funkcja (double &a, double &b)
{
        swap(a,b);
}
void funkcja (char &a, char &b)
{
        swap(a,b);
}
int main ()
{
    int a,b;
    a=300000000;
    b=200000000;
    cout<<endl<<"a:\t"<<a<<endl<<"b:\t"<<b;
    funkcja(a,b);
    cout<<endl<<"po zamianie:";
    cout<<endl<<"a:\t"<<a<<endl<<"b:\t"<<b;
    cout<<endl<<endl;

    float c,d;
    c=3.3546;
    d=20.538;
    cout<<endl<<"c:\t"<<c<<endl<<"d:\t"<<d;
    funkcja(c,d);
    cout<<endl<<"po zamianie:";
    cout<<endl<<"c:\t"<<c<<endl<<"d:\t"<<d;
    cout<<endl<<endl;

    double e,f;
    e=3000.54632;
    b=200.447;
    cout<<endl<<"e:\t"<<e<<endl<<"f:\t"<<f;
    funkcja(e,f);
    cout<<endl<<"po zamianie:";
    cout<<endl<<"e:\t"<<e<<endl<<"f:\t"<<f;
    cout<<endl<<endl;

    /*int g,h;
    g='g';
    h='h';
    cout<<endl<<"g:\t"<<g<<endl<<"h:\t"<<h;
    funkcja4(g,h);
    cout<<endl<<"po zamianie:";
    cout<<endl<<"g:\t"<<g<<endl<<"h:\t"<<h;
    cout<<endl<<endl;
    dla char nie dzia³a
    */

    return 0;
}
