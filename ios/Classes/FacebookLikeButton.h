/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-present by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

#import "TiUIView.h"

#import <FBSDKShareKit/FBSDKShareKit.h>

@interface FacebookLikeButton : TiUIView {
    FBSDKLikeControl *_likeButton;
}

- (void)setObjectId_:(id _Nullable)unused;

- (void)setObjectID_:(NSString * _Nonnull)objectID;

- (void)setForegroundColor_:(NSString * _Nonnull)foregroundColor;

- (void)setLikeViewStyle_:(NSString * _Nonnull)likeViewStyle;

- (void)setAuxiliaryViewPosition_:(NSString * _Nonnull)auxiliaryViewPosition;

- (void)setHorizontalAlignment_:(NSString * _Nonnull)horizontalAlignment;

- (void)setObjectType_:(id _Nullable)unused;

- (void)setSoundEnabled_:(NSNumber * _Nonnull)soundEnabled;

@end
