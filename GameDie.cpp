#include <iostream>
#include <cstdlib>

using namespace std;

//class constructor that seeds the random number generator
GameDie::GameDie()
{
   srand(1);
}

//generate a random number between 1-6 (inclusive) and display it
void GameDie::roll()
{
   int number = rand();
   cout << number;
}
