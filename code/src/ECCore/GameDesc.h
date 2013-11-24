#ifndef _EASY_CARD_GAME_DESCRIPTOTION_CLASS_H_
#define _EASY_CARD_GAME_DESCRIPTOTION_CLASS_H_

#include "Engine/IGameDesc.h"
#include "Platform/type_def.h"

using namespace Platform;

namespace EasyCard
{
    class CGameDesc : public IGameDesc
    {
    public:
        CGameDesc();
        CGameDesc(const char* szName, const char* szDisplayName, uint nPlayerNumber);
        ~CGameDesc();

        virtual const char* GetName();
        virtual const char* GetDisplayName();
        virtual int GetPlayerNumber();

        void SetName(char* szName);
        void SetDisplayName(char* szName);
        void SetPlayerNumber(int nNumber);
    };
}

#endif