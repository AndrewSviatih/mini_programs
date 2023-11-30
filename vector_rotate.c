#include <math.h>
#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

typedef struct {
    Point a;
    Point b;
    double vector_len;
} Line;

void scan_line(Line *t);
void print_line(Line rotated);
void rotate_line(Line *t);
void count_vector(Line *t);

int main() {
    Line line;

    scan_line(&line);
    rotate_line(&line);
    count_vector(&line);
    print_line(line);

    return 0;
}

void scan_line(Line *t) {
    scanf("%d%d", &t->a.x, &t->a.y);
    scanf("%d%d", &t->b.x, &t->b.y);
}

void print_line(Line rotated) {
    printf("%d %d %d %d %.3lf", rotated.a.x, rotated.a.y, rotated.b.x, rotated.b.y, rotated.vector_len);
}

void rotate_line(Line *t) {
    double start_x = t->a.x;

    t->a.x = t->a.y;
    t->a.y = -start_x;

    start_x = t->b.x;

    t->b.x = t->b.y;
    t->b.y = -start_x;
}

void count_vector(Line *t) {
    t->vector_len = sqrt(pow(t->b.x - t->a.x, 2) + pow(t->b.y - t->a.y, 2));
}
