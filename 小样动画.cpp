#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#define Width 640
#define Height 480
int main()
{
  initgraph(Width,Height);
  //С��
  float ball_x,ball_y;//С�������
  float ball_vx,ball_vy;//С����ٶ�
  float radius=20;//С��İ뾶
  ball_x=Width/2;
  ball_y=Height/2;
  ball_vx=1;
  ball_vy=1;
  //����
  float bar_x,bar_y;//���������
  bar_x=Width/2;
  bar_y=Height-100;
  char c=0;
  setfillcolor(RED);
 
  //��ʼ������ͼ
  BeginBatchDraw();
  while(1){
	  setcolor(BLACK);
	  setfillcolor(BLACK);
	  fillcircle(ball_x,ball_y,radius);
	  //˯��3����an
	   Sleep(3);
	  //�ı�С����˶�����
   ball_x+=ball_vx;
   ball_y+=ball_vy;
   //����С������֮�󷴵�
   if(ball_x<=radius||ball_x>=Width-radius){ ball_vx=-ball_vx;}
   if(ball_y<=radius||ball_y>=Height-radius){ ball_vy=-ball_vy;}
   //����С��ı߿���ɫ
  setcolor(RED);
  //����С��������ɫ
  setfillcolor(CYAN);
 
   fillcircle(ball_x,ball_y,radius);
    fillrectangle(bar_x,Height-50,bar_x-80,bar_y);
	
  //����������ͼ����ͼƬչʾ��������
   FlushBatchDraw();

  }
  EndBatchDraw();
  _getch();
  closegraph();
return 0;
}