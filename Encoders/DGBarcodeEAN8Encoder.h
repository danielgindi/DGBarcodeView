//
//  DGBarcodeEAN8Encoder.h
//  DGBarcodeView
//
//  Created by Daniel Cohen Gindi on 1/31/13.
//  Copyright (c) 2013 Daniel Cohen Gindi. All rights reserved.
//
//  https://github.com/danielgindi/DGBarcodeView
//

#import "DGBarcodeEncoder.h"

@interface DGBarcodeEAN8Encoder : DGBarcodeEncoder

- (NSString *)encodedValueWithValue:(NSString *)value;

@end
