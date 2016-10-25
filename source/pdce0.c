#include <curses.h>


/* hello world, initialize curses */
int main(int argc, char *argv[])
{
	initscr();
	printw("Hello World !!!");
	refresh();
	getch();
	endwin();

	return 0;
}

