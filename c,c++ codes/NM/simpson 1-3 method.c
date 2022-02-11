 #include<stdio.h>
   #include<conio.h>
   #include<math.h>

   float func(float x)
   {
   float a;
   a=2*pow(x,2)+3*x;
   return (a);
   }
   void main()
   {
    int n,i;
    float a,b,h,sum,integral;
    clrscr();

    printf("Enter the uper limit: ");
    scanf("%f",&a);
    printf("Enter the lower limit: ");
    scanf("%f",&b);
    printf("Enter the interval: ");
    scanf("%d",&n);
    h=(a-b)/n;
    sum=func(a)+func(b)+4*func(b-h);
    for(i=1;i<=n-3;i=i+2)
    {
    sum=sum+4*func(a+i*h)+2*func(a+(i+1)*h);
    }
    integral=h*sum/3;
    printf("Integral: %10.2f\n",integral);

    getch();
}
