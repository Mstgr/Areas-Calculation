#include "Circle.h"
#inlcude <math.h>

void Circle::setRadius(int r){

  radius = r;
}

double Circle::getRadius(){

  return 3.14 * pow(radius, 2);
}
