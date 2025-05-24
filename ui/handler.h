#ifndef HANDLER_H
#define HANDLER_H


#include <string>
#include <vector>
#include <ncurses.h>

/* handler will take the input of the user and pass it 

   to game logic or whatever backend process is needed

   @Params
   
TODO: this function may not be necessary
   decHandler takes int a  returns 0 if no errors occur.

   menuGen takes window and string array of menu options, returns index of user choice
*/

int decHandler(int a);

int menuGen(WINDOW* win, std::string options[], int size);



#endif
