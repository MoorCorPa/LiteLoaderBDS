/**
 * @file  DenyList.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DenyList.
 *
 */
class DenyList {

#define AFTER_EXTRA
// Add Member There
public:
enum class Duration;
struct Entry {
    Entry() = delete;
    Entry(Entry const&) = delete;
    Entry(Entry const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DENYLIST
public:
    class DenyList& operator=(class DenyList const &) = delete;
    DenyList(class DenyList const &) = delete;
    DenyList() = delete;
#endif

public:
    /**
     * @hash   1985829675
     * @symbol  ?addEntry\@DenyList\@\@QEAAXAEBUEntry\@1\@\@Z
     */
    MCAPI void addEntry(struct DenyList::Entry const &);
    /**
     * @hash   944086077
     * @symbol  ?getDuration\@DenyList\@\@QEBA?AW4Duration\@1\@AEBUEntry\@1\@\@Z
     */
    MCAPI enum class DenyList::Duration getDuration(struct DenyList::Entry const &) const;
    /**
     * @hash   1726698800
     * @symbol  ?getMessage\@DenyList\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUEntry\@1\@\@Z
     */
    MCAPI std::string const & getMessage(struct DenyList::Entry const &) const;
    /**
     * @hash   2135183904
     * @symbol  ?isBlocked\@DenyList\@\@QEBA_NAEBUEntry\@1\@\@Z
     */
    MCAPI bool isBlocked(struct DenyList::Entry const &) const;
    /**
     * @hash   1965904783
     * @symbol  ?removeEntry\@DenyList\@\@QEAAXAEBUEntry\@1\@\@Z
     */
    MCAPI void removeEntry(struct DenyList::Entry const &);
    /**
     * @hash   -709129916
     * @symbol  ??1DenyList\@\@QEAA\@XZ
     */
    MCAPI ~DenyList();

};