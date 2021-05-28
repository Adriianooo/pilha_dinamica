//Adriano Pinheiro Fernandes TIA: 32055161
#include <iostream>
#include <sstream>
#include <clocale>
#include "pilha.h"
int main()
{
	setlocale(LC_ALL, "");
	stack pilha = create();
	std::string input;
	while (input != "0") {
		std::getline(std::cin, input);
		if (input == "0") {
			std::cout << "Fim." << "\n";
			break;
		}
		std::istringstream iss(input); 
		std::string str;
		bool n1 = false;
		float resultado = 0;
		while (iss >> str)
		{
			
			try
			{
				float value = std::stof(str);
				Push(pilha, value);
				
			}
			catch (std::invalid_argument e)
			{
				int aux = 0;
	
				if (str == "+" && aux == 0) {
					float elem1 = Pop(pilha);
					float elem2 = Pop(pilha);
					if (elem1 == NULL || elem2 == NULL) {
						n1 = false;
						aux = 1;
					
					}
					else {
						resultado = elem2 + elem1;
						Push(pilha, resultado);
						n1 = true;
					}
				}
				else if (str == "-" && aux == 0) {
					float elem1 = Pop(pilha);
					float elem2 = Pop(pilha);
					if (elem1 == NULL || elem2 == NULL) {
						n1 = false;
						aux = 1;
						
					}
					else {
						resultado = elem2 - elem1;
						Push(pilha, resultado);
						n1 = true;
					}

				}
				else if (str == "*" && aux == 0) {
					float elem1 = Pop(pilha);
					float elem2 = Pop(pilha);
					if (elem1 == NULL || elem2 == NULL) {
						n1 = false;
						aux = 1;
					
					}
					else {
						resultado = elem2 * elem1;
						Push(pilha, resultado);
						n1 = true;
					}

				}
				else if (str == "/" && aux == 0) {
					float elem1 = Pop(pilha);
					float elem2 = Pop(pilha);
					if (elem1 == NULL || elem2 == NULL) {
						n1 = false;
						aux = 1;
						
					}
					else {
						resultado = elem2 / elem1;
						Push(pilha, resultado);
						n1 = true;
						
					}

				}
				else {
					n1 = false;
					break;
					
				}
			}
		}
		if (Count(pilha) == 1) {
			if (n1 == false) {
				Clear(pilha);
				std::cout << "Erro na expressão." << "\n";

			}
			else {
				std::cout << Top(pilha) << "\n";
				Clear(pilha);
			}
		}
		else {
			std::cout << "Erro na expressão." << "\n";
			Clear(pilha);
		}
		
	}
	


}

