#ifndef _console_header
#define _console_header

#include "Lib.h"


void clrscr();

void TextColor(int color);

void ShowScrollbar(BOOL Show);

void DisableResizeWindow();

void SetWindowSize(SHORT width, SHORT height);

void print_text(string link);

void creatgif();

void showcolor(string name, int time);

void music(int color, string answer);

void load();

#endif