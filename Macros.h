//
//  Macros.h
//
//  Created by Burhanuddin Sunelwala on 1/21/15.
//  Copyright (c) 2015 Gistec. All rights reserved.
//

#ifndef Macros_h
#define Macros_h

#define Is_iPad                                 (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define Is_iPhone                               (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)

#define iOS_EqualTo(v)                          ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define iOS_GreaterThan(v)                      ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define iOS_GreaterThanOrEqualTo(v)             ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define iOS_LessThan(v)                         ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define iOS_LessThanOrEqualTo(v)                ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)

#define AppDelegate                             (AppDelegate *)[[UIApplication sharedApplication] delegate]
#define UserDefaults                            [NSUserDefaults standardUserDefaults]
#define MainBundle                              [NSBundle mainBundle]
#define MainScreen                              [UIScreen mainScreen]

#define ScreenWidth                             [[UIScreen mainScreen] bounds].size.width
#define ScreenHeight                            [[UIScreen mainScreen] bounds].size.height

#define ShowStatusBar                           [[UIApplication sharedApplication] setStatusBarHidden:NO withAnimation:UIStatusBarAnimationNone];
#define HideStatusBar                           [[UIApplication sharedApplication] setStatusBarHidden:YES withAnimation:UIStatusBarAnimationNone];
#define ShowNavigationBar                       [self.navigationController setNavigationBarHidden:FALSE];
#define HideNavigationBar                       [self.navigationController setNavigationBarHidden:TRUE];

#define TouchHeightDefault                      44.0f
#define TouchHeightSmall                        32.0f

#define ViewX(v)                                v.frame.origin.x
#define ViewY(v)                                v.frame.origin.y
#define ViewWidth(v)                            v.bounds.size.width
#define ViewHeight(v)                           v.bounds.size.height
#define SelfViewWidth                           ViewX(self.view)
#define SelfViewHeight                          ViewY(self.view)
#define RectSetSize(f, w, h)                    CGRectMake(CGRectGetMinX(f), CGRectGetMinY(f), w, h)
#define RectSetOrigin(f, x, y)                  CGRectMake(x, y, CGRectGetWidth(f), CGRectGetHeight(f))

#define DispatchEvent(n, o)                     [[NSNotificationCenter defaultCenter] postNotificationName:n object:o]
#define DispatchEventWithUserInfo(n, o, u)      [[NSNotificationCenter defaultCenter] postNotificationName:n object:o userInfo:u]
#define AddObserver(id, s, n, o)                [[NSNotificationCenter defaultCenter] addObserver:id selector:s name:n object:o]

#define RGBA(r,g,b,a)                           [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]
#define RGB(r,g,b)                              RGBA(r, g, b, 1.0f)

#define LogBounds(view)                         NSLog(@"%@ bounds: %@", view, NSStringFromRect([view bounds]))
#define LogFrame(view)                          NSLog(@"%@ frame: %@", view, NSStringFromRect([view frame]))

#define SelfNavBar                              self.navigationController.navigationBar
#define SelfTabBar                              self.tabBarController.tabBar

#endif
