//jogo da velha2
/*
   PROGRAMA........: JOGO DA VELHA 2.0
   CRIADO EM.......: 01/02/2011
   TERMINADO EM....: 20/02/2011
   ATUALIZADO EM...: 20/02/2011
   AUTOR...........: WALLYSON NUNES
   E-MAIL..........: linho_msn_@hotmail.com
   DESCRIÇÃO.......: JOGO DA VELHA ONDE O OBJETIVO DO JOGO É FAZER
                     UMA SEQUENCIA DE 3 "X" OU DE 3 "O". O JOGADOR DEVE INFORMAR A POSIÇÃO
                     DA VELHA ONDE DESEJA FAZER A JOGADA.
*/
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;	
int main (void)
{
	
	 string nome[2],velha[9],tecla;
	int vencedor=0,i,pos1,pos2,dig[9],dig2[9],ja_teclou[9],posicao[9],opcao;
	
	srand(time(NULL)); // inicializa o gerador de números randômicos (aleatórios)
	
	for (i=0;i<9;i++){ // inicializa as variaveis preenchendo os valores inteiros com 0 e string com "_"
 	dig[i] = 0;
	dig2[i] = 0;
	velha[i] = "_";
	ja_teclou[i] = 0;
	posicao[i] = i+1;
	}
	
	cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";
	cout << "X                                                                     X\n";
	cout << "X      XXXXX    XXXXX     XXXX     XXXXX       XXXX       XXXXX       X\n";
    cout << "X         XX   XX   XX   XX       XX   XX      XX   X    XX   XX      X\n";
    cout << "X         XX   XX   XX   XX       XX   XX      XX    X   XX   XX      X\n";
    cout << "X         XX   XX   XX   XX       XX   XX      XX    X   XXXXXXX      X\n";
    cout << "X         XX   XX   XX   XX  XX   XX   XX      XX    X   XX   XX      X\n";
    cout << "X     X   XX   XX   XX   XX   X   XX   XX      XX   X    XX   XX      X\n";
    cout << "X      XXXX     XXXXX     XXXX     XXXXX       XXXX      XX   XX      X\n";
    cout << "X                                                                     X\n";    
    cout << "X      XX         XX   XXXXX     XX       XX      XX      XXXXX       X\n";
    cout << "X       XX       XX    XX        XX       XX      XX     XX   XX      X\n";
    cout << "X        XX     XX     XX        XX       XX      XX     XX   XX      X\n";
    cout << "X         XX   XX      XXXXX     XX       XXXXXXXXXX     XXXXXXX      X\n";
    cout << "X          XX XX       XX        XX       XX      XX     XX   XX      X\n";
    cout << "X           XXX        XXXXX     XXXXX    XX      XX     XX   XX      X\n";
	cout << "X                                                                     X\n";
	cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\n";
	cout << "         APERTER UMA LETRA E DIGITE ENTER PARA CONTINUAR !\n";
	 cin >> tecla;
    
    denovo: // volta aqui se ele digitou uma opção errada.
    
	 cout << "\n===============================================================\n";
	 cout << "\n Digite uma opção:\n\n 1- Jogador X Jogador:\n 2- Jogador X Computador:\n 3- Sair:\n\n";
	 cout << "===============================================================\n";
      cin >> opcao; 
    
    if (opcao == 1){
		cout << "\nDigite o nome do jogador 1 : ";
		 cin >> nome[0]; // recebe o nome do jogador 1
		cout << "Digite o nome do jogador 2 : ";
		 cin >> nome[1]; // recebe o nome do jogador 2
		cout << "\n===============================================================\n";
		cout << "Jogador 1 = X (" << nome[0] << ") \n";
		cout << "Jogador 2 = O (" << nome[1] << ") \n";
		cout << "===============================================================\n";
	}
	else if (opcao == 2){
		cout << "\nDigite o nome do jogador 1 : ";
		 cin >> nome[0]; // recebe o nome do jogador 1
		cout << "\n===============================================================\n";
		cout << "Jogador 1 = X (" << nome[0] << ") \n";
		cout << "Jogador 2 = O ( Computador ) \n";
		cout << "===============================================================\n"; 
	}
	else if (opcao == 3)			 
	     return 0;
	else{
		cout << "Escolheu a opção errada, digite novamente\n";
		 goto denovo;
	 }
			
	cout << "               Posições que podem ser escolhidas ! \n\n";
    cout << "                      XXXXXXXXXXXXXXXXXXXXXX\n";
	cout << "                      X                    X\n";
    cout << "                      X     _1_|_2_|_3_    X\n";
    cout << "                      X     _4_|_5_|_6_    X\n";
    cout << "                      X      7 | 8 | 9     X\n";
    cout << "                      X                    X\n";
    cout << "                      XXXXXXXXXXXXXXXXXXXXXX\n\n"; 
    
    for (i=0;i<=4;i++){ // executa até que as posições se esgotem
    errado: //volta aqui se o jogador1 digitou uma posição já marcada/errada
 
     cout << "Digite a posição "<< nome[0] << " : "; 
     cin >> pos1;
    
    // verifica se o usuario digitou posições erradas
    if (pos1<1 || pos1>9) { cout << "\nposição errada idiota ! repita a rodada de novo ! \n\n"; goto errado; }
	
	//verifica se o usuario ja digitou aquela posicao
    if (pos1 == posicao[0] && ja_teclou[0] == 1) { cout << "Você já digitou essa posição ! escolha outra ! \n\n"; goto errado; }
      else
    if (pos1 == posicao[1] && ja_teclou[1] == 1) { cout << "Você já digitou essa posição ! escolha outra ! \n\n"; goto errado; }
      else
    if (pos1 == posicao[2] && ja_teclou[2] == 1) { cout << "Você já digitou essa posição ! escolha outra ! \n\n"; goto errado; }
      else
    if (pos1 == posicao[3] && ja_teclou[3] == 1) { cout << "Você já digitou essa posição ! escolha outra ! \n\n"; goto errado; }
	  else
	if (pos1 == posicao[4] && ja_teclou[4] == 1) { cout << "Você já digitou essa posição ! escolha outra ! \n\n"; goto errado; }
	  else
	if (pos1 == posicao[5] && ja_teclou[5] == 1) { cout << "Você já digitou essa posição ! escolha outra ! \n\n"; goto errado; }
	  else
	if (pos1 == posicao[6] && ja_teclou[6] == 1) { cout << "Você já digitou essa posição ! escolha outra ! \n\n"; goto errado; }			  
	  else
	if (pos1 == posicao[7] && ja_teclou[7] == 1) { cout << "Você já digitou essa posição ! escolha outra ! \n\n"; goto errado; }
	  else
	if (pos1 == posicao[8] && ja_teclou[8] == 1) { cout << "Você já digitou essa posição ! escolha outra ! \n\n"; goto errado; }	
	
	switch (pos1){ //marca a jogada do jogador1
		
		case 1: velha[0] = "X"; dig[0]=1; ja_teclou[0]=1; break;
		case 2: velha[1] = "X"; dig[1]=1; ja_teclou[1]=1; break;
		case 3: velha[2] = "X"; dig[2]=1; ja_teclou[2]=1; break;
		case 4: velha[3] = "X"; dig[3]=1; ja_teclou[3]=1; break;
		case 5: velha[4] = "X"; dig[4]=1; ja_teclou[4]=1; break;
		case 6: velha[5] = "X"; dig[5]=1; ja_teclou[5]=1; break;
		case 7: velha[6] = "X"; dig[6]=1; ja_teclou[6]=1; break;
		case 8: velha[7] = "X"; dig[7]=1; ja_teclou[7]=1; break;
		case 9: velha[8] = "X"; dig[8]=1; ja_teclou[8]=1; break;
	}
		
	cout << "\n                     XXXXXXXXXXXXXXXXXXXXXXX\n";
	cout << "                     X                     X\n";
    cout << "                     X     _"<<velha[0]<<"_|_"<<velha[1]<<"_|_"<<velha[2]<<"_     X\n";
    cout << "                     X     _"<<velha[3]<<"_|_"<<velha[4]<<"_|_"<<velha[5]<<"_     X\n";
    cout << "                     X      "<<velha[6]<<" | "<<velha[7]<<" | "<<velha[8]<<"      X\n";
    cout << "                     X                     X\n";
    cout << "                     XXXXXXXXXXXXXXXXXXXXXXX\n\n"; 
		
    
     // condição para ver se o jogador1 foi o vencedor
	if (dig[0]==1 && dig[1]==1 && dig[2]==1) { vencedor = 1; break;	}
	  else
	if (dig[3]==1 && dig[4]==1 && dig[5]==1) { vencedor = 1; break; }
      else
	if (dig[6]==1 && dig[7]==1 && dig[8]==1) { vencedor = 1; break; }
	  else
	if (dig[0]==1 && dig[3]==1 && dig[6]==1) { vencedor = 1; break; }
      else
    if (dig[1]==1 && dig[4]==1 && dig[7]==1) { vencedor = 1; break; }
      else
    if (dig[2]==1 && dig[5]==1 && dig[8]==1) { vencedor = 1; break; }
	  else
	if (dig[0]==1 && dig[4]==1 && dig[8]==1) { vencedor = 1; break; }
	  else
	if (dig[2]==1 && dig[4]==1 && dig[6]==1) { vencedor = 1; break; }
		      
	if (i==4) { break; } // se i for igual ha 4 quer dizer que se esgotaram as opções na velha   
	
	if(opcao == 2){ //verfica se o usuario escolheu jogar com o computador
		errado3 : // volta aqui se o computador repetir um número
		pos2 = rand() % 9 + 1; //posição do computador recebe número aleatório de 1 a 9
		//inteligencia artificial do computador
		if (ja_teclou[4] == 0 && i==0)  pos2 = 5; //verifica se o usuario ja digitou aquela posição e se é a primeira jogada. E se a posição estiver vazia ele preenche com "0".
		
		else if (ja_teclou[4] == 1 && i==0) { 
			pos2 = rand() % 3 + 1; 
			if (pos2 == 2 || pos2 == 4 || pos2 == 6 || pos2 == 8) pos2 = 9; 
			}
		else if ((dig2[0]==1 && dig2[6]==1) && (ja_teclou[3]==0)) pos2 = 4; else if ((dig2[2]==1 && dig2[8]==1) && (ja_teclou[5]==0)) pos2 = 6; //verifica se o computador digitou "0" em duas posições que possibilitam ganhar o jogo
		else if ((dig2[0]==1 && dig2[8]==1) && (ja_teclou[5]==0)) pos2 = 5; else if ((dig2[2]==1 && dig2[6]==1) && (ja_teclou[4]==0)) pos2 = 5;
		else if ((dig2[0]==1 && dig2[2]==1) && (ja_teclou[1]==0)) pos2 = 2; else if ((dig2[6]==1 && dig2[8]==1) && (ja_teclou[7]==0)) pos2 = 8;
		else if ((dig2[0]==1 && dig2[3]==1) && (ja_teclou[6]==0)) pos2 = 7; else if ((dig2[2]==1 && dig2[5]==1) && (ja_teclou[8]==0)) pos2 = 9;
		else if ((dig2[6]==1 && dig2[3]==1) && (ja_teclou[0]==0)) pos2 = 1; else if ((dig2[8]==1 && dig2[5]==1) && (ja_teclou[2]==0)) pos2 = 3;
		else if ((dig2[0]==1 && dig2[1]==1) && (ja_teclou[2]==0)) pos2 = 3; else if ((dig2[2]==1 && dig2[1]==1) && (ja_teclou[0]==0)) pos2 = 1;
		else if ((dig2[6]==1 && dig2[7]==1) && (ja_teclou[8]==0)) pos2 = 9; else if ((dig2[8]==1 && dig2[7]==1) && (ja_teclou[6]==0)) pos2 = 6;
		else if ((dig2[0]==1 && dig2[4]==1) && (ja_teclou[8]==0)) pos2 = 9; else if ((dig2[2]==1 && dig2[4]==1) && (ja_teclou[6]==0)) pos2 = 7;
		else if ((dig2[6]==1 && dig2[4]==1) && (ja_teclou[2]==0)) pos2 = 3; else if ((dig2[8]==1 && dig2[4]==1) && (ja_teclou[0]==0)) pos2 = 1;
		else if ((dig2[1]==1 && dig2[4]==1) && (ja_teclou[7]==0)) pos2 = 8; else if ((dig2[7]==1 && dig2[4]==1) && (ja_teclou[1]==0)) pos2 = 2; 
		else if ((dig2[3]==1 && dig2[4]==1) && (ja_teclou[5]==0)) pos2 = 6; else if ((dig2[5]==1 && dig2[4]==1) && (ja_teclou[3]==0)) pos2 = 4; 
		
		else if (i==1 || i==2 || i==3){ // verifica se é jogada 1 e 2
				     if ((dig[0]==1 && dig[6]==1) && (ja_teclou[3]==0)) pos2 = 4; else if ((dig[2]==1 && dig[8]==1) && (ja_teclou[5]==0)) pos2 = 6; // se o usuario digitar dois "X" de forma que possa ganhar, o computador preenche com "0"
				else if ((dig[0]==1 && dig[8]==1) && (ja_teclou[4]==0)) pos2 = 5; else if ((dig[2]==1 && dig[6]==1) && (ja_teclou[4]==0)) pos2 = 5;
				else if ((dig[0]==1 && dig[2]==1) && (ja_teclou[1]==0)) pos2 = 2; else if ((dig[6]==1 && dig[8]==1) && (ja_teclou[7]==0)) pos2 = 8;
				else if ((dig[0]==1 && dig[3]==1) && (ja_teclou[6]==0)) pos2 = 7; else if ((dig[2]==1 && dig[5]==1) && (ja_teclou[8]==0)) pos2 = 9;
				else if ((dig[6]==1 && dig[3]==1) && (ja_teclou[0]==0)) pos2 = 1; else if ((dig[8]==1 && dig[5]==1) && (ja_teclou[2]==0)) pos2 = 3;
				else if ((dig[0]==1 && dig[1]==1) && (ja_teclou[2]==0)) pos2 = 3; else if ((dig[2]==1 && dig[1]==1) && (ja_teclou[0]==0)) pos2 = 1;
				else if ((dig[6]==1 && dig[7]==1) && (ja_teclou[8]==0)) pos2 = 9; else if ((dig[8]==1 && dig[7]==1) && (ja_teclou[6]==0)) pos2 = 7;
				else if ((dig[0]==1 && dig[4]==1) && (ja_teclou[8]==0)) pos2 = 9; else if ((dig[2]==1 && dig[4]==1) && (ja_teclou[6]==0)) pos2 = 7;
				else if ((dig[6]==1 && dig[4]==1) && (ja_teclou[2]==0)) pos2 = 3; else if ((dig[8]==1 && dig[4]==1) && (ja_teclou[0]==0)) pos2 = 1;
				else if ((dig[1]==1 && dig[4]==1) && (ja_teclou[7]==0)) pos2 = 8; else if ((dig[7]==1 && dig[4]==1) && (ja_teclou[1]==0)) pos2 = 2;
				else if ((dig[3]==1 && dig[4]==1) && (ja_teclou[5]==0)) pos2 = 6; else if ((dig[5]==1 && dig[4]==1) && (ja_teclou[3]==0)) pos2 = 4;
			}
				
          if (pos2 == posicao[0] && ja_teclou[0] == 1) goto errado3; //verifica se o computador já digitou aquela posição
       else
          if (pos2 == posicao[1] && ja_teclou[1] == 1) goto errado3;
       else
          if (pos2 == posicao[2] && ja_teclou[2] == 1) goto errado3;
        else
          if (pos2 == posicao[3] && ja_teclou[3] == 1) goto errado3;
		else
		  if (pos2 == posicao[4] && ja_teclou[4] == 1) goto errado3;
		else
		  if (pos2 == posicao[5] && ja_teclou[5] == 1) goto errado3;
		else
		  if (pos2 == posicao[6] && ja_teclou[6] == 1) goto errado3;		  
		else
		  if (pos2 == posicao[7] && ja_teclou[7] == 1) goto errado3;
		else
		  if (pos2 == posicao[8] && ja_teclou[8] == 1) goto errado3;
		
		switch (pos2){ // marca a posição do computador
		
		case 1: velha[0] = "O"; dig2[0]=1; ja_teclou[0]=1; break;
		case 2: velha[1] = "O"; dig2[1]=1; ja_teclou[1]=1; break;
		case 3: velha[2] = "O"; dig2[2]=1; ja_teclou[2]=1; break;
		case 4: velha[3] = "O"; dig2[3]=1; ja_teclou[3]=1; break;
		case 5: velha[4] = "O"; dig2[4]=1; ja_teclou[4]=1; break;
		case 6: velha[5] = "O"; dig2[5]=1; ja_teclou[5]=1; break;
		case 7: velha[6] = "O"; dig2[6]=1; ja_teclou[6]=1; break;
		case 8: velha[7] = "O"; dig2[7]=1; ja_teclou[7]=1; break;
		case 9: velha[8] = "O"; dig2[8]=1; ja_teclou[8]=1; break;
		}
	}
	
	else { // se o usuario escolher jogar com outra pessoa
      errado2: //volta aqui se o usuario 2 digitou um numero ja existente
    cout << "Digite a posição "<< nome[1] << " : ";  
     cin >> pos2;
		
		// verifica se o usuario digitou uma posição errada
		if (pos2<1 || pos2>9) { cout << "\nposição errada idiota ! repita a rodada de novo ! \n\n"; goto errado2; }
	
		//verifica se o usuario já digitou aquela posição
          if (pos2 == posicao[0] && ja_teclou[0] == 1) { cout << "Você já digitou essa posição ! escolha outra ! \n\n"; goto errado2; }
       else
          if (pos2 == posicao[1] && ja_teclou[1] == 1) { cout << "Você já digitou essa posição ! escolha outra ! \n\n"; goto errado2; }
       else
          if (pos2 == posicao[2] && ja_teclou[2] == 1) { cout << "Você já digitou essa posição ! escolha outra ! \n\n";	goto errado2; }
        else
          if (pos2 == posicao[3] && ja_teclou[3] == 1) { cout << "Você já digitou essa posição ! escolha outra ! \n\n"; goto errado2; }
		else
		  if (pos2 == posicao[4] && ja_teclou[4] == 1) { cout << "Você já digitou essa posição ! escolha outra ! \n\n"; goto errado2; }
		else
		  if (pos2 == posicao[5] && ja_teclou[5] == 1) { cout << "Você já digitou essa posição ! escolha outra ! \n\n"; goto errado2; }
		else
		  if (pos2 == posicao[6] && ja_teclou[6] == 1) { cout << "Você já digitou essa posição ! escolha outra ! \n\n"; goto errado2; }			  
		else
		  if (pos2 == posicao[7] && ja_teclou[7] == 1) { cout << "Você já digitou essa posição ! escolha outra ! \n\n"; goto errado2; }
		else
		  if (pos2 == posicao[8] && ja_teclou[8] == 1) { cout << "Você já digitou essa posição ! escolha outra ! \n\n"; goto errado2; }
	
		switch (pos2){ // marca a posição do jogador 2
		
		case 1: velha[0] = "O"; dig2[0]=1; ja_teclou[0]=1; break;
		case 2: velha[1] = "O"; dig2[1]=1; ja_teclou[1]=1; break;
		case 3: velha[2] = "O"; dig2[2]=1; ja_teclou[2]=1; break;
		case 4: velha[3] = "O"; dig2[3]=1; ja_teclou[3]=1; break;
		case 5: velha[4] = "O"; dig2[4]=1; ja_teclou[4]=1; break;
		case 6: velha[5] = "O"; dig2[5]=1; ja_teclou[5]=1; break;
		case 7: velha[6] = "O"; dig2[6]=1; ja_teclou[6]=1; break;
		case 8: velha[7] = "O"; dig2[7]=1; ja_teclou[7]=1; break;
		case 9: velha[8] = "O"; dig2[8]=1; ja_teclou[8]=1; break;
		}
	}
		
	cout << "\n                     XXXXXXXXXXXXXXXXXXXXXXX\n";
	cout << "                     X                     X\n";
    cout << "                     X     _"<<velha[0]<<"_|_"<<velha[1]<<"_|_"<<velha[2]<<"_     X\n";
    cout << "                     X     _"<<velha[3]<<"_|_"<<velha[4]<<"_|_"<<velha[5]<<"_     X\n";
    cout << "                     X      "<<velha[6]<<" | "<<velha[7]<<" | "<<velha[8]<<"      X\n";
    cout << "                     X                     X\n";
    cout << "                     XXXXXXXXXXXXXXXXXXXXXXX\n\n"; 
	
	//condição para ver se o jogador2/computador foi o vencedor  // se o jogador for vencedor ele sai do loop através da instrunção break
	
	if (dig2[0]==1 && dig2[1]==1 && dig2[2]==1) { vencedor = 2;  break; }
  else
	if (dig2[3]==1 && dig2[4]==1 && dig2[5]==1) { vencedor = 2;  break; }
  else
    if (dig2[6]==1 && dig2[7]==1 && dig2[8]==1) { vencedor = 2;  break; }
  else
	if (dig2[0]==1 && dig2[3]==1 && dig2[6]==1) { vencedor = 2;  break; } 
  else
    if (dig2[1]==1 && dig2[4]==1 && dig2[7]==1) { vencedor = 2;  break; }
  else
	if (dig2[2]==1 && dig2[5]==1 && dig2[8]==1) { vencedor = 2;  break; }
  else
	if (dig2[0]==1 && dig2[4]==1 && dig2[8]==1) { vencedor = 2;  break; }
  else
	if (dig2[2]==1 && dig2[4]==1 && dig2[6]==1) { vencedor = 2;  break; }
	
}
		if (vencedor == 1){
		  cout << "\n===============================================================\n";
		   cout << nome[0] << " Parabéns, você é o Fodão Master ! \n";
		  cout << "===============================================================\n";
		}
		else
		  if (vencedor == 2){
			cout << "\n===============================================================\n";  
		     if (opcao == 2)
				cout << "Computador Parabéns, você é o Fodão Master ! \n";
			 else
				cout << nome[1] << " Parabéns, você é o Fodão Master ! \n";
			cout << "===============================================================\n";
		}
		  else{
			cout << "\n===============================================================\n";  
		     cout << "Suas bestas, não conseguem ganhar um do outro ! bando de incopetentes ! \n";
			cout << "===============================================================\n";
		}
 return 0; 
 }
 
 
