/**
 * @file  RemoveVolumeEntityPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RemoveVolumeEntityPacket.
 *
 */
class RemoveVolumeEntityPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REMOVEVOLUMEENTITYPACKET
public:
    class RemoveVolumeEntityPacket& operator=(class RemoveVolumeEntityPacket const &) = delete;
    RemoveVolumeEntityPacket(class RemoveVolumeEntityPacket const &) = delete;
    RemoveVolumeEntityPacket() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RemoveVolumeEntityPacket();
    /**
     * @hash   980727605
     * @vftbl  1
     * @symbol  ?getId\@RemoveVolumeEntityPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   822470114
     * @vftbl  2
     * @symbol  ?getName\@RemoveVolumeEntityPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   124844613
     * @vftbl  3
     * @symbol  ?write\@RemoveVolumeEntityPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1540602011
     * @vftbl  6
     * @symbol  ?_read\@RemoveVolumeEntityPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1677324348
     * @symbol  ??0RemoveVolumeEntityPacket\@\@QEAA\@AEAVEntityContext\@\@\@Z
     */
    MCAPI RemoveVolumeEntityPacket(class EntityContext &);

};