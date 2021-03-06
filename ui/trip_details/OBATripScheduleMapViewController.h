#import "OBATripDetailsV2.h"
#import "OBATripInstanceRef.h"
#import "OBAProgressIndicatorView.h"

NS_ASSUME_NONNULL_BEGIN

@interface OBATripScheduleMapViewController : UIViewController <MKMapViewDelegate>

@property (nonatomic, strong) OBAProgressIndicatorView *progressView;
@property (nonatomic, strong) OBATripInstanceRef *tripInstance;
@property (nonatomic, strong) OBATripDetailsV2 *tripDetails;
@property (nonatomic, strong) NSString *currentStopId;

- (void)showList:(id)source;

@end

NS_ASSUME_NONNULL_END