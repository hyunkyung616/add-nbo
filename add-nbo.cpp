#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <netinet/in.h> //ntohl


//**argv = *argv[]

int main(int argc, char *argv[]){

    FILE *file1;
    FILE *file2;

    uint32_t num1;
    uint32_t num2;
    int add;


    file1 = fopen(argv[1], "rb");
    file2 = fopen(argv[2], "rb");

    fread(&num1, sizeof(uint32_t), 1, file1);
    num1 = ntohl(num1);

    fread(&num2, sizeof(uint32_t), 1, file2);
    num2 = ntohl(num2);

    add = ntohl(add);

    add = num1 + num2;

    printf("%d(%#X) + %d(%#X) = %d(%#X)", num1, num1, num2, num2, add, add);

    fclose(file1);
    fclose(file2);

}
