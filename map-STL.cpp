#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q;     
    cout<<"enter the number of query ";
    cin >> q; 
    //maps store <key, value> pairs
    map<string, int> mp;    // creating a map of string to integer
    for (int i = 0; i < q; i++) {
        int type;
        cout<<"enter type of query";
        cin >> type;

        if (type == 1) {
            string name;
            int marks;
            cout<<"enter name and marks";
            cin >> name >> marks;
            mp[name] += marks;
        } else if (type == 2) {
            string name;
            cout<<"enter name";
            cin >> name;
            mp.erase(name);
            cout<<name;
        } else if (type == 3) {
            string name;
            cin >> name;
            cout<<"enter name";
            cout << mp[name] << endl;
        }
    } 
    return 0;
}



