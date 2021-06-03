#include <iostream>
using namespace std;

int main(){
    cout << "************" << endl;
    cout << "Hello world!" << endl;
    cout << "************" << endl;

    const int SECRET_NUMBER = 42;
    //cout << "O numero secreto é " << SECRET_NUMBER << ". Não conte pra ningém" << endl;
    int guess;
    cout << "Escolhe um numero, digita ae: " << endl;
    cin >> guess;
    cout << "O valor do chute é: " << guess << endl;

    bool hit = guess == SECRET_NUMBER;
    bool greater = guess > SECRET_NUMBER;

    if (hit){
        cout << "Acerto mizeravi!" << endl;
    }
    else if (greater){
        cout << "Chuve foi maior que o número" << endl;
    }
    else {
        cout << "Chute menor do que o número" << endl;
    }
}