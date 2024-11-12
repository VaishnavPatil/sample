#include<bits/stdc++.h>
using namespace std;
void solve(int n, int m)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<i; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}

void solve2(int n, int m)
{
    for(int i=0; i<n; i++)
    {
        m--;
        for(int j=m; j>0; j--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}
int main()
{
    int n, m;
    cin>>n>>m;
    solve(n, m);
    solve2(n, m);
    return 0;
}


/*
Striver

#include<bits/stdc++.h>
using namespace std;
void solve(int n, int m)
{
    for(int i=1; i<=2*n-1; i++)
    {
        int star = i;
        if(i>n)
        {
            star = 2*n-i;
        }
        for(int j=0; j<star; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}
int main()
{
    int n, m;
    cin>>n>>m;
    solve(n, m);
    return 0;
}
*/
