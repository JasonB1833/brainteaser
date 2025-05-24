#include <ncurses.h>
#include "handler.h"
//#include "arithmetic.h"

int decHandler(int a){

		if (a>4) return 1;

		switch (a){ 
				case 1:
					//	arith();
						break;
				case 2:
					//	sub();
						break;
				case 3: 
					//	multi();
						break;
				case 4:
					//	div();
						break;

				}

		return 0;
}

int menuGen(WINDOW* win, std::string options[], int size) {


		int highlight = 0;
		int choice; 

		int rows,cols;
		getmaxyx(win,rows,cols);


		while (1)
		{
				for (int i = 0; i<size; i++) 
				{
						int x=(cols - options[i].length())/2;
						int y=(rows - size)/2 +i;

						if (i == highlight)
							   	wattron(win, A_REVERSE);
						
						mvwprintw(win, y,x,"%s",options[i].c_str());
						wattroff(win, A_REVERSE);

				}

				choice = wgetch(win);

				switch(choice)
				{
						case KEY_UP:
						  if (highlight == 0) break;
						  highlight--;
						  break;
						case KEY_DOWN:
						  if (highlight == 3) break;
						  highlight++;
						  break;
						default:
						  break;
				}
				if(choice ==10) break;

		}
		return 0;

}
