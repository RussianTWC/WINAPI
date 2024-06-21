#include "WinAPI_Header.h"

void CreateSolar(HWND hWnd)
{
	HDC hdc = GetDC(hWnd);

	HPEN hPen = CreatePen(PS_SOLID, 2, RGB(255, 255, 255));

	SelectObject(hdc, hPen);
	Ellipse(hdc, SolarCentryX - SolarRadius, SolarCentryY - SolarRadius,
		         SolarCentryX + SolarRadius, SolarCentryY + SolarRadius);

	ReleaseDC(hWnd, hdc);
}