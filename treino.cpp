#include<iostream> 
using namespace std;

int potencia(int chave){
	if(chave==1){
		return 2;
	}else{
		return 2*potencia(chave-1);
	}
}

int main (){
    
	cout << potencia(3);
	return 0;
}