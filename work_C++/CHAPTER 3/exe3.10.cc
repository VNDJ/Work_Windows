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
    string a1;
    tcout << "input your string: ";
    getline(cin, a1);
    for(decltype(a1.size()) index1 = 0; index1 != a1.size(); ++index1){
        if(ispunct(a1[index1])){
            a1[index1] = ' ';
        }
    }
    tcout << a1 << endl;
    return 0;
}
