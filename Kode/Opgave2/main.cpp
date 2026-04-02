#include<iostream>
#include"geometrics.h"
using namespace std;

int main()
{
    double rumfang = rumfangKugle(10);
    double areal = arealAfEnCirkel(5);
    cout << "Rumfanget er: " << rumfang << " Arealet af en cirkel er: " << areal << endl;
    return 0;
}
