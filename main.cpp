#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; // Konstans nev eliras
    std::cout << "1-100 ertekek duplazasa"<<std::endl;
    for (int i = 1; i <= N_ELEMENTS; i++) //for ciklus feltetele nincs befejezve, 1-tol kell indulnia
    {
        b[i] = i * 2;
    }
    for (int i = 1; i <= N_ELEMENTS; i++)
    {
        std::cout << "Ertek:" << b[i]<<std::endl;// ertek nincs a string moge kiirva, sor nincs lezarva
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0; //nincs kinullazva a valtozo
    for (int i = 1; i < N_ELEMENTS; i++) // ; kene , helyett
    {
        atlag += b[i]; //hianyzo pontosvesszo
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout << "Dog " << atlag << std::endl;
    return 0;
}
