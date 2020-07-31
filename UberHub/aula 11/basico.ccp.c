    #include <bits/stdc++.h>
using namespace std;
int main() {
	map<string,bool> personagemLegal;
	personagemLegal["mochila"] = true;
	personagemLegal["Dora"] = true;
	personagemLegal["Raposo"] = false;
	personagemLegal["Diego"] = false;
	personagemLegal["Mapa"] = true;
	personagemLegal["Mãe"] = true;
	personagemLegal["Fiesta Trio"] = true;
	cout<<personagemLegal["Raposo"]<<endl;

}
