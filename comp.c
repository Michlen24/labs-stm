#include <stdio.h>
#include <string.h>

struct Microcontroller {
    char name[20];
    int flash_memory;
    int Energy_consumption;
};

int main() {

    struct Microcontroller st1 = { "STM", 1, 2 };

    printf("Microcontroller: %s\n", st1.name);
    printf("flash memory: %d MHz\n", st1.flash_memory);
    printf("Energy consumption: %d\n", st1.Energy_consumption);


    strcpy(st1.name, "STM32");
    st1.flash_memory = 2;
    st1.Energy_consumption = 4;

    printf("Microcontroller: %s\n", st1.name);
    printf("Clock Speed: %d MHz\n", st1.flash_memory);
    printf("Energy consumption: %d\n", st1.Energy_consumption);

    return 0;
}
