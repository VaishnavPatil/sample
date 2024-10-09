#include<bits/stdc++.h>
using namespace std;
void solve(int n, int m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void solvee(int n, int m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=n; j>i; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        solve(n, m);
        solvee(n, m);
    }
    return 0;
}


/*#include<bits/stdc++.h>
using namespace std;
void solve(int n, int m)
{
    for(int i=1; i<=2*n-1; i++)
    {
        int stars=i;
        if(i>n)
        {
            stars = 2*n-i;
        }
        for(int j=1; j<=stars; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        solve(n, m);
      
    }
    return 0;
}*/
