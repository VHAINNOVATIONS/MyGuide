//
//  KSLabel.h
//
//  Created by VigorousCoding.com on 13.02.12.
//  Copyright (c) 2012 VigorousCoding.com. All rights reserved.
//

//  Licensing (Zlib)
//
//  This software is provided 'as-is', without any express or implied
//  warranty. In no event will the authors be held liable for any damages
//  arising from the use of this software.
//
//  Permission is granted to anyone to use this software for any purpose,
//  including commercial applications, and to alter it and redistribute it
//  freely, subject to the following restrictions:
//
//  1. The origin of this software must not be misrepresented; you must not
//     claim that you wrote the original software. If you use this software in
//     a product, an acknowledgment in the product documentation would be
//     appreciated but is not required.
//
//  2. Altered source versions must be plainly marked as such, and must not
//     be misrepresented as being the original software.
//
//  3. This notice may not be removed or altered from any source distribution.

//  As a side note on using this code, you might consider giving some credit to me by
//	1) linking my website (http://www.vigorouscoding.com) from your app's website 
//	2) or crediting me inside the app's credits page 
//	3) or a tweet mentioning @modogo

#import <UIKit/UIKit.h>

@interface KSLabel : UILabel {
    BOOL drawWhiteOutline;
    BOOL drawBlackOutline;
    BOOL drawGradient;
}

@property BOOL drawWhiteOutline;
@property BOOL drawBlackOutline;
@property BOOL drawGradient;

@end
