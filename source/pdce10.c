#include <curses.h>


WINDOW *create_newwin(int height, int width, int starty, int startx)
{	WINDOW *local_win;

	local_win = newwin(height, width, starty, startx);
	wborder(local_win, '|', '|', '-', '-', '+', '+', '+', '+');
	wrefresh(local_win);
	return local_win;
}

void destroy_win(WINDOW *local_win)
{	
	wborder(local_win, ' ', ' ', ' ',' ',' ',' ',' ',' ');
	wrefresh(local_win);
	delwin(local_win);
}

/* creating windows */
int main(int argc, char *argv[])
{
	WINDOW *local_win;	
	initscr();
    mvaddstr(6, 12, "Text will be overwritten by window [press any key]");
	refresh();
	scr_dump("savescr.dmp");
	getch();
	local_win = create_newwin(10, 15, 5, 5);
	getch();
	destroy_win(local_win);
	getch();
	mvaddstr(6, 12, "Bring back earlier text by using scr_restore [press any key]");
	getch();
	scr_restore("savescr.dmp");
	refresh();

	getch();
	endwin();

	return 0;
}
