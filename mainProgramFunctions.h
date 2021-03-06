/** @file */

/*

VIGENERE

*/

#pragma once
#include <iostream>
#include <vector>

using namespace std;

/**Funkcja wczytująca przełączniki podane przez wiersz poleceń
@param howManyArguments liczba argumentów wczytana przez wiersz poleceń
@param arguments nazwy argumentów wczytanych przez wiersz poleceń
@param fileWithEncryptionKey nazwa pliku zawierającego klucz szyfrujący
@param inputFile nazwa pliku zawierająca plik wejściowy
@param outputFile nazwa pliku zawierająca plik wyjściowy
@param encryption zmienna informująca o szyfrowaniu pliku
@param decryption zmienna informująca o deszyfrowaniu pliku
@param breakingTheCode zmienna informująca o łamaniu klucza szyfrującego z pliku wejściowego
*/
bool loadSwitches(int howManyArguments, char* arguments[], string& fileWithEncryptionKey, string& inputFile, string& outputFile, bool& encryption, bool& decryption, bool& breakingTheCode);

/**Funkcja wczytująca zawartość pliku do bufora
@param inputFile nazwa pliku wejściowego
*/
vector<char> loadDataToBuffer(string inputFile);

/**Funkcja wykonująca operacje(szyfrowanie/deszyfrowanie/łamanie szyfru)
@param inputText treść tekstu wejściowego
@param encryptedOrDecrypted treść pliku wyjściowego
@param foundKey treść znalezionego klucza szyfrującego
@param key nazwa pliku zawierającego klucz szyfrujący
@param outputFile nazwa pliku zawierająca plik wyjściowy
@param encryption zmienna informująca o szyfrowaniu pliku
@param decryption zmienna informująca o deszyfrowaniu pliku
@param breakingTheKey zmienna informująca o łamaniu klucza szyfrującego
*/
void vigenere(vector <char>& inputText, vector <char>& encryptedOrDecrypted, vector <char>& foundKey, string key, string outputFile, bool encryption, bool decryption, bool breakingTheKey);

/**Funkcja zapisujaca dane wyjsciowe do pliku
@param encrypedOrDecrypedText wektor zawierający zaszyfrowany lub zdeszyfrowany tekst wyjściowy
@param foundKey wektor zaweirający klucz szyfrujący
@param fileWithEncryptionKey nazwa pliku zawierającego klucz szyfrujący
@param outputFile nazwa pliku zawierająca plik wyjściowy
@param encryption zmienna informująca o szyfrowaniu pliku
@param decryption zmienna informująca o deszyfrowaniu pliku
@param breakingTheKey zmienna informująca o łamaniu klucza szyfrującego
*/
void saveToFile(vector <char> encrypedOrDecrypedText, vector <char>& foundKey, string& fileWithEncryptionKey, string outputFile, bool encryption, bool decryption, bool breakingTheKey);