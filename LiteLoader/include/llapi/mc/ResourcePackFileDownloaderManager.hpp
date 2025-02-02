/**
 * @file  ResourcePackFileDownloaderManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ResourcePackFileDownloaderManager.
 *
 */
class ResourcePackFileDownloaderManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACKFILEDOWNLOADERMANAGER
public:
    class ResourcePackFileDownloaderManager& operator=(class ResourcePackFileDownloaderManager const &) = delete;
    ResourcePackFileDownloaderManager(class ResourcePackFileDownloaderManager const &) = delete;
    ResourcePackFileDownloaderManager() = delete;
#endif

public:
    /**
     * @hash   -1342863843
     * @symbol  ?cleanup\@ResourcePackFileDownloaderManager\@\@QEAAXXZ
     */
    MCAPI void cleanup();
    /**
     * @hash   -1602251083
     * @symbol  ?update\@ResourcePackFileDownloaderManager\@\@QEAAXXZ
     */
    MCAPI void update();

//private:

private:
    /**
     * @hash   1620975078
     * @symbol  ?MAX_CHUNK_ATTEMPTS\@ResourcePackFileDownloaderManager\@\@0HB
     */
    MCAPI static int const MAX_CHUNK_ATTEMPTS;

};