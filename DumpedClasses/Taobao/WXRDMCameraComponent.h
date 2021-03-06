//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXRDMBaseEntityComponent.h"

@class EZCamera, EZEntity;

@interface WXRDMCameraComponent : WXRDMBaseEntityComponent
{
    EZEntity *_cameraEntity;
    EZCamera *_camera;
}

+ (id)wx_export_method_18;
@property(retain, nonatomic) EZCamera *camera; // @synthesize camera=_camera;
@property(retain, nonatomic) EZEntity *cameraEntity; // @synthesize cameraEntity=_cameraEntity;
- (void).cxx_destruct;
- (void)clearEZObjects;
- (void)removeFromSuperview;
- (void)setProjection:(id)arg1;
- (void)addSubEntity;
- (void)updateAttributes:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)initAttributes;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

@end

