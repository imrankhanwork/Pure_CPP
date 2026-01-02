#include <iostream>
using namespace std;

int main(){

    string color, pluralNoun, celebrity;

    cout << "enter a coler: ";
    getline (cin, color);
    cout << "enter a plural noun: ";
    getline (cin, pluralNoun);
    cout << "enter a celebrity: ";
    getline (cin, celebrity);


    
    cout << "roses are " << color << endl;
    cout << pluralNoun <<" are blue" << endl;
    cout << "i love "<< celebrity << endl;
    return 0;
}