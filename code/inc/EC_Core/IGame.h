#ifndef _EASY_CARD_GAME_INTERFACE_H_
#define _EASY_CARD_GAME_INTERFACE_H_

namespace EasyCard
{
	class IGame
	{
	public:
		virtual char* GetName() = 0;
	};
}
#endif