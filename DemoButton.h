//
//    File: DemoButton.h
//    Abstract: A subclassed UIButton that allows customization of
//    line spacing on button text through MTLabel
//
//    Copyright 2012 Dillion Tan
//
//    Licensed under the Apache License, Version 2.0 (the "License");
//    you may not use this file except in compliance with the License.
//    You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
//    Unless required by applicable law or agreed to in writing, software
//    distributed under the License is distributed on an "AS IS" BASIS,
//    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//    See the License for the specific language governing permissions and
//    limitations under the License.

#import <UIKit/UIKit.h>
#import "MTLabelNew.h"

@interface DemoButton : UIButton

@property (nonatomic) CGPoint frameOffset;
@property (nonatomic) CGPoint frameInset;

@property (nonatomic) BOOL setsSelectedOnTouchUpInside;

@property (nonatomic, strong) MTLabelNew *buttonLabel;

- (void)setFrame:(CGRect)frame;
- (void)setSelected:(BOOL)selected;
- (void)onTouchDown:(UIButton *)sender;
- (void)onTouchUpInside:(UIButton *)sender;
- (void)onTouchUpOutside:(UIButton *)sender;

@end
