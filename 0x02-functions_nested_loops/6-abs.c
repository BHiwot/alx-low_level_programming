#include "main.h"
#include <stdlib.h>
/**
 * _abs - beginning
 * @i: single number input
 * Return:  Absolute value of a number
 */

int _abs(int i)
{
	return (i * ((i > 0) - (i < 0)));
}
