#import "LibBClass.h"
@import LibA;

@implementation LibBClass

- (void)doSomethingThatUsesLibA:(LibAClass*)instance {
	NSLog(@"LibBClass doSomethingThatUsesLibA");
}

@end
