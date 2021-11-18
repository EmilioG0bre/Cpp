/* 
M=1000
D=500
C=100
L=50
X=10
V=5
I=1
*/

#include <iostream>

int main()
{
  int num, unit, tens, hund, thous;
  std::cout << "Give me a number: ";
  std::cin >> num;

  unit = num % 10;
  num /= 10;
  tens = num % 10;
  num /= 10;
  hund = num % 10;
  num /= 10;
  thous = num % 10;
  num /= 10;

  switch (thous)
  {
  case 1:
    std::cout << "M";
    break;
  case 2:
    std::cout << "MM";
    break;
  case 3:
    std::cout << "MMM";
    break;
  }
  switch (hund)
  {
  case 1:
    std::cout << "C";
    break;
  case 2:
    std::cout << "CC";
    break;
  case 3:
    std::cout << "CCC";
    break;
  case 4:
    std::cout << "CD";
    break;
  case 5:
    std::cout << "D";
    break;
  case 6:
    std::cout << "DC";
    break;
  case 7:
    std::cout << "DCC";
    break;
  case 8:
    std::cout << "DCCC";
    break;
  case 9:
    std::cout << "CM";
    break;
  }
  switch (tens)
  {
  case 1:
    std::cout << "X";
    break;
  case 2:
    std::cout << "XX";
    break;
  case 3:
    std::cout << "XXX";
    break;
  case 4:
    std::cout << "XL";
    break;
  case 5:
    std::cout << "L";
    break;
  case 6:
    std::cout << "LX";
    break;
  case 7:
    std::cout << "LXX";
    break;
  case 8:
    std::cout << "LXXX";
    break;
  case 9:
    std::cout << "XC";
    break;
  }
  switch (unit)
  {
  case 1:
    std::cout << "I";
    break;
  case 2:
    std::cout << "II";
    break;
  case 3:
    std::cout << "III";
    break;
  case 4:
    std::cout << "IV";
    break;
  case 5:
    std::cout << "V";
    break;
  case 6:
    std::cout << "VI";
    break;
  case 7:
    std::cout << "VII";
    break;
  case 8:
    std::cout << "VIII";
    break;
  case 9:
    std::cout << "IX";
    break;
  }
  return 0;
  system("pause");
}
/*
█░█
▀█▀
░▀░
*/