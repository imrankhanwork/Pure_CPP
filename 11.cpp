#include <iostream>
using namespace std;

void sayHi(){
    cout << "hello user";
}

void sayHi1(string name, int age){
    cout << "hello " << name << " you are " << age;
}

int main(){
    cout << "top ";
    sayHi();
    cout <<" bottom"<< endl;

    sayHi1 ("mike", 60);

    return 0;
}