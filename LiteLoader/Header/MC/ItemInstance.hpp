/**
 * @file  ItemInstance.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ItemStackBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemInstance.
 *
 */
class ItemInstance : public ItemStackBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
public:
    /**
     * @vftbl  0
     * @hash   -538113262
     */
    virtual ~ItemInstance();
    /**
     * @vftbl  1
     * @symbol ?reinit@ItemInstance@@UEAAXAEBVItem@@HH@Z
     * @hash   -509119172
     */
    virtual void reinit(class Item const &, int, int);
    /**
     * @vftbl  2
     * @symbol ?reinit@ItemInstance@@UEAAXAEBVBlockLegacy@@H@Z
     * @hash   971527150
     */
    virtual void reinit(class BlockLegacy const &, int);
    /**
     * @vftbl  3
     * @symbol ?reinit@ItemInstance@@UEAAXV?$basic_string_span@$$CBD$0?0@gsl@@HH@Z
     * @hash   -2103712111
     */
    virtual void reinit(class gsl::basic_string_span<char const, -1>, int, int);
    /**
     * @symbol ??0ItemInstance@@QEAA@XZ
     * @hash   1252938676
     */
    MCAPI ItemInstance();
    /**
     * @symbol ??0ItemInstance@@QEAA@V?$basic_string_span@$$CBD$0?0@gsl@@HHPEBVCompoundTag@@@Z
     * @hash   -618494793
     */
    MCAPI ItemInstance(class gsl::basic_string_span<char const, -1>, int, int, class CompoundTag const *);
    /**
     * @symbol ??0ItemInstance@@QEAA@AEBVItem@@HHPEBVCompoundTag@@@Z
     * @hash   -2027850583
     */
    MCAPI ItemInstance(class Item const &, int, int, class CompoundTag const *);
    /**
     * @symbol ??0ItemInstance@@QEAA@AEBVItem@@HH@Z
     * @hash   -435507549
     */
    MCAPI ItemInstance(class Item const &, int, int);
    /**
     * @symbol ??0ItemInstance@@QEAA@AEBVItem@@H@Z
     * @hash   760333728
     */
    MCAPI ItemInstance(class Item const &, int);
    /**
     * @symbol ??0ItemInstance@@QEAA@AEBVItem@@@Z
     * @hash   -1417892701
     */
    MCAPI ItemInstance(class Item const &);
    /**
     * @symbol ??0ItemInstance@@QEAA@AEBVBlockLegacy@@H@Z
     * @hash   1887214366
     */
    MCAPI ItemInstance(class BlockLegacy const &, int);
    /**
     * @symbol ??0ItemInstance@@QEAA@AEBVBlock@@HPEBVCompoundTag@@@Z
     * @hash   987339424
     */
    MCAPI ItemInstance(class Block const &, int, class CompoundTag const *);
    /**
     * @symbol ??0ItemInstance@@QEAA@AEBV0@@Z
     * @hash   -1432650319
     */
    MCAPI ItemInstance(class ItemInstance const &);
    /**
     * @symbol ??0ItemInstance@@QEAA@AEBVItemStackBase@@@Z
     * @hash   1603331973
     */
    MCAPI ItemInstance(class ItemStackBase const &);
    /**
     * @symbol ?clone@ItemInstance@@QEBA?AV1@XZ
     * @hash   -1698351049
     */
    MCAPI class ItemInstance clone() const;
    /**
     * @symbol ??4ItemInstance@@QEAAAEAV0@AEBV0@@Z
     * @hash   970619140
     */
    MCAPI class ItemInstance & operator=(class ItemInstance const &);
    /**
     * @symbol ?EMPTY_ITEM@ItemInstance@@2V1@B
     * @hash   -94592758
     */
    MCAPI static class ItemInstance const EMPTY_ITEM;
    /**
     * @symbol ?fromTag@ItemInstance@@SA?AV1@AEBVCompoundTag@@@Z
     * @hash   -1627027548
     */
    MCAPI static class ItemInstance fromTag(class CompoundTag const &);

//protected:
    /**
     * @symbol ??0ItemInstance@@IEAA@AEBVBlockLegacy@@HF@Z
     * @hash   -1184597021
     */
    MCAPI ItemInstance(class BlockLegacy const &, int, short);

protected:

};