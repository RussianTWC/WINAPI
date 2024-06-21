#include "WinAPI_Header.h"

WNDCLASS NewClass(HBRUSH BGColor, HCURSOR Cursor, HINSTANCE hInst,
	HICON Icon, LPCWSTR Name, WNDPROC Procedure)
{
	WNDCLASS NewWindowClass = { 0 };

	NewWindowClass.hIcon = Icon;
	NewWindowClass.hCursor = Cursor;
	NewWindowClass.hInstance = hInst;
	NewWindowClass.lpszClassName = Name;
	NewWindowClass.hbrBackground = BGColor;
	NewWindowClass.lpfnWndProc = Procedure;

	return NewWindowClass;
}