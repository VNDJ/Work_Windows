#include <iostream>
#include <string>
using namespace std;
#define OUTPUT
#ifndef OUTPUT
#define tcout 0 && cout
#else
#define tcout cout
#endif // OUTPUT

int main()
{
    string a;
    tcout << "input your string: ";
    getline(cin, a);
    #if 0
    for(char &c : a){
        c = 'X';
    }
    #endif // 0
    #if 0
    for(decltype(a.size()) index = 0; index != a.size(); ++index){
        a[index] = 'X';
    }
    #endif // 0
    decltype(a.size()) index = 0;
    while(index != a.size()){
        a[index] = 'X';
        ++index;
    }
    tcout << "the result: " << a << endl;
    return 0;
}
