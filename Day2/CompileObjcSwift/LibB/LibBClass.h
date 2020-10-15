#import <Foundation/Foundation.h>
@class LibAClass;

@interface LibBClass : NSObject

- (void)doSomethingThatUsesLibA:(LibAClass*)instance;

@end
