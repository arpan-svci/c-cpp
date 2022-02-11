#include<stdio.h>
#include<math.h>
float distance(int x1,int y1,int x2,int y2)
{
    double x=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    return x;
}
void main()
{
    int a,b,c,d,e,f;
    float g,s1,s2,s3,area;
    printf("enter the x and y co-ordinate of first vertex..");
    scanf("%d %d",&a,&b);
    printf("enter the x and y co-ordinate of second vertex..");
    scanf("%d %d",&c,&d);
    printf("enter the x and y co-ordinate of third vertex..");
    scanf("%d %d",&e,&f);
    s1=distance(a,b,c,d);
    s2=distance(c,d,e,f);
    s3=distance(e,f,a,b);
    printf("distance between first and second vertex=%f\n",s1);
    printf("distance between second and third vertex=%f\n",s2);
    printf("distance between third and first vertex=%f\n",s3);
    g=(s1+s2+s3)/2;
    printf("g=%f\n",g);
    area=sqrt(g*(g-s1)*(g-s2)*(g-s3));
    printf("area of the triangle is %f",area);
}

