#include<iostream>
#include<locale.h>
using namespace std;

#define X 1
#define O 2
#define y 3

/*Criar um jogo da velha em c++*/

int jogador1(int num1){//Elemento selecionado pelo jogador 1. Pode ser removido
    if(num1==X){
        return 1;
    }else if(num1==O){
        return 2;
    }
}   
int jogador2(int num2){//Elemento selecionado pelo jogador 2. Pode ser removido
    if(num2==X){
        return 1;
    }else if(num2==O){
        return 2;
    }
}
int vencedor(int jogo[3][3]){//Condicoes de ganhar o jogo
    
        jogo[0][0]=9;
        jogo[0][1]=8;
        jogo[0][2]=7;

        jogo[1][0]=6;
        jogo[1][1]=5;
        jogo[1][2]=4;

        jogo[2][0]=3;
        jogo[2][1]=2;
        jogo[2][2]=1;

    //Vencedor horizontal
    if((jogo[0][0]==X && jogo[0][1]==X && jogo[0][2]==X)||(jogo[0][0]==O && jogo[0][1]==O && jogo[0][2]==O)){   
        cout << "\nJogo Finalizado. " << endl;
    }
     if((jogo[1][0]==X && jogo[1][1]==X && jogo[1][2]==X)||(jogo[1][0]==O && jogo[1][1]==O && jogo[1][2]==O)){ 
        cout << "\nJogo Finalizado. " << endl;
    }
     if((jogo[2][0]==X && jogo[2][1]==X && jogo[2][2]==X)||(jogo[2][0]==O && jogo[2][1]==O && jogo[2][2]==O)){ 
        cout << "\nJogo Finalizado. " << endl;
    }
    //Vencedor vertical
     if((jogo[0][0]==X && jogo[1][0]==X && jogo[2][0]==X)||(jogo[0][0]==O && jogo[1][0]==O && jogo[2][0]==O)){
        cout << "\nJogo Finalizado. " << endl;
    }
     if((jogo[0][1]==X && jogo[1][1]==X && jogo[2][1]==X)||(jogo[0][1]==O && jogo[1][1]==O && jogo[2][1]==O)){
        cout << "\nJogo Finalizado. " << endl;
    }
     if((jogo[0][2]==X && jogo[1][2]==X && jogo[2][2]==X)||(jogo[0][2]==O && jogo[1][2]==O && jogo[2][2]==O)){ 
        cout << "\nJogo Finalizado. " << endl;
    }
    //Vencedor Diagonal
     if((jogo[0][2]==X && jogo[1][1]==X && jogo[2][0]==X)||(jogo[0][0]==O && jogo[1][1]==O && jogo[2][0]==O)){ 
        cout << "\nJogo Finalizado. " << endl;
    }
     if((jogo[0][0]==X && jogo[1][1]==X && jogo[2][2]==X)||(jogo[0][0]==O && jogo[1][1]==O && jogo[2][2]==O)){ 
        cout << "\nJogo Finalizado. " << endl;
    }
}
int inserir_elemento1(int posicao, int jog1){//Inserir elementos do primeiro jogador
    int jogo[3][3],l,c,valor;
    int apenas_funcao=0,ganhar_jogo1;

        jogo[0][0]=9;
        jogo[0][1]=8;
        jogo[0][2]=7;

        jogo[1][0]=6;
        jogo[1][1]=5;
        jogo[1][2]=4;

        jogo[2][0]=3;
        jogo[2][1]=2;
        jogo[2][2]=1;

        apenas_funcao=vencedor(jogo);
        ganhar_jogo1=apenas_funcao;

        if(!ganhar_jogo1){
            for(l=0;l<3;l++){
			    for(c=0;c<3;c++){
				    if(jogo[l][c]==posicao){
                        return jogo[l][c]==jog1;
                        cout << "\n" << jogo[l][c] << " | " ;
                    }else{
                        continue;
                    }
			    }
            cout << endl;
		} 
    }    
}

int inserir_elemento2(int posicao,int jog2){//Inserir elementos do segundo jogador
    int jogo[3][3],l,c,valor;
    int apenas_funcao,ganhar_jogo2=0;

        jogo[0][0]=9;
        jogo[0][1]=8;
        jogo[0][2]=7;

        jogo[1][0]=6;
        jogo[1][1]=5;
        jogo[1][2]=4;

        jogo[2][0]=3;
        jogo[2][1]=2;
        jogo[2][2]=1;

        apenas_funcao=vencedor(jogo);
        ganhar_jogo2=apenas_funcao;

        if(!ganhar_jogo2){
        for(l=0;l<3;l++){
			for(c=0;c<3;c++){
				if(jogo[l][c]==posicao){
                    return jogo[l][c]==jog2;
                    cout << "\n" <<jogo[l][c] << " | " << endl ;
                }else{
                    continue;
                }
			}
            cout << endl;
	    } 
    }
}
int main (){

    setlocale(LC_ALL,"Portuguese");

    cout << "\nSeja Bem-Vindo ao jogo da Velha.";
    cout << "\n=========================================" << endl;
    cout << "\nSelecione 1 para X ou 2 para O." << endl;
    cout << "\n=========================================" << endl;

        cout << "\n9"<< "|"<< "8" << "|" << "7" << endl;
        cout << "6"<< "|" << "5" << "|" << "4" << endl;
        cout << "3" << "|" << "2" << "|" << "1" << endl;
       
       int jogador1,jogador2,posicao;

       cout << "\nJogador 1. Insira seu elemento.";
       cin >> jogador1;

       cout << "\nInforme a posicao. ";
       cin >> posicao;

       cout << inserir_elemento1(posicao,jogador1);
       
       cout << "\nJogador 2. Insira seu elemento.";
       cin >> jogador2;

       cout << "\nInforme a posicao. ";
       cin >> posicao;

       cout << inserir_elemento2(posicao,jogador2);

    return 0;
}