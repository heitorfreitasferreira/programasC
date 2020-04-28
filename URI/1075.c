#include<stdio.h>
int main() {
    int var;
    scanf("%d",&var);
    for (int i = 1; i < 10000; i++)
    {
        if (i%var==2)   printf("%d\n",i);
    }
    return 0;
}