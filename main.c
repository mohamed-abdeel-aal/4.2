#include <stdio.h>

int main() {
    int N, M, X;
    int found = 0;  // Flag to track if X is found

    // Read the dimensions of the array
    scanf("%d %d", &N, &M);

    // Create the 2D array
    int array[N][M];

    // Read the elements of the 2D array
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    // Read the number X to search for
    scanf("%d", &X);

    // Search for the number X in the 2D array
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (array[i][j] == X) {
                found = 1;
                break;
            }
        }
        if (found) break;
    }

    // Print the result based on whether X was found
    if (found) {
        printf("will not take number\n");
    } else {
        printf("will take number\n");
    }

    return 0;
}
