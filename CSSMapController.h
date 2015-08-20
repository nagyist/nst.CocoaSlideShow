//
//  MapController.h
//  CocoaSlideShow
//
//  Created by Nicolas Seriot on 14.11.08.
//  Copyright 2008 Sen:te. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <MapKit/MapKit.h>

@class ImagesController;

extern NSString *const G_NORMAL_MAP;

@interface CSSMapController : NSObject {
	IBOutlet MKMapView *mapView;
	IBOutlet ImagesController *imagesController;
//	WebScriptObject *scriptObject;
	
	NSMutableSet *displayedImages;
}

- (void)clearMap;

- (NSArray *)mapStyles;

- (void)evaluateNewJavaScriptOnArrangedObjectsChange;
- (void)evaluateNewJavaScriptOnSelectedObjectsChange;

@end
