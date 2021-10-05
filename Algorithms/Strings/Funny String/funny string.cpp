#include <bits/stdc++.h>
using namespace std;
bool funny_string(string str)
{
    string str_rev=str;
    reverse(str_rev.begin(),str_rev.end());

    for(int i=1; i<str.size(); i++)
    {
        if((abs(int(str[i])-int(str[i-1])))!=(abs(int(str_rev[i])-int(str_rev[i-1]))))
    {
        return false;
    }
}
return true;


}
int main()
{
    string input_string;
    cin>>input_string;
    if(funny_string(input_string))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
