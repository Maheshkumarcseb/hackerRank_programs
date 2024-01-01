#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
template <class T>
class AddElements {
private:
    T element;
public:
    AddElements(const T& element) : element(element) {}   // constructor that initialise the value of element

    T add(const T& other) {    // function to add 
        return element + other;
    }

    T concatenate(const T& other) {   // function to concate one value on other
        return element + other;
    }
};


int main () {
  int n,i;
  cout<<"enter the value of no. of type:\n";
  cin >> n;
  for(i=0;i<n;i++) {
    string type;
    cout<<"enter type:\n";
    cin >> type;
    if(type=="float") {
        double element1,element2;
        cout<<"enter element1 and element2:\n";
        cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        cout << myfloat.add(element2) << endl;
    }
    else if(type == "int") {
        int element1, element2;
        cout<<"enter element1 and element2:\n";
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }
    else if(type == "string") {
        string element1, element2;
        cout<<"enter element1 and element2:\n";
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        
        cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}
