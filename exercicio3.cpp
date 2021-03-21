//João Vitor Teles Centrone 32033125

#include <stack>
#include <iostream>
#include <string>

using namespace std;

int main(){
    stack<string>pilha;
    stack<string>pilhausuario;
    string expressao;
    string chav,col,maior,parent,primerio,segundo,terceiro,quarto;
    parent = "()";
    col = "[]";
    chav = "{}";
    maior = "<>";
    
    pilha.push(chav);
    pilha.push(parent);
    pilha.push(col);
    pilha.push(maior);

    cout << "Digite o primerio operador ";
    cin >> primerio;
    cout << "Digite o segundo operador ";
    cin >> segundo;
    cout << "Digite o terceiro operador ";
    cin >> terceiro;
    cout << "Digite o quarto operador ";
    cin >> quarto;

    pilhausuario.push(primerio);
    pilhausuario.push(segundo);
    pilhausuario.push(terceiro);
    pilhausuario.push(quarto);

    if (pilha == pilhausuario)
    {
        cout << "A expressao esta correta ";
    }else {
        cout << "A expressao esta errada ";
    }
    




    
   
    


}