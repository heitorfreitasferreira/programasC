#include<bits/stdc++.h>
using namespace std;

typedef struct PAIS
{
    string nome;
    int ouro;
    int prata;
    int bronze;
}Paises;

int main()
{
    int n;

    cin >> n;
	Paises paises[n];
    for(int i = 0;i < n;i++)
    {
        cin >> paises[i].nome >> paises[i].ouro >> paises[i].prata >> paises[i].bronze;
    }

    sort(paises, paises+n, [](Paises a, Paises b){
		if(a.ouro == b.ouro)
		{
			if(a.prata == b.prata)
			{
				if(a.bronze == b.bronze)return a.nome < b.nome;
				else return a.bronze > b.bronze;
			}else return a.prata > b.prata;
		}else return a.ouro > b.ouro;
	});

    for(int i = 0;i < n;i++)
    {
        cout << paises[i].nome << " " << paises[i].ouro << " " << paises[i].prata << " " << paises[i].bronze << endl;
    }


    return 0;
}
