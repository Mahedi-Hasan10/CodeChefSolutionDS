#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string text;
        int count =0,n;
        cin>>n;
        cin>>text;
        for(int i=0;i<n;i++)
        {
            if(text[i]==text[i+1])
            {
                count++;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}