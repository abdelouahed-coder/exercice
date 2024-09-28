#include <stdio.h>

int main() {
    // Write C code here
    float f;
    printf("entrer");
     scanf("%f",&f);
    if(f<=37){
     printf("votre tembirature est normal");

    }else if(f>=38.5){
        printf("vous avez de la fievre");
    }

    return 0;
}
