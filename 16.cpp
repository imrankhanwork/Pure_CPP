#include <iostream>
using namespace std;

string getDayOfweek (int dayNum){
    string dayName;

    switch (dayNum){
        case 0:
        dayName = "sunday";
        break;
        case 1:
        dayName = "monday";
        break;
        case 2:
        dayName = "tuseday";
        break;
        case 3:
        dayName = "wednesday";
        break;
        case 4:
        dayName = "thursday";
        break;
        case 5:
        dayName = "friday";
        break;
        case 6:
        dayName = "saturday";
        break;
        default:
        dayName = "invalid";
    }

    return dayName;
}

int main(){

    cout << getDayOfweek(6);
    
    return 0;
}