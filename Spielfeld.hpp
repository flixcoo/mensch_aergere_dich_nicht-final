/**
 * \brief Kurzbeschreibung der Klasse
 *
 *
 * Ausf�hrliche Beschreibung der Funktionalit�t
 * der Klasse und allem, was dazu geh�rt.
 *
 * @author Autor der Klasse
 * @see Verweis auf andere Klasse, die im Bezug steht.
 */

#include <iostream>
#include <string>
#include <vector>
#include <array>

class Spielfeld
{
private:
    std::array<std::string, 56> Spielbrett = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "1a", "1b", "1c", "1d", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "2a", "2b", "2c", "2d", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "3a", "3b", "3c", "3d", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "0a", "0b", "0c", "0d"}; // Darstelllung des Spielfeldes

public:
    Spielfeld();  // Konstruktor der Klasse Spielfeld
    ~Spielfeld(); // Destruktor der Klasse Spielfeld

    void InitialisiereSpiel();
    std::array<std::string, 56> get_Spielbrett();

};
