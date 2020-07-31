#include <stdio.h>
int main(){
    int v1[52],v2[52],i=0,j=1;
    float v3[52],s;
    while (i<50)
    {
        v1[i]=j;
        i++;
        j+=2;
    }
    for (int i = 0; i < 50; i++)
        v2[i]=i+1;
    for (int i = 0; i < 50; i++)
        v3[i]=v1[i]/(v2[i]*1.00);
    for (int i = 0; i < 50; i++)
        s+=v3[i];
    printf("%f\n",s);
}