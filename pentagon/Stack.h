#pragma once
#include<iostream>
#include<stack>
#include "Shape.h"
#include <list>
using namespace std;
class Stack { // ����� ����� �� ������ ������
private:
	stack<Shape*, list <Shape*>> figures; //���������� ������
public:
	Stack() {};
	void push(Shape*); //���������� ������ � ����
	Shape* pop(); //�������� ���������� �������� �� �����
	bool is_empty(); //��������, ���� �� ����
	void clear(); //�������� �����
	void showAll(); //�������� ��� ������ �� �����
	void hideAll(); //�������� ��� ������ �� �����
};

