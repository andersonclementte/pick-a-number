#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    cout << "************" << endl;
    cout << "Hello world!" << endl;
    cout << "************" << endl;

    cout << "Escolha o nivel de dificuldade: " << endl;
    cout << "Fácil (F)\nMédio (M)\nDifícil (D)" << endl;
    
    char level;
    cin >> level;

    int tries;

    if (level == 'F') tries = 15;
    else if (level == 'M') tries = 10;
    else tries = 5;

    srand(time(NULL));
    const int SECRET_NUMBER = rand() % 100;
    
    int tried = 0;
    bool not_hit = true;
    double score = 1000.0;

    while(not_hit && tried < tries){
        tried++;
        int guess;
        cout << "Tentativa " << tried << endl;
        cout << "Escolhe um numero, digita ae: " << endl;
        cin >> guess;
        cout << "O valor do chute é: " << guess << endl;

        bool hit = guess == SECRET_NUMBER;
        bool greater = guess > SECRET_NUMBER;
        double looses = abs(guess - SECRET_NUMBER)/2.0;
        score = score - looses;

        if (hit){
            cout << "\nAcerto mizeravi!" << endl;
            not_hit = false;
        }
        else if (greater){
            cout << "\nChute foi maior que o número" << endl;
        }
        else {
            cout << "\nChute menor do que o número" << endl;
        }
    }

    cout << "Fim de jogo!" << endl;
    cout << "Sua pontuação foi " << score << endl;
    
}