#include <ncurses/ncurses.h>
#include <windows.h>
using namespace std;

int main(){	
initscr();
start_color();
init_pair (1,COLOR_BLACK,COLOR_RED);
attron (COLOR_PAIR(1));
printw ("Fikri al hafizh");
refresh();
Sleep(1000);
clear();
printw ("fIkri al hafizh");
refresh();
Sleep(1000);
clear();
printw ("fiKri al hafizh");
refresh();
Sleep(1000);
clear();
printw ("fikRi al hafizh");
refresh();
Sleep(1000);
clear();
printw ("fikrI al hafizh");
refresh();
Sleep(1000);
clear();
printw ("fikri Al hafizh");
refresh();
Sleep(1000);
clear();
printw ("fikri aL hafizh");
refresh();
Sleep(1000);
clear();
printw ("fikri al Hafizh");
refresh();
Sleep(1000);
clear();
printw ("fikri al hAfizh");
refresh();
Sleep(1000);
clear();
printw ("fikri al haFizh");
refresh();
Sleep(1000);
clear();
printw ("fikri al hafIzh");
refresh();
Sleep(1000);
clear();
printw ("fikri al hafiZh");
refresh();
Sleep(1000);
clear();
printw ("fikri al hafizH");
refresh();
Sleep(1000);
clear();

getch();
endwin();
}
