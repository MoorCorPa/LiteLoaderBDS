// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
enum class ActorDataIDs : unsigned short
{
    FLAGS                               = 0,   // Int64
    HEALTH                              = 1,   // Int (minecart/boat)
    VARIANT                             = 2,   // Int
    COLOR                               = 3,   // Byte
    NAMETAG                             = 4,   // String
    OWNER                               = 5,   // Int64
    TARGET                              = 6,   // Int64
    AIR                                 = 7,   // Short
    POTION_COLOR                        = 8,   // Int (ARGB!)
    POTION_AMBIENT                      = 9,   // Byte
    JUMP_DURATION                       = 10,  // Int64
    HURT_TIME                           = 11,  // Int (minecart/boat)
    HURT_DIRECTION                      = 12,  // Int (minecart/boat)
    PADDLE_TIME_LEFT                    = 13,  // Float
    PADDLE_TIME_RIGHT                   = 14,  // Float
    EXPERIENCE_VALUE                    = 15,  // Int (xp orb)
    DISPLAY_ITEM                        = 16,  // Int (id | (data << 16))
    HORSE_FLAGS                         = 16,  // Int
    WITHER_SKULL_IS_DANGEROUS           = 16,  // Byte
    MINECART_DISPLAY_OFFSET             = 17,  // Int
    ARROW_SHOOTER_ID                    = 17,  // Int64
    MINECART_HAS_DISPLAY                = 18,  // Byte (must be 1 for minecart to show block inside)
    HORSE_TYPE                          = 19,
    SWELL                               = 19,
    OLD_SWELL                           = 20,
    SWELL_DIR                           = 21,
    CHARGE_AMOUNT                       = 22,
    ENDERMAN_HELD_RUNTIME_ID            = 23,  // Short
    ACTOR_AGE                           = 24,  // Short
    PLAYER_FLAGS                        = 26,  // Byte
    PLAYER_INDEX                        = 27,
    PLAYER_BED_POSITION                 = 28,  // BlockPos
    FIREBALL_POWER_X                    = 29,  // Float
    FIREBALL_POWER_Y                    = 30,  // Float
    FIREBALL_POWER_Z                    = 31,  // Float
    AUX_POWER                           = 32,
    FISH_X                              = 33,
    FISH_Z                              = 34,
    FISH_ANGLE                          = 35,
    POTION_AUX_VALUE                    = 36,  // Short
    LEAD_HOLDER                         = 37,  // Int64
    SCALE                               = 38,  // Float
    INTERACTIVE_TAG                     = 39,  // String
    NPC_SKIN_ID                         = 40,  // String
    URL_TAG                             = 41,  // String
    MAX_AIR                             = 42,  // Short
    MARK_VARIANT                        = 43,  // Int
    CONTAINER_TYPE                      = 44,  // Byte
    CONTAINER_BASE_SIZE                 = 45,  // Int
    CONTAINER_EXTRA_SLOTS_PER_STRENGTH  = 46,  // Int
    BLOCK_TARGET                        = 47,  // BlockPos (ENDER CRYSTAL)
    WITHER_INVULNERABLE_TICKS           = 48,  // Int
    WITHER_TARGET_1                     = 49,  // Int64
    WITHER_TARGET_2                     = 50,  // Int64
    WITHER_TARGET_3                     = 51,  // Int64
    AERIAL_ATTACK                       = 52,
    BOUNDING_BOX_WIDTH                  = 53,  // Float
    BOUNDING_BOX_HEIGHT                 = 54,  // Float
    FUSE_LENGTH                         = 55,  // Int
    RIDER_SEAT_POSITION                 = 56,  // Vec3
    RIDER_ROTATION_LOCKED               = 57,  // Byte
    RIDER_MAX_ROTATION                  = 58,  // Float
    RIDER_MIN_ROTATION                  = 59,  // Float
    AREA_EFFECT_CLOUD_RADIUS            = 61,  // Float
    AREA_EFFECT_CLOUD_WAITING           = 62,  // Int
    AREA_EFFECT_CLOUD_PARTICLE_ID       = 63,  // Int
    SHULKER_PEEK_ID                     = 64,  // Int
    SHULKER_ATTACH_FACE                 = 65,  // Byte
    SHULKER_ATTACHED                    = 66,  // Short
    SHULKER_ATTACH_POS                  = 67,  // BlockPos
    TRADING_PLAYER_EID                  = 68,  // Int64
    TRADING_CAREER                      = 69,
    HAS_COMMAND_BLOCK                   = 70,
    COMMAND_BLOCK_COMMAND               = 71,  // String
    COMMAND_BLOCK_LAST_OUTPUT           = 72,  // String
    COMMAND_BLOCK_TRACK_OUTPUT          = 73,  // Byte
    CONTROLLING_RIDER_SEAT_NUMBER       = 74,  // Byte
    STRENGTH                            = 75,  // Int
    MAX_STRENGTH                        = 76,  // Int
    SPELL_CASTING_COLOR                 = 77,  // Int
    LIMITED_LIFE                        = 78,
    ARMOR_STAND_POSE_INDEX              = 79,  // Int
    ENDER_CRYSTAL_TIME_OFFSET           = 80,  // Int
    ALWAYS_SHOW_NAMETAG                 = 81,  // Byte
    COLOR_2                             = 82,  // Byte
    NAME_AUTHOR                         = 83,
    SCORE_TAG                           = 84,  // String
    BALLOON_ATTACHED_ENTITY             = 85,  // Int64
    PUFFERFISH_SIZE                     = 86,
    BUBBLE_TIME                         = 87,
    AGENT                               = 88,
    SITTING_AMOUNT                      = 89,
    SITTING_AMOUNT_PREVIOUS             = 90,
    EATING_COUNTER                      = 91,
    FLAGS_EXTENDED                      = 92,
    LAYING_AMOUNT                       = 93,
    LAYING_AMOUNT_PREVIOUS              = 94,
    DURATION                            = 95,
    SPAWN_TIME                          = 96,
    CHANGE_RATE                         = 97,
    CHANGE_ON_PICKUP                    = 98,
    PICKUP_COUNT                        = 99,
    INTERACT_TEXT                       = 100,
    TRADE_TIER                          = 101,
    MAX_TRADE_TIER                      = 102,
    TRADE_EXPERIENCE                    = 103,
    SKIN_ID                             = 104, // Int
    SPAWNING_FRAMES                     = 105,
    COMMAND_BLOCK_TICK_DELAY            = 106,
    COMMAND_BLOCK_EXECUTE_ON_FIRST_TICK = 107,
    AMBIENT_SOUND_INTERVAL              = 108
    /*
    AMBIENT_SOUND_EVENT_NAME            = 109,
    FALL_DAMAGE_MULTIPLIER              = 110,
    NAME_RAW_TEXT                       = 111,
    CAN_RIDE_TARGET                     = 112,
    */
};

//namespace DataItemTypes
//{
//typedef __int64 FLAGS;
//typedef int HEALTH;
//}

enum class DataItemType : unsigned char
{
    Byte = 0,
    Short = 1,
    Int = 2,
    Float = 3,
    String = 4,
    CompoundTag = 5,
    BlockPos = 6,
    Int64 = 7,
    Vec3 = 8,
};

#undef BEFORE_EXTRA

class DataItem
{

#define AFTER_EXTRA
    // Add Member There
public:
    DataItemType mType; //8
    unsigned short mId; //10
    bool mDirty = true; //12

    template <typename T>
    inline T const& getData() const;
    template <typename T>
    inline T& getData();
    template <typename T>
    inline bool setData(T const& value);

    DataItem(DataItemType type, unsigned short id)
        : mId(id)
        , mType(type)
    {
    }

    template <typename T>
    inline static std::unique_ptr<DataItem> create(unsigned short key, T const& value);

    template <typename T>
    inline static std::unique_ptr<DataItem> create(ActorDataIDs key, T const& value);

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DATAITEM
public:
    class DataItem& operator=(class DataItem const&) = delete;
    DataItem(class DataItem const&) = delete;
    DataItem() = delete;
#endif

public:
    /*0*/ virtual ~DataItem();
    /*1*/ virtual bool isDataEqual(class DataItem const&) const;
    /*2*/ virtual std::unique_ptr<DataItem> clone() const = 0; // ~DataItem()
    /*
    inline  ~DataItem(){
         (DataItem::*rv)();
        *((void**)&rv) = dlsym("??1DataItem@@UEAA@XZ");
        return (this->*rv)();
    }
    */

protected:
private:
};
#include "DataItem2.hpp"

template <typename T>
inline T const& DataItem::getData() const
{
    if (this->mType == DataItem2<T>::DATA_ITEM_TYPE)
        return ((DataItem2<T>*)this)->mValue;
    //throw("DataItemType Not Match");
    return *(T*)0;
}

template <typename T>
inline T& DataItem::getData()
{
    if (this->mType == DataItem2<T>::DATA_ITEM_TYPE)
        return ((DataItem2<T>*)this)->mValue;
    //throw("DataItemType Not Match");
    return *(T*)0;
}

template <typename T>
inline bool DataItem::setData(T const& value)
{
    if (this->mType == DataItem2<T>::DATA_ITEM_TYPE)
        return false;
    ((DataItem2<T>*)this)->setData(value);
    return true;
}

template <typename T>
inline static std::unique_ptr<DataItem> DataItem::create(unsigned short key, T const& value)
{
    return std::unique_ptr<DataItem>(new DataItem2(key, value));
}

template <typename T>
inline static std::unique_ptr<DataItem> DataItem::create(ActorDataIDs key, T const& value)
{
    return std::unique_ptr<DataItem>(new DataItem2((unsigned short)key, value));
}