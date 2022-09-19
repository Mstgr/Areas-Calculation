#include <iostream>
#include <iomanip>
#include "Square.h"

using namespace std;

int main(){

  int userInput;
  int userSide;

  Square square1;

  cout << "Area Calculation Program" << endl;
  cout << "1 -- circle"              << endl;
  cout << "2 -- square"              << endl;
  cout << "3 -- rectangle"           << endl;
  cout << "4 -- trapezoid"           << endl;

  cin >> userInput;

  switch (userInput){

      case 1:
      break;

      case 2:
        cout << "Side: ";
        cin >> userSide;
        square1.setSide(userSide);
        cout << "Area: " << fixed << setprecision(2) << square1.getSide() << endl;
        break;

      case 3:
      break;

      case 4:
      break;

      default:
      break;
  }

  return 0;
}
