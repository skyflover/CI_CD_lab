#pragma once

namespace calc
{	//! \brief ������� ����������� �.
	int  op_and(int x, int y);

	//! \brief ������� ���������� � �������.
	//! 
	//! \param [in] x ���������
	//! \param [in] y �������
	int  op_pow(int x, int y);

	//! \brief ������� ����������� ���.
	int  op_or(int x, int y);

	//! \brief ������� �����������  ������������ ���.
	int  op_xor(int a, int b);

	//! \brief ������� ����������� ��������� ������������ ���.
	int  op_xnor(int a, int b);

	//! \brief ������� ��������.
	int  op_add(int x, int y);

	//! \brief ������� ���������.
	int  op_sub(int x, int y);

	//! \brief ������� ���������.
	int  op_mul(int x, int y);

	//! \brief ������� �������.
	int  op_div(int x, int y);
}