#include<iostream>
#include "geometrics.h"

using namespace std;

double rumfangKugle(int radius)
{
    double rumfang = (4/3)*M_PI*(radius*radius*radius);
    return rumfang;
}

double arealAfEnCirkel(int radius1){
    double areal = M_PI*radius1*radius1;
    return areal;
}
