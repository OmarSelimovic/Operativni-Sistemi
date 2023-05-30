#include <iostream>
using namespace std;
int main () {
    int a, b;
    cout<<"unesite vrijednost a "<<endl;
    cin>>a;
    cout<<"unesite vrijednost b "<<endl;
    cin>>b;
    if (a>b)
        cout<<"a je veci broj"<<endl;
        else
            cout<<"b je veci broj"<<endl;
    _sleep(2500);
    return 0;
}
