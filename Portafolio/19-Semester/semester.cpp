#include <iostream>
#include <iomanip>
#include <cmath>
/*
La evaluación semestral de un estudiante consta de 3 parciales y un examen final.
Parciales 60% de nota final, y el examen 40%.
Al llegar al final del semestre el estudiante desea saber cual es el porcentaje obtenido en parciales, cual es el porcentaje mínimo que tiene que sacar en el examen final para poder pasar el semestre y que nota representa el porcentaje mínimo.
Las tres calificaciones de los parciales se debe introducir.

Cada parcial tiene un valor máximo de 100% y para aprobar se necesita mínimo 71%.
*/
int main()
{
    float scr1, scr2, scr3, sum, par, min, pts;
    do
    {
        std::cout << "Give me your three partial scores\n";
        std::cout << "Score 1->";
        std::cin >> scr1;
        std::cout << "Score 2->";
        std::cin >> scr2;
        std::cout << "Score 3->";
        std::cin >> scr3;
        if (scr1 < 0 || scr2 < 0 || scr3 < 0 || scr1 > 100 || scr2 > 100 || scr3 > 100)
        {
            std::cout << "!!!ERROR!!!\ntry again\n";
            system("pause");
            std::cout << "\n";
        }
    } while (scr1 < 0 || scr2 < 0 || scr3 < 0 || scr1 > 100 || scr2 > 100 || scr3 > 100);
    sum = scr1 + scr2 + scr3;
    par = sum / 3 * 0.6;
    min = 71 - par;
    pts = min / 0.4;

    std::cout << "Your partial percentage is: " << std::fixed << std::setprecision(2) << par << "% out of 60%";
    if (par < 31)
    {
        std::cout << "\nEven if you get a 100 you can not approve your semester :(\n";
        system("pause");
        return 0;
    }
    else
        std::cout << "\nThe percentage of your examen should be: " << std::fixed << std::setprecision(2) << min << "% out of 40%";
    std::cout << "\nScore that represents the percentage of your exam is: " << std::fixed << std::setprecision(2) << pts << " out of 100\n";
    system("pause");
    return 0;
}
/*
█░█
▀█▀
░▀░
*/