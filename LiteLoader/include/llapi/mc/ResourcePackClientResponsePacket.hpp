/**
 * @file  ResourcePackClientResponsePacket.hpp
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
 * @brief MC class ResourcePackClientResponsePacket.
 *
 */
class ResourcePackClientResponsePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACKCLIENTRESPONSEPACKET
public:
    class ResourcePackClientResponsePacket& operator=(class ResourcePackClientResponsePacket const &) = delete;
    ResourcePackClientResponsePacket(class ResourcePackClientResponsePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ResourcePackClientResponsePacket();
    /**
     * @hash   1920519107
     * @vftbl  1
     * @symbol  ?getId\@ResourcePackClientResponsePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -1723925616
     * @vftbl  2
     * @symbol  ?getName\@ResourcePackClientResponsePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   2102034407
     * @vftbl  3
     * @symbol  ?write\@ResourcePackClientResponsePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1162346727
     * @vftbl  6
     * @symbol  ?_read\@ResourcePackClientResponsePacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -812531225
     * @symbol  ??0ResourcePackClientResponsePacket\@\@QEAA\@XZ
     */
    MCAPI ResourcePackClientResponsePacket();
    /**
     * @hash   -290273125
     * @symbol  ?getDownloadingPacks\@ResourcePackClientResponsePacket\@\@QEBAAEBV?$set\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI class std::set<std::string, struct std::less<std::string>, class std::allocator<std::string>> const & getDownloadingPacks() const;
    /**
     * @hash   -886108003
     * @symbol  ?isResponse\@ResourcePackClientResponsePacket\@\@QEBA_NW4ResourcePackResponse\@\@\@Z
     */
    MCAPI bool isResponse(enum class ResourcePackResponse) const;

};