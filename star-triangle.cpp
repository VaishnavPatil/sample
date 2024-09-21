#include<bits/stdc++.h>
using namespace std;
void solve(int n, int m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            cout<<" ";
        }
        
        for(int j=0; j<2*i+1; j++)
        {
            cout<<"*";
        }
        
        
        for(int j=0; j<n-i-1; j++)
        {
            cout<<" ";
        }
        cout<<endl
    }
}
int main()
{
    int n, m;
    cin>>n>>m;
    solve(n, m);
    return 0;
}
