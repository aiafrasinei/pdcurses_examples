#include <curses.h>


/* hello world - initialize a curses */
int main(int argc, char *argv)
{
	WINDOW *local_win;	
	initscr();
	printw("Hello World !!!");
	refresh();
	getch();
	endwin();

	return 0;
}
