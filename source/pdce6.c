#include <curses.h>


/* roguelike char */
int main(int argc, char *argv[])
{
    int ch;
	char playerc = '@';
	char emptyc = ' ';
	int x = 10;
	int y = 10;
	int my, mx;

	initscr();
	keypad(stdscr, TRUE);
    noecho();
	curs_set(FALSE);

	mvaddch(y, x, playerc);

	while(1) {
		getmaxyx(stdscr, my, mx);
		
		ch = getch();
		if(ch == KEY_LEFT) {
			if(x <= 0) {
				continue;
			}

			mvaddch(y, x, emptyc);
			x--;
			mvaddch(y, x, playerc);
		}
		else if(ch == KEY_RIGHT) {
			if(x >= mx - 1) {
				continue;
			}

			mvaddch(y, x, emptyc);
			echochar(playerc);
			x++;
		}
		else if(ch == KEY_UP) {
			if(y <= 0) {
				continue;
			}

			mvaddch(y, x, emptyc);
			y--;
			mvaddch(y, x, playerc);
		}
		else if(ch == KEY_DOWN) {
			if(y >= my - 1) {
				continue;
			}

			mvaddch(y, x, emptyc);
			y++;
			mvaddch(y, x, playerc);
		}

		refresh();
	}

	getch();
	endwin();

	return 0;
}
