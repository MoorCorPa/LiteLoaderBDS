/**
 * @file  GetChunkDataCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GetChunkDataCommand.
 *
 */
class GetChunkDataCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GETCHUNKDATACOMMAND
public:
    class GetChunkDataCommand& operator=(class GetChunkDataCommand const &) = delete;
    GetChunkDataCommand(class GetChunkDataCommand const &) = delete;
    GetChunkDataCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~GetChunkDataCommand();
    /**
     * @hash   -43967831
     * @vftbl  1
     * @symbol  ?execute\@GetChunkDataCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   1005542720
     * @symbol  ?setup\@GetChunkDataCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &);

};