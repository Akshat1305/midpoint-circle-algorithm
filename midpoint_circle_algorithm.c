#include<stdio.h>

void main()
{
	int x, y, xc, yc, r, p;

	printf("Enter radius of circle: ");
	scanf("%d", &r);
 
	printf("Enter co-ordinates of center (xc and yc): ");
	scanf("%d%d", &xc, &yc);

    x = 0;
    y = r;
    p=1-r;
    printf("\ncoordinate=%d,%d",xc-y,yc-x);

    while(y>x)
    {
        x++;
        if(p<0)
        {
            p=p+2*x+1;
        }
        else
        {
            y--;
            p=p+2*(x-y)+1;
        }
        printf("\ncoordinate=%d,%d",xc-y,yc-x);
    }
}