#include <iostream>
#include "OldAudioPlayerAbstract.h"
#include "OldAudioPlayer.h"
#include "NewAudioPlayer.h"
#include "Adapter.h"


int main()
{
    OldAudioPlayerAbstract* player1 = new OldAudioPlayer();
    player1->Play();


    std::cout << "----------------------\n";
    
    NewAudioPlayer New_Player;
    OldAudioPlayerAbstract* adapter = new Adapter(&New_Player);
    adapter->Play();

    delete adapter;
    delete player1;
    return 0;
}