// calculates your weight onto other planets using switch
#include <iostream>
using namespace std;

int main()
{

  double earthweight;
  int planet;

  double planetweight;
  string planetname;

  cout << "Enter Earthweight:";
  cin >> earthweight;

  cout << "Enter the number of the planet you want to fight on:\n";

  cout << " 1 = Mercury\n 2 = Venus\n";
  cout << " 3 = Mars\n 4 = Jupiter\n";
  cout << " 5 = Saturn\n 6 = Uranus\n";
  cout << " 7 = Nepture\n";

  cin >> planet;

  switch (planet)
  {

  case 1:
    planetweight = earthweight * 0.38;
    planetname = "Mercury";
    break;

  case 2:
    planetweight = earthweight * 0.91;
    planetname = "Venus";
    break;

  case 3:
    planetweight = earthweight * 0.38;
    planetname = "Mars";
    break;

  case 4:
    planetweight = earthweight * 2.34;
    planetname = "Jupiter";
    break;

  case 5:
    planetweight = earthweight * 1.06;
    planetname = "Saturn";
    break;

  case 6:
    planetweight = earthweight * 0.92;
    planetname = " Uranus";
    break;

  case 7:
    planetweight = earthweight * 0.38;
    planetname = "Neptune";
    break;

  default:
    break;
  }

  cout << "Your weight on " << planetname << " is " << planetweight << "kg\n";

  /* (Less efficient method)

  switch (planet) {

  case 1:
  cout << "Your weight on Mercury is: " << earthweight * 0.38;
  break;

  case 2:
  cout << "Your weight on Venus is: " << earthweight * 0.91;
  break;

  case 3:
  cout << "Your weight on Mars is: " << earthweight * 0.38;
  break;

  case 4:
  cout << "Your weight on Jupiter is: " << earthweight * 2.34;
  break;

  case 5:
  cout << "Your weight on Saturn is: " << earthweight * 1.06;
  break;

  case 6:
  cout << "Your weight on Uranus is: " << earthweight * 0.92;
  break;

  case 7:
  cout << "Your weight on Neptune is: " << earthweight * 1.19;
  break;

  default:
  break;

    }

    cout << "kg" ;

  */

  return 0;
}