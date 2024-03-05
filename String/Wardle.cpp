#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string hidden, guess, newString="";
        cin>>hidden>>guess;
        for(int i=0;i<5;i++)
        {
            if(hidden[i]==guess[i])
            {
                newString+="G";
            }else{
                newString+="B";
            }
        }
        cout<<newString<<endl;
    }

    return 0;
}