#include<bits/stdc++.h>
using namespace std;
void solve(int n, int m)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if(i%2==0)
            {
                if(j%2==0)
                {
                    cout<<"1";
                }
                else
                {
                    cout<<"0";
                }
            }
            else
            {
                if(j%2==0)
                {
                    cout<<"0";
                }
                else
                {
                    cout<<"1";
                }
            }
            
        }
        cout<<endl;
    }
}
int main()
{
   
    int n, m;
    cin>>n>>m;
    solve(n, m);
    return 0;
}

/*
  #include<bits/stdc++.h>
using namespace std;
void print (int n, int m)
{
    int start = 1;
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            start = 1;
        }
        else
        {
            start = 0;
        }
        for(int j=0; j<i; j++)
        {
            cout<<start<<" ";
            start = 1 - start;
        }
        cout<<endl;
    }
}
int main()
{
    int n, m;
    cin>>n>>m;
    print(n, m);
    return 0;
}
*/
