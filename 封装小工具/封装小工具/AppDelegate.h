//
//  AppDelegate.h
//  封装小工具
//
//  Created by 赵玄飞 on 2019/3/7.
//  Copyright © 2019 ZY. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

