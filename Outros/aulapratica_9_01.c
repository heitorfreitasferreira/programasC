#include<stdio.h>
#include<string.h>
int main() {
    char str[50],aux[50];
    int j=0;
    scanf("%[^\n]s",str);
    for (int i = 0; i < 50; i++)
    {
        if((str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')||(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'))
        {
            aux[j]=str[i];
            j++;
        }
    }
    printf("%s\n",aux);
    return 0;
}