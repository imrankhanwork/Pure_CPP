#include <iostream>
using namespace std;

int main(){
    string phrase = "the name is imran";

    cout<< phrase.length()<<endl;
    
    cout << phrase.find("imran",0) << endl;
    
    cout << phrase.find("n",12) << endl;
    // find n after 12th index position
    
    cout << phrase.substr(12, 16) << endl;
     
    return 0;
}