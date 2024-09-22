#ifndef Adapter_H
#define Adapter_H

#include "OldAudioPlayerAbstract.h"
#include "NewAudioPlayer.h"

class Adapter : public OldAudioPlayerAbstract
{
    private:
      NewAudioPlayer* New_Player;
    public:
        Adapter(NewAudioPlayer* cp_New_Player);
        void Play()override;
};

#endif