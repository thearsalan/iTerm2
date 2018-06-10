//
//  iTermTuple.h
//  iTerm2SharedARC
//
//  Created by George Nachman on 1/9/18.
//

#import <Foundation/Foundation.h>

@interface iTermTuple<T1, T2> : NSObject<NSCoding, NSCopying>

@property (nonatomic, strong) T1 firstObject;
@property (nonatomic, strong) T2 secondObject;
@property (nonatomic, readonly) id plistValue;

+ (instancetype)tupleWithObject:(T1)firstObject andObject:(T2)secondObject;
+ (instancetype)fromPlistValue:(id)plistValue;

@end

@interface iTermTriple<T1, T2, T3> : iTermTuple<NSCoding, NSCopying>

@property (nonatomic, strong) T3 thirdObject;

+ (instancetype)tupleWithObject:(T1)firstObject andObject:(T2)secondObject NS_UNAVAILABLE;
+ (instancetype)tripleWithObject:(T1)firstObject andObject:(T2)secondObject object:(T3)thirdObject;

@end
