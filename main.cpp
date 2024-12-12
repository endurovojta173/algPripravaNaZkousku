#include <iostream>
//Příklad 3.1 Vytvořte program v jazyce C++ pro výpočet aritmetického průměru tří čísel.
/*int main()
{
        float cislo1;
        float cislo2;
        float cislo3;
        std::cout<<"\nZadejte 1. cislo: ";
        std::cin>>cislo1;
        std::cout<<"\nZadejte 2. cislo: ";
        std::cin>>cislo2;
        std::cout<<"\nZadejte 3. cislo: ";
        std::cin>>cislo3;
        float aritmetickyPrumer;
        aritmetickyPrumer =(cislo1 + cislo2 + cislo3)/3;
        std::cout<<"\nAritmetickyPrumer: "<<aritmetickyPrumer;

        return 0;
}*/

//3.2 Vytvořte program v jazyce C++ pro výpis dvou načtených čísel seřazených sestupně.
/*int main()
{
        int cislo1;
        int cislo2;
        std::cout<<"Cislo 1 : ";
        std::cin>>cislo1;
        std::cout<<"Cislo 2: ";
        std::cin>>cislo2;
        if(cislo1>cislo2)
        {
                std::cout<< cislo1<<", " <<cislo2<<"\n";
        }
        else
        {
                std::cout<< cislo2<<", "<< cislo1<<"\n";
        }
        return 0;
}*/

//3.3 Vytvořte program v jazyce C++ pro určení minima ze tří zadaných čísel.

/*int main()
{
        int cislo1;
        int cislo2;
        int cislo3;
        std::cout<<"Cislo 1 : ";
        std::cin>>cislo1;
        std::cout<<"Cislo 2 : ";
        std::cin>>cislo2;
        std::cout<<"Cislo 3 : ";
        std::cin>>cislo3;
        if (cislo1<cislo2 and cislo1<cislo3)std::cout<<"Minimum je: " <<cislo1;
        else if (cislo2<cislo1 and cislo2<cislo3)std::cout<<"Minimum je: " <<cislo2;
        else if (cislo3<cislo1 and cislo3<cislo2)std::cout<<"Minimum je: "<<cislo3;
        else std::cout<<"Vsechna cisla si jsou rovna";
        return 0;
}*/

//3.4  Vytvořte program v jazyce C++,který provede převod zadaného celého čísla na číslo opačné prostřednictvím binárních operací v doplňkovém kódu

/*int main()
{
        int celeCislo;
        std::cin >> celeCislo;
        celeCislo+= 1;
        std::cout << celeCislo;
        return 0;
}*/
//3.5 Vytvořte program v jazyce C++ pro zjištění, zda zadané číslo je,či není sudé

/*int main()
{
        int cislo1;
        std::cin >> cislo1;
        if (cislo1%2==0)std::cout<<"Cislo je sude";
        else std::cout<<"Cislo je liche";
        return 0;
}*/

/*using namespace std;
//3.11Vytvořte program v jazyce C++ pro zjištění hodnot tří nejnižších bitů vnitřní reprezentace zadaného celého čísla.
int main() {
        // Zadání celého čísla uživatelem
        int number;
        cout << "Zadejte celé číslo: ";
        cin >> number;

        // Výpočet hodnot tří nejnižších bitů
        int lowestBits = number & 0b111; // Maskování tří nejnižších bitů

        // Výpis hodnot jednotlivých bitů
        cout << "Hodnoty tří nejnižších bitů: " << endl;
        cout << "Bit 0 (nejnižší): " << (lowestBits & 1) << endl;
        cout << "Bit 1: " << ((lowestBits >> 1) & 1) << endl;
        cout << "Bit 2: " << ((lowestBits >> 2) & 1) << endl;

        return 0;
}*/

//3.12  Vytvořte program v jazyce C++ pro zjištění hodnot čtyř nejvyšších bitů vnitřní reprezentace zadaného znaku

/*using namespace std;
int main() {
        // Zadání znaku uživatelem
        char character;
        cout << "Zadejte znak: ";
        cin >> character;

        // Získání čtyř nejvyšších bitů
        unsigned char highestBits = (character & 0xF0) >> 4; // Maskování a posun nejvyšších bitů

        // Výpis hodnot jednotlivých bitů
        cout << "Hodnoty čtyř nejvyšších bitů: " << endl;
        cout << "Bit 7 (nejvyšší): " << ((highestBits >> 3) & 1) << endl;
        cout << "Bit 6: " << ((highestBits >> 2) & 1) << endl;
        cout << "Bit 5: " << ((highestBits >> 1) & 1) << endl;
        cout << "Bit 4: " << (highestBits & 1) << endl;

        return 0;
}*/

//3.21 Vytvořte program v jazyce C++ pro výpočet kořenů kvadratické rovnice na základě zadaných koeficien tů a,b,c,kde platí ax2 + bx + c = 0.
#include <math.h>
int main()
{
        int a;
        int b;
        int c;
        std::cout<<"Zadej cislo a: ";
        std::cin>>a;
        std::cout<<"Zadej cislo b: ";
        std::cin>>b;
        std::cout<<"Zadej cislo c: ";
        std::cin>>c;
        float diskriminant = b*b - 4*a*c;
        if(diskriminant < 0) std::cout<<"Nema reseni v realnych cislech";
        else if (diskriminant >=0)
        {
                float x1 = (-b+sqrt(diskriminant))/(2*a);
                float x2= (-b-sqrt(diskriminant))/(2*a);
                std::cout<<"X1 = "<<x1<<" X2 = "<<x2<<std::endl;
        }

        return 0;
}

