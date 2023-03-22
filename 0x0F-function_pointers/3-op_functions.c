#include "3-calc.h"

/**
  * op_add - Addition operator function
  *
  * @a: First operand
  * @b: Second operand
  *
  * Return: Returns the sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - Subtraction operator function
  *
  * @a: First operand
  * @b: Second operand
  *
  * Return: Returns the difference between a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - Multiplication operator function
  *
  * @a: First operand
  * @b: Second operand
  *
  * Return: Returns the product of a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - Division operator function
  *
  * @a: First operand
  * @b: Second operand
  *
  * Return: Returns the divison of a by b
  */
int op_div(int a, int b)
{
	return (a / b);
}

/**
  * op_mod - Modulo operator function
  *
  * @a: First operand
  * @b: Second operand
  *
  * Return: Returns the a modulo b
  */
int op_mod(int a, int b)
{
	return (a % b);
}
