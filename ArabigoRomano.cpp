/* Numeros arabigos a romanos. */

#include <iostream>

int main()
{
    int Numero = 0;
    int Millar = 0;
    int Centenas = 0;
    int Decenas = 0;
    int Unidades = 0;

    IngresaNumero:

    std::cout << "Ingresa un numero mayor a 0 y menor a 3999: "; 
    std::cin >> Numero;

    if (Numero < 1 || Numero > 3999)
    {
        goto IngresaNumero;
    }

    Unidades = Numero % 10;

    Numero = Numero / 10;
    Decenas = Numero % 10;

    Numero = Numero / 10;
    Centenas = Numero % 10;

    Millar = Numero / 10;

    std::cout << Millar << "-" << Centenas << "-" << Decenas << "-" << Unidades << "\n\n";

    switch (Millar)
    {
        case 1:
        {
            std::cout << "M-";
            break;
        }
        case 2:
        {
            std::cout << "MM-";
            break;
        }
        case 3:
        {
            std::cout << "MMM-";
            break;
        }
    }

    switch (Centenas)
    {
        case 1:
        {
            std::cout << "C-";
            break;
        }
        case 2:
        {
            std::cout << "CC-";
            break;
        }
        case 3:
        {
            std::cout << "CCC-";
            break;
        }
        case 4:
        {
            std::cout << "CD-";
            break;
        }
        case 5:
        {
            std::cout << "D-";
            break;
        }
        case 6:
        {
            std::cout << "DC-";
            break;
        }
        case 7:
        {
            std::cout << "DCC-";
            break;
        }
        case 8:
        {
            std::cout << "DCCC-";
            break;
        }
        case 9:
        {
            std::cout << "CM-";
        }
    }

    switch (Decenas)
    {
        case 1:
        {
            std::cout << "X-";
            break;
        }
        case 2:
        {
            std::cout << "XX-";
            break;
        }
        case 3:
        {
            std::cout << "XXX-";
            break;
        }
        case 4:
        {
            std::cout << "XL-";
            break;
        }
        case 5:
        {
            std::cout << "L-";
            break;
        }
        case 6:
        {
            std::cout << "LX-";
            break;
        }
        case 7:
        {
            std::cout << "LXX-";
            break;
        }
        case 8:
        {
            std::cout << "LXXX-";
            break;
        }
        case 9:
        {
            std::cout << "XC-";
        }
    }

    switch (Unidades)
    {
        case 1:
        {
            std::cout << "I\n";
            break;
        }
        case 2:
        {
            std::cout << "II\n";
            break;
        }
        case 3:
        {
            std::cout << "III\n";
            break;
        }
        case 4:
        {
            std::cout << "IV\n";
            break;
        }
        case 5:
        {
            std::cout << "V\n";
            break;
        }
        case 6:
        {
            std::cout << "VI\n";
            break;
        }
        case 7:
        {
            std::cout << "VII\n";
            break;
        }
        case 8:
        {
            std::cout << "VIII\n";
            break;
        }
        case 9:
        {
            std::cout << "IX\n";
        }
    }
    
    system("pause");
    return 0;
}