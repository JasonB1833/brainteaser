


#include <ncurses.h>

int main() 
{
		int ch;

		initscr();						// start curses mode
		raw();							// line buffering disabled
		cbreak();
		keypad(stdscr, TRUE);			// enable f1 f2 etc
		noecho();						// dont echo() while we do getch

		// move(y,x)  <- this is the move cursor command
		
		int height, width, start_y, start_x;
		height = 40;
		width = 50;
		start_y = start_x = 5;

		WINDOW * win = newwin(height,width,start_y,start_x);
		box(win, 0,0);
		mvwprintw(win, 1,1, "test");
		refresh(); 						// print it on the real screen
		wrefresh(win);
								
		getch();						// wait for user input
		endwin();						// end

		return 0;
}
