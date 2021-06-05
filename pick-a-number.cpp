#include <iostream>
using namespace std;

int main(){
    cout << "************" << endl;
    cout << "Hello world!" << endl;
    cout << "************" << endl;

    const int SECRET_NUMBER = 42;
    
    int tries = 0;
    bool not_hit = true;
    double score = 1000.0;

    while(not_hit){
        tries++;
        int guess;
        cout << "Tentativa " << tries << endl;
        cout << "Escolhe um numero, digita ae: " << endl;
        cin >> guess;
        cout << "O valor do chute é: " << guess << endl;

        bool hit = guess == SECRET_NUMBER;
        bool greater = guess > SECRET_NUMBER;
        double looses = abs(guess - SECRET_NUMBER)/2.0;
        score = score - looses;

        if (hit){
            cout << "Acerto mizeravi!" << endl;
            not_hit = false;
        }
        else if (greater){
            cout << "Chuve foi maior que o número" << endl;
        }
        else {
            cout << "Chute menor do que o número" << endl;
        }
    }

    cout << "Fim de jogo!\nVocê acertou em " << tries << " tentativas." << endl;
    cout << "Sua pontuação foi " << score << endl;
    
}