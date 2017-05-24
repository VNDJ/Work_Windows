#include <iostream>
#include <string>

using namespace std;

#define TRACE

#ifndef TRACE
#define tcout 0 && cout
#else
#define tcout cout
#endif



int main()
{
    string a;
    cout << "please input a line string: ";
    //cin>>a;             //read only one world
    getline(cin, a);    //read a line
    cout << a << endl;
    return 0;
}
