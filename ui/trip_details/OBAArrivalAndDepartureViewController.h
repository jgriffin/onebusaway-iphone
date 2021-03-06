#import "OBARequestDrivenTableViewController.h"
#import "OBAArrivalAndDepartureV2.h"
#import "OBAArrivalAndDepartureInstanceRef.h"
#import "OBAArrivalEntryTableViewCellFactory.h"

NS_ASSUME_NONNULL_BEGIN

@interface OBAArrivalAndDepartureViewController : OBARequestDrivenTableViewController 

- (instancetype)initWithArrivalAndDeparture:(OBAArrivalAndDepartureV2*)arrivalAndDeparture;

@end

NS_ASSUME_NONNULL_END