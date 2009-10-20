/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import <Foundation/NSObject.h>

@class NSString, AVCapture, PLPreviewView;
@protocol PLCameraControllerDelegate;

@interface PLCameraController : NSObject {
	AVCapture* _avCapture;
	PLPreviewView* _previewView;
	BOOL _isPreviewing;
	BOOL _isLocked;
	int _cameraMode;
	int _captureOrientation;
	int _focusCount;
	int _autofocusCount;
	unsigned _previousSimpleRemotePriority;
	id<PLCameraControllerDelegate> _delegate;
	double _startTime;
	double _maximumCaptureDuration;
	int _captureQuality;
	NSString* _lastLocationStr;
	struct {
		unsigned supportsVideo : 1;
		unsigned supportsAccurateStillCapture : 1;
		unsigned supportsFocus : 1;
		unsigned supportsExposure : 1;
		unsigned capturingVideo : 1;
		unsigned deferStopPreview : 1;
		unsigned deferStartVideoCapture : 1;
		unsigned inCall : 1;
		unsigned continuousAutofocusDuringCapture : 1;
		unsigned focusDisabled : 1;
		unsigned focusedAtPoint : 1;
		unsigned wasInterrupted : 1;
		unsigned resumePreviewing : 1;
		unsigned isReady : 1;
		unsigned didSetPreviewLayer : 1;
		unsigned didNotifyCaptureEnded : 1;
		unsigned dontShowFocus : 1;
		unsigned restartLocationAfterCapture : 1;
		unsigned didSetLocationData : 1;
		unsigned isChangingMode : 1;
		unsigned delegateModeDidChange : 1;
		unsigned delegateTookPicture : 1;
		unsigned delegateReadyStateChanged : 1;
		unsigned delegateVideoCaptureDidStart : 1;
		unsigned delegateVideoCaptureDidStop : 1;
		unsigned delegateFocusFinished : 1;
	} _cameraFlags;
}
+(id)sharedInstance;
+(CGAffineTransform)defaultPreviewViewTransform;
// inherited: -(id)init;
// inherited: -(void)dealloc;
-(void)_inCallStatusChanged:(BOOL)callStatusChanged;
-(BOOL)inCall;
-(void)_locationChanged;
-(void)_setIsReady;
-(BOOL)isReady;
-(BOOL)canCaptureVideo;
-(int)cameraMode;
-(void)_setCameraMode:(int)mode force:(BOOL)force;
-(void)setCameraMode:(int)mode;
-(void)_applicationSuspended;
-(void)_applicationResumed;
-(void)_tookPicture:(CGImageRef)picture jpegData:(CFDataRef)data imageProperties:(CFDictionaryRef)properties;
-(void)_tookPhoto:(id)photo;
-(void)_previewStarted:(id)started;
-(void)_previewStopped:(id)stopped;
-(void)_setVideoPreviewLayer;
-(BOOL)_setupCamera;
-(void)viewDidAppear;
-(void)_tearDownCamera;
-(void)setDelegate:(id)delegate;
-(id)delegate;
-(id)previewView;
-(void)startPreview;
-(void)_destroyAVCapture;
-(void)_stopPreview;
-(void)stopPreview;
-(void)resumePreview;
-(BOOL)supportsAccurateStillCapture;
-(void)capturePhoto:(BOOL)photo;
-(BOOL)isCapturingVideo;
-(void)_captureStarted:(id)started;
-(id)_createPreviewImage;
-(void*)_createPreviewIOSurface;
-(void)_captureCompleted:(id)completed;
-(void)_didStopCapture;
-(void)_wasInterrupted:(id)interrupted;
-(void)_interruptionEnded:(id)ended;
-(BOOL)canStartVideoCapture;
-(BOOL)startVideoCaptureAtPath:(id)path deviceOrientation:(int)orientation;
-(void)_stopVideoCaptureAndPausePreview:(id)preview;
-(void)stopVideoCaptureAndPausePreview:(BOOL)preview;
-(id)videoCapturePath;
-(void)_addMoreMetadataToVideo:(id)video;
-(BOOL)focusAtPoint:(CGPoint)point;
-(void)restartAutoFocus;
-(void)autofocus;
-(void)lockFocus;
-(BOOL)isFocusing;
-(void)setDontShowFocus:(BOOL)focus;
-(void)setFocusDisabled:(BOOL)disabled;
-(void)setVideoCaptureQuality:(int)quality;
-(void)setVideoCaptureMaximumDuration:(double)duration;
-(void)_commonFocusFinished;
-(void)_focusOperationFinished;
-(void)_autofocusOperationFinished;
-(void)_focusCompleted:(id)completed;
-(void)_focusWasCancelled:(id)cancelled;
-(void)_focusStarted:(id)started;
-(void)_focusHasChanged:(id)changed;
-(int)videoCaptureOrientation;
-(void)irisWillClose;
-(void)_serverDied:(id)died;
@end
