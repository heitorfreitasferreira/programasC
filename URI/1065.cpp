#include <bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin>>x;
        if (x%2==0)
        count++;
    }
    cout<<count<<" valores pares"<<endl;
}