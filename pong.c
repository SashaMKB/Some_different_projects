#include <stdio.h>
// первоначальные координаты
int toe_position_x = 13;
int toe_position_y = 40;

void ball_move() { // физика движения мяча
    char key;
    scanf("%c", &key);
    if (key=="\n") {
        if ( /*движение наверх */) {
            if {/*движение вправо */} {
                toe_position_x += 1;
            }
            else {
                toe_position_x -= 1;
            }
            toe_position_y -= 1;
        } else {
            if (/*движение направо*/) {
                toe_position_x += 1;
            }
            else {
                toe_position_x -= 1;
        }
            toe_position_y += 1;
    }
}

void coll() { // столкновение мяча и верхних границ
    if (toe_position_y < 1) {
        toe_position_y += 1;
    } else if (toe_position_y > 24) {
        toe_position_y -= 1;
    }
}


void draw_canvas() {
    char toe = '0';
    while (toe_position_x < 25 && toe_position_y < 80 ){ // изменить на рисование пока какой либо из счетчиков не равен 21
        toe_position_x += 1;
        toe_position_y += 1;
    for ( int i=0;i < 80; i++) {
        printf("_");
    }
    for ( int i = 0; i < 25; i++) {
        printf("\n");
        for (int j = 0; j < 79; j++) {
            if (i == toe_position_x && j == toe_position_y) {
                printf("%c", toe);
            } else {
                printf(" ");
            }
        }
    }
    printf("\n");
    for ( int i=0;i < 80; i++) {
        printf("_");
    }
    printf("\33[0d\33[2J");
    }
}

int main() {
    draw_canvas();
    return 0;
}

/*
#include <stdio.h>
//#include <stdlib.h>

int speed = 1;
int toTop = 1;
int toRight = 1;
int first_rocket_y = 12;
int second_rocket_y = 12;
int ball_x = 40;
int ball_y = 13;
int first_player = 0;
int second_player = 0;
char key, symb;

void drawBoard(int width, int height);
void checkCollision();
void action();

int main() {
    int width = 80;
    int height = 25;
//    while (first_player != 21 || second_player != 21) {
//          drawBoard(width, height);
//        char c;
//        scanf("%c", &c);
//        if (c == '\n') {
//            ball_x += speed;
//        }
//    }
    for (int i = 0; i < 100; ++i) {
        drawBoard(width, height);
        action(key);
    }
}

void drawBoard(int width, int height) {
    //system("clear");
    checkCollision();
    for (int i = 0; i < width; ++i) {
        printf("-");
    }
    printf("\n");
    for (int i = 1; i < height - 1; ++i) {
        printf("|");
        for (int j = 1; j < width-1; ++j) {
            if (i == ball_y && j == ball_x) {
                printf("*");
            } else if ((i - first_rocket_y >= 0 && i - first_rocket_y <= 2 && j == 2) || (i - second_rocket_y >= 0 && i - second_rocket_y <= 2 && j == width-3)) {
                printf("H");
            } else if (j == 40) {
                printf("#");
            } else {
                printf(" ");
            }
        }
        printf("|\n");
    }
    for (int i = 0; i < width; ++i) {
        printf("-");
    }
    printf("\n");
}

void checkCollision() {
    if (ball_y <= 0) {
        toTop = 0;
        ball_y += speed;
    } else if (ball_y >= 25) {
        toTop = 1;
        ball_y -= speed;
    }
}

void action() {
    scanf("%c", &key);
    if (key == '\n') {
        if (toTop) {
            if (toRight) {
                ball_x += speed;
            } else {
                ball_x -= speed;
            }
            ball_y -= speed;
        } else {
            if (toRight) {
                ball_x += speed;
            } else {
                ball_x -= speed;
            }
            ball_y += speed;
        }
    }
    if ((key == 'z' || key == 'Z') && first_rocket_y != 21) {
        first_rocket_y += 1;
    } else if ((key == 'a' || key == 'A') && first_rocket_y != 1) {
        first_rocket_y -= 1;
    } else if ((key == 'm' || key == 'M') && second_rocket_y != 21) {
        second_rocket_y += 1;
    } else if ((key == 'k' || key == 'K') && second_rocket_y != 1) {
        second_rocket_y -= 1;
    }
}

*/