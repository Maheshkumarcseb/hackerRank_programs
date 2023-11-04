#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;
    cout << "enter two string:";
    cin >> a >> b;
    cout << "length of strings are:\n";
    cout << a.length() << ' ' << b.length() << endl;
    cout << "concatenating of two string:\n";
    cout << a + b << endl;
    swap(a[0], b[0]);
    cout << "after swapping the first element of string: ";
    cout << a << ' ' << b << endl;
    return 0;
}

// int len = a.size();
//     cout<<"length of string a:\n";
//     cout<<len;
