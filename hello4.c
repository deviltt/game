#include "stdio.h"
#include "curses.h"

int main()
{
	int i;
	initscr();
	clear();
	for(i = 0; i < LINES; i++){
		move(i,i+i);
		if(i % 2 == 0)
			standout();
		addstr("hello, world");
		if(i % 2 == 0)
			standend();
		refresh();
		sleep(1);
		move(i,i+i);
		addstr("            ");
}
	endwin();
}
