 #include<stdio.h>
  #include<conio.h>
  #include<math.h>
  #define f(x,y) (x*y)

  void main()
  {
    int n,i;
    float x,xf,y,h,s,s1,s2,s3,s4;
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
        s1=f(x,y);
        s2=f((x+(h/2)),(y+(h/2)*s1));
        s3=f((x+(h/2)),(y+(h/2)*s2));
        s4=f((x+h),(y+h*s3));
        s=(s1+(2*s2)+(2*s3)+s4)/6;
        y=y+(h*s);
        x=x+h;
    }
    printf("Output = %f",y);

    getch();
  }
