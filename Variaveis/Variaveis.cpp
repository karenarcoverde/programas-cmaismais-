#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	int NumVidas = 5;
	int Pontuacao = 1350;

	std::cout << "*********INICIO DO JOGO********" << std::endl;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontua��o: " << Pontuacao << std::endl;
	std::cout << "Tamanho da Vari�vel NumVidas: " << sizeof(NumVidas) << "Bytes" << "\n";
	std::cout << "Tamanho da Vari�vel Pontuacao: " << sizeof(Pontuacao) << "Bytes" << "\n";
	std::cout << "Endere�o que NumVidas Ocupa na Memoria RAM: " << &NumVidas << std::endl;
	std::cout << "Endere�o que Pontua��o Ocupa na Memoria RAM: " << &Pontuacao << std::endl;
	std::cout << "************************" << std::endl;

	std::cout << "*********DURANTE O JOGO********" << std::endl;
	Pontuacao = Pontuacao + 150; 
	NumVidas = NumVidas - 1;
	std::cout << "Vidas Jogador: " << NumVidas <<std::endl;
	std::cout << "Pontua��o: " << Pontuacao << std::endl;
	std::cout << "************************" << std::endl;

	system("PAUSE");
}