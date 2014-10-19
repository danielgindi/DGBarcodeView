//
//  DGBarcodeLayer.h
//  DGBarcodeView
//
//  Created by Daniel Cohen Gindi on 2/1/13.
//  Copyright (c) 2013 AnyGym. All rights reserved.
//
//  https://github.com/danielgindi/DGBarcodeView
//
//  The MIT License (MIT)
//  
//  Copyright (c) 2014 Daniel Cohen Gindi (danielgindi@gmail.com)
//  
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//  
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//  
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE. 
//  

#import <QuartzCore/QuartzCore.h>
#import "DGBarcodeEncoder.h"

@interface DGBarcodeLayer : CALayer

@property (nonatomic, strong) NSString *value;
@property (nonatomic, assign) DGBarcodeEncoding encoding;
@property (nonatomic, strong) UIColor *color;
@property (nonatomic, assign) CGFloat spacingMultiplier;
@property (nonatomic, assign) UIViewContentMode contentMode;

- (CGSize)sizeThatFits:(CGSize)size;

@end
