#include<iostream>
#include<locale.h>
using namespace std;
/*Criar um jogo da velha em c++*/

#define X=1;
#define O=2;
#define vazio=0;
/**/
//Função para que o usuario 1  insira qual elemento deseja. 
int inserir1(int num1){ 
        if (num1==X){ //Condicional para identificar qual elemento foi selecionado
            cout << "X";
        }else if(num1==O){
            cout << "O";
        }
    return num1;
}
//Função para que o usuario 2 insira qual elemento deseja.
int inserir2(int num2){  
    //Condicional para identificar qual elemento foi selecionado
        if (num2==X){
            cout << "X";
        }else if(num2==O){
            cout << "O";
        }
    return num2;
}
int inserir_posicao(){
    int posicao;
            cout << "\nPara escolher a posição, digite o número correspondente. ";
            cin >> posicao;
            cout << "\n======================================================================="<< endl;
        return posicao;
} 
int vencedor(X,O){ //Çondições para ganhar o jogo

    int formato [3][3]; // Dividir em vários if's

    //Aceitas por O
    if(formato[2][0]==O && formato[2][1]==O && formato[2][2]==O){
        return O;
    } 
    if(formato[1][0]==O && formato[1][1]==O && formato[1][2]==O){
        return O;
    }
    if(formato[0][0]==O && formato[0][1]==O && formato[0][2]==O){
        return O;
    }
    if(formato[2][0]==O && formato[1][1]==O && formato[0][2]==O){
        return O;
    }
    if(formato[2][2]==O && formato[1][1]==O && formato[0][0]==O){
        return O;
    }
    if(formato[2][1]==O && formato[1][1]==O && formato[0][1]==O){
        return O;
    }
    if(formato[2][0]==O && formato[1][0]==O && formato[0][0]==O){
        return O;
    }
    if(formato[2][1]==O && formato[1][1]==O && formato[0][1]==O){
        return O;
    }
    if(formato[2][2]==O && formato[1][2]==O && formato[0][2]==O){
        return O;
    }
    //Aceitas por X
    if(formato[2][0]==X && formato[2][1]==X && formato[2][2]==X){
        return X;
    }
    if(formato[1][0]==X && formato[1][1]==X && formato[1][2]==X){
        return X;
    }
    if(formato[0][0]==X && formato[0][1]==X && formato[0][2]==X){
        return X;
    }
    if(formato[2][0]==X && formato[1][1]==X && formato[0][2]==X){
        return X;
    }
    if(formato[2][2]==X && formato[1][1]==X && formato[0][0]==X){
        return X;
    } 
    if(formato[2][1]==X && formato[1][1]==X && formato[0][1]==X){
        return X;
    } 
    if(formato[2][0]==X && formato[1][0]==X && formato[0][0]==X){
        return X;
    }
    if(formato[2][1]==X && formato[1][1]==X && formato[0][1]==X){
        return X;
    } 
    if(formato[2][2]==X && formato[1][2]==X && formato[0][2]==X){
        return X;
    } 
}
void montar_jogo(){
    int formato [3][3],venc=0,posicao=0;
    venc=vencedor();
    posicao=inserir_posicao();
        int i,j;//caso precise
    while(!venc){// Enquanto não houver vencedor, faça.
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                  formato[i][j];// Estruta de repetição para percorrer o vetor.   
                    if(formato[i][j]==posicao){
                        posicao==
                }  
            } 
        }
    }           
}
int main (){

    setlocale(LC_ALL,"Portuguese");

   cout << "\nSeja Bem-Vindo ao jogo da Velha.";
    cout << "\n=========================================" << endl;
    cout << "\nSelecione para X ou O." << endl;
    cout << "\n=========================================" << endl;

        cout << "\n9"<< "|"<< "8" << "|" << "7" << endl;
        cout << "6"<< "|" << "5" << "|" << "4" << endl;
        cout << "3" << "|" << "2" << "|" << "1" << endl;

        string valor1,valor2;
        
        int valor1;
        cout << "\nJogador 1. Insira o Símbolo: ";
        cout << "===========================================" << endl;
        cin >>valor1;

        int valor2;
        cout << "\nJogador 2. Insira o Símbolo: ";
        cout << "===========================================" << endl;
        cin >>valor2;

    return 0;
}