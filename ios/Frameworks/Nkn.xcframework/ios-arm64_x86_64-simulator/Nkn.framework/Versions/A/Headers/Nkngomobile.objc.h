// Objective-C API for talking to github.com/nknorg/nkngomobile Go package.
//   gobind -lang=objc github.com/nknorg/nkngomobile
//
// File is generated by gobind. Do not edit.

#ifndef __Nkngomobile_H__
#define __Nkngomobile_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"


@class NkngomobileResolverArray;
@class NkngomobileStringArray;
@class NkngomobileStringMap;
@protocol NkngomobileResolver;
@class NkngomobileResolver;
@protocol NkngomobileStringMapFunc;
@class NkngomobileStringMapFunc;

@protocol NkngomobileResolver <NSObject>
- (NSString* _Nonnull)resolve:(NSString* _Nullable)address error:(NSError* _Nullable* _Nullable)error;
@end

@protocol NkngomobileStringMapFunc <NSObject>
- (BOOL)onVisit:(NSString* _Nullable)p0 p1:(NSString* _Nullable)p1;
@end

/**
 * ResolverArray is a wrapper type for gomobile compatibility. ResolverArray is not
protected by lock and should not be read and write at the same time.
 */
@interface NkngomobileResolverArray : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
// skipped constructor ResolverArray.NewResolverArray with unsupported parameter or return types

/**
 * NewResolverArrayFromResolver creates a ResolverArray from a single string input.
The input string will be split to string array by whitespace.
 */
- (nullable instancetype)initFromResolver:(id<NkngomobileResolver> _Nullable)e;
/**
 * Append adds an element to the string array.
 */
- (void)append:(id<NkngomobileResolver> _Nullable)a;
// skipped method ResolverArray.Elems with unsupported parameter or return types

/**
 * Get gets an element to the string array.
 */
- (id<NkngomobileResolver> _Nullable)get:(long)i;
/**
 * Len returns the string array length.
 */
- (long)len;
/**
 * RandomElem returns a randome element from the string array. The random number
is generated using math/rand and thus not cryptographically secure.
 */
- (id<NkngomobileResolver> _Nullable)randomElem;
@end

/**
 * StringArray is a wrapper type for gomobile compatibility. StringArray is not
protected by lock and should not be read and write at the same time.
 */
@interface NkngomobileStringArray : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
// skipped constructor StringArray.NewStringArray with unsupported parameter or return types

/**
 * NewStringArrayFromString creates a StringArray from a single string input.
The input string will be split to string array by whitespace.
 */
- (nullable instancetype)initFromString:(NSString* _Nullable)s;
/**
 * Append adds an element to the string array.
 */
- (void)append:(NSString* _Nullable)s;
// skipped method StringArray.Elems with unsupported parameter or return types

/**
 * Get gets an element to the string array.
 */
- (NSString* _Nonnull)get:(long)i;
- (NSString* _Nonnull)getJson;
/**
 * Join returns a single string by concatenates the elements
 */
- (NSString* _Nonnull)join:(NSString* _Nullable)separator;
/**
 * Len returns the string array length.
 */
- (long)len;
/**
 * RandomElem returns a randome element from the string array. The random number
is generated using math/rand and thus not cryptographically secure.
 */
- (NSString* _Nonnull)randomElem;
@end

/**
 * StringMap is a wrapper type for gomobile compatibility. StringMap is not
protected by lock and should not be read and write at the same time.
 */
@interface NkngomobileStringMap : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
// skipped constructor StringMap.NewStringMap with unsupported parameter or return types

/**
 * NewStringMapWithSize creates an empty StringMap with a given size.
 */
- (nullable instancetype)initWithSize:(long)size;
/**
 * Delete deletes a key and its value from the map.
 */
- (void)delete:(NSString* _Nullable)key;
/**
 * Get returns the value of a key, or ErrKeyNotInMap if key does not exist.
 */
- (NSString* _Nonnull)get:(NSString* _Nullable)key error:(NSError* _Nullable* _Nullable)error;
/**
 * Len returns the number of elements in the map.
 */
- (long)len;
// skipped method StringMap.Map with unsupported parameter or return types

/**
 * Range iterates over the StringMap and call the OnVisit callback function with
each element in the map. If the OnVisit function returns false, the iterator
will stop and no longer visit the rest elements.
 */
- (void)range:(id<NkngomobileStringMapFunc> _Nullable)cb;
/**
 * Set sets the value of a key to a value.
 */
- (void)set:(NSString* _Nullable)key value:(NSString* _Nullable)value;
@end

@interface Nkngomobile : NSObject
+ (NSError* _Nullable) errInvalidIP;
+ (void) setErrInvalidIP:(NSError* _Nullable)v;

@end

FOUNDATION_EXPORT NkngomobileStringArray* _Nullable NkngomobileExcludeRoute(NkngomobileStringArray* _Nullable ipArray);

// skipped function IpRangeToCIDR with unsupported parameter or return types


// skipped function IpToUint32 with unsupported parameter or return types


// skipped function NewResolverArray with unsupported parameter or return types


/**
 * NewResolverArrayFromResolver creates a ResolverArray from a single string input.
The input string will be split to string array by whitespace.
 */
FOUNDATION_EXPORT NkngomobileResolverArray* _Nullable NkngomobileNewResolverArrayFromResolver(id<NkngomobileResolver> _Nullable e);

// skipped function NewStringArray with unsupported parameter or return types


/**
 * NewStringArrayFromString creates a StringArray from a single string input.
The input string will be split to string array by whitespace.
 */
FOUNDATION_EXPORT NkngomobileStringArray* _Nullable NkngomobileNewStringArrayFromString(NSString* _Nullable s);

// skipped function NewStringMap with unsupported parameter or return types


/**
 * NewStringMapWithSize creates an empty StringMap with a given size.
 */
FOUNDATION_EXPORT NkngomobileStringMap* _Nullable NkngomobileNewStringMapWithSize(long size);

// skipped function Uint32ToIP with unsupported parameter or return types


@class NkngomobileResolver;

@class NkngomobileStringMapFunc;

@interface NkngomobileResolver : NSObject <goSeqRefInterface, NkngomobileResolver> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (NSString* _Nonnull)resolve:(NSString* _Nullable)address error:(NSError* _Nullable* _Nullable)error;
@end

/**
 * StringMapFunc is a wrapper type for gomobile compatibility.
 */
@interface NkngomobileStringMapFunc : NSObject <goSeqRefInterface, NkngomobileStringMapFunc> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (BOOL)onVisit:(NSString* _Nullable)p0 p1:(NSString* _Nullable)p1;
@end

#endif