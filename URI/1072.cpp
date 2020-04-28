#include <bits/stdc++.h>
using namespace std;
int main(){
   int count,in=0,out=0;
   cin>>count;
   for (int i = 0; i < count; i++)
   {
       int x;
       cin>>x;
       if(x>=10 &&x<=20)in++;
       else out++;
   }
   cout<<in<<" in\n"<<out<<" out"<<endl;
   
}