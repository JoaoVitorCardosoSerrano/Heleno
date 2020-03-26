#include <iostream>

using namespace std;

//joao serrano RA 48813//

struct Carro{
	
    string marca;
    string modelo;
    int ano;
    string placa;
    
};


int main(){
	
	Carro carros[4];
    
   	int i=0,x=0;
    
   	for(i=1;i<=3;i++){
		
		cout<<"Carro "<<i<<endl;
		
		cout<<"Digite a marca: "<<endl;
		getline(cin, carros[i].marca);
		fflush(stdin);
		
		cout<<"Digite o modelo: "<<endl;
		getline(cin, carros[i].modelo);
		fflush(stdin);
		
		cout<<"Digite o ano: "<<endl;
		cin>>carros[i].ano;
		fflush(stdin);
		
		cout<<"Digite a placa: "<<endl;
		getline(cin, carros[i].placa);
		fflush(stdin);
		
		
		system("pause");
		system("cls");
			
	}
	
    cout<<"Digite '1' se deseja mostrar os cds ou '2' se deseja sair "<<endl;
	cin>>x;
	
	//mostrando dados
	if(x == 1 ){
		
	for(i=1;i<=3;i++){
	
		
		cout<<"**MOSTRANDO OS CARROS** "<<endl<<endl;
		
		cout<<"Carro "<<i<<endl;
		
		cout<<"Marca: "<<(carros[i].marca)<<endl;
		fflush(stdin);
		
		cout<<"Modelo: "<<carros[i].modelo<<endl;
		fflush(stdin);
		
		cout<<"Ano: "<<carros[i].ano<<endl;
		fflush(stdin);
		
		cout<<"Placa: "<<carros[i].placa<<endl;
		fflush(stdin);
	
		
		system("pause");
		system("cls");
		
			
	}
}
	if(x == 2){
		
		cout<<"Programa encerrado"<<endl<<endl;
		
		exit(0);
	}	
		
    
    return 0;
    
}
