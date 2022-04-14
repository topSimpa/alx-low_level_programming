#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
*op_add - addition of two number
*@a: the first integer to be added
*@b: the second integer to be added
*Return: return interger result of addition
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
*op_sub - subtraction of two number
*@a: the first integer to subract
*@b: the second integer to subtract
*Return: return result of subtraction
*/

int op_sub(int a, int b)
{
	return (a - b);

}

/**
*op_mul - multiplies two numbers
*@a: the first integer to multiply
*@b: the second integer to multiply
*Return: return integer result of
*/

int op_mul(int a, int b)
{
	return (a * b);
}


/**
*op_div - divide two numbers
*@a: the first interger to divide
*@b: the second interger to divide
*Return: return result as integer
*/

int op_div(int a, int b)
{
	return (a / b);
}


/**
*op_mod - compute the modular arithemetic computation
*@a: the first input
*@b: the second input
*Return: return the result as interger
*/

int op_mod(int a, int b)
{
	return (a % b);

}

