#include <stdio.h>

typedef struct{
    int x;
    int y;
} Point;

typedef struct {
    Point a;
    Point b;
    double vector_len;
} Line;

void scan_line(Line * t){
    scanf("%d%d", &t->a.x, &t->a.y);
    scanf("%d%d", &t->b.x, &t->b.y);
}

void print_line(Line rotated){
    printf("%d %d %d %d %.3lf", rotated.a.x, rotated.a.y, rotated.b.x, rotated.b.y, rotated.vector_len);
}

int main (){

}
