#include <iostream>
#include"Phanso.h"
using namespace std;

int main()
{
    Phanso a,b;
    cout<<"nhap 2 phan so: ";
    cin>>a>>b;
    cout<<"\ntong 2 phan so la: "<<a+b;
    cout<<"\nhieu 2 phan so la: "<<a-b;
    cout<<"\ntich 2 phan so la: "<<a*b;
    cout<<"\nthuong 2 phan so la: "<<a/b;
    if (a>b)
    {
        cout<<endl;
        cout<<a<<" lon hon "<<b;
    }
    else if(a<b)
    {
        cout<<endl;
        cout<<a<<" be hon "<<b;
    }
    else
    {
        cout<<endl;
        cout<<"hai phan so bang nhau";
    }
    return 0;
}
