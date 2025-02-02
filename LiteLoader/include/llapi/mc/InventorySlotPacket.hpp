/**
 * @file  InventorySlotPacket.hpp
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
 * @brief MC class InventorySlotPacket.
 *
 */
class InventorySlotPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVENTORYSLOTPACKET
public:
    class InventorySlotPacket& operator=(class InventorySlotPacket const &) = delete;
    InventorySlotPacket(class InventorySlotPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~InventorySlotPacket();
    /**
     * @hash   409930700
     * @vftbl  1
     * @symbol  ?getId\@InventorySlotPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   789661305
     * @vftbl  2
     * @symbol  ?getName\@InventorySlotPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   432698926
     * @vftbl  3
     * @symbol  ?write\@InventorySlotPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1419155906
     * @vftbl  6
     * @symbol  ?_read\@InventorySlotPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1544270946
     * @symbol  ??0InventorySlotPacket\@\@QEAA\@XZ
     */
    MCAPI InventorySlotPacket();
    /**
     * @hash   581655739
     * @symbol  ??0InventorySlotPacket\@\@QEAA\@W4ContainerID\@\@IAEBVItemStack\@\@\@Z
     */
    MCAPI InventorySlotPacket(enum class ContainerID, unsigned int, class ItemStack const &);

};