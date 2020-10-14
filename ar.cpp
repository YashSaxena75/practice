#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    int a=29000;
    bitset<32> x(a);
    cout << x << '\n';
    /*int a[4];
    int b=6;
    int *p=&b;
    cout<<"b :-"<<*p<<endl;
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    cout<<"array locations => ";
    for(int i=0;i<4;i++)
    {
    cout<<&a[i]<<"  ";
    }*/
    return 0;
}
