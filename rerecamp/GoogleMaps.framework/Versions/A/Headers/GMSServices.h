//
//  GMSServices.h
//  Google Maps SDK for iOS
//
//  Copyright 2012 Google Inc.
//
//  Usage of this SDK is subject to the Google Maps/Google Earth APIs Terms of
//  Service: https://developers.google.com/maps/terms
//

/** Service class for the Google Maps SDK for iOS. */
@interface GMSServices : NSObject

/**
 * Provides the shared instance of GMSServices for the Google Maps SDK for iOS,
 * creating it if nessecary. Classes such as GMSMapView and GMSPanoramaView will
 * hold this instance to provide their connection to Google.
 *
 * This is an opaque object. If your application often creates and destroys view
 * or service classes provided by the Google Maps SDK for iOS, it may be useful
 * to hold onto this object directly, as otherwise your connection to Google
 * may be restarted on a regular basis.
 *
 * This method will throw an exception if provideAPIKey: has not been called.
 */
+ (GMSServices *)sharedServices;

/**
 * Provides your API key to the Google Maps SDK for iOS.  This key is generated
 * for your application via the Google APIs Console, and is paired with your
 * application's bundle ID to identify it.  This should be called exactly once
 * by your application, e.g., in application: didFinishLaunchingWithOptions:.
 *
 * @return YES if the APIKey was successfully provided
 */
+ (BOOL)provideAPIKey:(NSString *)APIKey;

/**
 * Returns the open source software license information for Google Maps SDK for
 * iOS. This information must be made available within your application.
 */
+ (NSString *)openSourceLicenseInfo;

/**
 * Returns the version for this release of the Google Maps SDK for iOS.
 */
+ (NSString *)SDKVersion;

@end
