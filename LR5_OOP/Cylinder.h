#pragma once
#include "Circle.h"
class �ylinder : public Circle
{
private:
	float h;
public:
	//����������� �� ��������� ��� ������ �ylinder
	�ylinder();

	//����������� � ����������� ��� ������ �ylinder
	�ylinder(float a, float b, float rad, float he);

	//����������� ����������� ( �.�. �������� � � � )
	�ylinder(�ylinder& cylinder);

	//����� ����������� ������
	void Print();

	void Modify() override;
	// ����������� ����� Circle
	float Get�h();

	//������� ����� ����
	const string ClassName() override;

	//��������� �� ������������ �������� � ��������� �������� ������
	bool isA(string className) override;

	//������� ����� ����
	const char* GetType() override;

	//��������� ������ 
	float GetH();

	//��������� ������
	void SetH(float he);


	~�ylinder()override;
};


