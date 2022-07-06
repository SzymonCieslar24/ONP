/**@file*/
#ifndef FUNKCJE_H
#define FUNKJCE_H
#include <string>
/**@brief
*	Funkcja okre�la i zwraca priorytet danego operatora arytmetycznego.
*	@param znak Operator arytmetyczny kt�rego priorytet chcemy ustali�.
*/
int priorytet(char znak);

/**@brief
*	Funkcja oblicza i zwraca warto�� danego wyra�enia podanego w Odwrotnej Notacji Polskiej.
*	@param wyrazenie Zapisane w Odwrotnej Notacji Polskiej wyra�enie kt�rego warto�� obliczamy.
*/

int kalkulatorONP(std::string wyrazenie);

/**@brief
*	Funkcja przekszta�ca i zwraca wyra�enie arytmetyczne na wyra�enie w Odwrotnej Notacji Polskiej.
*	@param wyrazenie Wyra�enie arytmetyczne kt�re ma zosta� przekszta�cone do wyra�enia w Odwrotnej Notacji Polskiej.
*/
std::string zmiananaONP(std::string wyrazenie);

#endif