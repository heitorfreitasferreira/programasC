#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count, diminuiu = 0;
    cin>>count;
    int vet[count];
    for (size_t i = 0; i < count; i++)
    {
        cin>>vet[i]; 
    }
    for (size_t i = 1; i < count; i++)
    {
        if (vet[i]<vet[i-1])
        {
            diminuiu = i+1;
            break;
        }
        
    }
    cout<<diminuiu<<endl;
    return 0;
}
