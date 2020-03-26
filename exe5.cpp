#include <iostream>

using namespace std;

//joao serrano RA 48813//

struct Carro{
	
	string marca;
	string modelo;
	string cor;
	float km;
	int ano;
	int ar_condicionado;
	int direcao_hidraulica;
	int vidro_eletrico;
	float valor;
	
};


int main() {
	
Carro carros[30] =
{
{"Chevrolet","Corsa","Preto",85500,2012,0,1,1,25000},
{"Chevrolet","Astra","Prata",30700,2013,1,1,1,45000},
{"Volkswagen","Fox","Preto",135500,2011,1,1,1,37000},
{"Honda","Civic","Cinza",45000,2011,1,1,1,42000},
{"Volkswagen","CrossFox","Branco",25500,2014,1,1,1,50000},
{"Volkswagen","Amarok","Vinho",92500,2010,1,1,1,110000},
{"Volkswagen","Gol","Vermelho",15500,2014,0,0,0,21000},
{"Chevrolet","Corsa","Vermelho",31500,2012,0,0,0,27000},
{"Volkswagen","Fox","Preto",135500,2009,1,1,1,37000},
{"Chevrolet","Celta","Azul",28500,2013,0,1,0,30000},
{"Chevrolet","Montana","Preto",35900,2014,0,1,1,39000},
{"Chevrolet","Vectra","Vinho",45500,2012,1,1,1,57000},
{"Chevrolet","S10","Branco",90500,2010,1,1,1,68000},
{"Ford","Ecosport","Vermelho",80500,2008,1,1,1,37000},
{"Ford","Fiesta","Preto",10500,2015,1,1,1,58000},
{"Ford","Ranger","Prata",180500,2007,1,1,1,45000},
{"Ford","Ka","Branco",10500,2014,0,0,0,21000},
{"Ford","Ka","Preto",35500,2011,0,1,1,27000},
{"Honda","City","Branco",20500,2013,0,1,0,29000},
{"Fiat","Punto","Preto",1500,2016,1,1,1,40000},
{"Fiat","Palio","Prata",32500,2012,0,0,1,21000},
{"Fiat","Uno","Branco",45500,2012,0,0,1,19000},
{"Volkswagen","Fusca","Branco",78500,1992,0,0,0,4000},
{"Volkswagen","Fusca","Branco",190500,1990,0,0,0,3000},
{"Chevrolet","Onix","Prata",10500,2009,0,1,0,29000},
{"Chevrolet","Cruze","Vermelho",100500,2011,1,1,1,50000},
{"Chevrolet","Cobalt","Azul",70500,2011,0,0,0,29000},
{"Volkswagen","Golf","Prata",6500,2016,1,1,1,67000},
{"Chevrolet","Astra","Vermelho",5500,2015,1,1,0,45000},
{"Honda","Civic","Preto",70500,2009,1,1,1,32000}
};

int i=0;
	
	for(i=1;i<=30;i++){
		
		cout<<"**MOSTRANDO OS CARROS** "<<endl<<endl;
		
		cout<<"Carro "<<i<<endl;
		
		cout<<"Marca: "<<(carros[i].marca)<<endl;
		fflush(stdin);
		
		cout<<"Modelo: "<<carros[i].modelo<<endl;
		fflush(stdin);
		
		cout<<"Cor: "<<carros[i].cor<<endl;
		fflush(stdin);
		
		cout<<"Cor: "<<carros[i].km<<endl;
		fflush(stdin);
		
		cout<<"Ano: "<<carros[i].ano<<endl;
		fflush(stdin);
		
		cout<<"Ar condicionado: "<<carros[i].ar_condicionado<<endl;
		fflush(stdin);
		
		cout<<"Direcao hidraulica: "<<carros[i].direcao_hidraulica<<endl;
		fflush(stdin);
		
		cout<<"Vidro eletrico: "<<carros[i].vidro_eletrico<<endl;
		fflush(stdin);
		
		cout<<"Valor: "<<carros[i].valor<<endl;
		fflush(stdin);
		
		system("pause");
		system("cls");
		
			
	}

		
		
	
	
	return 0;
}
