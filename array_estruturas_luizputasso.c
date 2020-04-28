#include <stdio.h>
struct cadastro
{
    char nome[30],rua[50];
    int idade,numero;

};

int main(int argc, char const *argv[])
{
    struct cadastro c[4];
    for (int i = 0; i < 4; i++)
    {
        printf("Oi nehh");
        scanf("%[^\n] %d %[^\n] %d",c[i].nome,&c[i].idade,c[i].rua,&c[i].numero);
        printf("Nome: %s \nIdade: %d \nRua: %s \nNumero: %d",c[i].nome,c[i].idade,c[i].rua,c[i].numero);
    }
    return 0;
}
