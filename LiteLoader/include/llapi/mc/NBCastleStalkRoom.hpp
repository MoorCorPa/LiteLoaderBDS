/**
 * @file  NBCastleStalkRoom.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "NetherFortressPiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NBCastleStalkRoom.
 *
 */
class NBCastleStalkRoom : public NetherFortressPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NBCASTLESTALKROOM
public:
    class NBCastleStalkRoom& operator=(class NBCastleStalkRoom const &) = delete;
    NBCastleStalkRoom(class NBCastleStalkRoom const &) = delete;
    NBCastleStalkRoom() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~NBCastleStalkRoom();
    /**
     * @hash   -1248135923
     * @vftbl  2
     * @symbol  ?getType\@NBCastleStalkRoom\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @hash   -2117992685
     * @vftbl  3
     * @symbol  ?addChildren\@NBCastleStalkRoom\@\@UEAAXAEAVStructurePiece\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@\@Z
     */
    virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    /**
     * @hash   -1126093205
     * @vftbl  4
     * @symbol  ?postProcess\@NBCastleStalkRoom\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);

};