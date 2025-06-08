#include <stdio.h>
#include <iostream>
#include <locale.h>
/* essse "using name space std" serve para evitar]
 ficar adicionando o std:: no código */
using namespace std;

 	static int a = 0;  // variável global, alocação estática

	void incrementa(void)
 	{
 		int b = 0; // variável local, alocação automática
 		static int c = 0; // variável local, alocação estática
 	 printf ("a: %d, b: %d, c: %d\n", a, b, c);
		a++;
 		b++;
 		c++;
 	}

 	int main(void){

		/*Para colocar um título ao programa
		Adicione o setlocale para configurar o idioma do seu local
		depois adcione um cout << "Titulo do seu programa" << endl; para finalizar */
		setlocale (LC_ALL, "Portuguese_Brazil");
		cout << "¨'¨'¨'¨ Alocação de memória ¨'¨'¨'¨\n" << endl;  // Exibe o título no console
		cout << "Para alocar o PONTEIRO na memória no modo GLOBAL," << endl;
		cout << "inserimos ela na primeira parte do código" << endl;
		cout << "declarando ela como static." << endl;
		cout << "\nDepois iremos dizer ao programa que tipo de variável" << endl;
		cout << "O Ponteiro será do tipo:" << endl;
		cout << "int = inteiro, char = letra, double = ponto flutuante" <<endl;
		cout << "string = texto, bolean = valores logicos 'verdadeiro ou falso \n" << endl;  // Exibe o título no console

  		// Seu código aqui
		int i;
		for (i = 0; i < 5; i++)
		incrementa();
		cout << "\nNo Caso do programa acima temos 'a' como statico 'b' como automático 'c' como estático\n\n" << endl;
 		system("pause");
 		return(0);
}