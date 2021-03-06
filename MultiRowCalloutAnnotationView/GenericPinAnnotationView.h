//
//  GenericPinAnnotationView.h
//  Created by Gregory Combs on 11/30/11.
//
//  based on work at https://github.com/grgcombs/MultiRowCalloutAnnotationView
//
//  This work is licensed under the Creative Commons Attribution 3.0 Unported License. 
//  To view a copy of this license, visit http://creativecommons.org/licenses/by/3.0/
//  or send a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
//
//

#import <MapKit/MapKit.h>

@interface GenericPinAnnotationView : MKPinAnnotationView
+ (GenericPinAnnotationView*)pinViewWithAnnotation:(NSObject <MKAnnotation> *)annotation;
@property (nonatomic,assign) BOOL preventSelectionChange;
@end

extern NSString* const GenericPinReuseIdentifier;