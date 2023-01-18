#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char randchar();

/*
int main() {
    srand(time(NULL));
    //printf("Hello, World!\n");
    printf("%c",randchar());

    //randchar();
    return 0;
}
*/

//returns a random char from a-z
char randchar(){
char a [26];
char *ptr;
ptr = a;


for(int i =0;i<26;i++){
    *ptr = 'A' + i;
    ptr++;
}
char new [27] ;
ptr = a;

for (int j =0; j< 26;j++){
    new[j] = *ptr;
    ptr++;
}
return new [rand()%26];


}
