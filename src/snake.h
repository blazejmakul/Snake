#ifndef __SNAKE_H__
#define __SNAKE_H__

#include "winsys.h"
class CSnake:public CFramedWindow
{
public:
  CSnake(CRect r, char _c = ' ');
  enum direction {right, down, left, up};
  CPoint fruit;
  bool pause;
  bool help;

  void print_help();
  void paint();
  void print_snake();

};

class Snake:public CSnake
{
    enum direction {right, down, left, up};
    list<CPoint>snake_pt;
public:
    Snake(CPoint sp){
        direction = right;
        snake_pt.push_front(sp);
        snake_pt.push_front(sp+CPoint(1,0));
        snake_pt.push_front(sp+CPoint(2,0));
    }

};

#endif
