#pragma once

#include <windows.h>
#include <math.h>

#define PositionWindows_X  350
#define PositionWindows_Y  20
#define HeightWindows      800
#define WidthWindows       800

#define SolarCentryX       380
#define SolarCentryY       360
#define SolarRadius        50

#define IDT_TIMER          1

WNDCLASS NewClass(HBRUSH BGColor, HCURSOR Cursor, HINSTANCE hInst, 
	              HICON Icon, LPCWSTR Name, WNDPROC Procedure);

LRESULT CALLBACK SoftWareProcedure(HWND hWnd, UINT msg, WPARAM wp, LPARAM lp);

void CreateSolar(HWND hWnd);