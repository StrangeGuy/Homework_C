

#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    
    double x;
    std::cin >> x;
    double y = pow(M_E,3*x)*(2 * cos(x - M_PI/ 6) + sqrt(2)) / (1/(2*log(x))+  pow(sin(pow(x,2)),2 ));
    double z = pow(M_E, 3 * x);
    double a = (2 * cos(x - M_PI / 6) + sqrt(2));
    double b = 1 / (2 * log(x));
    double c = pow(sin(pow(x, 2)), 2);

    cout << "The value of z is: " << z << " ." << endl;
    cout << "The value of a is: " << a << " ." << endl;
    cout << "The value of b is: " << b << " ." << endl;
    cout << "The value of c is: " << c << " ." << endl;
    
    cout << "The value of y is: " <<std::setprecision(10)<<y << " ." << endl; 

}

