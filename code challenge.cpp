#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int i=0,n;
    cout<<"enter the length of list"<<endl;
    cin>>n;
    int a[n];
    string animals[n];
    int b[n];
    vector<string>result;
    vector<string>result1;
    for(i=0;i<n;i++)
    {
        cout<<"enter the numbers"<<endl;
        cin>>a[i];    
    }
    for(i=0;i<n;i++)
    {
        cout<<"enter the string"<<endl;
        cin>>animals[i];
        b[i]=animals[i].length();
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==b[i])
            result.push_back(animals[i]);
        else
            result1.push_back(animals[i]);
    }
    for(i=0;i<result.size();i++)
    {
        string why=result[i];
        int j=0;
        while (why[j]) { why[j] = toupper(why[j]); j++; }
        result[i]=why;
    }
    for(i=0;i<result1.size();i++)
    {
        string whyy=result1[i];
        int j=0;
        while (whyy[j]) { whyy[j] = tolower(whyy[j]); j++; }
        result1[i]=whyy;
    }
    for(i=0;i<result.size();i++)
    {
        cout<<result[i]<<endl;
    }
    for(i=0;i<result1.size();i++)
    {
        cout<<result1[i]<<endl;
    }

    
    return 0;
}
