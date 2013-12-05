#ifndef _EASY_CARD_GAME_FACTORY_INTERFACE_H_
#define _EASY_CARD_GAME_FACTORY_INTERFACE_H_

#include "ec_common/type_def.h"


namespace EasyCard
{
    class IGame;
    class IGameDesc;
    class GameConfig;

    class IGameFactory
    {
    public:
        virtual size_t GetPredefineCount() = 0;
        virtual const IGame* CreatePredefineGame(size_t index) = 0;
        virtual const IGame* CreateGame(GameConfig& config) = 0;
        virtual void DeleteGame(IGame* game) = 0;
    };

}
#endif