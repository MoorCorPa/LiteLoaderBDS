/**
 * @file  CommandOutputPacket.hpp
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
 * @brief MC class CommandOutputPacket.
 *
 */
class CommandOutputPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDOUTPUTPACKET
public:
    class CommandOutputPacket& operator=(class CommandOutputPacket const &) = delete;
    CommandOutputPacket(class CommandOutputPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~CommandOutputPacket();
    /**
     * @hash   1064806218
     * @vftbl  1
     * @symbol  ?getId\@CommandOutputPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -997809673
     * @vftbl  2
     * @symbol  ?getName\@CommandOutputPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -2053942576
     * @vftbl  3
     * @symbol  ?write\@CommandOutputPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1776678640
     * @vftbl  6
     * @symbol  ?_read\@CommandOutputPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -218312032
     * @symbol  ??0CommandOutputPacket\@\@QEAA\@XZ
     */
    MCAPI CommandOutputPacket();
    /**
     * @hash   -793666510
     * @symbol  ??0CommandOutputPacket\@\@QEAA\@AEBVCommandOrigin\@\@AEBVCommandOutput\@\@\@Z
     */
    MCAPI CommandOutputPacket(class CommandOrigin const &, class CommandOutput const &);

};