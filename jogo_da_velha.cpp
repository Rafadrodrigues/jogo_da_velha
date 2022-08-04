#include<iostream>
#include<locale.h>
#include<stdlib.h>
using namespace std;

//Agora só preciso fazer uma condição de parada para quando um jogador ganhar voltar para o inicio.
void menu(int opcao){
    switch (opcao)
    {
    case 01:
    system("cls");
        break;
    case 02:
        cout << "\t\nPara selecionar a posicao que deseja inserir o elemento\t\nprimeiro escolha logo apos a coluna.";
        cout << "\t\nQuem fizer primeiro a sequencia de 3 simbolos seguidos ganha o jogo.";
        cout << "\t\nCaso deseje sair do jogo, apenas o fim da partida digite o numero 3.";
        break;
    case 03:
        exit(3);
        break;
    default:
        break;
    }
}
void mostrar_jogo(char estrutura[3][3]){ // Estrutura do jogo.
        cout << "\n\t"<<estrutura[0][0] << " | " << estrutura[0][1]<< " | " << estrutura[0][2];
        cout << "\n\t--|---|--";
        cout << "\n\t"<<estrutura[1][0] << " | "<< estrutura[1][1] << " | "<< estrutura[1][2];
        cout << "\n\t--|---|--";
        cout << "\n\t"<< estrutura[2][0] << " | "<< estrutura[2][1] << " | "<< estrutura[2][2] << "\n";
    }    
int vencedor(char estrutura[3][3]){ // Possíveis chances de vencer.
    if(estrutura[0][0]=='X' && estrutura[0][1]=='X' && estrutura[0][2]=='X'){
        cout << "\nParabens, voce venceu." << endl;
    }else if(estrutura[1][0]=='X' && estrutura[1][1]=='X' && estrutura[1][2]=='X'){
        cout << "\nParabens, voce venceu." << endl;
    }else if (estrutura[2][0]=='X' && estrutura[2][1]=='X' && estrutura[2][2]=='X'){
        cout << "\nParabens, voce venceu." << endl;
    }else if (estrutura[0][0]=='X' && estrutura[1][0]=='X' && estrutura[2][0]=='X'){
        cout << "\nParabens, voce venceu." << endl;
    }else if (estrutura[0][1]=='X' && estrutura[1][1]=='X' && estrutura[2][1]=='X'){
        cout << "\nParabens, voce venceu." << endl;
    }else if (estrutura[0][2]=='X' && estrutura[1][2]=='X' && estrutura[2][2]=='X'){
        cout << "\nParabens, voce venceu." << endl;
    }else if (estrutura[0][0]=='X' && estrutura[1][1]=='X' && estrutura[2][2]=='X'){
        cout << "\nParabens, voce venceu." << endl;
    }else if (estrutura[0][2]=='X' && estrutura[1][1]=='X' && estrutura[2][0]=='X'){
        cout << "\nParabens, voce venceu." << endl;
    }else if(estrutura[0][0]=='O' && estrutura[0][1]=='O' && estrutura[0][2]=='O'){
        cout << "\nParabens, voce venceu." << endl;
    }else if(estrutura[1][0]=='O' && estrutura[1][1]=='O' && estrutura[1][2]=='O'){
        cout << "\nParabens, voce venceu." << endl;
    }else if (estrutura[2][0]=='O' && estrutura[2][1]=='O' && estrutura[2][2]=='O'){
        cout << "\nParabens, voce venceu." << endl;
    }else if (estrutura[0][0]=='O' && estrutura[1][0]=='O' && estrutura[2][0]=='O'){
        cout << "\nParabens, voce venceu." << endl;
    }else if (estrutura[0][1]=='O' && estrutura[1][1]=='O' && estrutura[2][1]=='O'){
        cout << "\nParabens, voce venceu." << endl;
    }else if (estrutura[0][2]=='O' && estrutura[1][2]=='O' && estrutura[2][2]=='O'){
        cout << "\nParabens, voce venceu." << endl;
    }else if (estrutura[0][0]=='O' && estrutura[1][1]=='O' && estrutura[2][2]=='O'){
        cout << "\nParabens, voce venceu." << endl;
    }else if (estrutura[0][2]=='O' && estrutura[1][1]=='O' && estrutura[2][0]=='O'){
        cout << "\nParabens, voce venceu." << endl;
    }
}
int jogador1(int linha1,int coluna1,int linha2,int coluna2,char matriz[3][3]){
    if((linha1<0)|| (coluna1<0) || (linha1>3) || (coluna1>3)){//Condições em que o jogo daria errado
        cout << "\nJogada invalida.";
            }else if((linha1==linha2)&&(coluna1==coluna2)){
                cout << "\nEssa posicao ja esta sendo ocupada, tente novamente." << endl;
            }else{
                matriz[linha1-1][coluna1-1]='X';//Para que a linha e coluna selecionada esteja de acordo ao vetor, Ex.linha-1 corresponde char=[0]
                system("cls");
                mostrar_jogo(matriz);
                vencedor(matriz);//Avaliar condiçao de vencedor .
            }
}
int jogador2(int linha2,int coluna2,int linha1,int coluna1,char matriz[3][3]){
     if((linha2<1)|| (coluna2<1)||(linha2>3)||(coluna2>3)){//Condições em que o jogo daria errado
        cout << "\nJogada invalida.";
            }else if((linha2==linha1)&&(coluna2==coluna1)){
                cout << "\nEssa posicao ja esta sendo ocupada, tente novamente." << endl;
            }else{
                matriz[linha2-1][coluna2-1]='O';
                system("cls");
                mostrar_jogo(matriz);
                vencedor(matriz);
            }
}
int main (){

    setlocale(LC_ALL,"Portuguese");

    int opcao_jogo;
    int linha1,coluna1,linha2,coluna2,quantidade_de_jogadas=1;//Criei duas variavel para linha e coluna, apenas para me facilitar na construção
    char matriz[3][3]={{' ',' ',' ',},{' ',' ',' ',},{' ',' ',' '}};
        
    cout << "\nSeja Bem-Vindo ao jogo da Velha.";
    cout << "\n=========================================" << endl;
    cout << "\t\n1-Novo jogo: " << endl;
    cout << "\t\n2-Instrucoes: " << endl;
    cout << "\t\n3-Sair do jogo." << endl; 

    cout << "\nSelecione: ";
    cin >> opcao_jogo;
        
        menu(opcao_jogo);
        cout << "\n=========================================" << endl;
        cout << "\nSelecione X ou O." << endl;
        cout << "\n=========================================" << endl;
        
        mostrar_jogo(matriz);
    
            while (quantidade_de_jogadas<=9){// o máximo de jogadas que pode ter no jogo.
            quantidade_de_jogadas++;//contador para quantidade de jogadas.

            cout << "\nJogador 01-" << "X";

            cout << "\nInforme a linha que deseja inserir o elemento: ";
            cin >> linha1;

            cout << "\nInforme a coluna que deseja inserir o elemento: ";
            cin >> coluna1;

            jogador1(linha1,coluna1,linha2,coluna2,matriz);
                
            cout << "\nJogador 02-" << "O";
            cout << "\nInforme a linha que deseja inserir o elemento: ";
            cin >> linha2;

            cout << "\nInforme a coluna que deseja inserir o elemento: ";
            cin >> coluna2;
            
            jogador2(linha2,coluna2,linha1,coluna1,matriz);
        }
    return 0;
}   