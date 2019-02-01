#include <stdio.h>



/* Rules
 * 1) Any cell with fewer than two live neighbours dies
 * 2) Any cell with more than three live neighbours dies
 * 3) Any live cell with tow or three live neighbours lives to the next generation
 * 4) Any dead cell with three live neighbours comes to life
 * */

void resetGrid(int x, int y, int array[y][x]) {

    for(int i = 0; i < y; i++) {
        for(int j = 0; j < x; j++) {
            array[i][j] = 0;
        }
    }
}

void printGrid(int x, int y, int array[y][x]) {
    for(int i = 0; i < y; i++) {
        for(int j = 0; j < x; j++) {
            if( array[i][j] == 1) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf(" line %d\n", i);
    }
}

int main(int argc, const char *argv[]) {
    const int xBoundary = 25;
    const int yBoundary = 25;
    int boundaries[yBoundary][xBoundary];
    resetGrid(xBoundary, yBoundary, boundaries);
    printGrid(xBoundary, yBoundary, boundaries);

    return 0;
}