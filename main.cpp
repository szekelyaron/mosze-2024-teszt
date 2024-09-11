#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; // Konstans nev eliras
    std::cout << '1-100 ertekek duplazasa'
    for (int i = 0;) //for ciklus feltetele nincs befejezve, 1-tol kell indulnia
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:" // ertek nincs a string moge kiirva, sor nincs lezarva
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //nincs kinullazva a valtozo
    for (int i = 0; i < N_ELEMENTS, i++) // ; kene , helyett
    {
        atlag += b[i] //hianyzo pontosvesszo
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
