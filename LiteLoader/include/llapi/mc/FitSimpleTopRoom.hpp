/**
 * @file  FitSimpleTopRoom.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FitSimpleTopRoom.
 *
 */
class FitSimpleTopRoom {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FITSIMPLETOPROOM
public:
    class FitSimpleTopRoom& operator=(class FitSimpleTopRoom const &) = delete;
    FitSimpleTopRoom(class FitSimpleTopRoom const &) = delete;
    FitSimpleTopRoom() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~FitSimpleTopRoom();
    /**
     * @hash   488392596
     * @vftbl  1
     * @symbol  ?fits\@FitSimpleTopRoom\@\@UEBA_NAEBVRoomDefinition\@\@\@Z
     */
    virtual bool fits(class RoomDefinition const &) const;
    /**
     * @hash   1054958733
     * @vftbl  2
     * @symbol  ?create\@FitSimpleTopRoom\@\@UEAA?AV?$unique_ptr\@VOceanMonumentPiece\@\@U?$default_delete\@VOceanMonumentPiece\@\@\@std\@\@\@std\@\@AEAHV?$shared_ptr\@VRoomDefinition\@\@\@3\@AEAVRandom\@\@\@Z
     */
    virtual std::unique_ptr<class OceanMonumentPiece> create(int &, class std::shared_ptr<class RoomDefinition>, class Random &);

};