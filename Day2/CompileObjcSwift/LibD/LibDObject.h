#import "Foundation/Foundation.h"
#import "LibC/LibC-Swift.h"
@import LibB;

@interface LibDObject : NSObject

@property(nonatomic, assign) LibCEnumeration example;

@property(nonatomic, assign) LibBClass *example2;

@end
