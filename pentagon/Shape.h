#pragma once
#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <exception>
#include <windowsx.h>
using namespace std;
class Shape {
public:
	int x;
	int y;
	int R;
	COLORREF colors;
	HWND hwnd = GetConsoleWindow();
	RECT rt;
	HDC hdc = GetDC(hwnd);
	Shape();
	Shape(int x1, int y1, int R1);
	virtual void moveTo(int x1, int y1) = 0; // ����������� ������� ��� ����������� ������
	virtual void show() = 0; // ����������� ������� ��������� ������
	virtual void hide() = 0; // ����������� ������� ��� ������� ������
	virtual ~Shape();


	class ShapeException : public std::exception { // �����-����������
	private:
		string _message;
	public:
		ShapeException(string message) {
			_message = message;
		}

		string what() {
			return _message;
		}
	};
};

