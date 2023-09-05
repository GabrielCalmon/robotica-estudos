#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// Discentes:
// Felipe Valente - Validar quem ganhou
// Maria Eduarda - Menu
// Nicolas Dunham - Movimentacao
// Thamara Lins - Posicionar guerreiros
// Vagner dos Santos - Atacar

 char matriz[12][12] = {

	{ '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.' },
	{ '.', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '.' },
	{ '.', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '.' },
	{ '.', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '.' },
	{ '.', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '.' },
	{ '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.' },
	{ '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.' },
	{ '.', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '.' },
	{ '.', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '.' },
	{ '.', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '.' },
	{ '.', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '.' },
	{ '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.' },
	

};
	
 void Tabuleiro() {
 	
	    printf ("\n\n");
	    printf ("                                                              0   1   2   3   4   5   6   7   8   9  10  11  \n"); 
		printf ("                                                            -------------------------------------------------                                                          \n");
		printf ("                                                          0 | * | * | * | * | * | * | * | * | * | * | * | * |                                                          \n");
		printf ("                                                            -------------------------------------------------                                                          \n");
		printf ("                                                          1 | * | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | * |\n",matriz[1][1],matriz[1][2],matriz[1][3],matriz[1][4],matriz[1][5],matriz[1][6],matriz[1][7],matriz[1][8],matriz[1][9],matriz[1][10]);
		printf ("                                                            -------------------------------------------------                                                          \n");
        printf ("                                                          2 | * | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | * |\n",matriz[2][1],matriz[2][2],matriz[2][3],matriz[2][4],matriz[2][5],matriz[2][6],matriz[2][7],matriz[2][8],matriz[2][9],matriz[2][10]);
		printf ("                                                            -------------------------------------------------                                                          \n");
     	printf ("                                                          3 | * | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | * |\n",matriz[3][1],matriz[3][2],matriz[3][3],matriz[3][4],matriz[3][5],matriz[3][6],matriz[3][7],matriz[3][8],matriz[3][9],matriz[3][10]);
		printf ("                                                            -------------------------------------------------                                                          \n");
     	printf ("                                                          4 | * | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | * |\n",matriz[4][1],matriz[4][2],matriz[4][3],matriz[4][4],matriz[4][5],matriz[4][6],matriz[4][7],matriz[4][8],matriz[4][9],matriz[4][10]);
		printf ("                                                            -------------------------------------------------                                                          \n");
		printf ("                             N                            5 | * | ~ | ~ | ~ | ~ | ~ | ~ | ~ | ~ | ~ | ~ | * |                                                          \n");
		printf ("                           O + L                            -------------------------------------------------                           E - D                          \n");
		printf ("                             S                            6 | * | ~ | ~ | ~ | ~ | ~ | ~ | ~ | ~ | ~ | ~ | * |                                                          \n");
		printf ("                                                            -------------------------------------------------                                                          \n");
     	printf ("                                                          7 | * | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | * |\n",matriz[7][1],matriz[7][2],matriz[7][3],matriz[7][4],matriz[7][5],matriz[7][6],matriz[7][7],matriz[7][8],matriz[7][9],matriz[7][10]);
		printf ("                                                            -------------------------------------------------                                                          \n");
     	printf ("                                                          8 | * | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | * |\n",matriz[8][1],matriz[8][2],matriz[8][3],matriz[8][4],matriz[8][5],matriz[8][6],matriz[8][7],matriz[8][8],matriz[8][9],matriz[8][10]);
		printf ("                                                            -------------------------------------------------                                                          \n");
     	printf ("                                                          9 | * | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | * |\n",matriz[9][1],matriz[9][2],matriz[9][3],matriz[9][4],matriz[9][5],matriz[9][6],matriz[9][7],matriz[9][8],matriz[9][9],matriz[9][10]);
		printf ("                                                            -------------------------------------------------                                                          \n");
     	printf ("                                                         10 | * | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | * |\n", matriz[10][1],matriz[10][2],matriz[10][3],matriz[10][4],matriz[10][5],matriz[10][6],matriz[10][7],matriz[10][8],matriz[10][9],matriz[10][10]);
		printf ("                                                            -------------------------------------------------                                                          \n");
		printf ("                                                         11 | * | * | * | * | * | * | * | * | * | * | * | * |                                                          \n");
		printf ("                                                            -------------------------------------------------                                                          \n");

}

 void marcarUm(int lin, int col) {
	
	if(lin < 1 || lin > 10 || col < 1 || col > 10 || lin == 5 || lin == 6) {
		
		printf ("\n                                                                             POSIÇÃO INVÁLIDA!\n");
		
	}
		
	else{
		
    	matriz[lin][col] = '1';	
			
	}
}

 void marcarDois(int lin, int col) {
	
	if(lin < 1 || lin > 10 || col < 1 || col > 10 || lin == 5 || lin == 6) {
		
		printf ("\n                                                                             POSIÇÃO INVÁLIDA!\n");
		
	}
		
	else{
		
    	matriz[lin][col] = '2';	
			
	}
}

 void marcarArroba(int lin, int col){
	
	if(lin < 1 || lin > 10 || col < 1 || col > 10 || lin == 5 || lin == 6) {
		
		printf ("\n                                                                             POSIÇÃO INVÁLIDA!\n");
		
	}
	
	else{
		
    	matriz[lin][col] = '@';		
    	
	}
}

 void marcarHashtag(int lin, int col) {
	
	if (lin < 1 || lin > 10 || col < 1 || col > 10 || lin == 5 || lin == 6) {
		
		printf ("\n                                                                             POSIÇÃO INVÁLIDA!\n");
		
	}
			
	else{
		
    	matriz[lin][col] = '#';	
			
	}
}

 void printMenu() {
 	
 	  printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
 	  printf ("                                                                         -----------------------\n");
 	  printf ("                                                                         |Novo Jogo:          1|\n");
 	  printf ("                                                                         |Como jogar:         2|\n");
 	  printf ("                                                                         |Sair:               3|\n");
   	  printf ("                                                                         -----------------------\n\n");
   	  
}

 void PartidaIniciada() {
 
      printf ("\n                                                                            PARTIDA INICIADA\n");

}
 
 void IniciandoPartida() {
 	
 	  printf ("\n                                                                           INICIANDO PARTIDA\n");
 	
}

 int main() {
		
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int Sorteio, Temporizador, TemporizadorI, TemporizadorJ, VerificarNomes, Contar, l, c, A, C, D, E, F, H, I, X, Y, Z, G;
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, oo, ll, xx;
	int contar, contarum, contardois, contartres, contarquatro, contarcinco;
	char Menu, NomeUm[15], NomeDois[15], ArmazenarNomePrimeiro[15], ArmazenarNomeSegundo[15], B, Jogada, jj, kk;;
	
	A = 0;
	C = 8;
	E = 8;
	D = 1;
	F = 1;
	H = 1;
	I = 1;
	X = 1;
	Y = 1;
	Z = 1;
	G = 1;
	aa = 0;
	bb = 0;
	ee = 0;
	xx = 0;
		
	    printMenu();
     
        scanf (" %c", &Menu);
        
    while (Menu != '3') {   
    
    
      if (Menu != '0' && Menu != '1' && Menu != '2' && Menu != '3') {	
            
        system("cls");
        printMenu();
        printf ("\n\n\n\n\n                                                        VOCÊ DIGITOU O NÚMERO INCORRETAMENTE, DIGITE O NÚMERO CORRETO:\n");
        scanf (" %c", &Menu);
        
    }   
        
      else if (Menu == '0') {	
      
        system("cls");
        printMenu();
        scanf (" %c", &Menu);
        
 	}
      else if (Menu == '1') {
      	
      	system("cls");      	
      	
        IniciandoPartida();	    
	    printf ("Jogador 1, digite o seu primeiro nome ou o seu apelido: ");
	    scanf  (" %[^\n]s", NomeUm);
	    system ("cls");
	    
	    IniciandoPartida();	
	    printf ("Jogador 2, digite o seu primeiro nome ou o seu apelido: ");
	    scanf  (" %[^\n]s", NomeDois);
		system ("cls");
		
		VerificarNomes = strcmp (NomeUm, NomeDois);
		
		while (VerificarNomes == 0) {
			
		IniciandoPartida();	
		printf ("Este nome já foi escolhido, escolha um nome diferente: ");
	    scanf  (" %[^\n]s", NomeDois);
	    VerificarNomes = strcmp (NomeUm, NomeDois);
		system ("cls");	
			
		}
		
		srand(time(NULL)); 
		Sorteio = rand()%2;
		 
		if (Sorteio == 0) {
			
		 IniciandoPartida();	
		 strcpy (ArmazenarNomePrimeiro,NomeUm);
		 strcpy (ArmazenarNomeSegundo,NomeDois);
		 printf ("%s venceu o sorteio e, portanto, começará a partida!\n", ArmazenarNomePrimeiro);
		 
		} 
		
		else if (Sorteio == 1) {
			
		 IniciandoPartida();			 
		 strcpy (ArmazenarNomePrimeiro,NomeDois);
		 strcpy (ArmazenarNomeSegundo,NomeUm);
		 printf ("%s venceu o sorteio e, portanto, começará a partida!\n", ArmazenarNomePrimeiro);
		 
		} 
       
	    
        for (Temporizador = 3; Temporizador >= 0; Temporizador--) {	
					
		for (TemporizadorI = 0; TemporizadorI <= 1000000000; TemporizadorI++) {									
		
	    }
	      
	    printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf ("                                                                   ==================================               \n");      
	    printf ("                                                                   ||  A PARTIDA COMEÇARÁ EM: [%i]  ||\n", Temporizador);
	    printf ("                                                                   ==================================               \n");
	    
	    for (TemporizadorJ = 0; TemporizadorJ <= 1000000000; TemporizadorJ++) {									
		
	    }
	    
	    system ("cls"); 
	    
		IniciandoPartida();
	    printf ("%s venceu o sorteio e, portanto, começará a partida!\n", ArmazenarNomePrimeiro);
			    
	    }
		 
		system ("cls");  		
		PartidaIniciada();
				
		printf ("\n");
        printf ("                                                                  VEZ DE %s POSICIONAR O GUERREIRO\n\n", ArmazenarNomePrimeiro);
        printf ("                     Jogador: %s                                                                       Jogador: %s \n\n", ArmazenarNomePrimeiro, ArmazenarNomeSegundo);
        printf ("                     Quantidade de guerreiros '1' disponíveis: %i                    |                    ", C);
        printf ("Quantidade de guerreiros '1' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '2' disponíveis: %i                    |                    ", C);
	    printf ("Quantidade de guerreiros '2' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '@' disponíveis: %i                    |                    ", D);
	    printf ("Quantidade de guerreiros '@' disponíveis: %i\n", F);
	    printf ("                     Quantidade de guerreiros '#' disponíveis: %i                    |                    ", H);
	    printf ("Quantidade de guerreiros '#' disponíveis: %i\n", I);
        Tabuleiro();
	    printf("\n\nDigite o guerreiro, a linha e coluna para colocar o guerreiro no tabuleiro, exemplo: (2 1 1): ");
	    
	    A = 0;
	    
	    while (A < 18) {  
		    
	    scanf(" %c %i %i", &B, &l, &c);
	    system("cls");
	    
	    if (A%2 == 0) {
		
	    if (l == 7 || l == 8 || l == 9 || l == 10) {
		
		printf ("\n");
		printf ("                                                                  VEZ DE %s POSICIONAR O GUERREIRO\n\n", ArmazenarNomePrimeiro);
		printf ("\n                                                      VOCÊ NÃO PODE COLOCAR GUERREIROS NA PARTE DO TABULEIRO INIMIGO\n");
		printf ("\n");
        printf ("                     Jogador: %s                                                                       Jogador: %s \n\n", ArmazenarNomePrimeiro, ArmazenarNomeSegundo);
        printf ("                     Quantidade de guerreiros '1' disponíveis: %i                    |                    ", C);
        printf ("Quantidade de guerreiros '1' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '2' disponíveis: %i                    |                    ", C);
	    printf ("Quantidade de guerreiros '2' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '@' disponíveis: %i                    |                    ", D);
	    printf ("Quantidade de guerreiros '@' disponíveis: %i\n", F);
	    printf ("                     Quantidade de guerreiros '#' disponíveis: %i                    |                    ", H);
	    printf ("Quantidade de guerreiros '#' disponíveis: %i\n", I);
        Tabuleiro();
		printf("\n\nDigite o guerreiro, a linha e coluna para colocar o guerreiro no tabuleiro, exemplo: (2 1 1): ");
		
	}
		    	    
	    else if (matriz[l][c] == '1' || matriz[l][c] == '2' || matriz[l][c] == '@' || matriz[l][c] == '#') {
		
		printf ("\n");
	    printf ("                                                                  VEZ DE %s POSICIONAR O GUERREIRO\n\n", ArmazenarNomePrimeiro);	
	   	printf	("\n                                                             JÁ EXISTE UM GUERREIRO NESTA PARTE DO TABULEIRO\n");
	   	printf ("\n");
        printf ("                     Jogador: %s                                                                       Jogador: %s \n\n", ArmazenarNomePrimeiro, ArmazenarNomeSegundo);
        printf ("                     Quantidade de guerreiros '1' disponíveis: %i                    |                    ", C);
        printf ("Quantidade de guerreiros '1' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '2' disponíveis: %i                    |                    ", C);
	    printf ("Quantidade de guerreiros '2' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '@' disponíveis: %i                    |                    ", D);
	    printf ("Quantidade de guerreiros '@' disponíveis: %i\n", F);
	    printf ("                     Quantidade de guerreiros '#' disponíveis: %i                    |                    ", H);
	    printf ("Quantidade de guerreiros '#' disponíveis: %i\n", I);
        Tabuleiro();
		printf("\n\nDigite o guerreiro, a linha e coluna para colocar o guerreiro no tabuleiro, exemplo: (2 1 1): ");
	    
	}
				    		    
	    else if (l < 1 || l > 10 || c < 1 || c > 10 || l == 5 || l == 6) {
			
		printf ("\n");
		printf ("                                                                  VEZ DE %s POSICIONAR O GUERREIRO\n\n", ArmazenarNomePrimeiro);
		marcarUm(l, c);	
        printf ("                     Jogador: %s                                                                       Jogador: %s \n\n", ArmazenarNomePrimeiro, ArmazenarNomeSegundo);
        printf ("                     Quantidade de guerreiros '1' disponíveis: %i                    |                    ", C);
        printf ("Quantidade de guerreiros '1' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '2' disponíveis: %i                    |                    ", C);
	    printf ("Quantidade de guerreiros '2' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '@' disponíveis: %i                    |                    ", D);
	    printf ("Quantidade de guerreiros '@' disponíveis: %i\n", F);
	    printf ("                     Quantidade de guerreiros '#' disponíveis: %i                    |                    ", H);
	    printf ("Quantidade de guerreiros '#' disponíveis: %i\n", I);
        Tabuleiro();
		printf("\n\nDigite o guerreiro, a linha e coluna para colocar o guerreiro no tabuleiro, exemplo: (2 1 1): ");
	
	}
	    else if (B == '1') {
		
		if (C == 0) {
					
		printf ("\n");
		printf ("                                                                  VEZ DE %s POSICIONAR O GUERREIRO\n\n", ArmazenarNomePrimeiro);
		printf ("\n                                                     VOCÊ AINDA NÃO COLOCOU O GUERREIRO ESPECIAL, COLOQUE O GUERREIRO ESPECIAL!\n");
		printf ("\n");
        printf ("                     Jogador: %s                                                                       Jogador: %s \n\n", ArmazenarNomePrimeiro, ArmazenarNomeSegundo);
        printf ("                     Quantidade de guerreiros '1' disponíveis: %i                    |                    ", C);
        printf ("Quantidade de guerreiros '1' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '2' disponíveis: %i                    |                    ", C);
	    printf ("Quantidade de guerreiros '2' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '@' disponíveis: %i                    |                    ", D);
	    printf ("Quantidade de guerreiros '@' disponíveis: %i\n", F);
	    printf ("                     Quantidade de guerreiros '#' disponíveis: %i                    |                    ", H);
	    printf ("Quantidade de guerreiros '#' disponíveis: %i\n", I);
        Tabuleiro();
		printf("\n\nDigite o guerreiro, a linha e coluna para colocar o guerreiro no tabuleiro, exemplo: (2 1 1): ");	
	    
		}
		
		else {	
			
		marcarUm(l, c); 
		C = C - 1;
		printf ("\n");
		printf ("                                                                  VEZ DE %s POSICIONAR O GUERREIRO\n\n", ArmazenarNomeSegundo);
        printf ("                     Jogador: %s                                                                       Jogador: %s \n\n", ArmazenarNomePrimeiro, ArmazenarNomeSegundo);
        printf ("                     Quantidade de guerreiros '1' disponíveis: %i                    |                    ", C);
        printf ("Quantidade de guerreiros '1' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '2' disponíveis: %i                    |                    ", C);
	    printf ("Quantidade de guerreiros '2' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '@' disponíveis: %i                    |                    ", D);
	    printf ("Quantidade de guerreiros '@' disponíveis: %i\n", F);
	    printf ("                     Quantidade de guerreiros '#' disponíveis: %i                    |                    ", H);
	    printf ("Quantidade de guerreiros '#' disponíveis: %i\n", I);
        Tabuleiro();
		printf("\n\nDigite o guerreiro, a linha e coluna para colocar o guerreiro no tabuleiro, exemplo: (2 7 1): ");
		A = A + 1;
		
	}
	
	}	
	
	    else if (B == '2') {	
	
	    if (C == 0) {
		
	    printf ("\n");
		printf ("                                                                  VEZ DE %s POSICIONAR O GUERREIRO\n\n", ArmazenarNomePrimeiro);
		printf ("\n                                                     VOCÊ AINDA NÃO COLOCOU O GUERREIRO ESPECIAL, COLOQUE O GUERREIRO ESPECIAL!\n");
		printf ("\n");
        printf ("                     Jogador: %s                                                                       Jogador: %s \n\n", ArmazenarNomePrimeiro, ArmazenarNomeSegundo);
        printf ("                     Quantidade de guerreiros '1' disponíveis: %i                    |                    ", C);
        printf ("Quantidade de guerreiros '1' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '2' disponíveis: %i                    |                    ", C);
	    printf ("Quantidade de guerreiros '2' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '@' disponíveis: %i                    |                    ", D);
	    printf ("Quantidade de guerreiros '@' disponíveis: %i\n", F);
	    printf ("                     Quantidade de guerreiros '#' disponíveis: %i                    |                    ", H);
	    printf ("Quantidade de guerreiros '#' disponíveis: %i\n", I);
        Tabuleiro();
		printf("\n\nDigite o guerreiro, a linha e coluna para colocar o guerreiro no tabuleiro, exemplo: (2 1 1): ");
		
	}
	
	    else {
			
	    marcarDois(l, c);
		C = C - 1; 
		printf ("\n");
		printf ("                                                                  VEZ DE %s POSICIONAR O GUERREIRO\n\n", ArmazenarNomeSegundo);
        printf ("                     Jogador: %s                                                                       Jogador: %s \n\n", ArmazenarNomePrimeiro, ArmazenarNomeSegundo);
        printf ("                     Quantidade de guerreiros '1' disponíveis: %i                    |                    ", C);
        printf ("Quantidade de guerreiros '1' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '2' disponíveis: %i                    |                    ", C);
	    printf ("Quantidade de guerreiros '2' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '@' disponíveis: %i                    |                    ", D);
	    printf ("Quantidade de guerreiros '@' disponíveis: %i\n", F);
	    printf ("                     Quantidade de guerreiros '#' disponíveis: %i                    |                    ", H);
	    printf ("Quantidade de guerreiros '#' disponíveis: %i\n", I);
        Tabuleiro();
		printf("\n\nDigite o guerreiro, a linha e coluna para colocar o guerreiro no tabuleiro, exemplo: (2 7 1): ");
		A = A + 1;	
		
       }
				
	}
		
	    else if (B == '@') {	
	
	    if (Z == 1) {
					
	    if (X == 1) {
				
	    marcarArroba(l, c);
	    D = 0;
	    F = 0;
	    H = 0;
	    printf ("\n");
	    printf ("                                                                  VEZ DE %s POSICIONAR O GUERREIRO\n\n", ArmazenarNomeSegundo);
        printf ("                     Jogador: %s                                                                       Jogador: %s \n\n", ArmazenarNomePrimeiro, ArmazenarNomeSegundo);
        printf ("                     Quantidade de guerreiros '1' disponíveis: %i                    |                    ", C);
        printf ("Quantidade de guerreiros '1' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '2' disponíveis: %i                    |                    ", C);
	    printf ("Quantidade de guerreiros '2' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '@' disponíveis: %i                    |                    ", D);
	    printf ("Quantidade de guerreiros '@' disponíveis: %i\n", F);
	    printf ("                     Quantidade de guerreiros '#' disponíveis: %i                    |                    ", H);
	    printf ("Quantidade de guerreiros '#' disponíveis: %i\n", I);
        Tabuleiro();
		printf("\n\nDigite o guerreiro, a linha e coluna para colocar o guerreiro no tabuleiro, exemplo: (2 7 1): ");	
		A = A + 1;	
		X = X - 1;
		Z = Z - 1;	
		
	}	
	
	    else {
		
		printf ("\n");
	    printf ("                                                                  VEZ DE %s POSICIONAR O GUERREIRO\n\n", ArmazenarNomePrimeiro);
	    printf ("                                                    O GUERREIRO ESPECIAL '@' SÓ PODE SER POSICIONADO UMA VEZ NO TABULEIRO\n\n");
        printf ("                     Jogador: %s                                                                       Jogador: %s \n\n", ArmazenarNomePrimeiro, ArmazenarNomeSegundo);
        printf ("                     Quantidade de guerreiros '1' disponíveis: %i                    |                    ", C);
        printf ("Quantidade de guerreiros '1' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '2' disponíveis: %i                    |                    ", C);
	    printf ("Quantidade de guerreiros '2' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '@' disponíveis: %i                    |                    ", D);
	    printf ("Quantidade de guerreiros '@' disponíveis: %i\n", F);
	    printf ("                     Quantidade de guerreiros '#' disponíveis: %i                    |                    ", H);
	    printf ("Quantidade de guerreiros '#' disponíveis: %i\n", I);
        Tabuleiro();
		printf("\n\nDigite o guerreiro, a linha e coluna para colocar o guerreiro no tabuleiro, exemplo: (2 1 1): ");	
				
	}
	
    }
    
        else {
    	
    	printf ("\n");
	    printf ("                                                                  VEZ DE %s POSICIONAR O GUERREIRO\n\n", ArmazenarNomePrimeiro);
	    printf ("                                                                VOCÊ SÓ PODE TER UM GUERREIRO ESPECIAL\n\n");
        printf ("                     Jogador: %s                                                                       Jogador: %s \n\n", ArmazenarNomePrimeiro, ArmazenarNomeSegundo);
        printf ("                     Quantidade de guerreiros '1' disponíveis: %i                    |                    ", C);
        printf ("Quantidade de guerreiros '1' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '2' disponíveis: %i                    |                    ", C);
	    printf ("Quantidade de guerreiros '2' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '@' disponíveis: %i                    |                    ", D);
	    printf ("Quantidade de guerreiros '@' disponíveis: %i\n", F);
	    printf ("                     Quantidade de guerreiros '#' disponíveis: %i                    |                    ", H);
	    printf ("Quantidade de guerreiros '#' disponíveis: %i\n", I);
        Tabuleiro();
		printf("\n\nDigite o guerreiro, a linha e coluna para colocar o guerreiro no tabuleiro, exemplo: (2 1 1): ");
    	
	}
						
	}
		
	    else if (B == '#') {	
	
	    if (Z == 1) {
	
	    if (Y == 1) {
				
	    marcarHashtag(l, c);
	    H = 0;
	    D = 0;
	    I = 0;
	    printf ("\n");
	    printf ("                                                                  VEZ DE %s POSICIONAR O GUERREIRO\n\n", ArmazenarNomeSegundo);
        printf ("                     Jogador: %s                                                                       Jogador: %s \n\n", ArmazenarNomePrimeiro, ArmazenarNomeSegundo);
        printf ("                     Quantidade de guerreiros '1' disponíveis: %i                    |                    ", C);
        printf ("Quantidade de guerreiros '1' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '2' disponíveis: %i                    |                    ", C);
	    printf ("Quantidade de guerreiros '2' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '@' disponíveis: %i                    |                    ", D);
	    printf ("Quantidade de guerreiros '@' disponíveis: %i\n", F);
	    printf ("                     Quantidade de guerreiros '#' disponíveis: %i                    |                    ", H);
	    printf ("Quantidade de guerreiros '#' disponíveis: %i\n", I);
        Tabuleiro();
		printf("\n\nDigite o guerreiro, a linha e coluna para colocar o guerreiro no tabuleiro, exemplo: (2 7 1): ");
		A = A + 1;
		Y = Y - 1;
		Z = Z - 1;
		
	}
	
	    else {
		
	    printf ("\n");
	    printf ("                                                                  VEZ DE %s POSICIONAR O GUERREIRO\n\n", ArmazenarNomePrimeiro);
	    printf ("                                                    O GUERREIRO ESPECIAL '#' SÓ PODE SER POSICIONADO UMA VEZ NO TABULEIRO\n\n");
        printf ("                     Jogador: %s                                                                       Jogador: %s \n\n", ArmazenarNomePrimeiro, ArmazenarNomeSegundo);
        printf ("                     Quantidade de guerreiros '1' disponíveis: %i                    |                    ", C);
        printf ("Quantidade de guerreiros '1' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '2' disponíveis: %i                    |                    ", C);
	    printf ("Quantidade de guerreiros '2' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '@' disponíveis: %i                    |                    ", D);
	    printf ("Quantidade de guerreiros '@' disponíveis: %i\n", F);
	    printf ("                     Quantidade de guerreiros '#' disponíveis: %i                    |                    ", H);
	    printf ("Quantidade de guerreiros '#' disponíveis: %i\n", I);
        Tabuleiro();
		printf("\n\nDigite o guerreiro, a linha e coluna para colocar o guerreiro no tabuleiro, exemplo: (2 1 1): ");		
		
	}
	
    }
    
        else {
    
	    printf ("\n");
	    printf ("                                                                  VEZ DE %s POSICIONAR O GUERREIRO\n\n", ArmazenarNomePrimeiro);
	    printf ("                                                                VOCÊ SÓ PODE TER UM GUERREIRO ESPECIAL\n\n");
        printf ("                     Jogador: %s                                                                       Jogador: %s \n\n", ArmazenarNomePrimeiro, ArmazenarNomeSegundo);
        printf ("                     Quantidade de guerreiros '1' disponíveis: %i                    |                    ", C);
        printf ("Quantidade de guerreiros '1' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '2' disponíveis: %i                    |                    ", C);
	    printf ("Quantidade de guerreiros '2' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '@' disponíveis: %i                    |                    ", D);
	    printf ("Quantidade de guerreiros '@' disponíveis: %i\n", F);
	    printf ("                     Quantidade de guerreiros '#' disponíveis: %i                    |                    ", H);
	    printf ("Quantidade de guerreiros '#' disponíveis: %i\n", I);
        Tabuleiro();
		printf("\n\nDigite o guerreiro, a linha e coluna para colocar o guerreiro no tabuleiro, exemplo: (2 1 1): ");	
    	
	}
	
	}
	
	    else {
		
		printf ("\n");
		printf ("                                                                  VEZ DE %s POSICIONAR O GUERREIRO\n\n", ArmazenarNomePrimeiro);
		printf ("\n                                                                       ESCOLHA UM GUERREIRO VÁLIDO\n");
		printf ("\n");
        printf ("                     Jogador: %s                                                                       Jogador: %s \n\n", ArmazenarNomePrimeiro, ArmazenarNomeSegundo);
        printf ("                     Quantidade de guerreiros '1' disponíveis: %i                    |                    ", C);
        printf ("Quantidade de guerreiros '1' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '2' disponíveis: %i                    |                    ", C);
	    printf ("Quantidade de guerreiros '2' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '@' disponíveis: %i                    |                    ", D);
	    printf ("Quantidade de guerreiros '@' disponíveis: %i\n", F);
	    printf ("                     Quantidade de guerreiros '#' disponíveis: %i                    |                    ", H);
	    printf ("Quantidade de guerreiros '#' disponíveis: %i\n", I);
        Tabuleiro();
		printf("\n\nDigite o guerreiro, a linha e coluna para colocar o guerreiro no tabuleiro, exemplo: (2 1 1): ");	
	}
	
	}
	
	    else if (A%2 != 0) {
		
        if (l == 1 || l == 2 || l == 3 || l == 4) {
    	
    	printf ("\n");
		printf ("                                                                  VEZ DE %s POSICIONAR O GUERREIRO\n\n", ArmazenarNomeSegundo);
		printf ("\n                                                      VOCÊ NÃO PODE COLOCAR GUERREIROS NA PARTE DO TABULEIRO INIMIGO\n");
		printf ("\n");
        printf ("                     Jogador: %s                                                                       Jogador: %s \n\n", ArmazenarNomePrimeiro, ArmazenarNomeSegundo);
        printf ("                     Quantidade de guerreiros '1' disponíveis: %i                    |                    ", C);
        printf ("Quantidade de guerreiros '1' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '2' disponíveis: %i                    |                    ", C);
	    printf ("Quantidade de guerreiros '2' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '@' disponíveis: %i                    |                    ", D);
	    printf ("Quantidade de guerreiros '@' disponíveis: %i\n", F);
	    printf ("                     Quantidade de guerreiros '#' disponíveis: %i                    |                    ", H);
	    printf ("Quantidade de guerreiros '#' disponíveis: %i\n", I);
        Tabuleiro();
		printf("\n\nDigite o guerreiro, a linha e coluna para colocar o guerreiro no tabuleiro, exemplo: (2 7 1): ");
		
	}
		
	    else if (matriz[l][c] == '1' || matriz[l][c] == '2' || matriz[l][c] == '@' || matriz[l][c] == '#') {
		
		printf ("\n");
	    printf ("                                                                  VEZ DE %s POSICIONAR O GUERREIRO\n\n", ArmazenarNomeSegundo);	
	   	printf ("\n                                                          JÁ EXISTE UM GUERREIRO NESTA PARTE DO TABULEIRO\n");
	   	printf ("\n");
        printf ("                     Jogador: %s                                                                       Jogador: %s \n\n", ArmazenarNomePrimeiro, ArmazenarNomeSegundo);
        printf ("                     Quantidade de guerreiros '1' disponíveis: %i                    |                    ", C);
        printf ("Quantidade de guerreiros '1' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '2' disponíveis: %i                    |                    ", C);
	    printf ("Quantidade de guerreiros '2' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '@' disponíveis: %i                    |                    ", D);
	    printf ("Quantidade de guerreiros '@' disponíveis: %i\n", F);
	    printf ("                     Quantidade de guerreiros '#' disponíveis: %i                    |                    ", H);
	    printf ("Quantidade de guerreiros '#' disponíveis: %i\n", I);
        Tabuleiro();
		printf("\n\nDigite o guerreiro, a linha e coluna para colocar o guerreiro no tabuleiro, exemplo: (2 7 1): ");
			   		    	
	}
			    		    
	    else if (l < 1 || l > 10 || c < 1 || c > 10 || l == 5 || l == 6 ) {
				
		printf ("\n");
		printf ("                                                                  VEZ DE %s POSICIONAR O GUERREIRO\n\n", ArmazenarNomeSegundo);
		marcarUm(l, c);
        printf ("                     Jogador: %s                                                                       Jogador: %s \n\n", ArmazenarNomePrimeiro, ArmazenarNomeSegundo);
        printf ("                     Quantidade de guerreiros '1' disponíveis: %i                    |                    ", C);
        printf ("Quantidade de guerreiros '1' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '2' disponíveis: %i                    |                    ", C);
	    printf ("Quantidade de guerreiros '2' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '@' disponíveis: %i                    |                    ", D);
	    printf ("Quantidade de guerreiros '@' disponíveis: %i\n", F);
	    printf ("                     Quantidade de guerreiros '#' disponíveis: %i                    |                    ", H);
	    printf ("Quantidade de guerreiros '#' disponíveis: %i\n", I);
        Tabuleiro();
		printf("\n\nDigite o guerreiro, a linha e coluna para colocar o guerreiro no tabuleiro, exemplo: (2 7 1): ");
	
	}
	
	    else if (B == '1') {
		
		if (E == 0) {
			
		printf ("\n");
		printf ("                                                                  VEZ DE %s POSICIONAR O GUERREIRO\n\n", ArmazenarNomeSegundo);
		printf ("\n                                                     VOCÊ AINDA NÃO COLOCOU O GUERREIRO ESPECIAL, COLOQUE O GUERREIRO ESPECIAL!\n");
		printf ("\n");
        printf ("                     Jogador: %s                                                                       Jogador: %s \n\n", ArmazenarNomePrimeiro, ArmazenarNomeSegundo);
        printf ("                     Quantidade de guerreiros '1' disponíveis: %i                    |                    ", C);
        printf ("Quantidade de guerreiros '1' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '2' disponíveis: %i                    |                    ", C);
	    printf ("Quantidade de guerreiros '2' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '@' disponíveis: %i                    |                    ", D);
	    printf ("Quantidade de guerreiros '@' disponíveis: %i\n", F);
	    printf ("                     Quantidade de guerreiros '#' disponíveis: %i                    |                    ", H);
	    printf ("Quantidade de guerreiros '#' disponíveis: %i\n", I);
        Tabuleiro();
		printf("\n\nDigite o guerreiro, a linha e coluna para colocar o guerreiro no tabuleiro, exemplo: (2 7 1): ");
			
	}
		
		else {
		
		marcarUm(l, c); 
		E = E - 1;
		printf ("\n");
		printf ("                                                                  VEZ DE %s POSICIONAR O GUERREIRO\n\n", ArmazenarNomePrimeiro);
        printf ("                     Jogador: %s                                                                       Jogador: %s \n\n", ArmazenarNomePrimeiro, ArmazenarNomeSegundo);
        printf ("                     Quantidade de guerreiros '1' disponíveis: %i                    |                    ", C);
        printf ("Quantidade de guerreiros '1' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '2' disponíveis: %i                    |                    ", C);
	    printf ("Quantidade de guerreiros '2' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '@' disponíveis: %i                    |                    ", D);
	    printf ("Quantidade de guerreiros '@' disponíveis: %i\n", F);
	    printf ("                     Quantidade de guerreiros '#' disponíveis: %i                    |                    ", H);
	    printf ("Quantidade de guerreiros '#' disponíveis: %i\n", I);
        Tabuleiro();
		printf("\n\nDigite o guerreiro, a linha e coluna para colocar o guerreiro no tabuleiro, exemplo: (2 1 1): ");
		A = A + 1;
		
	}
	
	}
		
	    else if (B == '2') {	
	
	    if (E == 0) {
	    	
	    printf ("\n");
		printf ("                                                                  VEZ DE %s POSICIONAR O GUERREIRO\n\n", ArmazenarNomeSegundo);
		printf ("\n                                                     VOCÊ AINDA NÃO COLOCOU O GUERREIRO ESPECIAL, COLOQUE O GUERREIRO ESPECIAL!\n");
		printf ("\n");
        printf ("                     Jogador: %s                                                                       Jogador: %s \n\n", ArmazenarNomePrimeiro, ArmazenarNomeSegundo);
        printf ("                     Quantidade de guerreiros '1' disponíveis: %i                    |                    ", C);
        printf ("Quantidade de guerreiros '1' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '2' disponíveis: %i                    |                    ", C);
	    printf ("Quantidade de guerreiros '2' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '@' disponíveis: %i                    |                    ", D);
	    printf ("Quantidade de guerreiros '@' disponíveis: %i\n", F);
	    printf ("                     Quantidade de guerreiros '#' disponíveis: %i                    |                    ", H);
	    printf ("Quantidade de guerreiros '#' disponíveis: %i\n", I);
        Tabuleiro();
		printf("\n\nDigite o guerreiro, a linha e coluna para colocar o guerreiro no tabuleiro, exemplo: (2 7 1): ");	
	    	
		}
		
		else {		
			
	    marcarDois(l, c);
		E = E - 1; 
		printf ("\n");
		printf ("                                                                  VEZ DE %s POSICIONAR O GUERREIRO\n\n", ArmazenarNomePrimeiro);
        printf ("                     Jogador: %s                                                                       Jogador: %s \n\n", ArmazenarNomePrimeiro, ArmazenarNomeSegundo);
        printf ("                     Quantidade de guerreiros '1' disponíveis: %i                    |                    ", C);
        printf ("Quantidade de guerreiros '1' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '2' disponíveis: %i                    |                    ", C);
	    printf ("Quantidade de guerreiros '2' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '@' disponíveis: %i                    |                    ", D);
	    printf ("Quantidade de guerreiros '@' disponíveis: %i\n", F);
	    printf ("                     Quantidade de guerreiros '#' disponíveis: %i                    |                    ", H);
	    printf ("Quantidade de guerreiros '#' disponíveis: %i\n", I);
        Tabuleiro();
		printf("\n\nDigite o guerreiro, a linha e coluna para colocar o guerreiro no tabuleiro, exemplo: (2 1 1): ");
		A = A + 1;	
		
	}
	
	}
		
	    else if (B == '@') {	
	
	    if (G == 1) {	
	
	    if (X == 1) {
				
	    marcarArroba(l, c);
	    F = 0;
	    I = 0;
	    D = 0;
	    printf ("\n");
	    printf ("                                                                  VEZ DE %s POSICIONAR O GUERREIRO\n\n", ArmazenarNomePrimeiro);
        printf ("                     Jogador: %s                                                                       Jogador: %s \n\n", ArmazenarNomePrimeiro, ArmazenarNomeSegundo);
        printf ("                     Quantidade de guerreiros '1' disponíveis: %i                    |                    ", C);
        printf ("Quantidade de guerreiros '1' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '2' disponíveis: %i                    |                    ", C);
	    printf ("Quantidade de guerreiros '2' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '@' disponíveis: %i                    |                    ", D);
	    printf ("Quantidade de guerreiros '@' disponíveis: %i\n", F);
	    printf ("                     Quantidade de guerreiros '#' disponíveis: %i                    |                    ", H);
	    printf ("Quantidade de guerreiros '#' disponíveis: %i\n", I);
        Tabuleiro();
		printf("\n\nDigite o guerreiro, a linha e coluna para colocar o guerreiro no tabuleiro, exemplo: (2 1 1): ");	
		A = A + 1;	
		X = X - 1;
		G = G - 1;	
		
	}	
	
	    else {
		
		printf ("\n");
	    printf ("                                                                  VEZ DE %s POSICIONAR O GUERREIRO\n\n", ArmazenarNomeSegundo);
	    printf ("                                                    O GUERREIRO ESPECIAL '@' SÓ PODE SER POSICIONADO UMA VEZ NO TABULEIRO\n\n");
	    printf ("                     Jogador: %s                                                                       Jogador: %s \n\n", ArmazenarNomePrimeiro, ArmazenarNomeSegundo);
        printf ("                     Quantidade de guerreiros '1' disponíveis: %i                    |                    ", C);
        printf ("Quantidade de guerreiros '1' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '2' disponíveis: %i                    |                    ", C);
	    printf ("Quantidade de guerreiros '2' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '@' disponíveis: %i                    |                    ", D);
	    printf ("Quantidade de guerreiros '@' disponíveis: %i\n", F);
	    printf ("                     Quantidade de guerreiros '#' disponíveis: %i                    |                    ", H);
	    printf ("Quantidade de guerreiros '#' disponíveis: %i\n", I);
        Tabuleiro();
		printf("\n\nDigite o guerreiro, a linha e coluna para colocar o guerreiro no tabuleiro, exemplo: (2 7 1): ");
			
				
	}
	
    }
    
        else {
    	
        printf ("\n");
	    printf ("                                                                  VEZ DE %s POSICIONAR O GUERREIRO\n\n", ArmazenarNomeSegundo);
	    printf ("                                                                VOCÊ SÓ PODE TER UM GUERREIRO ESPECIAL\n\n");
        printf ("                     Jogador: %s                                                                       Jogador: %s \n\n", ArmazenarNomePrimeiro, ArmazenarNomeSegundo);
        printf ("                     Quantidade de guerreiros '1' disponíveis: %i                    |                    ", C);
        printf ("Quantidade de guerreiros '1' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '2' disponíveis: %i                    |                    ", C);
	    printf ("Quantidade de guerreiros '2' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '@' disponíveis: %i                    |                    ", D);
	    printf ("Quantidade de guerreiros '@' disponíveis: %i\n", F);
	    printf ("                     Quantidade de guerreiros '#' disponíveis: %i                    |                    ", H);
	    printf ("Quantidade de guerreiros '#' disponíveis: %i\n", I);
        Tabuleiro();
		printf("\n\nDigite o guerreiro, a linha e coluna para colocar o guerreiro no tabuleiro, exemplo: (2 7 1): ");	
    	
	}
	
	}
		
	    else if (B == '#') {
		
	    if (G == 1) {
						
	    if (Y == 1) {
				
	    marcarHashtag(l, c);
	    I = 0;
	    F = 0;
	    H = 0;	    
	    printf ("\n");
	    printf ("                                                                  VEZ DE %s POSICIONAR O GUERREIRO\n\n", ArmazenarNomePrimeiro);
        printf ("                     Jogador: %s                                                                       Jogador: %s \n\n", ArmazenarNomePrimeiro, ArmazenarNomeSegundo);
        printf ("                     Quantidade de guerreiros '1' disponíveis: %i                    |                    ", C);
        printf ("Quantidade de guerreiros '1' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '2' disponíveis: %i                    |                    ", C);
	    printf ("Quantidade de guerreiros '2' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '@' disponíveis: %i                    |                    ", D);
	    printf ("Quantidade de guerreiros '@' disponíveis: %i\n", F);
	    printf ("                     Quantidade de guerreiros '#' disponíveis: %i                    |                    ", H);
	    printf ("Quantidade de guerreiros '#' disponíveis: %i\n", I);
        Tabuleiro();
		printf("\n\nDigite o guerreiro, a linha e coluna para colocar o guerreiro no tabuleiro, exemplo: (2 1 1): ");	
		A = A + 1;
		Y = Y - 1;
		G = G - 1;
		
	}
	
	    else {
		
	    printf ("\n");
	    printf ("                                                                  VEZ DE %s POSICIONAR O GUERREIRO\n\n", ArmazenarNomeSegundo);
	    printf ("                                                    O GUERREIRO ESPECIAL '#' SÓ PODE SER POSICIONADO UMA VEZ NO TABULEIRO\n\n");
        printf ("                     Jogador: %s                                                                       Jogador: %s \n\n", ArmazenarNomePrimeiro, ArmazenarNomeSegundo);
        printf ("                     Quantidade de guerreiros '1' disponíveis: %i                    |                    ", C);
        printf ("Quantidade de guerreiros '1' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '2' disponíveis: %i                    |                    ", C);
	    printf ("Quantidade de guerreiros '2' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '@' disponíveis: %i                    |                    ", D);
	    printf ("Quantidade de guerreiros '@' disponíveis: %i\n", F);
	    printf ("                     Quantidade de guerreiros '#' disponíveis: %i                    |                    ", H);
	    printf ("Quantidade de guerreiros '#' disponíveis: %i\n", I);
        Tabuleiro();
		printf("\n\nDigite o guerreiro, a linha e coluna para colocar o guerreiro no tabuleiro, exemplo: (2 7 1): ");	
		
	}
	
    }
    
        else {
    	
        printf ("\n");
	    printf ("                                                                  VEZ DE %s POSICIONAR O GUERREIRO\n\n", ArmazenarNomeSegundo);
	    printf ("                                                                VOCÊ SÓ PODE TER UM GUERREIRO ESPECIAL\n\n");
        printf ("                     Jogador: %s                                                                       Jogador: %s \n\n", ArmazenarNomePrimeiro, ArmazenarNomeSegundo);
        printf ("                     Quantidade de guerreiros '1' disponíveis: %i                    |                    ", C);
        printf ("Quantidade de guerreiros '1' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '2' disponíveis: %i                    |                    ", C);
	    printf ("Quantidade de guerreiros '2' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '@' disponíveis: %i                    |                    ", D);
	    printf ("Quantidade de guerreiros '@' disponíveis: %i\n", F);
	    printf ("                     Quantidade de guerreiros '#' disponíveis: %i                    |                    ", H);
	    printf ("Quantidade de guerreiros '#' disponíveis: %i\n", I);
        Tabuleiro();
		printf("\n\nDigite o guerreiro, a linha e coluna para colocar o guerreiro no tabuleiro, exemplo: (2 7 1): ");	
    	
	}
					
	}
	
	    else {
		
		printf ("\n");
		printf ("                                                                  VEZ DE %s POSICIONAR O GUERREIRO\n\n", ArmazenarNomeSegundo);
		printf ("\n                                                                       ESCOLHA UM GUERREIRO VÁLIDO\n");
		printf ("\n");
        printf ("                     Jogador: %s                                                                       Jogador: %s \n\n", ArmazenarNomePrimeiro, ArmazenarNomeSegundo);
        printf ("                     Quantidade de guerreiros '1' disponíveis: %i                    |                    ", C);
        printf ("Quantidade de guerreiros '1' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '2' disponíveis: %i                    |                    ", C);
	    printf ("Quantidade de guerreiros '2' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '@' disponíveis: %i                    |                    ", D);
	    printf ("Quantidade de guerreiros '@' disponíveis: %i\n", F);
	    printf ("                     Quantidade de guerreiros '#' disponíveis: %i                    |                    ", H);
	    printf ("Quantidade de guerreiros '#' disponíveis: %i\n", I);
        Tabuleiro();
		printf("\n\nDigite o guerreiro, a linha e coluna para colocar o guerreiro no tabuleiro, exemplo: (2 7 1): ");
			
	}
	
    }
									
	}
		
	    system ("cls");
	    
	    printf ("\n\n");
		printf ("                                                         =======================================================              \n");      
	    printf ("                                                         ||  FASE DE POSICIONAMENTO DOS GUERREIROS CONCLUIDA  ||              \n");
	    printf ("                                                         =======================================================              \n\n");
	    printf ("\n");
        printf ("                     Jogador: %s                                                                       Jogador: %s \n\n", ArmazenarNomePrimeiro, ArmazenarNomeSegundo);
        printf ("                     Quantidade de guerreiros '1' disponíveis: %i                    |                    ", C);
        printf ("Quantidade de guerreiros '1' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '2' disponíveis: %i                    |                    ", C);
	    printf ("Quantidade de guerreiros '2' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '@' disponíveis: %i                    |                    ", D);
	    printf ("Quantidade de guerreiros '@' disponíveis: %i\n", F);
	    printf ("                     Quantidade de guerreiros '#' disponíveis: %i                    |                    ", H);
	    printf ("Quantidade de guerreiros '#' disponíveis: %i\n", I);
        Tabuleiro();
	    
	    for (Temporizador = 2; Temporizador >= 0; Temporizador--) {	
					
		for (TemporizadorI = 0; TemporizadorI <= 1000000000; TemporizadorI++) {									
		
	    }        
	    
	    for (TemporizadorJ = 0; TemporizadorJ <= 1000000000; TemporizadorJ++) {									
		
	    }
	       		    
	    }
	    		
	    for (Temporizador = 3; Temporizador >= 0; Temporizador--) {	
					
		for (TemporizadorI = 0; TemporizadorI <= 1000000000; TemporizadorI++) {							
		
	    }
	     
		system ("cls"); 
	    printf ("\n\n");
		printf ("                                                                   ==================================               \n");      
	    printf ("                                                                   ||  A BATALHA COMEÇARÁ EM: [%i]  ||\n", Temporizador);
	    printf ("                                                                   ==================================               \n\n");
	    printf ("\n");
        printf ("                     Jogador: %s                                                                       Jogador: %s \n\n", ArmazenarNomePrimeiro, ArmazenarNomeSegundo);
        printf ("                     Quantidade de guerreiros '1' disponíveis: %i                    |                    ", C);
        printf ("Quantidade de guerreiros '1' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '2' disponíveis: %i                    |                    ", C);
	    printf ("Quantidade de guerreiros '2' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '@' disponíveis: %i                    |                    ", D);
	    printf ("Quantidade de guerreiros '@' disponíveis: %i\n", F);
	    printf ("                     Quantidade de guerreiros '#' disponíveis: %i                    |                    ", H);
	    printf ("Quantidade de guerreiros '#' disponíveis: %i\n", I);
	    Tabuleiro();
	    
	    for (TemporizadorJ = 0; TemporizadorJ <= 1000000000; TemporizadorJ++) {									
		
	    }
	    
	    system ("cls");
		printf ("\n\n\n\n\n\n\n");
        printf ("                     Jogador: %s                                                                       Jogador: %s \n\n", ArmazenarNomePrimeiro, ArmazenarNomeSegundo);
        printf ("                     Quantidade de guerreiros '1' disponíveis: %i                    |                    ", C);
        printf ("Quantidade de guerreiros '1' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '2' disponíveis: %i                    |                    ", C);
	    printf ("Quantidade de guerreiros '2' disponíveis: %i\n", E);
	    printf ("                     Quantidade de guerreiros '@' disponíveis: %i                    |                    ", D);
	    printf ("Quantidade de guerreiros '@' disponíveis: %i\n", F);
	    printf ("                     Quantidade de guerreiros '#' disponíveis: %i                    |                    ", H);
	    printf ("Quantidade de guerreiros '#' disponíveis: %i\n", I);
	    Tabuleiro(); 
	    		    
	    }
	
	    A = 0;
	    system ("cls");
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomePrimeiro);	
	    Tabuleiro();
	    printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomePrimeiro);
	    
	    while(A <= 49){
	    	
	    scanf (" %c", &Jogada);
	      		  		  	    	
	    if (A%2 == 0){
	    				
		if (Jogada != 'M' && Jogada != 'A'){						
		
		while (Jogada != 'M' && Jogada != 'A'){
				
		printf (" %s, você digitou a letra incorreta, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomePrimeiro);
		scanf (" %c", &Jogada); 	
		
		}
					
		}
		
	    if (Jogada == 'M'){
	    	  	
		printf (" %s, Digite a linha seguida pela coluna do guerreiro que voce quer mover: ", ArmazenarNomePrimeiro);
		scanf ("%i %i", &cc, &dd);
		
		if (matriz[cc][dd] == ' ' || matriz[cc][dd] == '.'){
			
		while (matriz[cc][dd] == ' ' || matriz[cc][dd] == '.'){
			
	    printf (" %s, Você digitou uma cordenada em que não há guerreiro, digite uma cordenada válida: ", ArmazenarNomePrimeiro);
		scanf ("%i %i", &cc, &dd);	
		
	    }	
			
		}
		
		if (cc == 7 || cc == 8 || cc == 9 || cc == 10){
			
		while (cc == 7 || cc == 8 || cc == 9 || cc == 10){
				
		printf (" %s, Você não pode movimentar um guerreiro do tabuleiro inimigo, digite uma cordenada válida: ", ArmazenarNomePrimeiro);	
		scanf ("%i %i", &cc, &dd);
			
		}	
			
		}
		
		if (matriz[cc][dd] == '1' || matriz[cc][dd] == '2' || matriz[cc][dd] == '@' || matriz[cc][dd] == '#'){
			
		printf (" %s, Digite o local que você deseja movimentar o guerreiro (N, S, L, O): ", ArmazenarNomePrimeiro);	
		scanf(" %c", &kk);
		
		if (kk != 'N' && kk != 'S' && kk != 'L' && kk != 'O'){
			
		while (kk != 'N' && kk != 'S' && kk != 'L' && kk != 'O'){
			
		printf (" %s, A jogada é impossível, não existe essa dirção, digite a direção novamente: ", ArmazenarNomePrimeiro);	
		scanf(" %c", &kk);	
			
		}
		
     	}
     	
		if (kk == 'N' && matriz[cc-1][dd] != ' ' || kk != 'N' && kk != 'S' && kk != 'L' && kk != 'O') {
			
		while (kk == 'N' && matriz[cc-1][dd] != ' ' || kk != 'N' && kk != 'S' && kk != 'L' && kk != 'O' || kk == 'S' && matriz[cc+1][dd] != ' '|| kk == 'L' && matriz[cc][dd+1] != ' ' || kk == 'O' && matriz[cc][dd-1] != ' ' ){
					
		printf (" %s, A posição é inválida, digite novamente: ", ArmazenarNomePrimeiro);
		scanf (" %c", &kk);
		
		}
					
		}
		
		if (kk == 'S' && matriz[cc+1][dd] != ' ' || kk != 'N' && kk != 'S' && kk != 'L' && kk != 'O') {
			
		while (kk == 'S' && matriz[cc+1][dd] != ' ' || kk != 'N' && kk != 'S' && kk != 'L' && kk != 'O'|| kk == 'L' && matriz[cc][dd+1] != ' ' || kk == 'O' && matriz[cc][dd-1] != ' ' || kk == 'N' && matriz[cc-1][dd] != ' ' ){
						
		printf (" %s, A posição é inválida, digite novamente: ", ArmazenarNomePrimeiro);
		scanf (" %c", &kk);
		
		}
					
		}
		
    	if (kk == 'L' && matriz[cc][dd+1] != ' ' || kk != 'N' && kk != 'S' && kk != 'L' && kk != 'O' ) {
		
		while (kk == 'L' && matriz[cc][dd+1] != ' ' || kk != 'N' && kk != 'S' && kk != 'L' && kk != 'O'|| kk == 'O' && matriz[cc][dd-1] != ' ' || kk == 'N' && matriz[cc-1][dd] != ' ' || kk == 'S' && matriz[cc+1][dd] != ' '  ){	
			
		printf (" %s, A posição é inválida, digite novamente: ", ArmazenarNomePrimeiro);
		scanf (" %c", &kk);
		
		}
					
		}
	
		if (kk == 'O' && matriz[cc][dd-1] != ' ' || kk != 'N' && kk != 'S' && kk != 'L' && kk != 'O') {
			
		while (kk == 'O' && matriz[cc][dd-1] != ' ' || kk != 'N' && kk != 'S' && kk != 'L' && kk != 'O' || kk == 'N' && matriz[cc-1][dd] != ' ' || kk == 'S' && matriz[cc+1][dd] != ' ' || kk == 'L' && matriz[cc][dd+1] != ' ' ){	
					
		printf (" %s, A posição é inválida, digite novamente: ", ArmazenarNomePrimeiro);
		scanf (" %c", &kk);
		
		}
					
		}	
			
		if (kk == 'N' && matriz[cc-1][dd] == ' ') {
					
		jj = matriz[cc][dd];
		matriz[cc][dd] = ' ';
		matriz[cc-1][dd] = jj;
		A = A + 1;
		system ("cls");
		printf ("\n                                                              O GUERREIRO DA CASA %i %i MOVEU PARA A CASA %i %i", cc, dd, cc-1, dd);
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomeSegundo);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomeSegundo);
					
		}
								
					
			
		else if (kk == 'S' && matriz[cc+1][dd] == ' ') {
					
		jj = matriz[cc][dd];
		matriz[cc][dd] = ' ';
		matriz[cc+1][dd] = jj;
		A = A + 1;
		system ("cls");
		printf ("\n                                                              O GUERREIRO DA CASA %i %i MOVEU PARA A CASA %i %i", cc, dd, cc+1, dd);
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomeSegundo);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomeSegundo);
					
		}
		
				
		else if (kk == 'L' && matriz[cc][dd+1] == ' ') {
					
		jj = matriz[cc][dd];
		matriz[cc][dd] = ' ';
		matriz[cc][dd+1] = jj;
		A = A + 1;
		system ("cls");
		printf ("\n                                                              O GUERREIRO DA CASA %i %i MOVEU PARA A CASA %i %i", cc, dd, cc, dd+1);
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomeSegundo);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomeSegundo);
					
		}
		
		
		else if (kk == 'O' && matriz[cc][dd-1] == ' ') {
					
		jj = matriz[cc][dd];
		matriz[cc][dd] = ' ';
		matriz[cc][dd-1] = jj;
		A = A + 1;
		system ("cls");
		printf ("\n                                                              O GUERREIRO DA CASA %i %i MOVEU PARA A CASA %i %i", cc, dd, cc, dd-1);
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomeSegundo);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomeSegundo);
					
		}
				
		}
		
		}
		
		else if (Jogada == 'A'){
				
		printf (" %s, Digite a linha seguido pela coluna do guerreiro com o qual você quer atacar: ", ArmazenarNomePrimeiro);	
	    scanf ("%i %i", &cc, &dd);
	    
	    if (matriz[cc][dd] == ' ' || matriz[cc][dd] == '.'){
	    		    
		while (matriz[cc][dd] == ' ' || matriz[cc][dd] == '.'){
			
	    printf (" %s, Você digitou uma cordenada em que não há guerreiro, digite uma cordenada válida: ", ArmazenarNomePrimeiro);
		scanf ("%i %i", &cc, &dd);	
		
	    }
			
		}
		
		if (cc == 7 || cc == 8 || cc == 9 || cc == 10){
			
		while (cc == 7 || cc == 8 || cc == 9 || cc == 10){
				
		printf (" %s, Você não pode atacar com um guerreiro do tabuleiro inimigo, digite uma cordenada válida: ", ArmazenarNomePrimeiro);	
		scanf ("%i %i", &cc, &dd);
			
		}
		
	    }
			
		if (matriz[cc][dd] == '1' || matriz[cc][dd] == '2' || matriz[cc][dd] == '@' || matriz[cc][dd] == '#') {
			
		if (matriz[cc][dd] == '1') {
			
		for (ii = 6; ii <= 10; ii++) {
				
		if (matriz[ii][dd] == '1' || matriz[ii][dd] == '2' || matriz[ii][dd] == '@' || matriz[ii][dd] == '#'){
			
		matriz[ii][dd] = ' ';
		A = A + 1;
		system ("cls");
		printf ("\n                                                                     O GUERREIRO DA CASA %i %i MORREU", ii, dd);
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomeSegundo);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomeSegundo);
		break;	
			
		}
		xx = xx + 1;
		if (xx == 5){
		
		A = A + 1;
		system ("cls");
		printf ("\n                                                                  NENHUM GUERREIRO INIMIGO FOI ATINGIDO");
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomeSegundo);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomeSegundo);	
		xx = 0;
			
		}
	
			
		}	
			
		}
		
		else if (matriz[cc][dd] == '2'){
			
		printf (" %s, Você escolheu atacar com o guerreiro '2', escolha a direção do tiro (E ou D): ", ArmazenarNomePrimeiro);	
		scanf (" %s", &jj);
		
		if (jj != 'E' && jj != 'D'){
		
		while (jj != 'E' && jj != 'D'){
		
		printf (" %s, Você digitou a direção errada, digite a direção correta para qual deseja atirar (E ou D): ", ArmazenarNomePrimeiro);	
		scanf (" %s", &jj);	
		
	    }
		
		}
		
		if (jj == 'E'){
			
		if (cc == 1){
			
		dd = dd - 4;
		
		for (ii = 6; ii <= 10; ii++){
			
		dd = dd - 1; 

		if (matriz[ii][dd] == '1' || matriz[ii][dd] == '2' || matriz[ii][dd] == '@' || matriz[ii][dd] == '#'){
		
	    if (ii > 6 && ii < 11 && dd > 0 && dd < 11){
				
		matriz[ii][dd] = ' ';
		A = A + 1;
		system ("cls");
		printf ("\n                                                                     O GUERREIRO DA CASA %i %i MORREU", ii, dd);		
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomeSegundo);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomeSegundo);
		break;
			
		}
		else{

		A = A + 1;
		system ("cls");
		printf ("\n                                                                  NENHUM GUERREIRO INIMIGO FOI ATINGIDO");
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomeSegundo);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomeSegundo);
		break;			
			
		}	
			
		}
		xx = xx + 1;
		if (xx == 5){
		
		A = A + 1;
		system ("cls");
		printf ("\n                                                                  NENHUM GUERREIRO INIMIGO FOI ATINGIDO");
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomeSegundo);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomeSegundo);	
		xx = 0;
			
		}	
			
		}	
			
		}
		else if (cc == 2){
			
		dd = dd - 3;
		
		for (ii = 6; ii <= 10; ii++){
			
		dd = dd - 1; 
		
		if (matriz[ii][dd] == '1' || matriz[ii][dd] == '2' || matriz[ii][dd] == '@' || matriz[ii][dd] == '#'){
			
	    if (ii > 6 && ii < 11 && dd > 0 && dd < 11){
				
		matriz[ii][dd] = ' ';
		A = A + 1;
		system ("cls");
		printf ("\n                                                                     O GUERREIRO DA CASA %i %i MORREU", ii, dd);		
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomeSegundo);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomeSegundo);
		break;
			
		}
		else{

		A = A + 1;
		system ("cls");
		printf ("\n                                                                  NENHUM GUERREIRO INIMIGO FOI ATINGIDO");
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomeSegundo);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomeSegundo);
		break;			
			
		}
			
	}
		xx = xx + 1;
		if (xx == 5){
		
		A = A + 1;
		system ("cls");
		printf ("\n                                                                  NENHUM GUERREIRO INIMIGO FOI ATINGIDO");
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomeSegundo);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomeSegundo);	
		xx = 0;
			
		}
	
	}
	
	}
	
		else if (cc == 3){
			
		dd = dd - 2;
		
		for (ii = 6; ii <= 10; ii++){
			
		dd = dd - 1; 
		
		if (matriz[ii][dd] == '1' || matriz[ii][dd] == '2' || matriz[ii][dd] == '@' || matriz[ii][dd] == '#'){
			
	    if (ii > 6 && ii < 11 && dd > 0 && dd < 11){
				
		matriz[ii][dd] = ' ';
		A = A + 1;
		system ("cls");
		printf ("\n                                                                     O GUERREIRO DA CASA %i %i MORREU", ii, dd);		
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomeSegundo);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomeSegundo);
		break;
			
		}
		else{

		A = A + 1;
		system ("cls");
		printf ("\n                                                                  NENHUM GUERREIRO INIMIGO FOI ATINGIDO");
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomeSegundo);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomeSegundo);
		break;			
			
		}	
			
	}
		xx = xx + 1;
		if (xx == 5){
		
		A = A + 1;
		system ("cls");
		printf ("\n                                                                  NENHUM GUERREIRO INIMIGO FOI ATINGIDO");
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomeSegundo);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomeSegundo);	
		xx = 0;
			
		}	
			
	}
			
	}
		else if (cc == 4){
			
		dd = dd - 1;
		
		for (ii = 6; ii <= 10; ii++){
			
		dd = dd - 1;
		
		if (matriz[ii][dd] == '1' || matriz[ii][dd] == '2' || matriz[ii][dd] == '@' || matriz[ii][dd] == '#'){
				
	    if (ii > 6 && ii < 11 && dd > 0 && dd < 11){
				
		matriz[ii][dd] = ' ';
		A = A + 1;
		system ("cls");
		printf ("\n                                                                     O GUERREIRO DA CASA %i %i MORREU", ii, dd);		
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomeSegundo);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomeSegundo);
		break;
			
		}
		else{

		A = A + 1;
		system ("cls");
		printf ("\n                                                                  NENHUM GUERREIRO INIMIGO FOI ATINGIDO");
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomeSegundo);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomeSegundo);
		break;			
			
		}
			
	}
		xx = xx + 1;
		if (xx == 5){
		
		A = A + 1;
		system ("cls");
		printf ("\n                                                                  NENHUM GUERREIRO INIMIGO FOI ATINGIDO");
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomeSegundo);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomeSegundo);	
		xx = 0;
			
		}	
			
	}			
			
	}	
		
	}
					
		else if (jj == 'D'){
			
		if (cc == 1){
			
		dd = dd + 4;
		
		for (ii = 6; ii <= 10; ii++){
			
		dd = dd + 1; 
		
		if (matriz[ii][dd] == '1' || matriz[ii][dd] == '2' || matriz[ii][dd] == '@' || matriz[ii][dd] == '#'){
		
	    if (ii > 6 && ii < 11 && dd > 0 && dd < 11){
				
		matriz[ii][dd] = ' ';
		A = A + 1;
		system ("cls");
		printf ("\n                                                                     O GUERREIRO DA CASA %i %i MORREU", ii, dd);		
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomeSegundo);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomeSegundo);
		break;
			
		}
		else{

		A = A + 1;
		system ("cls");
		printf ("\n                                                                  NENHUM GUERREIRO INIMIGO FOI ATINGIDO");
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomeSegundo);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomeSegundo);
		break;			
			
		}
			
	}
	
		xx = xx + 1;
		if (xx == 5){
		
		A = A + 1;
		system ("cls");
		printf ("\n                                                                  NENHUM GUERREIRO INIMIGO FOI ATINGIDO");
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomeSegundo);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomeSegundo);	
		xx = 0;
			
		}	
			
	}	
			
	}
		else if (cc == 2){
			
		dd = dd + 3;
		
		for (ii = 6; ii <= 10; ii++){
			
		dd = dd + 1; 
		
		if (matriz[ii][dd] == '1' || matriz[ii][dd] == '2' || matriz[ii][dd] == '@' || matriz[ii][dd] == '#'){
			
	    if (ii > 6 && ii < 11 && dd > 0 && dd < 11){
				
		matriz[ii][dd] = ' ';
		A = A + 1;
		system ("cls");
		printf ("\n                                                                     O GUERREIRO DA CASA %i %i MORREU", ii, dd);		
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomeSegundo);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomeSegundo);
		break;
			
		}
		else{

		A = A + 1;
		system ("cls");
		printf ("\n                                                                  NENHUM GUERREIRO INIMIGO FOI ATINGIDO");
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomeSegundo);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomeSegundo);
		break;			
			
		}
			
	}
		xx = xx + 1;
		if (xx == 5){
		
		A = A + 1;
		system ("cls");
		printf ("\n                                                                  NENHUM GUERREIRO INIMIGO FOI ATINGIDO");
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomeSegundo);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomeSegundo);	
		xx = 0;
			
		}
	
	}
	
	}
		else if (cc == 3){
			
		dd = dd + 2;
		
		for (ii = 6; ii <= 10; ii++){
			
		dd = dd + 1; 
		
		if (matriz[ii][dd] == '1' || matriz[ii][dd] == '2' || matriz[ii][dd] == '@' || matriz[ii][dd] == '#'){
				
	    if (ii > 6 && ii < 11 && dd > 0 && dd < 11){
				
		matriz[ii][dd] = ' ';
		A = A + 1;
		system ("cls");
		printf ("\n                                                                     O GUERREIRO DA CASA %i %i MORREU", ii, dd);		
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomeSegundo);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomeSegundo);
		break;
			
		}
		else{

		A = A + 1;
		system ("cls");
		printf ("\n                                                                  NENHUM GUERREIRO INIMIGO FOI ATINGIDO");
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomeSegundo);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomeSegundo);
		break;			
			
		}		
			
	}
		xx = xx + 1;
		if (xx == 5){
		
		A = A + 1;
		system ("cls");
		printf ("\n                                                                  NENHUM GUERREIRO INIMIGO FOI ATINGIDO");
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomeSegundo);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomeSegundo);	
		xx = 0;
			
		}	
			
	}
			
	}
		else if (cc == 4){
			
		dd = dd + 1;
		
		for (ii = 6; ii <= 10; ii++){
			
		dd = dd + 1;
		
		if (matriz[ii][dd] == '1' || matriz[ii][dd] == '2' || matriz[ii][dd] == '@' || matriz[ii][dd] == '#'){
				
	    if (ii > 6 && ii < 11 && dd > 0 && dd < 11){
				
		matriz[ii][dd] = ' ';
		A = A + 1;
		system ("cls");
		printf ("\n                                                                     O GUERREIRO DA CASA %i %i MORREU", ii, dd);		
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomeSegundo);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomeSegundo);
		break;
			
		}
		else{

		A = A + 1;
		system ("cls");
		printf ("\n                                                                  NENHUM GUERREIRO INIMIGO FOI ATINGIDO");
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomeSegundo);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomeSegundo);
		break;			
			
		}
			
	}
		xx = xx + 1;
		if (xx == 5){
		
		A = A + 1;
		system ("cls");
		printf ("\n                                                                  NENHUM GUERREIRO INIMIGO FOI ATINGIDO");
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomeSegundo);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomeSegundo);	
		xx = 0;
			
		}	
			
	}			
			
	}
										
	}
			
	}
	else if (matriz[cc][dd] == '@'){
		
		contar = 0;
		contarum = 0;
		contardois = 0;
		contartres = 0;
		contarquatro = 0;
		contarcinco = 0;

	    printf (" %s, voce escolheu atacar com o guerreiro '@', escolha uma cordenada do tabuleiro inimigo para atacar em forma de X: ", ArmazenarNomePrimeiro);
		scanf ("%i %i", &oo, &ll);
		
		if (oo == 0 || oo == 1 || oo == 2 || oo == 3 || oo == 4 || oo == 5 || oo == 6 || ll < 1 || ll > 10 || oo < 0 || oo > 10){
			
		while (oo == 0 || oo == 1 || oo == 2 || oo == 3 || oo == 4 || oo == 5 || oo == 6 || ll < 1 || ll > 10 || oo < 0 || oo > 10){
			
		printf (" %s, Você não pode atacar esses locais, escolha uma cordenada do tabuleiro inimigo para atacar: ", ArmazenarNomePrimeiro);
		scanf ("%i %i", &oo, &ll);
			
		}
			
		}
								
		if (matriz[oo][ll]     == '1' || matriz[oo][ll]     == '2' || matriz[oo][ll]     == '@' || matriz[oo][ll] == '#'){
			    	
	    contar = contar + 1;
	    contarum = contarum + 1;
					
	}
		if (matriz[oo+1][ll+1] == '1' || matriz[oo+1][ll+1] == '2' || matriz[oo+1][ll+1] == '@' || matriz[oo+1][ll+1] == '#'){
			    	
	    contar = contar + 1;
	    contardois = contardois + 1;
					
	}
	    if (matriz[oo+1][ll-1] == '1' || matriz[oo+1][ll-1] == '2' || matriz[oo+1][ll-1] == '@' || matriz[oo+1][ll-1] == '#'){
			    	
		contar = contar + 1;
		contartres = contartres + 1;
					
	}
	    if (matriz[oo-1][ll+1] == '1' || matriz[oo-1][ll+1] == '2' || matriz[oo-1][ll+1] == '@' || matriz[oo-1][ll+1] == '#'){
			    	
	    contar = contar + 1;
		contarquatro = contarquatro + 1;	
			    	
	}
	    if (matriz[oo-1][ll-1] == '1' || matriz[oo-1][ll-1] == '2' || matriz[oo-1][ll-1] == '@' || matriz[oo-1][ll-1] == '#'){
			    	
	    contar = contar + 1;
		contarcinco = contarcinco + 1;	
			    	
	}
		
									
		matriz[oo][ll]     = ' '; 
		matriz[oo+1][ll+1] = ' '; 	
		matriz[oo+1][ll-1] = ' ';	
		matriz[oo-1][ll+1] = ' '; 
		matriz[oo-1][ll-1] = ' '; 
		A = A + 1;
		system ("cls");
	    printf ("\n\n");
		printf ("                                                                     MORREU(AM) UM TOTAL DE %i GUERREIROS\n", contar);	
		printf ("                                                                     O(S) GUERREIRO(S) DA(S) CASA(S) ");
		if (contarum == 1){
		printf ("%i %i  ", oo, ll);
		}
		if (contardois == 1){
		printf ("%i %i  ", oo+1, ll+1);
		}	
		if (contartres == 1){
		printf ("%i %i  ", oo+1, ll-1);		
		}
		if (contarquatro == 1){
		printf ("%i %i  ", oo-1, ll+1);	
		}
		if (contarcinco == 1){
		printf ("%i %i  ", oo-1, ll-1);
		}
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomeSegundo);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomeSegundo);
						
	}
	else if (matriz[cc][dd] == '#'){
		
		contar = 0;
		contarum = 0;
		contardois = 0;
		contartres = 0;
		contarquatro = 0;
		contarcinco = 0;
		
		printf (" %s, voce escolheu atacar com o guerreiro '#', escolha uma cordenada do tabuleiro inimigo para atacar em forma de +: ", ArmazenarNomePrimeiro);
		scanf ("%i %i", &oo, &ll);
		
		if (oo == 0 || oo == 1 || oo == 2 || oo == 3 || oo == 4 || oo == 5 || oo == 6 || ll < 1 || ll > 10 || oo < 0 || oo > 10){
			
		while (oo == 0 || oo == 1 || oo == 2 || oo == 3 || oo == 4 || oo == 5 || oo == 6 || ll < 1 || ll > 10 || oo < 0 || oo > 10){
			
		printf (" %s, Você não pode atacar esses locais, escolha uma cordenada do tabuleiro inimigo para atacar: ", ArmazenarNomePrimeiro);
		scanf ("%i %i", &oo, &ll);
			
		}
			
		}
								
		if (matriz[oo][ll]     == '1' || matriz[oo][ll]     == '2' || matriz[oo][ll]     == '@' || matriz[oo][ll] == '#'){
			    	
	    contar = contar + 1;
	    contarum = contarum + 1;
					
	}
		if (matriz[oo+1][ll] == '1' || matriz[oo+1][ll] == '2' || matriz[oo+1][ll] == '@' || matriz[oo+1][ll] == '#'){
			    	
	    contar = contar + 1;
	    contardois = contardois + 1;
					
	}
	    if (matriz[oo-1][ll] == '1' || matriz[oo-1][ll] == '2' || matriz[oo-1][ll] == '@' || matriz[oo-1][ll] == '#'){
			    	
		contar = contar + 1;
		contartres = contartres + 1;
					
	}
	    if (matriz[oo][ll+1] == '1' || matriz[oo][ll+1] == '2' || matriz[oo][ll+1] == '@' || matriz[oo][ll+1] == '#'){
			    	
	    contar = contar + 1;
		contarquatro = contarquatro + 1;	
			    	
	}
	    if (matriz[oo][ll-1] == '1' || matriz[oo][ll-1] == '2' || matriz[oo][ll-1] == '@' || matriz[oo][ll-1] == '#'){
			    	
	    contar = contar + 1;
		contarcinco = contarcinco + 1;	
			    	
	}
		
									
		matriz[oo][ll]   = ' '; 
		matriz[oo+1][ll] = ' '; 	
		matriz[oo-1][ll] = ' ';	
		matriz[oo][ll+1] = ' '; 
		matriz[oo][ll-1] = ' '; 
		A = A + 1;
		system ("cls");
	    printf ("\n\n");
		printf ("                                                                     MORREU(AM) UM TOTAL DE %i GUERREIRO(S)\n", contar);	
		printf ("                                                                     O(S) GUERREIRO(S) DA(S) CASA(S) ");
		if (contarum == 1){
		printf ("%i %i  ", oo, ll);
		}
		if (contardois == 1){
		printf ("%i %i  ", oo+1, ll);
		}	
		if (contartres == 1){
		printf ("%i %i  ", oo-1, ll);		
		}
		if (contarquatro == 1){
		printf ("%i %i  ", oo, ll+1);	
		}
		if (contarcinco == 1){
		printf ("%i %i  ", oo, ll-1);
		}
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomeSegundo);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomeSegundo);
				
	}
								
	}
				
	}
			
	    	
	}
		
		else if (A%2 != 0){
			

		
		if (Jogada != 'M' && Jogada != 'A'){
			
        while (Jogada != 'M' && Jogada != 'A'){
        	
        printf (" %s, você digitou a letra incorreta, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomePrimeiro);
		scanf (" %c", &Jogada); 	
        	
		}
		
		}
		
	    if (Jogada == 'M'){
	       	
		printf (" %s, Digite a linha seguida pela coluna do guerreiro que voce quer mover: ", ArmazenarNomeSegundo);
		scanf ("%i %i", &cc, &dd);
		
		if (matriz[cc][dd] == ' ' || matriz[cc][dd] == '.'){
			
		while (matriz[cc][dd] == ' ' || matriz[cc][dd] == '.'){
			
	    printf (" %s, Você digitou uma cordenada em que não há guerreiro, digite uma cordenada válida: ", ArmazenarNomeSegundo);
		scanf ("%i %i", &cc, &dd);	
		
	    }	
			
		}
		
		if (cc == 1 || cc == 2 || cc == 3 || cc == 4){
			
		while (cc == 1 || cc == 2 || cc == 3 || cc == 4){
				
		printf (" %s, Você não pode movimentar um guerreiro do tabuleiro inimigo, digite uma cordenada válida: ", ArmazenarNomeSegundo);	
		scanf ("%i %i", &cc, &dd);
			
		}	
			
		}
		
		if (matriz[cc][dd] == '1' || matriz[cc][dd] == '2' || matriz[cc][dd] == '@' || matriz[cc][dd] == '#'){
			
		printf (" %s, Digite o local que você deseja movimentar o guerreiro (N, S, L, O): ", ArmazenarNomeSegundo);	
		scanf(" %c", &kk);
		
		if (kk != 'N' && kk != 'S' && kk != 'L' && kk != 'O'){
			
		while (kk != 'N' && kk != 'S' && kk != 'L' && kk != 'O'){
			
		printf (" %s, A jogada é impossível, não existe essa dirção, digite a direção novamente: ", ArmazenarNomeSegundo);	
		scanf(" %c", &kk);	
			
		}
		
     	}
     	
		if (kk == 'N' && matriz[cc-1][dd] != ' ' || kk != 'N' && kk != 'S' && kk != 'L' && kk != 'O') {
			
		while (kk == 'N' && matriz[cc-1][dd] != ' ' || kk != 'N' && kk != 'S' && kk != 'L' && kk != 'O' || kk == 'S' && matriz[cc+1][dd] != ' '|| kk == 'L' && matriz[cc][dd+1] != ' ' || kk == 'O' && matriz[cc][dd-1] != ' ' ){
					
		printf (" %s, A posição é inválida, digite novamente: ", ArmazenarNomeSegundo);
		scanf (" %c", &kk);
		
		}
					
		}
		
		if (kk == 'S' && matriz[cc+1][dd] != ' ' || kk != 'N' && kk != 'S' && kk != 'L' && kk != 'O') {
			
		while (kk == 'S' && matriz[cc+1][dd] != ' ' || kk != 'N' && kk != 'S' && kk != 'L' && kk != 'O'|| kk == 'L' && matriz[cc][dd+1] != ' ' || kk == 'O' && matriz[cc][dd-1] != ' ' || kk == 'N' && matriz[cc-1][dd] != ' ' ){
						
		printf (" %s, A posição é inválida, digite novamente: ", ArmazenarNomeSegundo);
		scanf (" %c", &kk);
		
		}
					
		}
		
    	if (kk == 'L' && matriz[cc][dd+1] != ' ' || kk != 'N' && kk != 'S' && kk != 'L' && kk != 'O') {
		
		while (kk == 'L' && matriz[cc][dd+1] != ' ' || kk != 'N' && kk != 'S' && kk != 'L' && kk != 'O'|| kk == 'O' && matriz[cc][dd-1] != ' ' || kk == 'N' && matriz[cc-1][dd] != ' ' || kk == 'S' && matriz[cc+1][dd] != ' '  ){	
			
		printf (" %s, A posição é inválida, digite novamente: ", ArmazenarNomeSegundo);
		scanf (" %c", &kk);
		
		}
					
		}
	
		if (kk == 'O' && matriz[cc][dd-1] != ' ' || kk != 'N' && kk != 'S' && kk != 'L' && kk != 'O') {
			
		while (kk == 'O' && matriz[cc][dd-1] != ' ' || kk != 'N' && kk != 'S' && kk != 'L' && kk != 'O' || kk == 'N' && matriz[cc-1][dd] != ' ' || kk == 'S' && matriz[cc+1][dd] != ' ' || kk == 'L' && matriz[cc][dd+1] != ' ' ){	
					
		printf (" %s, A posição é inválida, digite novamente: ", ArmazenarNomeSegundo);
		scanf (" %c", &kk);
		
		}
					
		}	
			
		if (kk == 'N' && matriz[cc-1][dd] == ' ') {
					
		jj = matriz[cc][dd];
		matriz[cc][dd] = ' ';
		matriz[cc-1][dd] = jj;
		A = A + 1;
		system ("cls");
		printf ("\n                                                              O GUERREIRO DA CASA %i %i MOVEU PARA A CASA %i %i", cc, dd, cc-1, dd);
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomePrimeiro);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomePrimeiro);
					
		}
								
					
			
		else if (kk == 'S' && matriz[cc+1][dd] == ' ') {
					
		jj = matriz[cc][dd];
		matriz[cc][dd] = ' ';
		matriz[cc+1][dd] = jj;
		A = A + 1;
		system ("cls");
		printf ("\n                                                              O GUERREIRO DA CASA %i %i MOVEU PARA A CASA %i %i", cc, dd, cc+1, dd);
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomePrimeiro);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomePrimeiro);
					
		}
		
				
		else if (kk == 'L' && matriz[cc][dd+1] == ' ') {
					
		jj = matriz[cc][dd];
		matriz[cc][dd] = ' ';
		matriz[cc][dd+1] = jj;
		A = A + 1;
		system ("cls");
		printf ("\n                                                              O GUERREIRO DA CASA %i %i MOVEU PARA A CASA %i %i", cc, dd, cc, dd+1);
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomePrimeiro);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomePrimeiro);
					
		}
		
		
		else if (kk == 'O' && matriz[cc][dd-1] == ' ') {
					
		jj = matriz[cc][dd];
		matriz[cc][dd] = ' ';
		matriz[cc][dd-1] = jj;
		A = A + 1;
		system ("cls");
		printf ("\n                                                              O GUERREIRO DA CASA %i %i MOVEU PARA A CASA %i %i", cc, dd, cc, dd-1);
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomePrimeiro);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomePrimeiro);
					
		}
				
		}
			
		}
		
		else if (Jogada == 'A'){
			
		printf (" %s, Digite a linha seguido pela coluna do guerreiro com o qual você quer atacar: ", ArmazenarNomeSegundo);	
	    scanf ("%i %i", &cc, &dd);
	    
	    if (matriz[cc][dd] == ' ' || matriz[cc][dd] == '.'){
	    	    
		while (matriz[cc][dd] == ' ' || matriz[cc][dd] == '.'){
			
	    printf (" %s, Você digitou uma cordenada em que não há guerreiro, digite uma cordenada válida: ", ArmazenarNomeSegundo);
		scanf ("%i %i", &cc, &dd);	
		
	    }
			
		}
		
		if (cc == 1 || cc == 2 || cc == 3 || cc == 4){
			
		while (cc == 1 || cc == 2 || cc == 3 || cc == 4){
				
		printf (" %s, Você não pode atacar com um guerreiro do tabuleiro inimigo, digite uma cordenada válida: ", ArmazenarNomeSegundo);	
		scanf ("%i %i", &cc, &dd);
			
		}
		
	    }
		
		if (matriz[cc][dd] == '1' || matriz[cc][dd] == '2' || matriz[cc][dd] == '@' || matriz[cc][dd] == '#') {
			
		if (matriz[cc][dd] == '1') {
			
		for (ii = 5; ii >= 1; ii--) {
			
		if (matriz[ii][dd] == '1' || matriz[ii][dd] == '2' || matriz[ii][dd] == '@' || matriz[ii][dd] == '#'){
			
		matriz[ii][dd] = ' ';
		A = A + 1;
		system ("cls");
		printf ("\n                                                                     O GUERREIRO DA CASA %i %i MORREU", ii, dd);
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomePrimeiro);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomePrimeiro);
		break;	
			
		}	
		xx = xx + 1;
		if (xx == 5){
		
		A = A + 1;
		system ("cls");
		printf ("\n                                                                  NENHUM GUERREIRO INIMIGO FOI ATINGIDO");
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomePrimeiro);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomePrimeiro);	
		xx = 0;

			
		}
			
		}	
			
		}

				
		else if (matriz[cc][dd] == '2'){
			
		printf (" %s, Você escolheu atacar com o guerreiro '2', escolha a direção do tiro (E ou D): ", ArmazenarNomeSegundo);	
		scanf (" %s", &jj);
		
		if (jj != 'E' && jj != 'D'){
		
		while (jj != 'E' && jj != 'D'){
		
		printf (" %s, Você digitou a direção errada, digite a direção correta para qual deseja atirar (E ou D): ", ArmazenarNomeSegundo);	
		scanf (" %s", &jj);	
		
	    }
		
		}
		
		if (jj == 'E'){
			
		if (cc == 10){
			
		dd = dd - 4;
		
		for (ii = 5; ii >= 1; ii--){
			
		dd = dd - 1; 
		
		if (matriz[ii][dd] == '1' || matriz[ii][dd] == '2' || matriz[ii][dd] == '@' || matriz[ii][dd] == '#'){
	
	    if (ii < 5 && ii > 0 && dd > 0 && dd < 11){
		
	
		matriz[ii][dd] = ' ';
		A = A + 1;
		system ("cls");
		printf ("\n                                                                     O GUERREIRO DA CASA %i %i MORREU", ii, dd);
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomePrimeiro);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomePrimeiro);
		break;	
	
	}
		else{

        A = A + 1;
        system ("cls");
        printf ("\n                                                                  NENHUM GUERREIRO INIMIGO FOI ATINGIDO");
        printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomePrimeiro);
        Tabuleiro();
        printf ("\n");
        printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomePrimeiro);
        break;

    }	
			
		}
		xx = xx + 1;
		if (xx == 5){
		
		A = A + 1;
		system ("cls");
		printf ("\n                                                                  NENHUM GUERREIRO INIMIGO FOI ATINGIDO");
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomePrimeiro);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomePrimeiro);	
		xx = 0;
			
		}	
			
		}
	
			
		}
		else if (cc == 9){
			
		dd = dd - 3;
		
		for (ii = 5; ii >= 1; ii--){
			
		dd = dd - 1; 
		
		if (matriz[ii][dd] == '1' || matriz[ii][dd] == '2' || matriz[ii][dd] == '@' || matriz[ii][dd] == '#'){
			
	    if (ii < 5 && ii > 0 && dd > 0 && dd < 11){
		
	
		matriz[ii][dd] = ' ';
		A = A + 1;
		system ("cls");
		printf ("\n                                                                     O GUERREIRO DA CASA %i %i MORREU", ii, dd);
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomePrimeiro);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomePrimeiro);
		break;	
	
	}
		else{

        A = A + 1;
        system ("cls");
        printf ("\n                                                                 NENHUM GUERREIRO INIMIGO FOI ATINGIDO");
        printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomePrimeiro);
        Tabuleiro();
        printf ("\n");
        printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomePrimeiro);
        break;

    }	
			
	}
		xx = xx + 1;
		if (xx == 5){
		
		A = A + 1;
		system ("cls");
		printf ("\n                                                                  NENHUM GUERREIRO INIMIGO FOI ATINGIDO");
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomePrimeiro);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomePrimeiro);	
		xx = 0;
			
		}
	
	}
	
	}
	
		else if (cc == 8){
			
		dd = dd - 2;
		
		for (ii = 5; ii >= 1; ii--){
			
		dd = dd - 1; 
		
		if (matriz[ii][dd] == '1' || matriz[ii][dd] == '2' || matriz[ii][dd] == '@' || matriz[ii][dd] == '#'){
				
	    if (ii < 5 && ii > 0 && dd > 0 && dd < 11){
		
	
		matriz[ii][dd] = ' ';
		A = A + 1;
		system ("cls");
		printf ("\n                                                                     O GUERREIRO DA CASA %i %i MORREU", ii, dd);
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomePrimeiro);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomePrimeiro);
		break;	
	
	}
		else{

        A = A + 1;
        system ("cls");
        printf ("\n                                                                  NENHUM GUERREIRO INIMIGO FOI ATINGIDO");
        printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomePrimeiro);
        Tabuleiro();
        printf ("\n");
        printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomePrimeiro);
        break;

    }		
			
	}
		xx = xx + 1;
		if (xx == 5){
		
		A = A + 1;
		system ("cls");
		printf ("\n                                                                  NENHUM GUERREIRO INIMIGO FOI ATINGIDO");
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomePrimeiro);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomePrimeiro);	
		xx = 0;
			
		}	
			
	}
			
	}
		else if (cc == 7){
			
		dd = dd - 1;
		
		for (ii = 5; ii >= 1; ii--){
			
		dd = dd - 1;
		
		if (matriz[ii][dd] == '1' || matriz[ii][dd] == '2' || matriz[ii][dd] == '@' || matriz[ii][dd] == '#'){
	
	    if (ii < 5 && ii > 0 && dd > 0 && dd < 11){
		
	
		matriz[ii][dd] = ' ';
		A = A + 1;
		system ("cls");
		printf ("\n                                                                     O GUERREIRO DA CASA %i %i MORREU", ii, dd);
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomePrimeiro);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomePrimeiro);
		break;	
	
	}
		else{

        A = A + 1;
        system ("cls");
        printf ("\n                                                                  NENHUM GUERREIRO INIMIGO FOI ATINGIDO");
        printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomePrimeiro);
        Tabuleiro();
        printf ("\n");
        printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomePrimeiro);
        break;

    }
			
	}	
		xx = xx + 1;
		if (xx == 5){
		
		A = A + 1;
		system ("cls");
		printf ("\n                                                                  NENHUM GUERREIRO INIMIGO FOI ATINGIDO");
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomePrimeiro);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomePrimeiro);	
		xx = 0;
			
		}
			
	}			
			
	}	
		
	}
				
		else if (jj == 'D'){
			
		if (cc == 10){
			
		dd = dd + 4;
		
		for (ii = 5; ii >= 1; ii--){
			
		dd = dd + 1; 
		
		if (matriz[ii][dd] == '1' || matriz[ii][dd] == '2' || matriz[ii][dd] == '@' || matriz[ii][dd] == '#'){
	
	    if (ii < 5 && ii > 0 && dd > 0 && dd < 11){
		
	
		matriz[ii][dd] = ' ';
		A = A + 1;
		system ("cls");
		printf ("\n                                                                     O GUERREIRO DA CASA %i %i MORREU", ii, dd);
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomePrimeiro);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomePrimeiro);
		break;	
	
	}
		else{

        A = A + 1;
        system ("cls");
        printf ("\n                                                                  NENHUM GUERREIRO INIMIGO FOI ATINGIDO");
        printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomePrimeiro);
        Tabuleiro();
        printf ("\n");
        printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomePrimeiro);
        break;

    }
	}
		xx = xx + 1;
		if (xx == 5){
		
		A = A + 1;
		system ("cls");
		printf ("\n                                                                  NENHUM GUERREIRO INIMIGO FOI ATINGIDO");
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomePrimeiro);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomePrimeiro);	
		xx = 0;
			
		}	
			
	}	
			
	}
		else if (cc == 9){
			
		dd = dd + 3;
		
		for (ii = 5; ii >= 1; ii--){
			
		dd = dd + 1; 
		
		if (matriz[ii][dd] == '1' || matriz[ii][dd] == '2' || matriz[ii][dd] == '@' || matriz[ii][dd] == '#'){

	    if (ii < 5 && ii > 0 && dd > 0 && dd < 11){
		
	
		matriz[ii][dd] = ' ';
		A = A + 1;
		system ("cls");
		printf ("\n                                                                     O GUERREIRO DA CASA %i %i MORREU", ii, dd);
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomePrimeiro);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomePrimeiro);
		break;	
	
	}
		else{

        A = A + 1;
        system ("cls");
        printf ("\n                                                                  NENHUM GUERREIRO INIMIGO FOI ATINGIDO");
        printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomePrimeiro);
        Tabuleiro();
        printf ("\n");
        printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomePrimeiro);
        break;

    }	
			
	}
		xx = xx + 1;
		if (xx == 5){
		
		A = A + 1;
		system ("cls");
		printf ("\n                                                                  NENHUM GUERREIRO INIMIGO FOI ATINGIDO");
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomePrimeiro);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomePrimeiro);	
		xx = 0;
			
		}
	
	}
	
	}
		else if (cc == 8){
			
		dd = dd + 2;
		
		for (ii = 5; ii >= 1; ii--){
			
		dd = dd + 1; 
		
		if (matriz[ii][dd] == '1' || matriz[ii][dd] == '2' || matriz[ii][dd] == '@' || matriz[ii][dd] == '#'){
	
	    if (ii < 5 && ii > 0 && dd > 0 && dd < 11){
		
	
		matriz[ii][dd] = ' ';
		A = A + 1;
		system ("cls");
		printf ("\n                                                                     O GUERREIRO DA CASA %i %i MORREU", ii, dd);
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomePrimeiro);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomePrimeiro);
		break;	
	
	}
		else{

        A = A + 1;
        system ("cls");
        printf ("\n                                                                  NENHUM GUERREIRO INIMIGO FOI ATINGIDO");
        printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomePrimeiro);
        Tabuleiro();
        printf ("\n");
        printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomePrimeiro);
        break;

    }	
			
	}	
		xx = xx + 1;
		if (xx == 5){
		
		A = A + 1;
		system ("cls");
		printf ("\n                                                                  NENHUM GUERREIRO INIMIGO FOI ATINGIDO");
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomePrimeiro);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomePrimeiro);	
		xx = 0;
			
		}
			
	}
			
	}
		else if (cc == 7){
			
		dd = dd + 1;
		
		for (ii = 5; ii >= 1; ii--){
			
		dd = dd + 1;
		
		if (matriz[ii][dd] == '1' || matriz[ii][dd] == '2' || matriz[ii][dd] == '@' || matriz[ii][dd] == '#'){
	
	    if (ii < 5 && ii > 0 && dd > 0 && dd < 11){
		
	
		matriz[ii][dd] = ' ';
		A = A + 1;
		system ("cls");
		printf ("\n                                                                     O GUERREIRO DA CASA %i %i MORREU", ii, dd);
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomePrimeiro);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomePrimeiro);
		break;	
	
	}
		else{

        A = A + 1;
        system ("cls");
        printf ("\n                                                                  NENHUM GUERREIRO INIMIGO FOI ATINGIDO");
        printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomePrimeiro);
        Tabuleiro();
        printf ("\n");
        printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomePrimeiro);
        break;

    }
			
	}
		xx = xx + 1;
		if (xx == 5){
		
		A = A + 1;
		system ("cls");
		printf ("\n                                                                  NENHUM GUERREIRO INIMIGO FOI ATINGIDO");
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomePrimeiro);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomePrimeiro);	
		xx = 0;
			
		}	
			
	}			
			
	}
										
	}
			
	}
	
	else if (matriz[cc][dd] == '@'){
		
		contar = 0;
		contarum = 0;
		contardois = 0;
		contartres = 0;
		contarquatro = 0;
		contarcinco = 0;

	    printf (" %s, voce escolheu atacar com o guerreiro '@', escolha uma cordenada do tabuleiro inimigo para atacar em forma de X: ", ArmazenarNomeSegundo);
		scanf ("%i %i", &oo, &ll);
		
		if (oo == 5 || oo == 6 || oo == 7 || oo == 8 || oo == 9 || oo == 10 || oo == 11 || ll < 1 || ll > 10 || oo < 0 || oo > 10){
			
		while (oo == 5 || oo == 6 || oo == 7 || oo == 8 || oo == 9 || oo == 10 || oo == 11 || ll < 1 || ll > 10 || oo < 0 || oo > 10){
			
		printf (" %s, Você não pode atacar esses locais, escolha uma cordenada do tabuleiro inimigo para atacar: ", ArmazenarNomeSegundo);
		scanf ("%i %i", &oo, &ll);
			
		}
			
		}
								
		if (matriz[oo][ll]     == '1' || matriz[oo][ll]     == '2' || matriz[oo][ll]     == '@' || matriz[oo][ll] == '#'){
			    	
	    contar = contar + 1;
	    contarum = contarum + 1;
					
	}
		if (matriz[oo+1][ll+1] == '1' || matriz[oo+1][ll+1] == '2' || matriz[oo+1][ll+1] == '@' || matriz[oo+1][ll+1] == '#'){
			    	
	    contar = contar + 1;
	    contardois = contardois + 1;
					
	}
	    if (matriz[oo+1][ll-1] == '1' || matriz[oo+1][ll-1] == '2' || matriz[oo+1][ll-1] == '@' || matriz[oo+1][ll-1] == '#'){
			    	
		contar = contar + 1;
		contartres = contartres + 1;
					
	}
	    if (matriz[oo-1][ll+1] == '1' || matriz[oo-1][ll+1] == '2' || matriz[oo-1][ll+1] == '@' || matriz[oo-1][ll+1] == '#'){
			    	
	    contar = contar + 1;
		contarquatro = contarquatro + 1;	
			    	
	}
	    if (matriz[oo-1][ll-1] == '1' || matriz[oo-1][ll-1] == '2' || matriz[oo-1][ll-1] == '@' || matriz[oo-1][ll-1] == '#'){
			    	
	    contar = contar + 1;
		contarcinco = contarcinco + 1;	
			    	
	}
										
		matriz[oo][ll]     = ' '; 
		matriz[oo+1][ll+1] = ' '; 	
		matriz[oo+1][ll-1] = ' ';	
		matriz[oo-1][ll+1] = ' '; 
		matriz[oo-1][ll-1] = ' ';
		A = A + 1;
		system ("cls");
	    printf ("\n\n");
		printf ("                                                                     MORREU(AM) UM TOTAL DE %i GUERREIROS\n", contar);	
		printf ("                                                                     O(S) GUERREIRO(S) DA(S) CASA(S) ");
		if (contarum == 1){
		printf ("%i %i  ", oo, ll);
		}
		if (contardois == 1){
		printf ("%i %i  ", oo+1, ll+1);
		}	
		if (contartres == 1){
		printf ("%i %i  ", oo+1, ll-1);		
		}
		if (contarquatro == 1){
		printf ("%i %i  ", oo-1, ll+1);	
		}
		if (contarcinco == 1){
		printf ("%i %i  ", oo-1, ll-1);
		}
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomePrimeiro);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomePrimeiro); 	
						
	}
	else if (matriz[cc][dd] == '#'){
		
		contar = 0;
		contarum = 0;
		contardois = 0;
		contartres = 0;
		contarquatro = 0;
		contarcinco = 0;
		
		printf (" %s, voce escolheu atacar com o guerreiro '#', escolha uma cordenada do tabuleiro inimigo para atacar em forma de +: ", ArmazenarNomeSegundo);
		scanf ("%i %i", &oo, &ll);
		
		if (oo == 5 || oo == 6 || oo == 7 || oo == 8 || oo == 9 || oo == 10 || oo == 11 || ll < 1 || ll > 10 || oo < 0 || oo > 10){
			
		while (oo == 5 || oo == 6 || oo == 7 || oo == 8 || oo == 9 || oo == 10 || oo == 11 || ll < 1 || ll > 10 || oo < 0 || oo > 10){
			
		printf (" %s, Você não pode atacar esses locais, escolha uma cordenada do tabuleiro inimigo para atacar: ", ArmazenarNomeSegundo);
		scanf ("%i %i", &oo, &ll);
			
	}
			
	}
								
		if (matriz[oo][ll]     == '1' || matriz[oo][ll]     == '2' || matriz[oo][ll]     == '@' || matriz[oo][ll] == '#'){
			    	
	    contar = contar + 1;
	    contarum = contarum + 1;
					
	}
		if (matriz[oo+1][ll] == '1' || matriz[oo+1][ll] == '2' || matriz[oo+1][ll] == '@' || matriz[oo+1][ll] == '#'){
			    	
	    contar = contar + 1;
	    contardois = contardois + 1;
					
	}
	    if (matriz[oo-1][ll] == '1' || matriz[oo-1][ll] == '2' || matriz[oo-1][ll] == '@' || matriz[oo-1][ll] == '#'){
			    	
		contar = contar + 1;
		contartres = contartres + 1;
					
	}
	    if (matriz[oo][ll+1] == '1' || matriz[oo][ll+1] == '2' || matriz[oo][ll+1] == '@' || matriz[oo][ll+1] == '#'){
			    	
	    contar = contar + 1;
		contarquatro = contarquatro + 1;	
			    	
	}
	    if (matriz[oo][ll-1] == '1' || matriz[oo][ll-1] == '2' || matriz[oo][ll-1] == '@' || matriz[oo][ll-1] == '#'){
			    	
	    contar = contar + 1;
		contarcinco = contarcinco + 1;	
			    	
	}
			
									
		matriz[oo][ll]   = ' '; 
		matriz[oo+1][ll] = ' '; 	
		matriz[oo-1][ll] = ' ';	
		matriz[oo][ll+1] = ' '; 
		matriz[oo][ll-1] = ' '; 
		A = A + 1;
		system ("cls");
	    printf ("\n\n");
		printf ("                                                                     MORREU(AM) UM TOTAL DE %i GUERREIROS\n", contar);	
		printf ("                                                                     O(S) GUERREIRO(S) DA(S) CASA(S) ");
		if (contarum == 1){
		printf ("%i %i  ", oo, ll);
		}
		if (contardois == 1){
		printf ("%i %i  ", oo+1, ll);
		}	
		if (contartres == 1){
		printf ("%i %i  ", oo-1, ll);		
		}
		if (contarquatro == 1){
		printf ("%i %i  ", oo, ll+1);	
		}
		if (contarcinco == 1){
		printf ("%i %i  ", oo, ll-1);
		}
		printf ("\n\n\n                                                                     VEZ DO JOGADOR %s DE JOGAR\n", ArmazenarNomePrimeiro);
		Tabuleiro();
		printf ("\n");
		printf (" %s, digite 'M' para movimentar ou 'A' para atacar: ", ArmazenarNomePrimeiro);
				
	}
	
				
	}
			
	}
		

								
			
	}	
	    	
	if (matriz[1][1] == ' ' && matriz[1][2] == ' ' && matriz[1][3] == ' ' && matriz[1][4] == ' ' && matriz[1][5] == ' ' && matriz[1][6] == ' ' && matriz[1][7] == ' ' && matriz[1][8] == ' ' && matriz[1][9] == ' ' && matriz[1][10] &&
	    matriz[2][1] == ' ' && matriz[2][2] == ' ' && matriz[2][3] == ' ' && matriz[2][4] == ' ' && matriz[2][5] == ' ' && matriz[2][6] == ' ' && matriz[2][7] == ' ' && matriz[2][8] == ' ' && matriz[2][9] == ' ' && matriz[2][10] &&
	    matriz[3][1] == ' ' && matriz[3][2] == ' ' && matriz[3][3] == ' ' && matriz[3][4] == ' ' && matriz[3][5] == ' ' && matriz[3][6] == ' ' && matriz[3][7] == ' ' && matriz[3][8] == ' ' && matriz[3][9] == ' ' && matriz[3][10] &&
	    matriz[4][1] == ' ' && matriz[4][2] == ' ' && matriz[4][3] == ' ' && matriz[4][4] == ' ' && matriz[4][5] == ' ' && matriz[4][6] == ' ' && matriz[4][7] == ' ' && matriz[4][8] == ' ' && matriz[4][9] == ' ' && matriz[4][10]){
		
		system ("cls");
	    printf ("\n\n");
	    printf ("                                                                         %s VENCEU A BATALHA DA LAPÔNIA", ArmazenarNomeSegundo);
		Tabuleiro();
		printf ("\n");
		A = 100;

		
	}
	
	if (matriz[7][1] == ' ' && matriz[7][2] == ' ' && matriz[7][3] == ' ' && matriz[7][4] == ' ' && matriz[7][5] == ' ' && matriz[7][6] == ' ' && matriz[7][7] == ' ' && matriz[7][8] == ' ' && matriz[7][9] == ' ' && matriz[7][10] &&
	    matriz[8][1] == ' ' && matriz[8][2] == ' ' && matriz[8][3] == ' ' && matriz[8][4] == ' ' && matriz[8][5] == ' ' && matriz[8][6] == ' ' && matriz[8][7] == ' ' && matriz[8][8] == ' ' && matriz[8][9] == ' ' && matriz[8][10] &&
	    matriz[9][1] == ' ' && matriz[9][2] == ' ' && matriz[9][3] == ' ' && matriz[9][4] == ' ' && matriz[9][5] == ' ' && matriz[9][6] == ' ' && matriz[9][7] == ' ' && matriz[9][8] == ' ' && matriz[9][9] == ' ' && matriz[9][10] &&
	    matriz[10][1] == ' ' && matriz[10][2] == ' ' && matriz[10][3] == ' ' && matriz[10][4] == ' ' && matriz[10][5] == ' ' && matriz[10][6] == ' ' && matriz[10][7] == ' ' && matriz[10][8] == ' ' && matriz[10][9] == ' ' && matriz[10][10]){
		
		system ("cls");
	    printf ("\n\n");
	    printf ("                                                                         %s VENCEU A BATALHA DA LAPÔNIA", ArmazenarNomePrimeiro);
		Tabuleiro();
		printf ("\n");
		A = 100;
		
	}   
	
	if (A == 50){
		
		system ("cls");
	    printf ("\n\n");
	    printf ("                                                                                   O JOGO EMPATOU");
		Tabuleiro();
		printf ("\n");
		
		
	}	
	    	
	 xx = 0;   	
	   	    	
	}
	
		printf ("   Digite 0 para voltar ao menu: ");
	    scanf (" %c", &Menu);    
	    	 	
	    while (Menu != '0'){	    	
		printf ("   Digite 0 para voltar ao menu: ");
		scanf  (" %c", &Menu);			    	
		}
		
		matriz[1][1] = ' ';  
        matriz[1][2] = ' '; 
		matriz[1][3] = ' '; 
		matriz[1][4] = ' '; 
		matriz[1][5] = ' '; 
		matriz[1][6] = ' '; 
		matriz[1][7] = ' '; 
		matriz[1][8] = ' '; 
		matriz[1][9] = ' '; 
		matriz[1][10] = ' '; 
		matriz[2][1] = ' ';  
        matriz[2][2] = ' '; 
		matriz[2][3] = ' '; 
		matriz[2][4] = ' '; 
		matriz[2][5] = ' '; 
		matriz[2][6] = ' '; 
		matriz[2][7] = ' '; 
		matriz[2][8] = ' '; 
		matriz[2][9] = ' '; 
		matriz[2][10] = ' '; 		
		matriz[3][1] = ' ';  
        matriz[3][2] = ' '; 
		matriz[3][3] = ' '; 
		matriz[3][4] = ' '; 
		matriz[3][5] = ' '; 
		matriz[3][6] = ' '; 
		matriz[3][7] = ' '; 
		matriz[3][8] = ' '; 
		matriz[3][9] = ' '; 
		matriz[3][10] = ' '; 
		matriz[4][1] = ' ';  
        matriz[4][2] = ' '; 
		matriz[4][3] = ' '; 
		matriz[4][4] = ' '; 
		matriz[4][5] = ' '; 
		matriz[4][6] = ' '; 
		matriz[4][7] = ' '; 
		matriz[4][8] = ' '; 
		matriz[4][9] = ' '; 
		matriz[4][10] = ' '; 
		matriz[7][1] = ' ';  
        matriz[7][2] = ' '; 
		matriz[7][3] = ' '; 
		matriz[7][4] = ' '; 
		matriz[7][5] = ' '; 
		matriz[7][6] = ' '; 
		matriz[7][7] = ' '; 
		matriz[7][8] = ' '; 
		matriz[7][9] = ' '; 
		matriz[7][10] = ' '; 
		matriz[8][1] = ' ';  
        matriz[8][2] = ' '; 
		matriz[8][3] = ' '; 
		matriz[8][4] = ' '; 
		matriz[8][5] = ' '; 
		matriz[8][6] = ' '; 
		matriz[8][7] = ' '; 
		matriz[8][8] = ' '; 
		matriz[8][9] = ' '; 
		matriz[8][10] = ' '; 		
		matriz[9][1] = ' ';  
        matriz[9][2] = ' '; 
		matriz[9][3] = ' '; 
		matriz[9][4] = ' '; 
		matriz[9][5] = ' '; 
		matriz[9][6] = ' '; 
		matriz[9][7] = ' '; 
		matriz[9][8] = ' '; 
		matriz[9][9] = ' '; 
		matriz[9][10] = ' '; 
		matriz[10][1] = ' ';  
        matriz[10][2] = ' '; 
		matriz[10][3] = ' '; 
		matriz[10][4] = ' '; 
		matriz[10][5] = ' '; 
		matriz[10][6] = ' '; 
		matriz[10][7] = ' '; 
		matriz[10][8] = ' '; 
		matriz[10][9] = ' '; 
		matriz[10][10] = ' '; 	
	    		
	    system("cls");
			
		
	}
	

	
	    else if (Menu == '2'){
	  	
	  	system("cls");
	  	
	  	printf ("   ------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	  	printf ("   |                                                                         HISTÓRIA                                                                               |\n");
	  	printf ("   |                                                                                                                                                                |\n");
	  	printf ("   |     A Lapônia era uma região de 12 quilômetros quadrados situada na costa sul da África do Sul, cercada por uma grande cordilheira e possuía a maior riqueza   |\n");
	  	printf ("   |da época da região: o direito de explorar o grande lago “Ichibi Elikhulu”, que na língua Zulu quer dizer um grande lago”, o qual atravessava toda a Lapônia.    |\n");
	  	printf ("   |Entre 300 a.C e 200 a.C. esta região foi disputada por facções guerreiras do norte e do sul, separadas apenas pelo grande lago. Era impossível transpor o lago  |\n");
	  	printf ("   |se houvesse algum inimigo do outro lado, portanto as facções criaram técnicas e armamentos para travar disputas entre si de um lado ao outro do lago.           |\n");
	  	printf ("   |     A história diz que nunca houve um consenso de qual facção realmente obteve o poder da região, pois há registros de um pouco depois de 200 a.C. um grande   |\n");
	  	printf ("   |maremoto inundou a Lapônia dizimando todos que ali viviam batalhando pelo grande poder. O que se sabe é que antes do dilúvio estava acontecendo uma batalha e   |\n");
	  	printf ("   |que uma das facções estava ganhando. Apenas uma guerreira conseguiu fugir da Lapônia, chamada Iqhawe Elihlakaniphile, que em Zulu quer dizer “Sábia Guerreira”. |\n");
	  	printf ("   |Para homenagear seus antepassados, Ighawe criou um jogo posteriormente e o disseminou mundo afora. O jogo consiste em um tabuleiro de tamanho 12x12, com as     |\n");
	  	printf ("   |casas da borda representando a cordilheira e separado exatamente no meio por uma faixa de 20 casas, representando o lago Ichibi, conforme ilustração a seguir:  |\n");
		printf ("   |                                                                                                                                                                |\n");
		printf ("   |                                                     -------------------------------------------------                                                          |\n");
		printf ("   |                                                     | * | * | * | * | * | * | * | * | * | * | * | * |                                                          |\n");
		printf ("   |                                                     -------------------------------------------------                                                          |\n");
		printf ("   |                                                     | * |   |   |   |   |   |   |   |   |   |   | * |                                                          |\n");
		printf ("   |                                                     -------------------------------------------------                                                          |\n");
		printf ("   |                                                     | * |   |   |   |   |   |   |   |   |   |   | * |                                                          |\n");
		printf ("   |                                                     -------------------------------------------------                                                          |\n");
		printf ("   |                                                     | * |   |   |   |   |   |   |   |   |   |   | * |                                                          |\n");
		printf ("   |                                                     -------------------------------------------------                                                          |\n");
		printf ("   |                                                     | * |   |   |   |   |   |   |   |   |   |   | * |                                                          |\n");
		printf ("   |                                                     -------------------------------------------------                                                          |\n");
		printf ("   |                                                     | * | ~ | ~ | ~ | ~ | ~ | ~ | ~ | ~ | ~ | ~ | * |                                                          |\n");
		printf ("   |                                                     -------------------------------------------------                                                          |\n");
		printf ("   |                                                     | * | ~ | ~ | ~ | ~ | ~ | ~ | ~ | ~ | ~ | ~ | * |                                                          |\n");
		printf ("   |                                                     -------------------------------------------------                                                          |\n");
		printf ("   |                                                     | * |   |   |   |   |   |   |   |   |   |   | * |                                                          |\n");
		printf ("   |                                                     -------------------------------------------------                                                          |\n");
		printf ("   |                                                     | * |   |   |   |   |   |   |   |   |   |   | * |                                                          |\n");
		printf ("   |                                                     -------------------------------------------------                                                          |\n");
		printf ("   |                                                     | * |   |   |   |   |   |   |   |   |   |   | * |                                                          |\n");
		printf ("   |                                                     -------------------------------------------------                                                          |\n");
		printf ("   |                                                     | * |   |   |   |   |   |   |   |   |   |   | * |                                                          |\n");
		printf ("   |                                                     -------------------------------------------------                                                          |\n");
		printf ("   |                                                     | * | * | * | * | * | * | * | * | * | * | * | * |                                                          |\n");
		printf ("   |                                                     -------------------------------------------------                                                          |\n");		
		printf ("   |                                                                                                                                                                |\n");
		printf ("   |A cordilheira é representada pelos símbolos de asterisco ‘*’, e o lago pelos símbolos de til ‘~’. Os guerreiros das facções N e S (norte e sul respectivamente) |\n");
		printf ("   |se posicionam em cada lado (norte ou sul) do mapa.                                                                                                              |\n");		
		printf ("   |                                                                                                                                                                |\n");
		printf ("   |Cada jogador posicionará manualmente 8 guerreiros (representados pelos números de 1 ou 2, conforme exemplo a seguir) e mais um guerreiro especial de cada lado  |\n");
		printf ("   |(representados pelo # e @):                                                                                                                                     |\n");		
		printf ("   |                                                                                                                                                                |\n");
		printf ("   |                                                     -------------------------------------------------                                                          |\n");
		printf ("   |                                                     | * | * | * | * | * | * | * | * | * | * | * | * |                                                          |\n");
		printf ("   |                                                     -------------------------------------------------                                                          |\n");
		printf ("   |                                                     | * |   |   |   |   | 1 | 2 |   |   |   |   | * |                                                          |\n");
		printf ("   |                                                     -------------------------------------------------                                                          |\n");
		printf ("   |                                                     | * |   | 1 |   |   |   |   | # |   |   |   | * |                                                          |\n");
		printf ("   |                                                     -------------------------------------------------                                                          |\n");
		printf ("   |                                                     | * |   |   |   | 2 |   | 1 |   |   | 2 |   | * |                                                          |\n");
		printf ("   |                                                     -------------------------------------------------                                                          |\n");
		printf ("   |                                                     | * |   | 2 |   |   |   |   |   |   | 2 |   | * |                                                          |\n");
		printf ("   |                                                     -------------------------------------------------                                                          |\n");
		printf ("   |                                                     | * | ~ | ~ | ~ | ~ | ~ | ~ | ~ | ~ | ~ | ~ | * |                                                          |\n");
		printf ("   |                                                     -------------------------------------------------                                                          |\n");
		printf ("   |                                                     | * | ~ | ~ | ~ | ~ | ~ | ~ | ~ | ~ | ~ | ~ | * |                                                          |\n");
		printf ("   |                                                     -------------------------------------------------                                                          |\n");
		printf ("   |                                                     | * |   | 1 |   |   | 1 |   |   |   | 1 |   | * |                                                          |\n");
		printf ("   |                                                     -------------------------------------------------                                                          |\n");
		printf ("   |                                                     | * |   |   |   |   | 2 |   |   |   |   |   | * |                                                          |\n");
		printf ("   |                                                     -------------------------------------------------                                                          |\n");
		printf ("   |                                                     | * |   |   | 2 |   |   |   | 2 | @ |   | 2 | * |                                                          |\n");
		printf ("   |                                                     -------------------------------------------------                                                          |\n");
		printf ("   |                                                     | * |   |   |   |   | 1 |   |   |   |   |   | * |                                                          |\n");
		printf ("   |                                                     -------------------------------------------------                                                          |\n");
		printf ("   |                                                     | * | * | * | * | * | * | * | * | * | * |   | * |                                                          |\n");
		printf ("   |                                                     -------------------------------------------------                                                          |\n");
	    printf ("   |                                                                                                                                                                |\n");
		printf ("   |Cada jogada consiste em informar a casa onde está o guerreiro que fará o ataque ou movimento (sempre uma casa para frente, para trás, para um lado ou outro,    |\n");
		printf ("   |não podendo ser executado um movimento na diagonal).                                                                                                            |\n");			
		printf ("   |                                                                                                                                                                |\n");
		printf ("   |Se a opção for movimentar, é necessário informar para qual casa se deseja ir: por exemplo, um guerreiro em uma casa (4,4), só poderia ir para a direita ou      |\n");
		printf ("   |esquerda, ou para trás, visto que na frente da sua casa 4,4 está o lago. Também não deve ser possível movimentar por cima da cordilheira. Vide a ilustração a   |\n");
		printf ("   |seguir com o auxílio da visualização dos números das linhas e colunas imaginárias do tabuleiro:                                                                 |\n");
		printf ("   |                                                                                                                                                                |\n");
		printf ("   |                                                  -------------------------------------------------------                                                       |\n");
		printf ("   |                                                  ||   || 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |10 |11 |                                                       |\n");
		printf ("   |                                                  -------------------------------------------------------                                                       |\n");
		printf ("   |                                                  || 0 || * | * | * | * | * | * | * | * | * | * | * | * |                                                       |\n");
		printf ("   |                                                  -------------------------------------------------------                                                       |\n");
		printf ("   |                                                  || 1 || * |   |   |   |   | 1 | 2 |   |   |   |   | * |                                                       |\n");
		printf ("   |                                                  -------------------------------------------------------                                                       |\n");
		printf ("   |                                                  || 2 || * |   | 1 |   |   |   |   | # |   |   |   | * |                                                       |\n");
		printf ("   |                                                  -------------------------------------------------------                                                       |\n");
		printf ("   |                                                  || 3 || * |   |   |   | + | 1 | 1 |   |   | 2 |   | * |                                                       |\n");
		printf ("   |                                                  -------------------------------------------------------                                                       |\n");
		printf ("   |                                                  || 4 || * |   |   | + | 2 | + |   |   |   | 2 |   | * |                                                       |\n");
		printf ("   |                                                  -------------------------------------------------------                                                       |\n");
		printf ("   |                                                  || 5 || * | ~ | ~ | ~ | ~ | ~ | ~ | ~ | ~ | ~ | ~ | * |                                                       |\n");
		printf ("   |                                                  -------------------------------------------------------                                                       |\n");	
	    printf ("   |                                                                                                                                                                |\n");
		printf ("   |Observação: no exeplo anterior, o símbolo '+' significa os lugares para qual o guerreiro que está na casa (4,4) pode se movimentar                              |\n");	
		printf ("   |                                                                                                                                                                |\n");
	    printf ("   |Se a opção for atacar e o ataque vier de um guerreiro número 1, ele sempre é frontal, se for de um número 2 ele é na diagonal para esquerda ou direita,         |\n");
        printf ("   |portanto, sendo um guerreiro de número 2, o jogador precisará também decidir se deve atacar para direita ou para esquerda. Por exemplo, o guerreiro 2 destacado |\n");	    
	    printf ("   |a seguir poderia derrubar o guerreiro 1 oponente caso escolhesse um ataque para a esquerda, observe a trajetória ilustrada a seguir:                            |\n");    
		printf ("   |                                                                                                                                                                |\n");
	    printf ("   |                                                     -------------------------------------------------                                                          |\n");
	    printf ("   |                                                     | * | * | * | * | * | * | * | * | * | * | * | * |                                                          |\n");
        printf ("   |                                                     -------------------------------------------------                                                          |\n");	    
	    printf ("   |                                                     | * |   |   |   |   | 1 | 2 |   |   | 2 |   | * |                                                          |\n");
	    printf ("   |                                                     -------------------------------------------------                                                          |\n");
        printf ("   |                                                     | * |   | 1 |   |   |   |   | # |   |   |   | * |                                                          |\n");	    
	    printf ("   |                                                     -------------------------------------------------                                                          |\n");
	    printf ("   |                                                     | * |   |   |   | 2 |   | 1 |   |   | 2 |   | * |                                                          |\n");
	    printf ("   |                                                     -------------------------------------------------                                                          |\n");
	    printf ("   |                                                     | * |   | 2 |   |   |   |   |   | / |   |   | * |                                                          |\n");
	    printf ("   |                                                     -------------------------------------------------                                                          |\n");    
	    printf ("   |                                                     | * | ~ | ~ | ~ | ~ | ~ | ~ | / | ~ | ~ | ~ | * |                                                          |\n");
	    printf ("   |                                                     -------------------------------------------------                                                          |\n");
	    printf ("   |                                                     | * | ~ | ~ | ~ | ~ | ~ | / | ~ | ~ | ~ | ~ | * |                                                          |\n");
	    printf ("   |                                                     -------------------------------------------------                                                          |\n");
        printf ("   |                                                     | * |   | 1 |   |   | 1 |   |   |   | 1 |   | * |                                                          |\n");  	    
	    printf ("   |                                                     -------------------------------------------------                                                          |\n");
	    printf ("   |                                                     | * |   |   |   |   | 2 |   |   |   | 1 |   | * |                                                          |\n");
	    printf ("   |                                                     -------------------------------------------------                                                          |\n");
	    printf ("   |                                                     | * |   |   | 2 |   |   |   | 2 | @ |   |   | * |                                                          |\n");
	    printf ("   |                                                     -------------------------------------------------                                                          |\n");
	    printf ("   |                                                     | * |   |   |   |   |   | 1 |   |   |   |   | * |                                                          |\n");
	    printf ("   |                                                     -------------------------------------------------                                                          |\n");
	    printf ("   |                                                     | * | * | * | * | * | * | * | * | * | * | * | * |                                                          |\n");
	    printf ("   |                                                     -------------------------------------------------                                                          |\n");
		printf ("   |                                                                                                                                                                |\n");	    
		printf ("   |O ataque será exibido apagando-se o tabuleiro e imprimindo-o já com o efeito do ataque no tabuleiro, ou seja a retirada de um oponente eventualmente atingido   |\n");
		printf ("   |pelo ataque.                                                                                                                                                    |\n");		
		printf ("   |Também haverá 2 guerreiros especiais (um para cada jogador) guerreiro '@' e o '#'. O guerreiro '@' pode escolher um local do tabuleiro inimigo para atacar,     |\n");	
		printf ("   |e o ataque se expandiará em formato de X:                                                                                                                       |\n");
		printf ("   |                                                                                                                                                                |\n");
		printf ("   |                                                                         | X |   | X |                                                                          |\n");
		printf ("   |                                                                         |   | X |   |                                                                          |\n");
		printf ("   |                                                                         | X |   | X |                                                                          |\n");		
		printf ("   |                                                                                                                                                                |\n");
		printf ("   |O guerreiro '@' pode escolher um local do tabuleiro inimigo para atacar, e o ataque se expandiará em formato de +:                                              |\n");	
		printf ("   |                                                                                                                                                                |\n");		
		printf ("   |                                                                         |   | + |   |                                                                          |\n");
		printf ("   |                                                                         | + | + | + |                                                                          |\n");
		printf ("   |                                                                         |   | + |   |                                                                          |\n");	
		printf ("   |                                                                                                                                                                |\n");		
		printf ("   |                                                                                                                                                                |\n");
		printf ("   |O jogo identificará que a partida terminou, quando restar apenas um dos jogadores com guerreiros no jogo.                                                       |\n");
		printf ("   |O jogo identificará que a partida deu empate, quando o limite máximo de 50 turnos for alcançado.                                                                |\n");
		printf ("   |                                                                                                                                                                |\n");
	    printf ("   |                                                                                                                                                                |\n");
		printf ("   |                                                                                                                                                                |\n");
		printf ("   |                                                                  ---------------------------                                                                   |\n");
	    printf ("   |                                                                  |Voltar ao menu:         0|                                                                   |\n");
	    printf ("   |                                                                  ---------------------------                                                                   |\n");
		printf ("   |                                                                                                                                                                |\n");
		printf ("   ------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
		
		printf ("   Digite 0 para voltar ao menu: ");
	    scanf (" %c", &Menu);    
	    	 	
	    while (Menu != '0'){	    	
		printf ("   Digite 0 para voltar ao menu: ");
		scanf  (" %c", &Menu);			    	
		}	
	    	
		
		
	    system("cls");
		
	}
	
	    else if (Menu == '3'){
			
		
	}
	}
    
	
	    system ("pause");  

	
	    return 0;
}

