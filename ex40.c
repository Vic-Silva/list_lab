#include <stdio.h>
#include <stdbool.h>

int main(){

bool a = true;
bool b = true;
bool c = false;



if((a && b) || !(a || b) ){
    printf("A) VERDADE");
}else{
    printf("A) FALSO");
}

printf("\n");

if((a || b) && (a && b) ){
    printf("B) VERDADE");
}else{
    printf("B) FALSO");
}

printf("\n");

if(a || c && b ||(!a) && (!b)){
    printf("C) VERDADE");
}else{
    printf("C) FALSO");
}

return 0;
}













