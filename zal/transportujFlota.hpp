#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    unsigned int licznik_towaru = 0;
    unsigned int licznik_zaglowcow = 0;

    while (towar > licznik_towaru)
    {
      Stocznia stocznia1{};
      Statek* s1 = stocznia1();
      licznik_towaru = licznik_towaru + s1->transportuj();
      Zaglowiec* wsk_zagl = dynamic_cast< Zaglowiec* >(s1);
      if (wsk_zagl != 0)
        licznik_zaglowcow = licznik_zaglowcow + 1; 
      delete s1;
    }
    return 0;
}
