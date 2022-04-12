#include "snake.h"
#include "screen.h"
CSnake::CSnake(CRect r, char _c /*=' '*/): CFramedWindow(r, _c)
{
    print_help();
}
void CSnake::print_help() {
    gotoyx(geom.topleft.y + 3, geom.topleft.x + 4);
    printl("h - toggle help information");
    gotoyx(geom.topleft.y + 4, geom.topleft.x + 4);
    printl("p - toggle pause/play mode");
    gotoyx(geom.topleft.y + 5, geom.topleft.x + 4);
    printl("r - restart game");
    gotoyx(geom.topleft.y + 6, geom.topleft.x + 4);
    printl("arrows - move snake (in play mode) or");
    gotoyx(geom.topleft.y + 7, geom.topleft.x + 4);
    printl("       - move window (in pause mode)");
}
void CSnake::paint() {
    CFramedWindow::paint();
    print_help();
    Snake(-2,2);
    print_snake();
}
void CSnake::print_snake() {
    for (list< CPoint * >::iterator i = snake_pt.begin() + 1; i != snake_pt.end(); i++){
        if(i == snake_pt.begin()){
            printc("*");
        }
        gotoyx(*i->y,*i->x);
        printc("x");
    }
}