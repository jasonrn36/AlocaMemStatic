#include <stdio.h>
#include <iostream>
#include <locale.h>
/* essse "using name space std" serve para evitar]
 ficar adicionando o std:: no c�digo */
using namespace std;

 	static int a = 0;  // vari�vel global, aloca��o est�tica

	void incrementa(void)
 	{
 		int b = 0; // vari�vel local, aloca��o autom�tica
 		static int c = 0; // vari�vel local, aloca��o est�tica
 	 printf ("a: %d, b: %d, c: %d\n", a, b, c);
		a++;
 		b++;
 		c++;
 	}

 	int main(void){

		/*Para colocar um t�tulo ao programa
		Adicione o setlocale para configurar o idioma do seu local
		depois adcione um cout << "Titulo do seu programa" << endl; para finalizar */
		setlocale (LC_ALL, "Portuguese_Brazil");
		cout << "�'�'�'� Aloca��o de mem�ria �'�'�'�\n" << endl;  // Exibe o t�tulo no console
		cout << "Para alocar o PONTEIRO na mem�ria no modo GLOBAL," << endl;
		cout << "inserimos ela na primeira parte do c�digo" << endl;
		cout << "declarando ela como static." << endl;
		cout << "\nDepois iremos dizer ao programa que tipo de vari�vel" << endl;
		cout << "O Ponteiro ser� do tipo:" << endl;
		cout << "int = inteiro, char = letra, double = ponto flutuante" <<endl;
		cout << "string = texto, bolean = valores logicos 'verdadeiro ou falso \n" << endl;  // Exibe o t�tulo no console

  		// Seu c�digo aqui
		int i;
		for (i = 0; i < 5; i++)
		incrementa();
		cout << "\nNo Caso do programa acima temos 'a' como statico 'b' como autom�tico 'c' como est�tico\n\n" << endl;
 		system("pause");
 		return(0);
}