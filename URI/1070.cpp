#include <bits/stdc++.h>
using namespace std;
int main(){
   int x;
   cin>>x;
   if (x%2!=0)//x é impar
   {
       for (int i = 0; i < 12; i+=2) cout<<x+i<<endl;
   }
   else//x é par
   {
       x++;
       for (int i = 0; i < 12; i+=2) cout<<x+i<<endl;
   }
   
}