#include <iostream>

using namespace std;
int sabirac(int a , int b);
int main()
{  int a, b;
    cout<<"Unesite broj a: ";
    cin>>a;
    cout<<"Unesite broj b: ";
    cin>>b;

    cout<<"Zbir brojeva je: "<<sabirac(a,b)<<endl;

    return 0;
}

int sabirac(int a, int b)
{
 int c=a+b;
 return c;
}
