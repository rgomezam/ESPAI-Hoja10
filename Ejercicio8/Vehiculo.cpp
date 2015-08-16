/*
 * Vehiculo.cpp
 *
 *  Created on: Jun 8, 2015
 *      Author: raquel
 */

#include "Vehiculo.h"
#include <iostream>
using namespace std;

namespace raquel {


Vehiculo::Vehiculo(){

	cout << "Creando vehiculo " << endl;
}

/*
Vehiculo::Vehiculo(string NewNombre){
	nombre = NewNombre;
	existe = true;
	cout << "creando vehiculo" << nombre  <<endl;
}
*/


Vehiculo::~Vehiculo() {
	// TODO Auto-generated destructor stub
}

Radio Vehiculo::getRadio(){
	return this->miRadio;
}


} /* namespace raquel */
