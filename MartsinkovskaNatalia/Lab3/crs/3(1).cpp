#include <iostream>
#include <cmath>

using namespace std;

int main() {

double z, v, c;
cout<<"a = "<<endl;
cin>>z;
cout<<"b = "<<endl;
cin>>v;
cout<<"h = "<<endl;
cin>>c;

double a = z;
double b = v;
double h = c;

 
double y;
double product = 1 ;

for(double x=z; x<=v; x+=c) {
 y = tan(x)/2 + 2 * cos(x);

cout<<"x = "<<x<<" ; "<<"y = "<<y<<endl;

if(y > 0){
 product *= (y * y);
  }
cout<<"Product of y ="<<product<<endl;

}

return 0;
}