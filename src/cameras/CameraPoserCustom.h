#pragma once

#include "al/camera/CameraPoser.h"
#include "al/camera/alCameraPoserFunction.h"
#include "al/camera/CameraVerticalAbsorber2DGalaxy.h"
#include "al/camera/CameraAngleVerticalCtrl.h"

#include "sead/math/seadVector.h"

#include "al/util.hpp"

// cc = custom cameras

namespace cc {
    class CameraPoserCustom : public al::CameraPoser {
    public:
        CameraPoserCustom(char const*);
        virtual void loadParam(al::ByamlIter const&) override;
        virtual void start(al::CameraStartInfo const&) override;
        virtual void init() override;
        void reset(void);
        virtual void update(void) override;
        virtual void movement(void) override;

        float mOffsetY = 120.0f;
        float mDist = 1600.0f;
        float mAngleV = 0.0f;
        float mAngleH = 0.0f;
        float mPrevH = 0.0f;
        float mPrevV = 0.0f;
        float mSnapSpeed = 0.15f;
        float mGroundSnapSpeed = 0.2f;
        int mGroundTimer = 0;
        bool mIsPrevTargetCollideGround = true;
        bool mIsTargetCollideGround = true;
        bool mIsResetAngleIfSwitchTarget = false;
        sead::Vector3f mPrevTargetDir = sead::Vector3f::ey;
        sead::Vector3f mPrevTargetTrans = sead::Vector3f::ex;
        al::CameraVerticalAbsorber2DGalaxy* mGalaxyAbsorber;
    };
}