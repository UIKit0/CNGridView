//
//  CNGridViewDefinitions.h
//
//  Created by cocoa:naut on 10.11.12.
//  Copyright (c) 2012 cocoa:naut. All rights reserved.
//

/*
 The MIT License (MIT)
 Copyright © 2012 Frank Gregor, <phranck@cocoanaut.com>

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the “Software”), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 */


#ifndef CNGridViewDefinitions_h
#define CNGridViewDefinitions_h


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

extern const int CNSingleClick;
extern const int CNDoubleClick;
extern const int CNTrippleClick;

typedef struct CNItemPoint {
    NSUInteger column;
    NSUInteger row;
} CNItemPoint;


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Convenience Functions

CNItemPoint CNMakeItemPoint(NSUInteger aColumn, NSUInteger aRow);



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Notifications
/// All notifications have the sender `CNGridView` as object parameter
extern NSString *CNGridViewSelectAllItemsNotification;
extern NSString *CNGridViewDeSelectAllItemsNotification;


/// the userInfo dictionary of these notifications contains the item index
/// wrapped in a NSNumber object with the key `CNGridViewItemIndexKey`
extern NSString *CNGridViewWillHoverItemNotification;
extern NSString *CNGridViewWillUnhoverItemNotification;
extern NSString *CNGridViewWillSelectItemNotification;
extern NSString *CNGridViewDidSelectItemNotification;
extern NSString *CNGridViewWillDeselectItemNotification;
extern NSString *CNGridViewDidDeselectItemNotification;
extern NSString *CNGridViewDidClickItemNotification;
extern NSString *CNGridViewDidDoubleClickItemNotification;
extern NSString *CNGridViewRightMouseButtonClickedOnItemNotification;


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// these keys are use for the notification userInfo dictionary (see above)
extern NSString *CNGridViewItemKey;
extern NSString *CNGridViewItemIndexKey;
extern NSString *CNGridViewItemsIndexSetKey;


#endif
