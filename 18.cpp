#include <iostream>
using namespace std;

int main(){
// this program let you guess unlimited times
    int secNum1 = 5;
    int guess1;

    while (secNum1 != guess1) {
        cout << "enter guess: ";
        cin >> guess1;
    }
    cout << "you win!" << endl;

// this program let you guess only 3 times
    int secNum = 7;
    int guess;
    int guessCou = 0;
    int guesslim = 3;
    bool outOfGuesses = false;

    while (secNum != guess && !outOfGuesses) {
        if (guessCou < guesslim){
            cout << "enter guess: ";
            cin >> guess;
            guessCou++;
        }
        else {
            outOfGuesses = true;
        }
    }
    if (outOfGuesses){
        cout << "you lose!";
    }
    else {
        cout << "you win!";
    }
    return 0;
}