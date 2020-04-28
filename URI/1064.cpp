#include <bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    float acum=0;
    for (int i = 0; i < 6; i++)
    {
        float x;
        cin>>x;
        if (x>0){
        count++;
        acum=acum+x;
        }
    }
    cout<<setprecision(1)<<fixed;
    cout<<count<<" valores positivos"<<endl<<(acum/count)<<endl;
}