/**
 * @file  PropertyValues.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure PropertyValues.
 *
 */
struct PropertyValues {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROPERTYVALUES
public:
    struct PropertyValues& operator=(struct PropertyValues const &) = delete;
    PropertyValues() = delete;
#endif

public:
    /**
     * @hash   -1273520785
     * @symbol  ??0PropertyValues\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI PropertyValues(struct PropertyValues const &);
    /**
     * @hash   288930210
     * @symbol  ??4PropertyValues\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct PropertyValues & operator=(struct PropertyValues &&);
    /**
     * @hash   2072563401
     * @symbol  ?resize\@PropertyValues\@\@QEAAX_K000\@Z
     */
    MCAPI void resize(unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64);
    /**
     * @hash   -1078519151
     * @symbol  ??1PropertyValues\@\@QEAA\@XZ
     */
    MCAPI ~PropertyValues();

};