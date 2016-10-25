#include <curses.h>


/* scan functions */
int main(int argc, char *argv[])
{
	char msg[]="What is your name: ";
	char str[80];

    initscr();	
	addstr(msg);
	getstr(str);
	move(0, 0);
	clrtoeol();
	mvprintw(0, 0, "Welcome to curses %s", str);
	getch();
	endwin();

	return 0;
}

