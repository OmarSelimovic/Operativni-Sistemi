#include <iostream>
using namespace std;

int main() {
    int a, b;
   cout << "Hello, world!" <<endl;
   cout << "Unesite neki broj a: " <<endl;
   cin>>a;
   cout << "Unesite neki broj b: " <<endl;
   cin>>b;

    if(a>b) cout<<"A je vece od B i njihova razlika je: "<<a-b<<endl;
    else cout<<"B je vece od A i njihov zbir je: "<<a+b<<endl;

    cout<<"Hell on world!"<<endl;
    cin.ignore();
    cin.get();
    cout<<"Okay maybe it's not so bad"<<endl;


    return 0;
}
