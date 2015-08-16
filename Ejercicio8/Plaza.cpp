/*
 * Plaza.cpp
 *
 *  Created on: Jun 21, 2015
 *      Author: raquel
 */

#include "Plaza.h"
#include "Vehiculo.h"
using namespace raquel;

namespace raquel {

Plaza::Plaza() {

	ocupada = false;

}

void Plaza::OcuparPlaza(){
	ocupada= true;
	this->vehiculo = fabricarVehiculo();
	cout << "La plaza esta ahora ocupada" << endl;
}

Vehiculo * Plaza::getVehiculo(){
	return vehiculo;
}

Plaza::~Plaza() {
	// TODO Auto-generated destructor stub
	//delete *Vehiculo;
}

Vehiculo * Plaza::fabricarVehiculo(){

	Vehiculo *v1 = new Vehiculo();
	return v1;
}


} /* namespace raquel */
