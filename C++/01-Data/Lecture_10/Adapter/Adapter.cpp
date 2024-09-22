#include "Adapter.h"

Adapter::Adapter(NewAudioPlayer* cp_New_Player):New_Player(cp_New_Player){}
void Adapter::Play()
{
    New_Player->Play();
}