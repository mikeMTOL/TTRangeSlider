//
//  YLRangeSliderViewDelegate.h
//  FantasyRealFootball
//
//  Created by Tom Thorpe on 16/04/2014.
//  Copyright (c) 2014 Yahoo inc. All rights reserved.
//

#import <Foundation/Foundation.h>
@class TTRangeSlider;

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnullability-completeness"
@protocol TTRangeSliderDelegate <NSObject>

@optional
-(void)rangeSlider:(TTRangeSlider *)sender didChangeSelectedMinimumValue:(float)selectedMinimum andMaximumValue:(float)selectedMaximum;
-(nullable NSString *)rangeSlider:(TTRangeSlider *)sender labelForMinValue:(float)selectedMinimum;
-(nullable NSString*)rangeSlider:(TTRangeSlider *)sender labelForMaxValue:(float)selectedMaximum;


@end
#pragma clang diagnostic pop