//
//  UIImageView+Reflection.h
//  BeamMusicPlayerExample
//
//  Created by Moritz Haarmann on 30.05.12.
//  Copyright (c) 2012 n/a. All rights reserved.
//

#import <UIKit/UIKit.h>

CGImageRef CreateGradientImage(int pixelsWide, int pixelsHigh);

@interface UIImageView (Reflection)
- (UIImage *)reflectedImageWithHeight:(NSUInteger)height;

@end
