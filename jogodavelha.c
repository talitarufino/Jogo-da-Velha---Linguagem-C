/* Jogo da Velha - Linguagem C
   Autor: Talita Rufino da Silva
   Professor Responsável: Enir da Silva Fonseca */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void tabuleiro (char casa[9]){

SetConsoleTitle("Jogo da Velha");
    system("color D");



// limpando a tela
    system("cls");

    // Iniciação do tabuleiro
        printf ("\t\t %c | %c | %c \n",casa [0],casa [1],casa[2]);
        printf ("\t\t-----------\n");
        printf ("\t\t %c | %c | %c \n",casa [3],casa [4],casa[5]);
        printf ("\t\t-----------\n");
        printf ("\t\t %c | %c | %c \n\n",casa [6],casa [7],casa [8]);
}
        int main (){
        char casa [9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
        tabuleiro (casa);
        char resultado;
        int cont_jogadas,jogada,vez = 0,i;


        do{
            cont_jogadas = 1;
            for (i=0;i<=8;i++){
                    casa[i] = ' ';
    }
        do{
            tabuleiro(casa);
        printf ("DIGITE A CASA QUE DESEJA MARCAR [1-0] : ");
        scanf("%i",&jogada);
        if (jogada < 1 || jogada > 9){
    jogada = 0;
    }else if (casa[jogada-1] != ' '){
    jogada = 0;
            }else{
        if (vez %2==0){
        casa [jogada-1]= 'X';
            }else{
        casa [jogada-1]= 'O';
            }
        cont_jogadas++;
        vez++;
   }
        if (casa[0]== 'X' && casa [1]== 'X' && casa[2]=='X') {cont_jogadas = 11;}
        if (casa[3]== 'X' && casa [4]== 'X' && casa[5]=='X') {cont_jogadas = 11;}
        if (casa[6]== 'X' && casa [7]== 'X' && casa[8]=='X') {cont_jogadas = 11;}
        if (casa[0]== 'X' && casa [3]== 'X' && casa[6]=='X') {cont_jogadas = 11;}
        if (casa[1]== 'X' && casa [4]== 'X' && casa[7]=='X') {cont_jogadas = 11;}
        if (casa[2]== 'X' && casa [5]== 'X' && casa[8]=='X') {cont_jogadas = 11;}
        if (casa[0]== 'X' && casa [4]== 'X' && casa[8]=='X') {cont_jogadas = 11;}
        if (casa[2]== 'X' && casa [4]== 'X' && casa[6]=='X') {cont_jogadas = 11;}

        if (casa[0]== 'O' && casa [1]== 'O' && casa[2]=='O') {cont_jogadas = 11;}
        if (casa[3]== 'O' && casa [4]== 'O' && casa[5]=='O') {cont_jogadas = 11;}
        if (casa[6]== 'O' && casa [7]== 'O' && casa[8]=='O') {cont_jogadas = 11;}
        if (casa[0]== 'O' && casa [3]== 'O' && casa[6]=='O') {cont_jogadas = 11;}
        if (casa[1]== 'O' && casa [4]== 'O' && casa[7]=='O') {cont_jogadas = 11;}
        if (casa[2]== 'O' && casa [5]== 'O' && casa[8]=='O') {cont_jogadas = 11;}
        if (casa[0]== 'O' && casa [4]== 'O' && casa[8]=='O') {cont_jogadas = 11;}
        if (casa[2]== 'O' && casa [4]== 'O' && casa[6]=='O') {cont_jogadas = 11;}

            }while (cont_jogadas <= 9);
            tabuleiro(casa);
        if(cont_jogadas==10){
        printf ("O JOGO FICOU EMPATADO. JOGUE NOVAMENTE E CONQUISTE SUA VITORIA!!! \n");
        }if (cont_jogadas==11){
        printf ("O VENCEDOR FOI: X , PARABENS!!  <3 \n\n");
        }if(cont_jogadas==12){
        printf ("O VENCEDOR FOI: O , PARABENS!!  <3 \n\n");

  }
        printf ("DESEJA JOGAR NOVAMENTE?[S-N]\n");
        scanf ("%s",&resultado);
            }while(resultado=='s');

    return 0;

}

