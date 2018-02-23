#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
  SecretDoor game;
    
  //game.newGame(); 
  //
  // this statement should be called at the beginning of a game
  // because it hides the prize behind a random door and resets
  // the game so that the user has not guessed any doors yet

  //game.guessDoorA();
  //
  // this statement communicates to the game that the user guesses
  // Door A. Similarly, you can use: 
  //
  //game.guessDoorB();
  //
  // and 
  //
  //game.guessDoorC(); 
  //
  // to guess from the other doors. During each game, the user can
  // make two guesses. Then the game will determine if they won or lost.
  // Similarly, after the first guess, the game determines which door to
  // open (which reveals one of the losing doors). 
    
  //if( game.isAopen() )
  //
  // as just mentioned, this statement checks to see which door has been
  // revealed after the first guess has been made. None of the doors are
  // opened until after the user makes their first guess (using a guessDoorX()
  // function) and the door opened indicates a door the prize is NOT behind.
  // to check the other doors, you can also use:
  //
  //if( game.isBopen() )
  //
  // and
  //
  //if( game.isCopen() )
  //
  // as you can see, these functions return a boolean (true or false) value

  //if( game.isWinner() )
  //
  // this statement checks to see if the user's second guess was the correct
  // door that the prize is hidden behind. It returns a boolean value.
  // When this statement is used when a game has had anything besides 2 guesses
  // have been made, it will always return false.

  return 0;
}
