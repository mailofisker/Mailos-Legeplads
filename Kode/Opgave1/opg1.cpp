#include <iostream> // Altid brug denne

using namespace std; // vigtigt at huske

int main()
{
   int weight = 62;
   double height = 1.725;
   double bmi = weight/(height*height);
   cout << "mailos bmi er " << bmi << endl;
    return 0;
}
