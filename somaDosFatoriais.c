#include<stdio.h>
#include<stdlib.h>

int fatorial(int num){
    int somafat = 1;
    for (int i = 1; i <= num; i++)
       somafat *= i;
    return somafat;
}
int somafatoriais(int num){
    int somafatoriais = 0;
    for (int i = 2; i <= num; i++)
        somafatoriais+=(fatorial(i));
    return somafatoriais;
}

int main(){
    printf("%d",somafatoriais(5));
    return 0;
}