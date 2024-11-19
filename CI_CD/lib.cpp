#include "lib.h"

namespace calc
{
	int  op_and(int x, int y) {
		return x & y;
	}

	//new function
	int  op_pow(int x, int y)
	{
		return x^y;
	}

	int  op_or(int x, int y) {
		return x | y;
	}

	int  op_xor(int x, int y) {
		return x ^ y;
	}

	int  op_xnor(int x, int y) {
		return ~(x ^ y);
	}

	int  op_add(int x, int y) {
		return x + y;
	}

	int  op_sub(int x, int y) {
		return x - y;
	}

	int  op_mul(int x, int y) {
		return x * y;
	}

	int  op_div(int x, int y) {
		return (y != 0) ? x / y : 0;
	}
}