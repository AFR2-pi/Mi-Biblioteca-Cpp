#include "FuncionesMatematicas.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void FuncionesMatematicas()
{
	double resultado;
	double parametro = 45;

	// cos()
	resultado = cos(parametro * PI / 180);
	cout << "cos(" << parametro << "* PI / 180) = " << resultado << endl << endl;

	// sin()
	resultado = sin(parametro * PI / 180);
	cout << "sin(" << parametro << "* PI / 180) = " << resultado << endl << endl;

	// tan()
	resultado = tan(parametro * PI / 180);
	cout << "tan(" << parametro << "* PI / 180) = " << resultado << endl << endl;

	// acos()
	parametro = 0.707106781185;
	resultado = acos(parametro) * 180 / PI;
	cout << "acos(" << parametro << ") = " << resultado << "°" << endl << endl;

	// asin()
	resultado = asin(parametro) * 180 / PI;
	cout << "asin(" << parametro << ") = " << resultado << "°" << endl << endl;

	// atan()
	parametro = 100000;
	resultado = atan(parametro) * 180 / PI;
	cout << "atan(" << parametro << ") = " << resultado << "°" << endl << endl;

	// atan2(a, b)
	resultado = atan2(3, 4) * 180 / PI;
	cout << "atan2(3, 4) = " << resultado << "°" << endl << endl;

	// cosh()
	parametro = 30;
	resultado = cosh(parametro);
	cout << "cosh(" << parametro << ") = " << resultado << endl << endl;

	// sinh()
	parametro /= 3;
	resultado = sinh(parametro);
	cout << "sinh(" << parametro << ") = " << resultado << endl << endl;

	// tanh()
	parametro = -0.03;
	resultado = tanh(parametro);
	cout << "tanh(" << parametro << ") = " << resultado << endl << endl;

	// acosh()
	parametro = exp(2) - sinh(2);
	resultado = acosh(parametro);
	cout << "acosh(" << parametro << ") = " << resultado << endl << endl;

	// asinh()
	resultado = asinh(parametro);
	cout << "asinh(" << parametro << ") = " << resultado << endl << endl;

	// atanh()
	parametro = tanh(1);
	resultado = atanh(parametro);
	cout << "atanh(" << parametro << ") = " << resultado << endl << endl;

	// exp()
	parametro = 5.0;
	resultado = exp(parametro);
	cout << "exp(" << parametro << ") = " << resultado << endl << endl;

	// frexp()
	// Get significand and exponent(function)
	int n;
	parametro = 8.0;
	resultado = frexp(parametro, &n);
	cout << "frexp(" << parametro << ", &" << n << ") : " << endl << endl;
	//printf ("%f = %f * 2^%d\n", param, result, n);
	cout << parametro << " = " << resultado << "*" << "2 ^ " << n << endl << endl;

	// ldexp
	// Generate value from significandand exponent(function)
	parametro = 0.95;
	n = 4;
	resultado = ldexp(parametro, n);
	//printf("%f * 2^%d = %f\n", parametro, n, resultado);
	cout << parametro << " * 2 ^ " << n << " = " << resultado << endl << endl;


	/*
		log
		Compute natural logarithm(function)
		log10
		Compute common logarithm(function)
		modf
		Break into fractionaland integral parts(function)
		exp2
		Compute binary exponential function(function)
		expm1
		Compute exponential minus one(function)
		ilogb
		Integer binary logarithm(function)
		log1p
		Compute logarithm plus one(function)
		log2
		Compute binary logarithm(function)
		logb
		Compute floating - point base logarithm(function)
		scalbn
		Scale significand using floating - point base exponent(function)
		scalbln
		Scale significand using floating - point base exponent(long) (function)

		Power functions
		pow
		Raise to power(function)
		sqrt
		Compute square root(function)
		cbrt
		Compute cubic root(function)
		hypot
		Compute hypotenuse(function)

		Error and gamma functions
		erf
		Compute error function(function)
		erfc
		Compute complementary error function(function)
		tgamma
		Compute gamma function(function)
		lgamma
		Compute log - gamma function(function)

		Rounding and remainder functions
		ceil
		Round up value(function)
		floor
		Round down value(function)
		fmod
		Compute remainder of division(function)
		trunc
		Truncate value(function)
		round
		Round to nearest(function)
		lround
		Round to nearest and cast to long integer(function)
		llround
		Round to nearest and cast to long long integer(function)
		rint
		Round to integral value(function)
		lrint
		Round and cast to long integer(function)
		llrint
		Round and cast to long long integer(function)
		nearbyint
		Round to nearby integral value(function)
		remainder
		Compute remainder(IEC 60559) (function)
		remquo
		Compute remainder and quotient(function)

		Floating - point manipulation functions
		copysign
		Copy sign(function)
		nan
		Generate quiet NaN(function)
		nextafter
		Next representable value(function)
		nexttoward
		Next representable value toward precise value(function)

		Minimum, maximum, difference functions
		fdim
		Positive difference(function)
		fmax
		Maximum value(function)
		fmin
		Minimum value(function)

		Other functions
		fabs
		Compute absolute value(function)
		abs
		Compute absolute value(function)
		fma
		Multiply - add(function)

*/



	string z;
	getline(cin, z);
}
