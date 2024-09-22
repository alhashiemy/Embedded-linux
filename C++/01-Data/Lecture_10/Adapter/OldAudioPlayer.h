#ifndef OldAudioPlayer_H
#define OldAudioPlayer_H

#include <iostream>
#include "OldAudioPlayerAbstract.h"

class OldAudioPlayer : public OldAudioPlayerAbstract
{
    public:
        void Play()override;
};

#endif