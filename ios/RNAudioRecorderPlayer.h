#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>

NS_INLINE NSException * _Nullable tryBlock(void(^_Nonnull tryBlock)(void)) {
    @try {
        tryBlock();
    }
    @catch (NSException *exception) {
        return exception;
    }
    return nil;
}

@interface RNAudioRecorderPlayer : RCTEventEmitter <RCTBridgeModule, AVAudioPlayerDelegate>
- (void)audioPlayerDidFinishPlaying:(AVAudioPlayer *)player
        successfully:(BOOL)flag;
- (void)updateRecorderProgress:(NSTimer*) timer;
@end
