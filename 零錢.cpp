#include <iostream>
using namespace std;

int main() {
  int money = 0;
  int fifty = 0;
  int twenty = 0;
  int ten = 0;
  int five = 0;
  int one = 0;
  cout << "How much money do U have?";
  cin >> money;
    while (money >= 50) {
      money = money - 50;
      fifty++;
    }
    while (money >= 20) {
      money = money - 20;
      twenty++;
    }
    while (money >= 10) {
      money = money - 10;
      ten++;
    }
    while (money >= 5) {
      money = money - 5;
      five++;
    }
    while (money >= 1) {
      money = money - 1;
      one++;
    }
    cout << "五十元"<< fifty << "個\n" << "二十元" << twenty << "個\n" << "十元" << ten << "個\n" << "五元" <<
    five << "個\n" << "一元" << one << "個";
}
