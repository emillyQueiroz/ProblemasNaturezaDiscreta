#include <stdio.h>


int f(int x) {
    return x*x + 1;
}

int g(int x) {
    return 2*x - 3;
}

int gof(int x) {
    return g(f(x));
}

int fof(int x) {
    return f(f(x));
}


int gog(int x) {
    return g(g(x));
}


int fog(int x) {
    return f(g(x));
}

int main() {
 
    int x = 4;
    int resultado_gof = gof(x);
    int resultado_fof = fof(x);
    int resultado_gog = gog(x);
    int resultado_fog = fog(x);

    printf("(g ° f)(4) = %d\n", resultado_gof);
    printf("(f ° f)(4) = %d\n", resultado_fof);
    printf("(g ° g)(4) = %d\n", resultado_gog);
    printf("(f ° g)(4) = %d\n", resultado_fog);

    if (resultado_fog == resultado_gof) {
        printf("(f ° g)(4) é igual a (g ° f)(4)\n");
    } else {
        printf("(f ° g)(4) não é igual a (g ° f)(4)\n");
    }

    return 0;
}