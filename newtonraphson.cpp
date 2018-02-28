// C++ program for implementation of Newton Raphson Method for
// solving equations
#include<bits/stdc++.h>
#define EPSILON 0.001
using namespace std;
 
// An example function whose solution is determined using
// Bisection Method. The function is 3x^3 - 9x^2 +8
double func(double x)
{
    return 3*x*x*x - 9*x*x +8;
}
 
// Derivative of the above function which is 9*x^2 - 18*x
double derivFunc(double x)
{
    return 9*x*x - 18*x;
}
 
// Function to find the root
void newtonRaphson(double x)
{
    double h = func(x) / derivFunc(x);
    while (abs(h) >= EPSILON)
    {
        h = func(x)/derivFunc(x);
  
        // x(i+1) = x(i) - f(x) / f'(x)  
        x = x - h;
    }
 
    cout << "The value of the root is : " << x;
}
 
// Driver program to test above
int main()
{
    double x0 = 0.1; // Initial values assumed
    newtonRaphson(x0);
    return 0;
}

