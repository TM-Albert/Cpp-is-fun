#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x;
	int y;
} Point;

int main()
{
	Point p1;

	p1.x = 3;
	p1.y = 2;

	printf("p1: (%d,%d)\n", p1.x, p1.y);

	Point *p2;
	p2 = &p1;

	p2->x = 5;
	p2->y = 4;

	printf("p1: (%d,%d)\n", p1.x, p1.y);	
	
	Point *p3;
	p3 = (Point*) malloc(sizeof(Point));

	p3->x = 5;
	p3->y = 10;

	printf("p1: (%d,%d)\n", p3->x, p3->y);

	(*p3).x = 4;
	(*p3).y = 13;
	
	free(p3);

	return 0;
}
