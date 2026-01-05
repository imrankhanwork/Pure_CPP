#include <iostream>
using namespace std;

int main(){
   
    int index = 1;
    while (index <= 10){
        cout << index << endl;
        index++;
    }

    int index1 = 99 ;
    do{
        cout << index1 << endl;
        index++;
    }while (index <= 5);

    return 0;
}