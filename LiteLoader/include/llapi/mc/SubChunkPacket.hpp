/**
 * @file  SubChunkPacket.hpp
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
 * @brief MC class SubChunkPacket.
 *
 */
class SubChunkPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
    struct SubChunkPacketData;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBCHUNKPACKET
public:
    class SubChunkPacket& operator=(class SubChunkPacket const &) = delete;
    SubChunkPacket(class SubChunkPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SubChunkPacket();
    /**
     * @hash   -520806263
     * @vftbl  1
     * @symbol  ?getId\@SubChunkPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   626216758
     * @vftbl  2
     * @symbol  ?getName\@SubChunkPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1775917489
     * @vftbl  3
     * @symbol  ?write\@SubChunkPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   913868561
     * @vftbl  6
     * @symbol  ?_read\@SubChunkPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1721676207
     * @symbol  ??0SubChunkPacket\@\@QEAA\@XZ
     */
    MCAPI SubChunkPacket();
    /**
     * @hash   -107928328
     * @symbol  ??0SubChunkPacket\@\@QEAA\@AEBV?$AutomaticID\@VDimension\@\@H\@\@AEBVSubChunkPos\@\@_N\@Z
     */
    MCAPI SubChunkPacket(class AutomaticID<class Dimension, int> const &, class SubChunkPos const &, bool);

};