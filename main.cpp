

#include <iostream>

#include "rhombus.h"

using namespace std;

int main(){

	Rhombus quadrato(5, 5);
	Rhombus copiaq, sandro;

	copiaq = quadrato;
	
	sandro.SetDim(12, 53);
	if (sandro == copiaq)
		cout << "sandro and copiaq have the same dimensions" << endl;
	else
		cout << "sandro and copiaq have different dimensions" << endl;

	cout << "copiaq area is" << " " << copiaq.GetArea() << " meanwhile the perimeter is"<< " "<< copiaq.GetPerimeter()<< endl;

	cout << "sandro area is" << " " << sandro.GetArea() << " meanwhile the perimeter is" << " " << sandro.GetPerimeter() << endl;

	

	return 0;
}