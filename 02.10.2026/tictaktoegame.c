#include<stdio.h>

char borad [3][3] = {
    {'1','2','3'},
    {'4','5','6'},
    {'7','8','9'}
};

void displayBorad (){
    printf("\n");
    printf(" %c | %c | %c \n", borad [0] [0], borad [0] [1], borad [0] [2]);
    printf("-----------\n");
    printf(" %c | %c | %c \n", borad [1] [0], borad [1] [1], borad [1] [2]);
    printf("-----------\n");
    printf(" %c | %c | %c \n", borad [2] [0], borad [2] [1], borad [2] [2]);
}

int checkWinner (){
    for (int i = 0; i < 3; i++){
        if (borad [i] [0] == borad [i] [1] && borad [i] [1] == borad [i] [2]){
            return 1;
        }
        if (borad [0] [i] == borad [1] [i] && borad [1] [i] == borad [2] [i]){
            return 1;
        }
    }
    if (borad [0] [0] == borad [1] [1] && borad [1] [1] == borad [2] [2]){
        return 1;
    }
    if (borad [0] [2] == borad [1] [1] && borad [1] [1] == borad [2] [0]){
        return 1;
    }
    return 0;
}
int checkDraw (){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (borad [i] [j] != 'X' && borad [i] [j] != 'O'){
                return 0;
            }
        }
    }
    return 1;
}