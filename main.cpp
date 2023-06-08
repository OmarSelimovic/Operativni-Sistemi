#include <iostream>
#include <unistd.h>

using namespace std;

int main () {
    int a, b;
    cout<<"unesite vrijednost A "<<endl;
    cin>>a;
    cout<<"unesite vrijednost B "<<endl;
    cin>>b;
    if (a>b)
        cout<<"A je veci broj."<<endl;
        else
            cout<<"B je veci broj."<<endl;

            cout<<"Ma i nije tako lose"<<endl;
      cin.ignore();
    cin.get();
    return 0;
}
