#include "Engine/IEngine.h"
#include "Engine.h"

namespace EasyCard
{
    IEngine* GetEngine()
    {
        return new CEngine;
    }
}