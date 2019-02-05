
#include <curses.h>
#include <string>
#include <vector>


void mvhline_ws(int y, int x, const char ch, int n)
{
    std::string line = "";
    line.push_back(ch);

    for(int i=0; i<n; i++) {
        line = line + " " + ch;
    }
    mvprintw(y,x, line.c_str());
}

void mvvline_ws(int y, int x, const char ch, int n)
{
    std::string line = "";
    line.push_back(ch);

    for(int i=0; i<n; i++) {
        if (i % 2 == 0) {
            mvaddch(y + i, x, ch);
        } else {
            mvaddch(y + i, x, ' ');
        }
    }
}

void mvrectangle(int y, int x, const char ch, int n)
{
    mvvline(y, x, ch, n);
    mvvline(y, x + n * 2 - 2, ch, n);
    mvhline(y, x + 1, ch, n * 2 - 2);
    mvhline(y + n - 1, x + 1,ch, n * 2 - 2);
}

void mvwrectangle(WINDOW *win, int y, int x, const char ch, int n)
{
    mvwvline(win, y, x, ch, n);
    mvwvline(win, y, x + n * 2 - 2, ch, n);
    mvwhline(win, y, x + 1, ch, n * 2 - 2);
    mvwhline(win, y + n - 1, x + 1,ch, n * 2 - 2);
}

void mvrectangle_ws(int y, int x, const char ch, int n)
{
    mvvline(y, x, ch, n);
    mvvline(y, x + n * 2 - 2, ch, n);
    mvhline_ws(y, x + 2, ch, n - 2);
    mvhline_ws(y + n - 1, x + 2,ch, n - 2);
}

/* drawing lines,rectangles*/
int main(int argc, char *argv[])
{
	initscr();
	start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);

    mvrectangle(1,1, '#', 5);
    mvrectangle_ws(7,1, '#', 7);
    mvvline(3,15, '|', 10);
    mvvline_ws(3,17, '|', 11);
    mvhline(2,14, '_', 10);
    mvhline_ws(3,14, '_', 10);

	refresh();
	getch();
	endwin();

	return 0;
}