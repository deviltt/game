#include "stdio.h"
#include "curses.h"

main()
{
	initscr();        	/* turn on curses */
				/* send requests */
	clear();		/* clear screen */
	move(10,20);		/* row10,col20 */
	standout();
	addstr("Hello, world"); /* add a string */
	standend();
	move(LINES-1,0);  	/* move to LL */
	standout();		/* 使屏幕反色*/
	refresh();		/* update the screen */
	getch();		/* wait for user input */
	endwin();		/* turn off curses */
}
