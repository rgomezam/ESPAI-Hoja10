/*
 * Vehiculo.h
 *
 *  Created on: Jun 8, 2015
 *      Author: raquel
 */

#ifndef VEHICULO_H_
#define VEHICULO_H_
#include <iostream>
using namespace std;

#include "Radio.h"

namespace raquel {

class Vehiculo {
public:
	Vehiculo();
    Radio getRadio();
    virtual ~Vehiculo();

private:
    Radio miRadio;

};


} /* namespace raquel */

#endif /* VEHICULO_H_ */
