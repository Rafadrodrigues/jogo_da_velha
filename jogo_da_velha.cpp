#include<iostream>
#include<locale.h>
#include<stdlib.h>
using namespace std;

//Função responsável pela estrutura do jogo.
void mostrar_jogo(char estrutura[3][3]){ // Estrutura do jogo.
        cout << "\n\t"<<estrutura[0][0] << " | " << estrutura[0][1]<< " | " << estrutura[0][2];
        cout << "\n\t--|---|--";
        cout << "\n\t"<<estrutura[1][0] << " | "<< estrutura[1][1] << " | "<< estrutura[1][2];
        cout << "\n\t--|---|--";
        cout << "\n\t"<< estrutura[2][0] << " | "<< estrutura[2][1] << " | "<< estrutura[2][2] << "\n";
}
//Função de avaliação do vencedor.
bool vencedor(char estrutura[3][3]){ // Possíveis chances de vencer. Talvez precise alterar
    if(estrutura[0][0]=='X' && estrutura[0][1]=='X' && estrutura[0][2]=='X'){
        return true;
    }else if(estrutura[1][0]=='X' && estrutura[1][1]=='X' && estrutura[1][2]=='X'){
        return true;
    }else if (estrutura[2][0]=='X' && estrutura[2][1]=='X' && estrutura[2][2]=='X'){
        return true;
    }else if (estrutura[0][0]=='X' && estrutura[1][0]=='X' && estrutura[2][0]=='X'){
        return true;
    }else if (estrutura[0][1]=='X' && estrutura[1][1]=='X' && estrutura[2][1]=='X'){
        return true;
    }else if(estrutura[0][2]=='X' && estrutura[1][2]=='X' && estrutura[2][2]=='X'){
        return true;
    }else if(estrutura[0][0]=='X' && estrutura[1][1]=='X' && estrutura[2][2]=='X'){
        return true;
    }else if(estrutura[0][2]=='X' && estrutura[1][1]=='X' && estrutura[2][0]=='X'){
        return true;
    }else if(estrutura[0][0]=='O' && estrutura[0][1]=='O' && estrutura[0][2]=='O'){
        return true;
    }else if(estrutura[1][0]=='O' && estrutura[1][1]=='O' && estrutura[1][2]=='O'){
        return true;
    }else if (estrutura[2][0]=='O' && estrutura[2][1]=='O' && estrutura[2][2]=='O'){
        return true;
    }else if (estrutura[0][0]=='O' && estrutura[1][0]=='O' && estrutura[2][0]=='O'){
        return true;
    }else if (estrutura[0][1]=='O' && estrutura[1][1]=='O' && estrutura[2][1]=='O'){
        return true;
    }else if (estrutura[0][2]=='O' && estrutura[1][2]=='O' && estrutura[2][2]=='O'){
        return true;
    }else if (estrutura[0][0]=='O' && estrutura[1][1]=='O' && estrutura[2][2]=='O'){
        return true;
    }else if (estrutura[0][2]=='O' && estrutura[1][1]=='O' && estrutura[2][0]=='O'){
        return true;
    }else{
        return false;
    }
}
int main (){

    setlocale(LC_ALL, "portuguese");
    
    inicio:int linha1,coluna1,linha2,coluna2,quantidade_de_rodadas=1;//Criei duas variavel para linha e coluna, apenas para me facilitar na construção
    char matriz[3][3]={{' ',' ',' ',},{' ',' ',' ',},{' ',' ',' '}};
    int opcao_jogo;
    
    cout << "\nSeja Bem-Vindo ao jogo da Velha.";
    cout << "\n=========================================" << endl;
    cout << "\t\n1-Iniciar: " << endl;
    cout << "\t\n2-Sair do jogo." << endl; 
    cout << "\n=========================================" << endl;
    cout << "\nSelecione: ";
    cin >> opcao_jogo;
    cout << "\n=========================================" << endl;

        if(opcao_jogo==1){
            while(vencedor(matriz)!=true){
                if(quantidade_de_rodadas==9){//Caso o jogo saia empatado, termina por ai mesmo.
                    cout << "\nJogo empatado." << endl;
                    goto inicio;
                }
                jog1:cout << "\nJogador-X";

                cout << "\nInforme a linha que deseja inserir o elemento: ";
                cin >> linha1;

                cout << "\nInforme a coluna que deseja inserir o elemento: ";
                cin >> coluna1;

                if((linha1<0)|| (coluna1<0) || (linha1>3) || (coluna1>3)){//Condições em que o jogo daria errado
                    cout << "\nJogada invalida.";
                    goto jog1;
                }if((linha1==linha2)&&(coluna1==coluna2)){
                    cout << "\nEssa posicao ja esta sendo ocupada, tente novamente." << endl;
                    goto jog1;
                }else{
                    matriz[linha1-1][coluna1-1]='X';//Para que a linha e coluna selecionada esteja de acordo ao vetor, Ex.linha-1 corresponde char=[0]
                        system("cls");
                        mostrar_jogo(matriz);
                        quantidade_de_rodadas++;
                        if(vencedor(matriz)==true){//Condicional se o jogador ganhar.
                            cout << "\nParabéns, você venceu." << endl;
                            goto inicio;//Essa instrução é para que o programa se um salto para lugar indicado "incio" ajuda encontrada em videos.
                        }  
                }
                    jog2:cout << "\nJogador-O";
                    cout << "\nInforme a linha que deseja inserir o elemento: ";
                    cin >> linha2;

                    cout << "\nInforme a coluna que deseja inserir o elemento: ";
                    cin >> coluna2;
                    
                    if((linha2<1)|| (coluna2<1)||(linha2>3)||(coluna2>3)){//Condições em que o jogo daria errado
                        cout << "\nJogada invalida.";
                        goto jog2;
                    }if((linha2==linha1)&&(coluna2==coluna1)){
                        cout << "\nEssa posicao ja esta sendo ocupada, tente novamente." << endl;
                        goto jog2;
                    }else{
                        matriz[linha2-1][coluna2-1]='O';
                        system("cls");
                        mostrar_jogo(matriz);
                        quantidade_de_rodadas++;
                        if(vencedor(matriz)==true){//Condicional se o jogador ganhar.
                            cout << "\nParabéns, você venceu." << endl;
                            goto inicio;
                        }  
                    }
                }
            }
    return 0;
}