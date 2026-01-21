#include <iostream>
using namespace std;

class class1 {

    public:

    string dataName;

    void  funName() {
        cout << "your data is " << dataName ;
    }

};

int main(){

    class1 obj1;
    obj1.dataName ="abhi";
    obj1.funName();


    return 0;
}