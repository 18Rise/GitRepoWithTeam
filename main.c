#include <stdio.h>
#include "calc.h"

int main()
{
    int a, b;
    printf("Masukkan dua angka: ");
    scanf("%d %d", &a, &b);

    printf("Add: %d\n", add(a, b));
    printf("Sub: %d\n", sub(a, b));
    printf("Mul: %d\n", mul(a, b));

    if (b != 0)
        printf("Div: %.2f\n", divide(a, b));
    else
        printf("Div: Error (pembagi nol)\n");

    return 0;
}

/*
gcc main.c add.c sub.c mul.c div.c -o main.exe

main.exe

git clone https://github.com/18Rise/GitRepoWithTeam/
cd GitRepoWithTeam

git checkout -b namaBranch

git status

git add nama_file

git commit -m "pesan"

git push origin feature-namaAnda
*/