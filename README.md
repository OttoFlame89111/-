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
  
