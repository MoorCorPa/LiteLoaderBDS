/**
 * @file  AddPlayerPacket.hpp
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
 * @brief MC class AddPlayerPacket.
 *
 */
class AddPlayerPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADDPLAYERPACKET
public:
    class AddPlayerPacket& operator=(class AddPlayerPacket const &) = delete;
    AddPlayerPacket(class AddPlayerPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~AddPlayerPacket();
    /**
     * @hash   2004388484
     * @vftbl  1
     * @symbol  ?getId\@AddPlayerPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   234145073
     * @vftbl  2
     * @symbol  ?getName\@AddPlayerPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -328400202
     * @vftbl  3
     * @symbol  ?write\@AddPlayerPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   389194838
     * @vftbl  6
     * @symbol  ?_read\@AddPlayerPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -826256746
     * @symbol  ??0AddPlayerPacket\@\@QEAA\@XZ
     */
    MCAPI AddPlayerPacket();
    /**
     * @hash   -1108310837
     * @symbol  ??0AddPlayerPacket\@\@QEAA\@AEAVPlayer\@\@\@Z
     */
    MCAPI AddPlayerPacket(class Player &);

};