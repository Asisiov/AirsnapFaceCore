//
//  PlateResult.h
//  RNOpenAlpr
//
//  Created by Evan Rosenfeld on 2/25/17.
//  Copyright © 2017 CarDash. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface FaceBox : NSObject

@property (nonatomic) int mLeft;
@property (nonatomic) int mTop;
@property (nonatomic) int mRight;
@property (nonatomic) int mBottom;
@property (nonatomic) float mLiveness;
@property (nonatomic) int mFaceState;
@property (nonatomic) float mPan;
@property (nonatomic) float mPitch;
@property (nonatomic) float mRoll;
@property (nonatomic) float mBrisque;
@property (nonatomic) float mEyeDist;
@property (nonatomic) float mLeftEyeClosed;
@property (nonatomic) float mRightEyeClosed;
@property (nonatomic) float mMask;
@property (nonatomic) float mSunglass;
@property (nonatomic) float mLeftEyeX;
@property (nonatomic) float mLeftEyeY;
@property (nonatomic) float mRightEyeX;
@property (nonatomic) float mRightEyeY;
@property (nonatomic) float mFaceScore;
@property (nonatomic) float mBlurScore;
@property (nonatomic) float mHotspotScore;
@property (nonatomic) float mExposureScore;
@property (nonatomic) float mRedEyesScore;
@property (nonatomic) float mMouthOpenScore;
@property (nonatomic) float mLaughScore;
@property (nonatomic) float mSkinToneScore;
@property (nonatomic) float mUniformBackgroundScore;
@property (nonatomic) float mUniformBackgroundColorScore;
@property (nonatomic) float mBrightnessScore;
@property (nonatomic) float mUniformIlluminationScore;
@property (nonatomic) float mGlassesScore;
@property (nonatomic) bool mGoodQuality;
@property (nonatomic) UIImage* mFullfrontalImage;
@end
