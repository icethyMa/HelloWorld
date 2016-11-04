//
//  AppDelegate.h
//  HelloWorld
//
//  Created by chunyanma on 2016/11/4.
//  Copyright © 2016年 QFPay. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

