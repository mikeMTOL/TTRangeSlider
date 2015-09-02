//
//  YLRangeSliderViewDelegate.h
//  FantasyRealFootball
//
//  Created by Tom Thorpe on 16/04/2014.
//  Copyright (c) 2014 Yahoo inc. All rights reserved.
//

#import <Foundation/Foundation.h>
@class TTRangeSlider;

@protocol TTRangeSliderDelegate <NSObject>

@optional
-(void)rangeSlider:(TTRangeSlider *)sender didChangeSelectedMinimumValue:(float)selectedMinimum andMaximumValue:(float)selectedMaximum;
-(NSString* _Nullable)rangeSlider:(TTRangeSlider *)sender labelForMinValue:(float)selectedMinimum;
-(NSString* _Nullable)rangeSlider:(TTRangeSlider *)sender labelForMaxValue:(float)selectedMaximum;


@end
