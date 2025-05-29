#include <stdio.h>
#include <stdlib.h>

int main() {
    int *sensor1 = (int*)malloc(7* sizeof(int));
    int *sensor2 = (int*)malloc(7* sizeof(int));
    int *sensor3 = (int*)malloc(7* sizeof(int));
    int *sensor4 = (int*)malloc(7* sizeof(int));
    int *sensor5 = (int*)malloc(7* sizeof(int));
    int *sensordiziprt[] = {sensor1, sensor2, sensor3, sensor4, sensor5};

    if (sensor1 == NULL || sensor2 == NULL || sensor3 == NULL || sensor4 == NULL || sensor5 == NULL) {
        fprintf(stderr, "Hafıza ayırma başarısız.\n");
        return 1;
    }

    for (int s = 0; s < 5; s++) {
    printf("\nSensör %d\n", s + 1);
    for (int i = 0; i < 7; i++) {
        sensordiziprt[s][i] = 10 * (i + 1);
        printf("%d \n", sensordiziprt[s][i]);
    }
}

    int *mouse = &sensordiziprt[2][4];

    printf("\nMouse değeri: %d", *mouse);

}
   
