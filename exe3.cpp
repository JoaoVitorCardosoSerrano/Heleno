#include <iostream>

using namespace std;

//joao serrano RA 48813//

struct cd {

	string titulo;
	string duracao;
    string nome_da_banda;
    int quantidade_de_faixas;
    int ano;
    
};


int main() {
	
	 cd cds[4];
	
	int i=0,x=0;
	
	//coletando dados		
	for(i=1;i<=3;i++){
		
		cout<<"Cd "<<i<<endl;
		
		cout<<"Digite o titulo: "<<endl;
		getline(cin, cds[i].titulo);
		fflush(stdin);
		
		cout<<"Digite a duracao: "<<endl;
		getline(cin, cds[i].duracao);
		fflush(stdin);
		
		cout<<"Digite o nome da banda: "<<endl;
		getline(cin, cds[i].nome_da_banda);
		fflush(stdin);
		
		cout<<"Digite a quantidade de faixas: "<<endl;
		cin>>cds[i].quantidade_de_faixas;
		fflush(stdin);
		
		cout<<"Digite o ano: "<<endl;
		cin>>cds[i].ano;
		fflush(stdin);
		
		system("pause");
		system("cls");
			
	}
	
	
	cout<<"Digite '1' se deseja mostrar os cds ou '2' se deseja sair "<<endl;
	cin>>x;
	
	//mostrando dados
	if(x == 1 ){
		
	for(i=1;i<=3;i++){
	
		
		
		cout<<"**MOSTRANDO OS CDS** "<<endl<<endl;
		
		cout<<"Cd "<<i<<endl;
		
		cout<<"Titulo: "<<(cds[i].titulo)<<endl;
		fflush(stdin);
		
		cout<<"Duracao: "<<cds[i].duracao<<endl;
		fflush(stdin);
		
		cout<<"Nome da banda: "<<cds[i].nome_da_banda<<endl;
		fflush(stdin);
		
		cout<<"Quantidade de faixas: "<<cds[i].quantidade_de_faixas<<endl;
		fflush(stdin);
		
		cout<<"Ano: "<<cds[i].ano<<endl;
		fflush(stdin);
		
		system("pause");
		system("cls");
		
			
	}
}
	if(x == 2){
		
		cout<<"Encerrando programa"<<endl<<endl;
		cout<<"Obrigado por usar"<<endl;
		
		exit(0);
	}	
		
	return 0;
}
