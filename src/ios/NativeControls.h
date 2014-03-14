//
//  NativeControls.h
//
//
//  Created by Jesse MacFadyen on 10-02-03.
//  MIT Licensed

//  Originally this code was developed my Michael Nachbaur
//  Formerly -> PhoneGap :: UIControls.h
//  Created by Michael Nachbaur on 13/04/09.
//  Copyright 2009 Decaf Ninja Software. All rights reserved.

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <UIKit/UITabBar.h>
#import <UIKit/UIToolbar.h>
#import <Cordova/CDVPlugin.h>

@interface NativeControls : CDVPlugin <UITabBarDelegate, UIActionSheetDelegate> {
	UITabBar* tabBar;
	NSMutableDictionary* tabBarItems;
  
	UIToolbar* toolBar;
	UIBarButtonItem* toolBarTitle;
	NSMutableArray* toolBarItems;
  
	CGRect	originalWebViewBounds;
}

#pragma mark - Properties

@property (nonatomic, copy) NSString* callbackId;

#pragma mark - Tab bar methods
/* Tab Bar methods
 */
- (void)createTabBar:(CDVInvokedUrlCommand*)command;
- (void)showTabBar:(CDVInvokedUrlCommand*)command;
- (void)hideTabBar:(CDVInvokedUrlCommand*)command;
- (void)showTabBarItems:(CDVInvokedUrlCommand*)command;
- (void)createTabBarItem:(CDVInvokedUrlCommand*)command;
- (void)updateTabBarItem:(CDVInvokedUrlCommand*)command;
- (void)selectTabBarItem:(CDVInvokedUrlCommand*)command;

#pragma mark - Tool bar methods
/* Tool Bar methods
 */
- (void)createToolBar:(CDVInvokedUrlCommand*)command;
- (void)resetToolBar:(CDVInvokedUrlCommand*)command;
- (void)setToolBarTitle:(CDVInvokedUrlCommand*)command;
- (void)createToolBarItem:(CDVInvokedUrlCommand*)command;
- (void)showToolBar:(CDVInvokedUrlCommand*)command;
- (void)hideToolBar:(CDVInvokedUrlCommand*)command;

#pragma mark - Action sheet methods
/* ActionSheet
 */
- (void)createActionSheet:(CDVInvokedUrlCommand*)command;

@end
