#pragma once

namespace calc
{	//! \brief Функция логического И.
	int  op_and(int x, int y);

	//! \brief Функция возведения в степень.
	//! 
	//! \param [in] x Основание
	//! \param [in] y Степень
	int  op_pow(int x, int y);

	//! \brief Функция логического ИЛИ.
	int  op_or(int x, int y);

	//! \brief Функция логического  Исключающего ИЛИ.
	int  op_xor(int a, int b);

	//! \brief Функция логического отрицания Исключающего ИЛИ.
	int  op_xnor(int a, int b);

	//! \brief Функция сложения.
	int  op_add(int x, int y);

	//! \brief Функция вычитания.
	int  op_sub(int x, int y);

	//! \brief Функция умножения.
	int  op_mul(int x, int y);

	//! \brief Функция деления.
	int  op_div(int x, int y);
}