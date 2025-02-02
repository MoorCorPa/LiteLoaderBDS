/**
 * @file  RequestPermissionsPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class RequestPermissionsPacket.
 *
 */
class RequestPermissionsPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REQUESTPERMISSIONSPACKET
public:
    class RequestPermissionsPacket& operator=(class RequestPermissionsPacket const &) = delete;
    RequestPermissionsPacket(class RequestPermissionsPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RequestPermissionsPacket();
    /**
     * @hash   -957221599
     * @vftbl  1
     * @symbol  ?getId\@RequestPermissionsPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -403004466
     * @vftbl  2
     * @symbol  ?getName\@RequestPermissionsPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -66591207
     * @vftbl  3
     * @symbol  ?write\@RequestPermissionsPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   657176473
     * @vftbl  6
     * @symbol  ?_read\@RequestPermissionsPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   323574857
     * @symbol  ??0RequestPermissionsPacket\@\@QEAA\@XZ
     */
    MCAPI RequestPermissionsPacket();
    /**
     * @hash   -875267493
     * @symbol  ?getCustomAbilityValue\@RequestPermissionsPacket\@\@QEBA_NW4AbilitiesIndex\@\@\@Z
     */
    MCAPI bool getCustomAbilityValue(enum class AbilitiesIndex) const;
    /**
     * @hash   -916905342
     * @symbol  ?getPlayerPermissions\@RequestPermissionsPacket\@\@QEBA?AW4PlayerPermissionLevel\@\@XZ
     */
    MCAPI enum class PlayerPermissionLevel getPlayerPermissions() const;
    /**
     * @hash   1567774702
     * @symbol  ?getTargetPlayerId\@RequestPermissionsPacket\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getTargetPlayerId() const;

};