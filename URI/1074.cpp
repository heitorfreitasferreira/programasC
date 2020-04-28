#include <bits/stdc++.h>
using namespace std;
int main(){
    int c;
    cin>>c;
    for (int i = 0; i < c; i++)
    {
        int x;
        cin>>x;
        if(x==0) cout<<"NULL"<<endl;
        else if (x%2==0 & x>0)cout<<"EVEN POSITIVE"<<endl;
        else if (x%2==0 & x<0)cout<<"EVEN NEGATIVE"<<endl;
        else if (x%2!=0 & x>0)cout<<"ODD POSITIVE"<<endl;
        else if (x%2!=0 & x<0)cout<<"ODD NEGATIVE"<<endl;
    }
    
}