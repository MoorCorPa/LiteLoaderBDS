/**
 * @file  IntArrayTag.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Tag.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "TagMemoryChunk.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class IntArrayTag.
 *
 */
class IntArrayTag : public Tag {

#define AFTER_EXTRA
// Add Member There
    TagMemoryChunk val;

public:
    LIAPI TagMemoryChunk& value();
    LIAPI IntArrayTag& operator=(TagMemoryChunk const& val);
    LIAPI static std::unique_ptr<IntArrayTag> create();
    LIAPI static std::unique_ptr<IntArrayTag> create(TagMemoryChunk const& val);
    LIAPI static std::unique_ptr<IntArrayTag> create(int data[], size_t size);
    LIAPI bool set(TagMemoryChunk const& val);
    LIAPI TagMemoryChunk get();

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTARRAYTAG
public:
    class IntArrayTag& operator=(class IntArrayTag const &) = delete;
    IntArrayTag(class IntArrayTag const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~IntArrayTag();
    /**
     * @hash   159141217
     * @vftbl  2
     * @symbol  ?write\@IntArrayTag\@\@UEBAXAEAVIDataOutput\@\@\@Z
     */
    virtual void write(class IDataOutput &) const;
    /**
     * @hash   -1149717264
     * @vftbl  3
     * @symbol  ?load\@IntArrayTag\@\@UEAAXAEAVIDataInput\@\@\@Z
     */
    virtual void load(class IDataInput &);
    /**
     * @hash   1067286006
     * @vftbl  4
     * @symbol  ?toString\@IntArrayTag\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string toString() const;
    /**
     * @hash   -571496501
     * @vftbl  5
     * @symbol  ?getId\@IntArrayTag\@\@UEBA?AW4Type\@Tag\@\@XZ
     */
    virtual enum class Tag::Type getId() const;
    /**
     * @hash   -1330636810
     * @vftbl  6
     * @symbol  ?equals\@IntArrayTag\@\@UEBA_NAEBVTag\@\@\@Z
     */
    virtual bool equals(class Tag const &) const;
    /**
     * @hash   -176135320
     * @vftbl  9
     * @symbol  ?copy\@IntArrayTag\@\@UEBA?AV?$unique_ptr\@VTag\@\@U?$default_delete\@VTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class Tag> copy() const;
    /**
     * @hash   -1026529730
     * @vftbl  10
     * @symbol  ?hash\@IntArrayTag\@\@UEBA_KXZ
     */
    virtual unsigned __int64 hash() const;
    /**
     * @hash   229549852
     * @symbol  ??0IntArrayTag\@\@QEAA\@XZ
     */
    MCAPI IntArrayTag();

};