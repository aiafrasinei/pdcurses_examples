#include <curses.h>

/* keyboard usage */
int main(int argc, char *argv)
{
    int ch;
	initscr();
    raw();
    keypad(stdscr, TRUE);
    noecho();

    ch = getch();
    if(ch == KEY_F(1)) {
		printw("F1 Key pressed");
    }
	else
	{	printw("The pressed key is ");
		attron(A_BOLD);
		printw("%c", ch);
		attroff(A_BOLD);
	}

	refresh();
	getch();
	endwin();

	return 0;
}
