#include <cstdio>

int main () {
    int vel, time;

    while (scanf("%d %d", &vel, &time) != EOF){
        //printf ("consegui ler %d e %d\n", vel, time);
        int end_vel=vel*time;
        int pos = end_vel*2;
        printf("%d\n", pos);
    }
        
    return 0;
}