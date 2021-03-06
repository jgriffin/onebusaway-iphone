@import Foundation;

typedef enum {
    OBASortTripsByDepartureTimeV2=0,
    OBASortTripsByRouteNameV2=1
} OBASortTripsByTypeV2;

NS_ASSUME_NONNULL_BEGIN

@interface OBAStopPreferencesV2 : NSObject <NSCoding> {
    OBASortTripsByTypeV2 _sortTripsByType;
    NSMutableSet * _routeFilter;
}
@property (nonatomic) OBASortTripsByTypeV2 sortTripsByType;
@property (nonatomic,readonly) NSSet * routeFilter;

- (id) initWithStopPreferences:(OBAStopPreferencesV2*)preferences;
- (BOOL) isRouteIdEnabled:(NSString*) routeId;
- (void) setEnabled:(BOOL)isEnabled forRouteId:(NSString*)routeId;

@end

NS_ASSUME_NONNULL_END