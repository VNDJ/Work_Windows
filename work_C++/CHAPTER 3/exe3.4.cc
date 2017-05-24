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
    string a1, a2;
    tcout << "input the string 1: ";
    getline(cin, a1);
    tcout << "input the string 2: ";
    getline(cin, a2);
    #if 0
    if(a1 == a2){
        tcout << "a1 equal a2";
        return 0;
    }else{
        if(a1 < a2){
            tcout << a2 << endl;
        }else{
            tcout << a1 << endl;
        }
    }
    return 0;
    #endif
    if(a1.size() != a2.size()){
        tcout << (a1.size() > a2.size()?a1:a2) <<endl;
    }
    return 0;
}
