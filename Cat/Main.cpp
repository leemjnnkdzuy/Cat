//@By LeeMjnnkDzuy

#include "Lib.h"


int main()
{

	ShowScrollbar(0);
	SetWindowSize(201, 53);
	DisableResizeWindow();

	load();
	system("cls");
	
	TextColor(11);
	cout << "Ban co muon them ti nhac ?" << endl;
	cout << "Nhan (co/khong) de bat nhac : ";
	cin >> answer;
	while ((answer != "co") && (answer != "khong"))
	{
		system("cls");
		
		cout << "Ban co muon them ti nhac ?" << endl;
		cout << "Nhan (co/khong) de bat nhac : ";
		cin >> answer;
	}
	music(color, answer);
	load();
	system("cls");
	
	TextColor(11);
	cout << "	Nhap ten : ";
	cin >> name;
	cout << "	Nhap tuoi : ";
	cin >> age;
	Sleep(300);
	Sleep(700);
	load();

	system("cls");
	showcolor(name, 5);
	cin >> color;
	while ((color != 1) && (color != 2) && (color != 3) && (color != 4) && (color != 5)
		&& (color != 6) && (color != 7) && (color != 8) && (color != 9) && (color != 10)
		&& (color != 11) && (color != 12) && (color != 13) && (color != 14) && (color != 15))
	{
		system("cls");
		showcolor(name, 5);
		cin >> color;
	}
	load();
	system("cls");
	
	TextColor(11);
	cout << "	Nhap so vong lap cua ban (nho hon hoac bang 39 la dep) : ";
	cin >> m;
	while (m > 39)
	{
		system("cls");
		
		cout << "	Nhap so vong lap cua ban (nho hon hoac bang 39 la dep) : ";
		cin >> m;
	}
	Sleep(300);
	system("cls");
	load();
	Sleep(700);
	music(color, answer);
	creatgif();
	system("cls");
	Sleep(1000);
	
	cout << "	Het bai goi'" << endl;
	Sleep(1000);
	
	cout << "	Pai pai nhoooooooooooo'" << endl;
	Sleep(3000);
	system("cls");
	
	cout << "	@Code by Lee Minnk Dzuy =))" << endl;
	Sleep(700);
	system("exit");
	return 0;
}
