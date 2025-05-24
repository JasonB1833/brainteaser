#include <iostream>
#include <ncurses.h>
#include <string>

#include "handler.h"

// prototypes



int main() 
{
		int ch;

		initscr();						// start curses mode
		raw();						  	// line buffering disabled
		cbreak();
		keypad(stdscr, TRUE);			// enable f1 f2 etc
		noecho();						// dont echo() while we do getch

		int height, width, start_y, start_x;
		// move(y,x)  <- this is the move cursor command
		
		
		height = (LINES -5);
		width = (COLS -5);
		start_y = (LINES - height)/2;    // calculating for a center placement
		start_x = (COLS - width) /2;	 //	of the window

		WINDOW * win = newwin(height,width,start_y,start_x);
		box(win, 0,0);
		
		//wattron(win, A_REVERSE);
		//mvwprintw(win, 1,1, "q: to Quit");
		//wattroff(win, A_REVERSE);
		
		keypad(win, true);
		
		std::string menuOpts[4] = {"Play", "High Scores", "Study", "Options"};
		
		int playerCh = menuGen(win, menuOpts, 4);

		mvwprintw(win, 1,1, "%d", playerCh);
		
		refresh(); 						// print it on the real screen
		wrefresh(win);
							
		



		getch();						// wait for user input
		endwin();						// end

		return 0;
}
