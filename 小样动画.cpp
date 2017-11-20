#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#define Width 640
#define Height 480
int main()
{
  initgraph(Width,Height);
  //小球
  float ball_x,ball_y;//小球的坐标
  float ball_vx,ball_vy;//小球的速度
  float radius=20;//小球的半径
  ball_x=Width/2;
  ball_y=Height/2;
  ball_vx=1;
  ball_vy=1;
  //方块
  float bar_x,bar_y;//方块的坐标
  bar_x=Width/2;
  bar_y=Height-100;
  char c=0;
  setfillcolor(RED);
 
  //开始批量绘图
  BeginBatchDraw();
  while(1){
	  setcolor(BLACK);
	  setfillcolor(BLACK);
	  fillcircle(ball_x,ball_y,radius);
	  //睡眠3毫米an
	   Sleep(3);
	  //改变小球的运动方向
   ball_x+=ball_vx;
   ball_y+=ball_vy;
   //设置小球碰壁之后反弹
   if(ball_x<=radius||ball_x>=Width-radius){ ball_vx=-ball_vx;}
   if(ball_y<=radius||ball_y>=Height-radius){ ball_vy=-ball_vy;}
   //设置小球的边框颜色
  setcolor(RED);
  //设置小球的填充颜色
  setfillcolor(CYAN);
 
   fillcircle(ball_x,ball_y,radius);
    fillrectangle(bar_x,Height-50,bar_x-80,bar_y);
	
  //结束批量绘图，将图片展示到界面上
   FlushBatchDraw();

  }
  EndBatchDraw();
  _getch();
  closegraph();
return 0;
}