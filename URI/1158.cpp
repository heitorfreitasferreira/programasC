#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x,y,c=0;
        cin>>x>>y;
        if(x%2==0)x++;
        for (int j = 0; j < y; j++)
        {
            c+=x;
            x+=2;
        }
        
        cout<<c<<endl;
    }
    

}