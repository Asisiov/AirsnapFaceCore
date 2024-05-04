//
//  PlateScanner.h
//  RNOpenAlpr
//
//  Created by Evan Rosenfeld on 2/24/17.
//  Copyright © 2017 CarDash. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "FaceBox.h"

@interface Phoenix : NSObject

+ (instancetype)sharedInstance;
- (int) initPFCM: (NSString*) licenseStr faceOcclusion: (bool) faceOcclusion eyeClose: (bool)eyeClose liveness: (bool)liveness;
- (NSString*) getVersion;
- (NSMutableArray*) detectFace:(UIImage*)colorImage;
- (NSMutableArray*) evalFace:(UIImage*)colorImage ICAO:(BOOL)do_ICAO QualityCheck:(BOOL)do_QualityCheck QualityCheckParameters:(const float [])QualityCheckRange get_ReferenceImageMRTD:(BOOL)get_reference_image_MRTD ReferenceImageMRTDImageParameters:(const float [])ReferenceImageMRTDImageParams;

@end

