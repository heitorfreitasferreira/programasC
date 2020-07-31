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


	cout<<"Tamanho do mapa: "<<personagemLegal.size()<<endl;
	if(personagemLegal.find("Fiesta Trio")==personagemLegal.end()){
		//Fiesta Trio não existe
	} else {
		//Fiesta Trio existe
	}
	personagemLegal.erase("Fiesta Trio");
	cout<<"Tamanho do mapa: "<<personagemLegal.size()<<endl;


	personagemLegal.insert({"Fiesta Trio", false});
	cout<<"Esta vazio: "<<personagemLegal.empty()<<endl;
	personagemLegal.clear();
	cout<<"Tamanho do mapa: "<<personagemLegal.size()<<endl;

	cout<<"Esta vazio: "<<personagemLegal.empty()<<endl;

}
