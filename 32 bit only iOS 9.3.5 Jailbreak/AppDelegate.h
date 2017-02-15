//
//  AppDelegate.h
//  32 bit only iOS 9.3.5 Jailbreak
//
//  Created by Brandon Withall on 2017-02-14.
//  Copyright © 2017 Brando1235703. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;






@end

