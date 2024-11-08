#include<bits/stdc++.h>
using namespace std;
void print (int n, int m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            cout<<" ";
        }
        for(int j=0; j<2*n-(2*i+1); j++)
        {
            cout<<"*";
        }
        for(int j=0; j<i; j++)
        {
            cout<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    int n, m;
    cin>>n>>m;
    print(n, m);
    return 0;
}

/*
        **********
         *******
          *****
           ***
            *
*/
