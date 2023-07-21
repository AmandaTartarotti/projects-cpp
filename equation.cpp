/*A quadratic equation of the form ax2+bx+c=0 in the domain of real numbers is known to have 0, 1, or 2 solutions according to the value of Δ=b2−4ac:

no solutions if Δ<0
1 solution x1=−b2a if Δ=0
2 solutions x1=−b−Δ−−√2a and x2=−b+Δ−−√2a when Δ>0

Write a C++ function to solve the quadratic equation for the case where a, b, c are integer coefficients, with a≠0:

int solve_eq(int a, int b, int c, double& x1, double& x2)

The function should return the number of solutions for the equation (0, 1, or 2) and, in the case there are solutions, assign the corresponding values to x1 and x2 as described above. x1 and x2 should be set to NAN defined in header cmath when there are no corresponding solutions (x2 = NAN when Δ=0; and x1 = x2 = NAN when Δ<0).
To perform the square root computation, you should use the function std::sqrt, defined in header cmath.

Note: the test cases illustrate solutions with a precision of 7 decimal digits.*/

#include <iostream>
#include <cmath> // para usar a raíz quadrada
#include <iomanip> // para usar a precisão de sete dígitos

using namespace std;

int solve_eq(int a, int b, int c, double& x1, double& x2){

  int d = pow(b,2) - 4*a*c; // delta
  
  if (d < 0){
    x1 = x2 = NAN;
    d = 0; // temos 0 respostas
  } else if (d == 0){
    x2 = NAN;
    x1 = -b /(2.0*a);
    d = 1; // temos uma resposta
  } else{
    x1 = (-b - sqrt(d)) / (2.0*a);
    x2 = (-b + sqrt(d)) / (2.0*a);
    d = 2; // temos duas respostas
  }

 return d;
}

int main() {

double x1, x2; 
int r = solve_eq(3, 4, -2, x1, x2); 
cout << fixed << setprecision(7) 
     << r << ' ' << x1 << ' ' << x2 << '\n';


return 0;
}
