#include <curses.h>
#include <string>
#include <vector>


std::vector<std::string> title = {
"  ___   _     _____ ___________ ",
" / _ \\ | |   /  __ \\  _  | ___ \\",
"/ /_\\ \\| |   | /  \\/ | | | |_/ /",
"|  _  || |   | |   | | | |    / ",
"| | | || |___| \\__/\\ \\_/ / |\\ \\ ",
"\\_| |_/\\_____/\\____/\\___/\\_| \\_|"
};

void mvprintw_sa(int y, int x, std::vector<std::string> texts)
{
    int i = 0;
    for(const std::string &text : texts) {
        mvprintw(y + i,x, text.c_str());
        i++;
    }
}

/* ascii art */
int main(int argc, char *argv[])
{
	initscr();
	start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);

	attron(COLOR_PAIR(1));
	mvprintw_sa(10, 10, title);
	attroff(COLOR_PAIR(1));

	refresh();
	getch();
	endwin();

	return 0;
}
