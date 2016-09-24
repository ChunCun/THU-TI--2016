/*
 * current.h
 *
 *  Created on: 2016��5��4��
 *      Author: Feng
 */

#ifndef HARDWARE_CURRENT_H_
#define HARDWARE_CURRENT_H_

#include "sys.h"

typedef struct currentData
{
	float fleft;
	float fright;
	float bleft;
	float bright;
} currentData_t;

void current_init(void);
void current_get_data(currentData_t* data);
void current_test(void);


#endif /* HARDWARE_CURRENT_H_ */
