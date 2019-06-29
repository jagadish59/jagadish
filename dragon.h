

#include<graphics.h>

int main()
{
   int gd = DETECT, gm;
   //int points[]={320,150,420,300,250,300,320,150};

   initgraph(&gd,&gm,"C:\\TC\\BGI");


   // head part
    arc(200,200,0,180,50);
    //puchhar
    arc(150,100,200,270,140);
// aakha
    circle(200,175,10);
//body part
   line(250, 200, 270, 220);
   line(250, 220, 270, 220);
   line(250, 220, 270, 240);
   line(200,240,270,240);
   line(150,200,150,240);
   line(200,240,200,290);
   line(100,290,200,290);
   //khuta
 line(175,290,175,310);

 line(125,290,125,310);

 arc(200,190,180,225,140);

   getch();
   closegraph();
   return 0;
}
