#include<graphics.h>
#include<math.h>

#define PI 3.1415926

void main()
{
    int gdriver = DETECT,gmode;
	int r = 120,x0 = 320,y0 = 240;

	int x,y,i,j,k = 0;

	double a = 0,b;

	initgraph(&gdriver,&gmode,"");

	while(!kbhit() && k <= 15)
    {
	    setbcolor(k);
		cleardevice();

		for(j = 0; j <= 10; j++)
		{
		    setcolor(j);
		    circlie(319,238,20+j*15);
		    delay(300);
		}

		setcolor(11);
		setlinestyle(0,0,0);
        
        for(i = 0; i <6; i++,a += 60)
		{
		    b = a*PI/180;
			x = x0 + r * cos(b);
		    y = y0 + r * sin(b);
			arc(x, y, 120 - i * 60, 240 - i * 60, r);
			delay(400);
		}

        delay(500);
		k++;
	}
    
	getch();
	closegraph();
}
