#include <curses.h>


/* window resize */
int main(int argc, char *argv[])
{
	int row, col;

	initscr();
    
    resize_term(20, 30);

    getmaxyx(stdscr, row, col);
	resize_term(row, col);
    getmaxyx(stdscr, row, col);

	getmaxyx(stdscr,row,col);
	mvprintw(0, 0, "Screen size: rows %d, columns %d", row, col);
	refresh();
	getch();
	endwin();

	return 0;
}
