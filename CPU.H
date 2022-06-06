#ifndef CPU_HPP
#define CPU_HPP
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class NiuNiu {
private:
string role;
 int deck[5];
 string point;
public:
 NiuNiu() {
  role = "Player";
  point = "無妞";
 }
 NiuNiu(string newName, string newrole) {
  role = newrole;
 }

 string getRole() {
  return role;
 }
 void setRole(string newrole) {
  role = newrole;
 }
 int getDeck(int sort) {
  return deck[sort];
 }
 void setDeck(int card, int count) {
  deck[count] = card;
 }
 string getPoint() {
  return point;
 }
 void setPoint(int p) {
  switch (p) {
  case -1:
   point = "無妞";
   break;
  case 0:
   point = "妞妞";
   break;
  case 1:
   point = "妞一";
   break;
  case 2:
   point = "妞二";
   break;
  case 3:
   point = "妞三";
   break;
  case 4:
   point = "妞四";
   break;
  case 5:
   point = "妞五";
   break;
  case 6:
   point = "妞六";
   break;
  case 7:
   point = "妞七";
   break;
  case 8:
   point = "妞八";
   break;
  case 9:
   point = "妞九";
   break;
  }

 }
 void print() {
  for (int i = 0; i < 5; i++) {
   cout << setw(2) << deck[i] << " ";
  }
 }
};
#endif

