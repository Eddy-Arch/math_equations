#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

float pos(float a, float b, float c){
    return (-b+sqrt(pow(b,2) - 4 * a *c))/2*a;
}
float neg(float a, float b, float c){
    return (-b-sqrt(pow(b,2) - 4 * a *c))/2*a;
}

int main(int argc, char * argv[])
{
    if (argc < 3 || 0 == strcmp(argv[1], "-h"))
    {
        printf("Usage: ./quadratic_formula a b c");
        exit(-1);
    }
    float a = atof(argv[1]);
    float b = atof(argv[2]);
    float c = atof(argv[3]);
    printf("x₁ = %lf\n", pos(a,b,c));
    printf("x₂ =%lf", neg(a,b,c));
}
