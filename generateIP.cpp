#include <bits/stdc++.h>
using namespace std;

bool ok(int a,int b,int c, int d)
{
    return a<=255 and b<=255 and c<=255 and d<=255;
}

string gen(int a,int b,int c,int d)
{
    return to_string(a)+"."+to_string(b)+"."+to_string(c)+"."+to_string(d);
}


vector<string> genIp(string s)
{
    vector<string> res;
    for(int i =1;i<=3;i++)
    {
        for(int j = 1;j<=3;j++)
        {
            for(int k = 1;k<=3;k++)
            {
                for(int l =1;l<=3;l++)
                {
                    if(i+j+k+l==s.length())
                    {
                        int a = stoi(s.substr(0,i));
                        int b = stoi(s.substr(i,j));
                        int c = stoi(s.substr(i+j,k));
                        int d = stoi(s.substr(i+j+k,l));
                        if(ok(a,b,c,d))
                        {
                            string str = gen(a,b,c,d);
                            if(str.length() == s.length()+3)
                            {
                                res.push_back(str);
                            }
                        }
                    }
                }
            }
        }
    }
    return res;
}

int main()
{
    string s = "111111";
    vector<string> st = genIp(s);
    for(int i =0;i<st.size();i++)
    {
        cout<<st[i]<<endl;
    }
}