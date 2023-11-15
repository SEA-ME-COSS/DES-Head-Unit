#include <unistd.h>
#include <CommonAPI/CommonAPI.hpp>

#include "RemoteSpeakerStubImpl.hpp"
#include "DataBuffer.hpp"

using namespace v1_0::commonapi;

int main()
{
    std::shared_ptr<CommonAPI::Runtime> runtime;
    runtime = CommonAPI::Runtime::get();

    std::shared_ptr<RemoteSpeakerStubImpl> RemoteSpeakerService = std::make_shared<RemoteSpeakerStubImpl>();
    runtime->registerService("local", "RemoteSpeaker", RemoteSpeakerService);

    bool enable_sound = false;
    int sleep_time = 0;

    while (1)
    {
        enable_sound = false;
    
        if (GearBuffer == 1)
        {
            enable_sound = true;
            
            if (DistanceBuffer < 10)
            {
                sleep_time = 200000;
            }
            else if (DistanceBuffer < 20)
            {
                sleep_time = 350000;
            }
            else if (DistanceBuffer < 30)
            {
                sleep_time = 500000;
            }
            else
            {
                enable_sound = false;
            }
            
        }
        
        if (enable_sound)
        {
            std::cout << '\a' << std::endl;
            usleep(sleep_time);
        }
    }

    return 0;
}
