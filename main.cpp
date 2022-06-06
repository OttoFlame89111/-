# niu-niu-game
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include "CPU.hpp"
using namespace std; 
    
  void* shuffle_card(int deck[], int size) {
    int index;
    int temp;
    for (unsigned int i = 0; i < 52; i++) {
        index = rand() % 52;
        temp = deck[i];
        deck[i] = deck[index];
        deck[index] = temp;
    }
    return 0;
}
  
  
  bool check(int x, int y, int z) {
    if (((x + y + z) % 10) == 0) {
        return 1;
    }
    else return 0;
}
  
  
 int select_card(int d[]) {
    
    if (check(d[0], d[1], d[2]) == 1) {
        
        return (d[3] + d[4])%10;
        
    }
    
    if (check(d[0], d[1], d[3]) == 1) {
        
        return (d[2] + d[4])%10;
        
    }
    
     if (check(d[0], d[1], d[4]) == 1) {
        
        return (d[3] + d[2])%10;
        
    }
     
     if (check(d[0], d[2], d[3]) == 1) {
        
        return (d[1] + d[4])%10;
        
    }
     
    if (check(d[0], d[2], d[4]) == 1) {
        
        return (d[1] + d[3])%10;
        
    }
    
     if (check(d[0], d[3], d[4]) == 1) {
        
        return (d[1] + d[2])%10;
    }//1
     
     if (check(d[1], d[2], d[3]) == 1) {
        
        return (d[0] + d[4])%10;
        
    }
     
     if (check(d[1], d[2], d[4]) == 1) {
        
        return (d[0] + d[3])%10;
        
    }
     
     if (check(d[1], d[3], d[4]) == 1) {
        
        return (d[0] + d[2])%10;
        
    }//2
     
     if (check(d[2], d[3], d[4]) == 1) {
        
        return (d[0] + d[1])%10;
        
    }else return -1;
}
int main() {
     NiuNiu cpu1;
    NiuNiu cpu2;
    NiuNiu cpu3;

   const int Card_numbers = 52;
    int main_deck[Card_numbers];
    srand(time(0));
    int number[] = { 1,2,3,4,5,6,7,8,9,10,10,10,10 };
    int j = 0;

    //intitalized deck
    for (int i = 0; i < Card_numbers; i++) {
        main_deck[i] = i;
    }
    //intital Every card of points
    for (int i = 0; i < Card_numbers; i++) {
        main_deck[i] = number[j++];
        while (j > 12) {
            j = 0;
        }
        
        
    }
