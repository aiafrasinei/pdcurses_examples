#include <curses.h>

WINDOW *create_newwin(int height, int width, int starty, int startx)
{	WINDOW *local_win;

	local_win = newwin(height, width, starty, startx);
	wborder(local_win, '|', '|', '-', '-', '+', '+', '+', '+');
	wrefresh(local_win);		/* Show that box 		*/

	return local_win;
}

void destroy_win(WINDOW *local_win)
{	
	wborder(local_win, ' ', ' ', ' ',' ',' ',' ',' ',' ');
	wrefresh(local_win);
	delwin(local_win);
}

int main(int argc, char *argv)
{
	WINDOW *local_win;	
	initscr();
	start_color();
	init_pair(1, COLOR_RED, COLOR_BLACK);
	attron(COLOR_PAIR(1));
	printw("Hello World !!!");
	attroff(COLOR_PAIR(1));
    mvaddstr(6, 32, "Test");
	refresh();
	local_win = create_newwin(10, 15, 5, 5);
	getch();
	destroy_win(local_win);
	getch();
	endwin();

	return 0;
}
