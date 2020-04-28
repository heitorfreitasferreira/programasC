#include<bits/stdc++.h>
using namespace std;
int main(){
    int ctest;
    string a,b,c;

    cin>>ctest;
    getchar();
    for(int i=0; i<ctest; i++)
    {
        getline(cin,a);

        for(int j=0;j<a.size(); j++)
        {
            if((a[j]>='A' && a[j]<='Z')||(a[j]>='a' && a[j]<='z'))
                a[j]+=3;
        }
        reverse(a.begin(), a.end());
        for(int j=((a.size())/2);j<a.size(); j++)
        {
                a[j]--;
        }

        cout<<a<<endl;
    }
}

