#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int size,pos,start,end,n,i,a,j;
    cout<<"enter the size of vector:";
    cin>>n;
    vector<int>v;
    cout<<"enter n vector values:";
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    } 
    cout<<"enter the position from where vector will be removed: ";  
    cin>>pos;
    cout<<"enter start and end position";
    cin>>start>>end;
    v.erase(v.begin()+(pos-1));
    v.erase(v.begin()+start-1,v.begin()+end-1);
    size=v.size();
    cout<<"size of vector after removing the vector element:\n";
    cout<<size<<endl;
    cout<<"values of vector after removing the digit:\n";
    for(j=0;j<size;j++)
    {
        cout<<v[j]<<" ";
    }
return 0;
}
 

