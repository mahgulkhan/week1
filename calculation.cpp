#include <iostream>
using namespace std;
main ()
{

string name;
float matric;
float inter;
float ecat;
cin >> name;
cin >> matric;
cin >> inter;
cin >> ecat;
float aggregate=(matric/1100) * 13 + (inter/570) * 50 + (ecat/400) * 33;
cout << " enter name= " << name << endl;
cout << " enter matric marks ( out of 1100) = " << (matric/1100)*100 << endl;
cout << " enter inter marks ( out of 570) = " <<  (inter/570) * 100 << endl;
cout << " enter ecat marks (out of 400) = " << (ecat/400) * 100 << endl;
cout << " aggregate= " << aggregate;


}