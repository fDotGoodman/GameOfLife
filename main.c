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

int aliveNeighbours(int x, int y, int array[y][x]) {
    int current = 0;
    for(int i = -1; i <= 1; i++) {
        for(int j = -1; j <= 1; j++) {
            if( x != 0 && y != 0 ) {
                current += array[y + i][x + j];
            }
        }
    }
    return current;
}

void nextGeneration(int x, int y, int array[y][x]) {
    
}

int main(int argc, const char *argv[]) {
    const int xBoundary = 25;
    const int yBoundary = 25;
    const int generations = 40;

    int boundaries[yBoundary][xBoundary];


    resetGrid(xBoundary, yBoundary, boundaries);
    printGrid(xBoundary, yBoundary, boundaries);

    return 0;
}