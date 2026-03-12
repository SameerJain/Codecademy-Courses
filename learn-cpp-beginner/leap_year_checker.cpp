#include <iostream>
using namespace std;

int main() {
  
int leap_year;


cout << "This is a leap year checker.\nEnter a year:" ;
cin  >> leap_year;

if (leap_year%4 == 0 ) {

    if(leap_year%100 == 0 && leap_year%400 == 0 ) {
    cout << "Not leap year";}

        else if (leap_year%400 == 0) {
    cout << "Leap year";} 

        else {cout << "Leap year";}
    
}

else {cout << "Not leap year.";}
 

return 0;  
}