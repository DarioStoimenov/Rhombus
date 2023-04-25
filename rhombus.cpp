/// \file rhombus.cpp
/// \brief defining rhombus functions

#include<iostream>

#include "rhombus.h"

/// @brief definig the default constructor
/// 
Rhombus::Rhombus() {

	cout << "Rhombus - default constructor" << endl;

	diagH = 1.;
	diagV = 1.;


}

/// @brief def of constructor
/// @param dH horizontal diagonal
/// @param dV vertical diagonal

Rhombus::Rhombus(float dH, float dV) {

	diagH = 1.;
	diagV = 1.;

	cout << "Rhombus - constructor" << endl;


	if (dH <= 0)
		cout << "WARNING - the horizontal diagonal cannot be negative, retry" << endl;
	else
		diagH = dH;

	if (dV <= 0)
		cout << "WARNING - the vertical diagonal cannot be negative, retry" << endl;
	else
		diagV = dV;
}

/// @brief destructor

Rhombus::~Rhombus() {

	cout << "Rhombus - destructor" << endl;
}


/// @brief copy constructor 
/// 
/// @param r reference of the original object
Rhombus::Rhombus(const Rhombus& r) {

	cout << "Rhombus - copy constructor" << endl;

	diagH = r.diagH;
	diagV = r.diagV;
}

/// @brief defining the universal operator =
/// @param r reference of the original object
Rhombus& Rhombus::operator=(const Rhombus& r) {

	cout << "Rhombus - operator =" << endl;

	diagH = r.diagH;
	diagV = r.diagV;

	return *this;
}

/// @brief defining operator ==
/// <param name="r"></param>
/// <returns></returns>
bool Rhombus::operator==(const Rhombus& r) {

	cout << "Rhombus - operator ==" << endl;

	if (r.diagH == diagH && r.diagV == diagV)
		return true;
	else
		return false;

}

/// @brief set dimension
/// @param dH horzontal diagonal of the rhombus
/// @param dV vertical diagonal of the rhombus
void Rhombus::SetDim(float dH, float dV) {

	SetDiagH(dH);
	SetDiagV(dV);
}

/// @brief set horizontal diag of the rhombus
void Rhombus::SetDiagH(float dH) {

	if (dH <= 0.) {
		cout << "WARINING - the horizontal diagonal cannot be negative, retry" << endl;
		return;
	}

	else
		diagH = dH;

}
 
/// @brief set vertical diag of the rhombus
void Rhombus::SetDiagV(float dV) {

	if (dV <= 0.) {
		cout << "WARINING - the vertical diagonal cannot be negative, retry" << endl;
		return;
	}

	else 
		diagV = dV;

}

/// @brief getting diagonals of the rhombus
/// 
/// @param dH horzontal diagonal of the rhombus
/// @param dV vertical diagonal of the rhombus
void Rhombus::GetDiagonals(float& dH, float& dV) {

	dH = diagH;
	dV = diagV;

	return;
}

/// @brief gets the horizontal diagonal
/// @returns the h diag
float Rhombus::GetDiagH(){

	return diagH;
}

/// @brief gets the vertical diagonal
/// @returns the v diag
float Rhombus::GetDiagV() {

	return diagV;
}

/// @brief Computes the side of the rhombus given the two diagonals
/// @return Side
float Rhombus::Side() {

	float x = (diagH / 2) * (diagH / 2) + (diagV / 2) * (diagV / 2);
	return sqrt(x);

}

/// @brief does the area of the rhombus
/// @return area
float Rhombus::GetArea() {

	return (diagH * diagV) / 2;
}

float Rhombus::GetPerimeter() {

	return (diagH + diagV) * 2;
}