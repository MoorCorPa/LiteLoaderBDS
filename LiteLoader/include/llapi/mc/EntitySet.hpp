/**
 * @file  EntitySet.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EntitySet.
 *
 */
class EntitySet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYSET
public:
    class EntitySet& operator=(class EntitySet const &) = delete;
#endif

public:
    /**
     * @hash   -1200089797
     * @symbol  ??0EntitySet\@\@QEAA\@XZ
     */
    MCAPI EntitySet();
    /**
     * @hash   561204849
     * @symbol  ??0EntitySet\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI EntitySet(class EntitySet const &);
    /**
     * @hash   1216399911
     * @symbol  ??0EntitySet\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI EntitySet(class EntitySet &&);
    /**
     * @hash   1045889565
     * @symbol  ?add\@EntitySet\@\@QEAA_NAEBVEntityContext\@\@\@Z
     */
    MCAPI bool add(class EntityContext const &);
    /**
     * @hash   1099565522
     * @symbol  ?erase\@EntitySet\@\@QEAA?AV?$_List_const_iterator\@V?$_List_val\@U?$_List_simple_types\@U?$pair\@$$CB_KVWeakEntityRef\@\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@V23\@\@Z
     */
    MCAPI class std::_List_const_iterator<class std::_List_val<struct std::_List_simple_types<struct std::pair<unsigned __int64 const, class WeakEntityRef>>>> erase(class std::_List_const_iterator<class std::_List_val<struct std::_List_simple_types<struct std::pair<unsigned __int64 const, class WeakEntityRef>>>>);
    /**
     * @hash   208232983
     * @symbol  ?find\@EntitySet\@\@QEBA?AVWeakEntityRef\@\@AEBVEntityContext\@\@\@Z
     */
    MCAPI class WeakEntityRef find(class EntityContext const &) const;
    /**
     * @hash   -1850835758
     * @symbol  ??4EntitySet\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class EntitySet & operator=(class EntitySet &&);

};