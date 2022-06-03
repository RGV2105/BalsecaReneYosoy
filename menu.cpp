#include<iostream>

using namespace std;
int main(){

	int op,flag;
	do{
		system("clear");
	cout<<"uma de varios numeros /n";
	cout<<"compara /n";
	cout<<"salir/n";
	cin>>op;

	switch(op){
		case 1:
			cout<<"aqui sesuma varios numeros ";
			flag=cin.ignore().get();
			break;
		case 2:
			cout<<"aqui se compara losnumeros ";
			flag=cin.ignore().get();
			break;
		default:
			cout<<"opcion no computable ";
			flag=cin.ignore().get();

	}

	}while(op !=3);

return 0;
}
