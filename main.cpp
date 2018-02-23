#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
  char yn = 'n';
  SecretDoor game;
  bool repeat = false;
  do
  { 
    game.newGame();
    char in;
    
    bool valid = false;
   
    do
    {
      cout<<"Which door do you choose? (A/B/C) ";
      cin>>in;

      switch(in)
      {
        case 'a':
        case 'A':
          game.guessDoorA();
          valid = true;
          break;
        case 'b':
        case 'B':
          game.guessDoorB();
          valid = true;
          break;
        case 'c':
        case 'C':
          game.guessDoorC();
          valid = true;
          break;
        default:
          cout<<in<<" is not a valid door. Please choose from (A/B/C)\n";
          valid = false;
      }
    }while( !valid );

    if( game.isAopen() )
    {
       cout<<"It is not behind door A.\n";
    }
    else if( game.isBopen() )
    {
       cout<<"It is not behind door B.\n";
    }
    else if( game.isCopen() )
    {
       cout<<"It is not behind door C.\n";
    }
    else
    {
      cout<<"this should be impossible.\n";
    }
    
    do
    {
      cout<<"Which door do you choose? (A/B/C) ";
      cin>>in;

      switch(in)
      {
        case 'a':
        case 'A':
          game.guessDoorA();
          valid = true;
          break;
        case 'b':
        case 'B':
          game.guessDoorB();
          valid = true;
          break;
        case 'c':
        case 'C':
          game.guessDoorC();
          valid = true;
          break;
        default:
          cout<<in<<" is not a valid door. Please choose from (A/B/C.\n";
          valid = false;
      }
    }while( !valid );

    if( game.isWinner() )
      cout<<"You won!\n";
    else
      cout<<"You lose.\n";


    do
    {
      cout<<"Play again? (Y/N) ";
      cin>>yn;
      valid = yn=='y' || yn=='Y' || yn=='n' || yn=='N';
      if( !valid )
      {
        cout<<yn<<" is not a valid response. Please choose from (Y/N)\n";
      }
    }while( !valid );
  }while( yn!='n' && yn!='N' );

  return 0;
}
