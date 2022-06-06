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
    shuffle_card(main_deck, 52);
    //splitcard
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    for (int i = 0; i < 15; i++) {

        if (i == 0 || i == 3 || i == 6 || i == 9 || i == 12) {
            cpu1.setDeck(main_deck[i], count1);
            count1++;
        }
        else if (i == 1 || i == 4 || i == 7 || i == 10 || i == 13) {
            cpu2.setDeck(main_deck[i], count2);
            count2++;
        }
        else if (i == 2 || i == 5 || i == 8 || i == 11 || i == 14) {
            cpu3.setDeck(main_deck[i], count3);
            count3++;
        }
    }
    cout << "\nPlayer1's Deck:\n";
    cpu1.print();
    cout << endl;
    cout << "Player2's Deck:\n";
    cpu2.print();
    cout << endl;
    cout << "Player3's Deck:\n";
    cpu3.print();
    cout << endl<<setw(2);

    int array1[5] = { cpu1.getDeck(0),cpu1.getDeck(1),cpu1.getDeck(2),cpu1.getDeck(3),cpu1.getDeck(4) };
    int array2[5] = { cpu2.getDeck(0),cpu2.getDeck(1),cpu2.getDeck(2),cpu2.getDeck(3),cpu2.getDeck(4) };
    int array3[5] = { cpu3.getDeck(0),cpu3.getDeck(1),cpu3.getDeck(2),cpu3.getDeck(3),cpu3.getDeck(4) };
    cout << endl;
    //int count = 0;
    cpu1.setPoint(select_card(array1));
    cpu2.setPoint(select_card(array2));
    cpu3.setPoint(select_card(array3));
    cout << "Result:\nPlayer1 : "<< cpu1.getPoint()
    << "\nPlayer2 : " << cpu2.getPoint()
    << "\nPlayer3 : " << cpu3.getPoint()<<endl<<endl;

}
