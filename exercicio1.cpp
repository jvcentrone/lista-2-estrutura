//João Vitor Teles Centrone 32033125

#include <iostream>
#include <string> 


using namespace std;

//João Vitor Teles Centrone 03D 32033125

int main()
{
    string palavra;
    cout << "Digite a palavra a ser consultada ";
    cin >> palavra;

    if (palavra == string(palavra.rbegin(), palavra.rend())) {
        cout << "Sim e um palindromo";
    } else {
        cout << "Nao e um palindromo";
    }


}