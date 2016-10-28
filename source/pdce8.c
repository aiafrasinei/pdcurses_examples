#include <curses.h>


int main(int argc, char *argv[])
{   
    initscr();

    start_color();
    init_pair(1, COLOR_CYAN, COLOR_BLACK);

    printw("A example string");
    mvchgat(0, 0, -1, A_BLINK, 1, NULL);
    mvprintw(1,0,"Another example string");
    mvprintw(2,0,"Yet another example string");
    mvchgat(2, 0, 6, A_BLINK, 1, NULL);
    
    refresh();
    getch();
    endwin();
    return 0;
}