#include <math.h>
#include <stdio.h>

typedef struct {
    unsigned char red;
    unsigned char green;
    unsigned char blue;
} Color;

void get_color(Color *curr);
unsigned long colorToHTML(Color curr);
void print_color(Color rgb);

int main() {
    Color test;

    get_color(&test);
    print_color(test);

    return 0;
}

void get_color(Color *curr) {
    scanf("%hhu%hhu%hhu", &curr->red, &curr->green, &curr->blue);
}

unsigned long colorToHTML(Color curr) {
    return curr.red * pow(256, 2) + curr.green * 256 + curr.blue;
}

void print_color(Color rgb) {
    printf("%hhu %hhu %hhu\n", rgb.red, rgb.green, rgb.blue);
    printf("%lu\n", colorToHTML(rgb));
    printf("%X%X%X", rgb.red, rgb.green, rgb.blue);
}