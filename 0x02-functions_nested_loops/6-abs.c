#include "main.h"

/**
 * _abs - computes the absulute value
 * of an integer
 *
 * @i: function parameter
 *
 * Return: absolute value
 */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
