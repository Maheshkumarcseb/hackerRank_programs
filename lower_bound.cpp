// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    vector<int> vec;  // vector is used store element in sorted order.
    cout<<"enter the no. of element in vector:";
    cin >> n;
    cout<<"elements of vector are:";
    for (int i = 0; i < n; i++) {
        int temp;   //temp is temprory variable use to take input from user
        cin >> temp;
        vec.push_back(temp);// used to insert element at the end of vector.
    }
    int q;
    cout<<"enter the number of queries:";
    cin >> q;
    cout<<"enter"<<q<<"queries";
    for (int i = 0; i < q; i++) {
        int temp;
        cin >> temp;
        vector<int>::iterator iter;
        iter = lower_bound(vec.begin(), vec.end(), temp);
        if (*(iter + 1) == temp || *iter == temp)
            cout << "Yes " << iter - vec.begin() + 1 << endl;
        else
            cout << "No " << iter - vec.begin() + 1 << endl;
    }
    
    return 0;
}