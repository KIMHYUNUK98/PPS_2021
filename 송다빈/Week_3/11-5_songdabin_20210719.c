int calPoints(char ** ops, int opsSize){
    int * score = (int *)malloc(sizeof(int)*opsSize);
    int idx = -1, temp = 0, sum = 0;

    if (!score) exit(1);

    for (int i = 0; i < opsSize; i++) {
        if (**(ops + i) == '+') {
            temp = score[idx] + score[idx - 1];
            score[++idx] = temp;
        }
        else if (**(ops + i) == 'D') {
            temp = 2 * score[idx];
            score[++idx] = temp;
        }
        else if (**(ops + i) == 'C') {
            if (idx > -1) {
                sum -= score[idx];
                idx--;
            }
            continue;
        }
        else {
            score[++idx] = atoi(*(ops + i));
        }
        sum += score[idx];
    }
    free(score);

    return sum;
}