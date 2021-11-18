/*
Cajero automatico con un saldo inicial de 1000
1.Agregar Efectivo
2.Retirar Efectivo
s.Salir
*/

#include <iostream>

int main()
{
  int opt = 0;
  float blc = 1000, add, sub;
  do
  {
    std::cout << "1.Add Cash\n";
    std::cout << "2.Retire Cash\n";
    std::cout << "3.End\n";
    std::cin >> opt;
    switch (opt)
    {
    case 1:
      std::cout << "How much money you want to add?: ";
      std::cin >> add;
      blc = blc + add;
      std::cout << "Your cash now is " << blc << "$\n";
      break;

    case 2:
      std::cout << "How much money you want to retire?: ";
      std::cin >> sub;
      if (sub <= blc)
      {
        blc = blc - sub;
        std::cout << "Your cash now is " << blc << "$\n";
      }
      else
      {
        std::cout << "You dont have that amount of money in your account\n";
      }
      break;
    case 3:
      std::cout << "ENDING...\n";
      break;

    default:
      std::cout << "Thats an incorrect option\n";
      break;
    }
  } while (opt != 3);
  system("pause");
  return 0;
}
/*
█░█
▀█▀
░▀░
*/