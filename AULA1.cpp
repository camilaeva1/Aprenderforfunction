#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>


int main(){

    
    //Video 50 do curso do John
    //Para acessar as funções da biblioteca string tenho q acrescentar std e crio a string:

    std::string palavra;

    //A evolução meu deus, não precisa do printf

    std::cout << "Digite uma palavra: ";

    std::cout <<"\n";

    //Para ler a palavra

    std::cin >> palavra;

    //Para imprimir a palavra, concatenando

    std::cout << "\nA palavra é: " << palavra;

    //Posso tbm acrescentar embaixo do #include o 'using namespace std;'
    //e não vou precisar digitar anted de string,cin e cout


    return 0;
}
