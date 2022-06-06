# nyo-nyo-game
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include "CPU.hpp"
using namespace std; 
  
  
  
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
