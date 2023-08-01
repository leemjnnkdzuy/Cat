#include "Lib.h"

void clrscr()
{
	CONSOLE_SCREEN_BUFFER_INFO	csbiInfo;
	HANDLE	hConsoleOut;
	COORD	Home = { 0,0 };
	DWORD	dummy;

	hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(hConsoleOut, &csbiInfo);

	FillConsoleOutputCharacter(hConsoleOut, ' ', csbiInfo.dwSize.X * csbiInfo.dwSize.Y, Home, &dummy);
	csbiInfo.dwCursorPosition.X = 0;
	csbiInfo.dwCursorPosition.Y = 0;
	SetConsoleCursorPosition(hConsoleOut, csbiInfo.dwCursorPosition);
}


void TextColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void ShowScrollbar(BOOL Show)
{
	HWND hWnd = GetConsoleWindow();
	ShowScrollBar(hWnd, SB_BOTH, Show);
}


void DisableResizeWindow()
{
	HWND hWnd = GetConsoleWindow();
	SetWindowLong(hWnd, GWL_STYLE, GetWindowLong(hWnd, GWL_STYLE) & ~WS_SIZEBOX);
}


void SetWindowSize(SHORT width, SHORT height)
{
	HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

	SMALL_RECT WindowSize;
	WindowSize.Top = 0;
	WindowSize.Left = 0;
	WindowSize.Right = width;
	WindowSize.Bottom = height;

	SetConsoleWindowInfo(hStdout, 1, &WindowSize);
}

void print_text(string link)
{
	ifstream FileIn;
	FileIn.open(link, ios_base::in);
	string line;
	while (!FileIn.eof())
	{
		getline(FileIn, line);
		cout << line << endl;
	}
	FileIn.close();
}

void creatgif()
{
	while (x < (m + 1))
	{
		system("cls");
		TextColor(color);
		cout << "part : " << x << endl;
		print_text("data/1.txt");
		Sleep(200);
		system("cls");
		cout << "part : " << x << endl;
		print_text("data/2.txt");
		Sleep(200);
		system("cls");
		cout << "part : " << x << endl;
		print_text("data/3.txt");
		Sleep(200);
		system("cls");
		cout << "part : " << x << endl;
		print_text("data/4.txt");
		Sleep(200);
		system("cls");
		cout << "5" << endl;
		print_text("data/5.txt");
		Sleep(200);
		system("cls");
		cout << "6" << endl;
		print_text("data/6.txt");
		Sleep(200);
		system("cls");
		cout << "7" << endl;
		print_text("data/7.txt");
		Sleep(200);
		system("cls");
		cout << "8" << endl;
		print_text("data/8.txt");
		Sleep(200);
		system("cls");
		cout << "9" << endl;
		print_text("data/9.txt");
		system("cls");
		cout << "10" << endl;
		print_text("data/10.txt");
		Sleep(200);
		system("cls");
		cout << "11" << endl;
		print_text("data/11.txt");
		Sleep(200);
		system("cls");
		cout << "12" << endl;
		print_text("data/12.txt");
		Sleep(200);
		system("cls");
		cout << "3" << endl;
		print_text("data/13.txt");
		Sleep(200);
		system("cls");
		cout << "14" << endl;
		print_text("data/14.txt");
		Sleep(200);
		system("cls");
		cout << "15" << endl;
		print_text("data/15.txt");
		Sleep(200);
		system("cls");
		cout << "16" << endl;
		print_text("data/16.txt");
		Sleep(200);
		system("cls");
		cout << "17" << endl;
		print_text("data/17.txt");
		Sleep(200);
		system("cls");
		cout << "18" << endl;
		print_text("data/18.txt");
		Sleep(200);
		system("cls");
		cout << "19" << endl;
		print_text("data/19.txt");
		Sleep(200);
		system("cls");
		cout << "20" << endl;
		print_text("data/20.txt");
		Sleep(200);
		system("cls");
		cout << "21" << endl;
		print_text("data/21.txt");
		Sleep(200);
		system("cls");
		cout << "22" << endl;
		print_text("data/22.txt");
		Sleep(200);
		system("cls");
		cout << "23" << endl;
		print_text("data/23.txt");
		Sleep(200);
		system("cls");
		cout << "24" << endl;
		print_text("data/24.txt");
		Sleep(200);
		system("cls");
		cout << "25" << endl;
		print_text("data/25.txt");
		Sleep(200);
		system("cls");
		cout << "26" << endl;
		print_text("data/26.txt");
		Sleep(200);
		system("cls");
		cout << "27" << endl;
		print_text("data/27.txt");
		Sleep(200);
		system("cls");
		cout << "28" << endl;
		print_text("data/28.txt");
		Sleep(200);
		system("cls");
		cout << "29" << endl;
		print_text("data/29.txt");
		Sleep(200);
		system("cls");
		cout << "30" << endl;
		print_text("data/30.txt");
		Sleep(200);
		system("cls");
		cout << "31" << endl;
		print_text("data/31.txt");

		x = x++;
		Sleep(200);
		system("cls");
	}
}

void showcolor(string name, int time)
{

	cout << "Ban mau : " << endl;
	HANDLE Color;
	Color = GetStdHandle(STD_OUTPUT_HANDLE);
	for (int k = 0; k <= 15; k++)
	{
		Sleep(time);
		SetConsoleTextAttribute(Color, k);
		cout << "  " << k << " - la mau nay  /";
		if (k % 8 == 0) cout << endl;
	};
	TextColor(11);
	cout << "" << name << " muon chon mau nao ? " << endl;
	cout << "Ma mau ban chon la : ";
}

void music(int color, string answer)
{
	if (answer == "co")
	{
		bool isPlay = PlaySound(L"data/Sound.wav", NULL, SND_ASYNC);
	}
}



void load()
{
	int n = 0;

	cout << "Loading";
	while (n <= 100)
	{
		TextColor(11);
		Sleep(250);
		cout << "....." << n << "%";
		n++;
		n += 9;
	}
	Sleep(800);
}