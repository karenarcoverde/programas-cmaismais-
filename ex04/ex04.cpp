#include <iostream>
// Aluna: Karen Arcoverde
// Data: 25/02/2020
/* O programa a seguir coloca na tela a frase: Vou aprender a
programa na Linguagem C++. Contudo cada palavra será exibida em
uma única linha através da inserção de quebra de linhas */

int main()
{
	// cor de fundo 4 (vermelho)
	// cor da letra 7 (branca)
	system("COLOR 47");

	std::cout << "Vou" << "\n"
		<< "Aprender" << "\n"
		<< "a" << "\n"
		<< "programar" << "\n"
		<< "na" << "\n"
		<< "Linguagem C++" << "\n";

	system("PAUSE");
	return 0;
}
