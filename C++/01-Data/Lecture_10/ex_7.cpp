#include <iostream>

class OldAudioPlayerAbstract
{
    public:
        virtual void Play() = 0;
};

class OldAudioPlayer : public OldAudioPlayerAbstract
{
    public:
        void Play()override
        {
            std::cout << "Play Audio...." << std::endl;
        }
};

class NewAudioPlayer
{
    public:
        void Play()
        {
           std::cout << "Play Audio...." << std::endl; 
           std::cout << "Play Vedio...." << std::endl; 
           std::cout << "Play Subtitle...." << std::endl; 
        }
};

class Adapter : public OldAudioPlayerAbstract
{
    private:
      NewAudioPlayer* New_Player;
    public:
        Adapter(NewAudioPlayer* cp_New_Player):New_Player(cp_New_Player){}
        void Play()override
        {
            New_Player->Play();
        }
};

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