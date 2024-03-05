#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s,newString="";
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0' and s[i+1]=='0')
        {
            newString+="A";
            i++;
        }else if(s[i]=='0' and s[i+1]=='1')
        {
            newString+="T";
            i++;
        }else if(s[i]=='1' and s[i+1]=='0')
        {
            newString+="C";
            i++;
        }else if(s[i]=='1' and s[i+1]=='1') 
        {
            newString+="G";
            i++;
        }
    }
    cout<<newString;

    return 0;
}