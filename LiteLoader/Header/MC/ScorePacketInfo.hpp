// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
#include <MC/ScoreboardId.hpp>
#undef BEFORE_EXTRA

struct ScorePacketInfo {

#define AFTER_EXTRA
public:
    ScoreboardId sid;
    string obj_name = "FakeScoreObj";
    unsigned score;
    enum Type : char { Invalid = 0,
                       Player = 1,
                       Actor = 2,
                       Fake = 3 };
    Type type = Fake;
    unsigned long long pid;
    unsigned long long aid;
    string fake_name;

    ScorePacketInfo(ScoreboardId* s, unsigned num, const string& fake)
        : sid(*s)
        , score(num)
        , fake_name(fake) {
    }
#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCOREPACKETINFO
public:

#endif

public:
    MCAPI ~ScorePacketInfo();

protected:

private:

};