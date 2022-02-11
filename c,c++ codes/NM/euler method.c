 #include<stdio.h>
  #include<conio.h>
  #include<math.h>
  float f(float x, float y)
  {
  float a;
  a=x*y;
  return a;
  }

  void main()
  {
    int n,i,test;
    float x,xf,y,y1,h;
    clrscr();
    printf("Enter the First value :- ");
    scanf("%d",&x);
    printf("Enter the Second value :- ");
    scanf("%d",&xf);
    printf("Enter the Lenth y :- ");
    scanf("%d",&y);
    printf("Enter the Width h :- ");
    scanf("%d",&h);
    while(x<xf)
    {
        y1=y+h*f(x,y);
        x=x+h;
        y=y1;
    }
    printf("Output = %f",y1);

    getch();
  }
