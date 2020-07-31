#include <bits/stdc++.h>
using namespace std;
int main(){
    int a=20,b=0;
    while (true){
        for (int i = 1;i<=10;i++){
            if (a%i!=0){
                b=1;
                break;
            }
        }
        if(b==0) break;
        else{
            a+=10;
            b=0;
        }
    }
    cout<<a<<endl;
}