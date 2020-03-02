#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	int NumVidas = 5;
	int Pontuacao = 1350;

	std::cout << "*********INICIO DO JOGO********" << std::endl;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontuação: " << Pontuacao << std::endl;
	std::cout << "Tamanho da Variável NumVidas: " << sizeof(NumVidas) << "Bytes" << "\n";
	std::cout << "Tamanho da Variável Pontuacao: " << sizeof(Pontuacao) << "Bytes" << "\n";
	std::cout << "Endereço que NumVidas Ocupa na Memoria RAM: " << &NumVidas << std::endl;
	std::cout << "Endereço que Pontuação Ocupa na Memoria RAM: " << &Pontuacao << std::endl;
	std::cout << "************************" << std::endl;

	std::cout << "*********DURANTE O JOGO********" << std::endl;
	Pontuacao = Pontuacao + 150; 
	NumVidas = NumVidas - 1;
	std::cout << "Vidas Jogador: " << NumVidas <<std::endl;
	std::cout << "Pontuação: " << Pontuacao << std::endl;
	std::cout << "************************" << std::endl;

	system("PAUSE");
}