#import "LibDObject.h"

@implementation LibDObject

- (void)someMethod {
	LibCClass *obj = [[LibCClass alloc] init];

	NSLog(@"%@", obj);
}

@end
