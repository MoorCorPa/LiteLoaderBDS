/**
 * @file  ItemStackRequestActionTransferBase.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackRequestActionTransferBase.
 *
 */
class ItemStackRequestActionTransferBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONTRANSFERBASE
public:
    class ItemStackRequestActionTransferBase& operator=(class ItemStackRequestActionTransferBase const &) = delete;
    ItemStackRequestActionTransferBase(class ItemStackRequestActionTransferBase const &) = delete;
    ItemStackRequestActionTransferBase() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ItemStackRequestActionTransferBase();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -1225182290
     * @vftbl  4
     * @symbol  ?_write\@ItemStackRequestActionTransferBase\@\@MEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void _write(class BinaryStream &) const;
    /**
     * @hash   -1466289466
     * @vftbl  5
     * @symbol  ?_read\@ItemStackRequestActionTransferBase\@\@MEAA_NAEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual bool _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1475508233
     * @symbol  ?getAmount\@ItemStackRequestActionTransferBase\@\@QEBAEXZ
     */
    MCAPI unsigned char getAmount() const;
    /**
     * @hash   1138506242
     * @symbol  ?getDst\@ItemStackRequestActionTransferBase\@\@QEBAAEBUItemStackRequestSlotInfo\@\@XZ
     */
    MCAPI struct ItemStackRequestSlotInfo const & getDst() const;
    /**
     * @hash   -1036984048
     * @symbol  ?getSrc\@ItemStackRequestActionTransferBase\@\@QEBAAEBUItemStackRequestSlotInfo\@\@XZ
     */
    MCAPI struct ItemStackRequestSlotInfo const & getSrc() const;

};