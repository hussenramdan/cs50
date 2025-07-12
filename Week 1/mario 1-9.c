#include <stdio.h>
// #include <cs50.h>

int main(void){

    // 1_
    // int count = -1;
    // while(count < 1){
    //     count = get_int("couunt: ");
    // }

    int count;
    do{
        count = get_int("count: ");
    }while(count < 1);
        

    for(int i = 0 ; i < count ; i++){
      for(int j =0; j < count ; j++){
        printf("#");
      }
    printf("/n");
    }
    
}
