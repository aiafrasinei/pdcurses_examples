#include <curses.h>


/* hello world, initialize curses */
int main(int argc, char *argv[])
{
	initscr();

    printw("Upper left corner           "); addch(ACS_ULCORNER); printw("\n"); 
    printw("Lower left corner           "); addch(ACS_LLCORNER); printw("\n");
    printw("Lower right corner          "); addch(ACS_LRCORNER); printw("\n");
    printw("Tee pointing right          "); addch(ACS_LTEE); printw("\n");
    printw("Tee pointing left           "); addch(ACS_RTEE); printw("\n");
    printw("Tee pointing up             "); addch(ACS_BTEE); printw("\n");
    printw("Tee pointing down           "); addch(ACS_TTEE); printw("\n");
    printw("Horizontal line             "); addch(ACS_HLINE); printw("\n");
    printw("Vertical line               "); addch(ACS_VLINE); printw("\n");
    printw("Diamond                     "); addch(ACS_DIAMOND); printw("\n");
    printw("Checker board (stipple)     "); addch(ACS_CKBOARD); printw("\n");
    printw("Bullet                      "); addch(ACS_BULLET); printw("\n");
    printw("Arrow Pointing Left         "); addch(ACS_LARROW); printw("\n");
    printw("Arrow Pointing Right        "); addch(ACS_RARROW); printw("\n");
    printw("Arrow Pointing Down         "); addch(ACS_DARROW); printw("\n");
    printw("Arrow Pointing Up           "); addch(ACS_UARROW); printw("\n");
    printw("Board of squares            "); addch(ACS_BOARD); printw("\n");
    printw("Solid Square Block          "); addch(ACS_BLOCK); printw("\n");

	refresh();
	getch();
	endwin();

	return 0;
}

