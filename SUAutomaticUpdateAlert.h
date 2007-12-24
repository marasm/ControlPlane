//
//  SUAutomaticUpdateAlert.h
//  Sparkle
//
//  Created by Andy Matuschak on 3/18/06.
//  Copyright 2006 Andy Matuschak. All rights reserved.
//

#import "Sparkle.h"

@class SUAppcastItem;
@interface SUAutomaticUpdateAlert : NSWindowController {
	SUAppcastItem *updateItem;
	NSBundle *hostBundle;
}

- initWithAppcastItem:(SUAppcastItem *)item hostBundle:(NSBundle *)hostBundle;

- (IBAction)relaunchNow:sender;
- (IBAction)relaunchLater:sender;

@end