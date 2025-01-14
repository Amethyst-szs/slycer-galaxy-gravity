#pragma once

#include "al/fs/FileLoader.h"
#include "al/save/SaveDataDirector.h"

#include "types.h"

namespace al {

class SystemKit {
public:
    const u8* mMemorySystem;
    al::FileLoader* mFileLoader;
    const u8* mResourceSystem;
    al::SaveDataDirector* mSaveDirector;
};

};