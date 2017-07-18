#pragma once
// ********************************************************** // �Է�â ����� �Լ�
void makeMiniEditBox(HWND hWnd, int nPosX, int nPosY, int nHandle)
{
	CreateWindow(L"edit", NULL,
		WS_CHILD | WS_BORDER | WS_VISIBLE,
		nPosX, nPosY, 100, 25, hWnd, (HMENU)nHandle, hInst, NULL);
}

// ********************************************************** // ��ư ����� �Լ�
void makeSimpleButton(HWND hWnd, TCHAR *pszText, int nPosX, int nPosY, int nHandle)
{
	CreateWindow(L"button", pszText, WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
		nPosX, nPosY, 100, 25, hWnd, (HMENU)nHandle, hInst, NULL);
}

// ********************************************************** // �Է°� ���� �Լ�
int GetControlValueInt(HWND hWnd, int nId)
{
	TCHAR szBuf[256];
	GetWindowText(GetDlgItem(hWnd, nId), szBuf, 256);
	return _wtoi(szBuf);
}

int GetControlValueDouble(HWND hWnd, int nId)
{
	TCHAR szBuf[256];
	GetWindowText(GetDlgItem(hWnd, nId), szBuf, 256);
	return _wtof(szBuf);
}
// ********************************************************** // ó���� ��� �Լ� 
void SetControlValueInt(HWND hWnd, int nId, int nValue)
{
	TCHAR szBuf[256];
	swprintf_s(szBuf, 256, L"%d", nValue);
	SetWindowText(GetDlgItem(hWnd, nId), szBuf);
}


void SetControlValueDouble(HWND hWnd, int nId, int nValue)
{
	TCHAR szBuf[256];
	swprintf_s(szBuf, 256, L"%lf", nValue);
	SetWindowText(GetDlgItem(hWnd, nId), szBuf);
}

