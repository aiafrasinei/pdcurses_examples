#include <curses.h>


int main(int argc, char *argv)
{
	WINDOW *local_win;	
	initscr();
	start_color();
	init_pair(1, COLOR_RED, COLOR_BLACK);
	attron(COLOR_PAIR(1));
	printw("Hello World color!!!");
	attroff(COLOR_PAIR(1));
	refresh();
	getch();
	endwin();

	return 0;
}

