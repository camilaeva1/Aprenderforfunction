#include <iostream>

using namespace std;

int soma(int, int);

int multiplica(int, int);

int main(){

    int a = 5;
    int b = 12;
    int resultado, resultado1;
    resultado = soma(a, b);
    resultado1 = multiplica(a, b);
    cout << "A soma de a e b eh "<< resultado << endl;
    cout << "A multiplicacao de a e b eh "<< resultado1;

    return 0;
}
int soma( int a, int b){

    return a + b;
}

int multiplica(int a, int b){

    return a * b;
}


