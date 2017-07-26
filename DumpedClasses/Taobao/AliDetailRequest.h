//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MtopExtRequestDelegate.h"
#import "NSURLConnectionDataDelegate.h"
#import "NSURLConnectionDelegate.h"

@class AliDetailApiUnit, AliDetailResponse, MtopExtRequest, NSDictionary, NSMutableData, NSMutableDictionary, NSString, NSURLRequest, NSURLSession;

@interface AliDetailRequest : NSObject <NSURLConnectionDataDelegate, NSURLConnectionDelegate, MtopExtRequestDelegate>
{
    NSDictionary *_responseDict;
    NSString *_responseData;
    id <AliDetailModelDelegate> _delegate;
    CDUnknownBlockType _performanceHandler;
    CDUnknownBlockType _userTrackHandler;
    CDUnknownBlockType _modelSuccessBlock;
    CDUnknownBlockType _modelFailureBlock;
    NSMutableDictionary *_exParams;
    NSString *_currentURLStr;
    AliDetailResponse *_responseModel;
    AliDetailApiUnit *_apiUnit;
    NSString *_itemId;
    NSURLRequest *_httpRequest;
    NSMutableData *_receiveByteData;
    NSURLSession *_urlSession;
    MtopExtRequest *_mtopRequest;
}

@property(retain, nonatomic) MtopExtRequest *mtopRequest; // @synthesize mtopRequest=_mtopRequest;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(retain, nonatomic) NSMutableData *receiveByteData; // @synthesize receiveByteData=_receiveByteData;
@property(retain, nonatomic) NSURLRequest *httpRequest; // @synthesize httpRequest=_httpRequest;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) AliDetailApiUnit *apiUnit; // @synthesize apiUnit=_apiUnit;
@property(retain, nonatomic) AliDetailResponse *responseModel; // @synthesize responseModel=_responseModel;
@property(retain, nonatomic) NSString *currentURLStr; // @synthesize currentURLStr=_currentURLStr;
@property(retain, nonatomic) NSMutableDictionary *exParams; // @synthesize exParams=_exParams;
@property(copy, nonatomic) CDUnknownBlockType modelFailureBlock; // @synthesize modelFailureBlock=_modelFailureBlock;
@property(copy, nonatomic) CDUnknownBlockType modelSuccessBlock; // @synthesize modelSuccessBlock=_modelSuccessBlock;
@property(copy, nonatomic) CDUnknownBlockType userTrackHandler; // @synthesize userTrackHandler=_userTrackHandler;
@property(copy, nonatomic) CDUnknownBlockType performanceHandler; // @synthesize performanceHandler=_performanceHandler;
@property(nonatomic) __weak id <AliDetailModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSDictionary *responseDict; // @synthesize responseDict=_responseDict;
- (void).cxx_destruct;
- (id)validityUrlWithSourceUrl:(id)arg1;
- (void)translateReceivedData;
- (id)getEncodingType:(id)arg1;
- (void)printResponseCode:(id)arg1;
- (void)executeHttpSuccessBlock;
- (void)succeed:(id)arg1;
- (void)failed:(id)arg1;
- (void)started:(id)arg1;
- (void)sendHTTPRequestWithURL:(id)arg1;
- (void)sendMtopRequest:(id)arg1;
- (void)executeFailBlock:(id)arg1;
- (void)executeSuccessBlock;
- (void)cancel;
- (void)requestWithApiUnit:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
