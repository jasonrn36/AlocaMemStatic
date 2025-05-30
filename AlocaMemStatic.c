#include <stdio.h> 
#include <locale.h>
	
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

int main(void)
{
        setlocale(LC_ALL, "utf8"); // Configura o locale para português do Brasil
		int i;
		for (i = 0; i < 5; i++)
		incrementa();
            printf("Aqui temos uma alocacao de memoria estatica\n"); // O testo foi colocado aqui para não ser repetido a cada chamada da função incrementa
    system("pause");
    return(0);
}
