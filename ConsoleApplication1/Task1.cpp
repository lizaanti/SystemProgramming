﻿//#include <windows.h>
//#include <iostream>
//using namespace std;
//
//int main() {
//	char c;
//	HANDLE hStdOut;
//	CONSOLE_CURSOR_INFO cci;
//	hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
//
//	if (!GetConsoleCursorInfo(hStdOut, &cci))
//		cout << "Get console cursor info failed." << endl;
//
//	cout << "Size of cursor in procent of char = " << cci.dwSize << endl;
//	cout << "Visibility of char = " << cci.bVisible << endl;
//
//	cout << "Input a new size of cursor (1-100): ";
//	cin >> cci.dwSize;
//
//	if (!SetConsoleCursorInfo(hStdOut, &cci))
//		cout << "Set console cursor info failed." << endl;
//	cout << "Input any char to make the cursor invisible: ";
//	cin >> c;
//
//	cci.bVisible = FALSE;
//
//	if (!SetConsoleCursorInfo(hStdOut, &cci))
//		cout << "Set console cursor info failed." << endl;
//	cout << "Input any char to make thecursor visible: ";
//	cin >> c;
//
//	cci.bVisible = TRUE;
//
//	if (!SetConsoleCursorInfo(hStdOut, &cci))
//		cout << "Set console cursor info failed." << endl;
//	return 0;
//
//}