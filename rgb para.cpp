#include <stdio.h>

int main() {
    float matriz_transformacao[3][3] = {
    {0.4124, 0.3576, 0.1805},
    {0.2126, 0.7152, 0.0722},
    {0.0193,0.1192, 0.9505} };

    float R, G, B;
    printf("\nInforme R, G e B (0-255):\n");
    printf("R:");
    scanf("%f", &R);
    printf("G:");
    scanf("%f", &G);
    printf("B:");
    scanf("%f", &B);
    

    float X = (R*matriz_transformacao[0][0])+(G*matriz_transformacao[0][1])+(B*matriz_transformacao[0][2]);

    float Y = (R*matriz_transformacao[1][0])+(G*matriz_transformacao[1][1])+(B*matriz_transformacao[1][2]);

    float Z = (R*matriz_transformacao[2][0])+(G*matriz_transformacao[2][1])+(B*matriz_transformacao[2][2]); 

    printf("\nXYZ  = [%.2f, %.2f, %.2f]\n", X/2.55, Y/2.55, Z/2.55);

    float C, M, Y2, K, W, max;
    max = R;
    if (G > R && G > B) {
        max = G;
    }
    else if (B > R && B > G) {
        max = B;
    }
    W = max/255;
    C = (W - (R/255))/W;
    M = (W - (G/255))/W;
    Y2 = (W - (B/255))/W;
    K = 1 - W;

    printf("\nCMYK = [%.2f, %.2f, %.2f, %.2f]\n", C, M, Y2, K);
    return 0;
}

