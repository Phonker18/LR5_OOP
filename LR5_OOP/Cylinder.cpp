#include "pch.h"
#include "Cylinder.h"
#include <iostream>
using namespace std;

�ylinder::�ylinder() : Circle(), h(0)
{
	cout << "������ ����������� �� ��������� ������ �ylinder : �ylinder()" << endl;
}

�ylinder::�ylinder(float a, float b, float rad, float he) : Circle(a, b, rad), h(he)
{
	cout << "������ ����������� � ����������� ������ Circle : Circle(" << x << ", " << y << "," << rad << "," << he << ")" << endl;
}

�ylinder::�ylinder(�ylinder& cylinder) : Circle(cylinder), h(cylinder.h)
{
	cout << "������ ����������� ����������� ������ �ylinder : �ylinder (�ylindert& cylinder)" << endl;
}

void �ylinder::Print()
{
	Circle::Print();
	cout << "|| �������� h : " << h;
}

void �ylinder::Modify()
{
	Circle::Modify();
	cout << " ||  h = ";
	cin >> h;
}

//������� ����� ����
const string �ylinder::ClassName()
{
	return "�ylinder";
}

//��������� �� ������������ �������� � ��������� �������� ������
bool �ylinder::isA(string className)
{


	//��������� � ��������� ������ Circle
	if (className.compare("�ylinder") == 0)
		return true;

	return Circle::isA(className);
}

float �ylinder::Get�h()
{
	cout << "������ ����� Get�h ������ Cylinder" << endl;
	return h * 3, 14 * r * r;
}

const char* �ylinder::GetType()
{
	return "�ylinder";
}

float �ylinder::GetH()
{
	return h;
}

void �ylinder::SetH(float he)
{
	h = he;
}

�ylinder::~�ylinder()
{
	cout << "������ ���������� ������ Cyliner" << endl;
}