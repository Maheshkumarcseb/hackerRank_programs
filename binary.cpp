// #include<iostream>
// #include<algorithm.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of element";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<"sorted vector are:";
     for(int i=0;i<n;i++)
    {
       cout<<a[i]<<" ";
    }
    // int ans = binary_search(a,a+n,3);
    // cout<<ans<<endl;
    // auto itr=lower_bound(a,a+n,3)-a;
    // cout<<itr<<endl;
    return 0;
}