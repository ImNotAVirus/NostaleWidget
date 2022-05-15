#pragma once
#include "TLBSRotDamper.h"
#pragma pack(push, 1)

/**
 * @brief Representation of the game TLBSCamera structure.
 */
class TLBSCamera : public TObject
{
public:
	char pad_0004[736]; //0x0004
	uint32_t TLBSPosDamperPtr; //0x02E4
	TLBSRotDamper* HorizontalRotDamper; //0x02E8
	TLBSRotDamper* VerticalRotDamper; //0x02EC
	TLBSRotDamper* ZoomRotDamper; //0x02F0
	char pad_02F4[4]; //0x02F4
}; //Size: 0x02F8
static_assert(sizeof(TLBSCamera) == 0x2F8, "TLBSCamera does not have a size of 0x2F8");

#pragma pack(pop)