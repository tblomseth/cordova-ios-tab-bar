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
#ifdef CORDOVA_FRAMEWORK
#import <Cordova/CDVPlugin.h>
#else
#import "CDVPlugin.h"
#endif

@interface NativeControls : CDVPlugin <UITabBarDelegate, UIActionSheetDelegate> {
	UITabBar* tabBar;
	NSMutableDictionary* tabBarItems;
    
	UIToolbar* toolBar;
	UIBarButtonItem* toolBarTitle;
	NSMutableArray* toolBarItems;
    
	CGRect	originalWebViewBounds;
}

/* Tab Bar methods
 */
- (void)createTabBar:(CDVInvokedUrlCommand*)command;
- (void)showTabBar:(CDVInvokedUrlCommand*)command;
- (void)hideTabBar:(CDVInvokedUrlCommand*)command;
- (void)showTabBarItems:(CDVInvokedUrlCommand*)command;
- (void)createTabBarItem:(CDVInvokedUrlCommand*)command;
- (void)updateTabBarItem:(CDVInvokedUrlCommand*)command;
- (void)selectTabBarItem:(CDVInvokedUrlCommand*)command;



/* Tool Bar methods
 */
- (void)createToolBar:(CDVInvokedUrlCommand*)command;
- (void)resetToolBar:(CDVInvokedUrlCommand*)command;
- (void)setToolBarTitle:(CDVInvokedUrlCommand*)command;
- (void)createToolBarItem:(CDVInvokedUrlCommand*)command;
- (void)showToolBar:(CDVInvokedUrlCommand*)command;
- (void)hideToolBar:(CDVInvokedUrlCommand*)command;
/* ActionSheet
 */
- (void)createActionSheet:(CDVInvokedUrlCommand*)command;


@end