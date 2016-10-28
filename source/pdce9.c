#include <curses.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{   
    initscr();
    noecho();
	curs_set(FALSE);
    cbreak();

    if(has_colors() == FALSE)
	{	
        endwin();
		printf("Your terminal does not support color\n");
		exit(1);
	}
	start_color();
	init_pair(1, COLOR_RED, COLOR_BLACK);
    init_pair(2, COLOR_GREEN, COLOR_BLACK);
    init_pair(3, COLOR_BLUE, COLOR_BLACK);
    init_pair(4, COLOR_YELLOW, COLOR_BLACK);
    
    attron(COLOR_PAIR(1));
	mvprintw(1, 1, "1. Start");
    attroff(COLOR_PAIR(1));

    attron(COLOR_PAIR(2));
    mvprintw(2, 1, "2. Options");
    attroff(COLOR_PAIR(2));

    attron(COLOR_PAIR(3));
    mvprintw(3, 1, "3. Options");
    attroff(COLOR_PAIR(3));

    attron(COLOR_PAIR(4));
    mvprintw(4, 1, "4. Exit");
    attroff(COLOR_PAIR(4));
	
    char ch = NULL;
    while(1) {
		ch = getch();
        if(ch == '1') {
            clear();
            mvprintw(0, 0, "Press any key ...");
            break;
        }
		else if(ch == '4') {
            endwin();
            exit(1);
        }
    }

    refresh();
    getch();
    endwin();
    return 0;
}