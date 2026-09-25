//
//  RDSystemInformation.h
//  Amplitude
//
//  Copy of the MAC address lookup from RDSystemInformation in ReaddleLib, which Amplitude cannot depend on.
//

#import <Foundation/Foundation.h>

#if TARGET_OS_OSX

// MAC address of the primary network interface in the "xx:xx:xx:xx:xx:xx" format, or an empty string on failure
NSString * _Nonnull AMPGetMACAddressString(void);

#endif
