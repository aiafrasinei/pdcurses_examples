#include <curses.h>


/* output functions */
int main(int argc, char *argv[])
{
	initscr();
    
	move(10, 10);
	addch('A');

	mvaddch(20, 20, 'B');
	mvaddstr(20, 50, "This is a string");


	char *test = "test";
	int testi = 1;
	mvprintw(0, 60, "Screen %s %d", test, testi);

	refresh();
	getch();
	endwin();

	return 0;
}
