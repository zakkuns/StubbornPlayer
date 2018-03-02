#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
        SecretDoor game;

        int gameRep = 0;
        int gamesWon = 0;
        char input1 = ' ';
        char guess2 = ' ';

        cout << "How many times do you want to play the game?" << endl;
        cin >> gameRep;

        for (int i = 0; i < gameRep; i++) 
        {

                game.newGame();

                do 
                {

                        cout << "Please choose door C." << endl;
                        cin >> input1;

                        if (input1 != 'C' && input1 != 'c') {
                                cout << "That is not the corret door. Please try again." << endl;
                        }


                }

                while (input1 != 'C' && input1 != 'c');

                if (input1 == 'C' || input1 == 'c')
                {
                        game.guessDoorC();
                }




                do
                {

                        cout << "Please choose door C again." << endl;
                        cin >> guess2;

                        if (guess2 != 'C' && guess2 != 'c')
                        {
                                cout << "That is not the correct door. Please choose again." << endl;
                        }

                }

                while (guess2 != 'C' && guess2 != 'c');

                if (guess2 == 'C' || guess2 == 'c')
                {
                        game.guessDoorC();
                }



                if (game.isWinner() == true)
                {
                        gamesWon++;
                        cout << "You won." << endl;
                }

                else {
                        cout << "You lose." << endl;
                }





        }

        cout << "You won " << gamesWon << " game(s) out of " << gameRep << " times." << endl;




        return 0;

}
