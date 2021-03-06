//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FAUtility : NSObject
{
}

+ (_Bool)isTimInstalled;
+ (void)logReport:(id)arg1;
+ (void)FALogId:(long long)arg1 level:(int)arg2 moduleName:(id)arg3 info:(id)arg4;
+ (void)FALogModel:(id)arg1 level:(int)arg2 moduleName:(id)arg3 info:(id)arg4;
+ (id)getFitMemoryImageFromUImage:(id)arg1 data:(id)arg2;
+ (id)getFitMemoryImageFromAsset:(id)arg1;
+ (id)getFitMemoryImageFromPath:(id)arg1;
+ (_Bool)isMemTooLowToScaleImage:(struct CGImage *)arg1;
+ (_Bool)checkOfflineVideoSendUnSuccess:(id)arg1;
+ (_Bool)isFlowAvailablewithSize:(unsigned long long)arg1 fileModel:(id)arg2 tag:(long long)arg3 message:(id)arg4 object:(id)arg5 delegate:(id)arg6;
+ (_Bool)checkNetWork;
+ (_Bool)isSysAlbumPermissioned;
+ (id)customAuthenticationChallenge:(struct __SecTrust *)arg1 domain:(id)arg2;
+ (_Bool)isSvrNotExistErrCode:(int)arg1;
+ (unsigned int)calcBlockSizeByFileSize:(unsigned long long)arg1;
+ (id)getFAModelFromMessages:(id)arg1;
+ (id)getAIOFileModel:(id)arg1;
+ (id)getTVVideoTmpDownloadPath:(id)arg1;
+ (id)getVideoCachePath;
+ (void)asyncGeneratePicSize:(id)arg1 callBack:(CDUnknownBlockType)arg2;
+ (int)getFileMsgMediaType:(id)arg1;
+ (_Bool)isFileMsgVideoBubble:(id)arg1;
+ (_Bool)isFileMsgImageBubble:(id)arg1;
+ (id)GetGroupClientWording:(int)arg1;
+ (id)generateUnifiedDownId:(id)arg1 path:(id)arg2;
+ (_Bool)DataReportLocalOpenWithSize:(double)arg1 success:(_Bool)arg2 failCode:(int)arg3 errorDisc:(id)arg4;
+ (_Bool)DataReportOpKey:(id)arg1 opName:(id)arg2 opEnter:(id)arg3 opResult:(id)arg4 model:(id)arg5;
+ (_Bool)DataReportTValue:(id)arg1 reserve1:(id)arg2 reserve2:(id)arg3;
+ (int)getVideoFileType:(id)arg1;
+ (_Bool)isOther:(id)arg1;
+ (_Bool)isVideo:(id)arg1;
+ (_Bool)isAudio:(id)arg1;
+ (_Bool)isDoc:(id)arg1;
+ (_Bool)isImage:(id)arg1;
+ (_Bool)isOtherModel:(id)arg1;
+ (_Bool)isVideoModel:(id)arg1;
+ (_Bool)isAudioModel:(id)arg1;
+ (_Bool)isDocModel:(id)arg1;
+ (_Bool)isImageModel:(id)arg1;
+ (id)nameofFile:(id)arg1;
+ (unsigned long long)twoMonthAgoStart;
+ (unsigned long long)oneMonthAgoStart;
+ (unsigned long long)twoWeekAgoStart;
+ (unsigned long long)oneWeekAgoStart;
+ (unsigned long long)yesterdayStart;
+ (unsigned long long)todayStart;
+ (id)creatMessageModel:(id)arg1 toTraget:(id)arg2;
+ (int)GetFARelationType:(int)arg1;
+ (_Bool)setJobIDToQQMessageModel:(id)arg1 JobID:(unsigned long long)arg2;
+ (id)getFAModelFromQQMessageModelByUniSeq:(id)arg1;
+ (unsigned long long)parseJobIDFromQQMessageModelContent:(id)arg1;
+ (unsigned long long)getJobIDFromQQMessageModel:(id)arg1;
+ (id)getFileUuidFromQQMessageModel:(id)arg1;
+ (id)getTempSessionSigByUin:(unsigned long long)arg1 relationType:(int)arg2;
+ (void)FALog:(id)arg1 ModuleName:(id)arg2 isError:(_Bool)arg3 extraInfo:(id)arg4;
+ (id)getOriginUrl:(id)arg1;
+ (id)getProxyUrl:(id)arg1 proxyIP:(id)arg2 proxyPort:(int)arg3;
+ (id)convertIP2String:(unsigned int)arg1 port:(unsigned short)arg2;
+ (_Bool)moveFile:(id)arg1 Des:(id)arg2 errMsg:(id *)arg3;
+ (id)getFormatedTimeStr:(unsigned long long)arg1;
+ (unsigned long long)getFileSize:(id)arg1;
+ (id)getFileIconByType:(int)arg1;
+ (id)getFileIconPathByType:(int)arg1;
+ (id)getFileSizeString:(unsigned long long)arg1;
+ (id)getstrPeerNickByUin:(id)arg1;
+ (id)stringToBin:(id)arg1;
+ (id)strToBin:(const char *)arg1 length:(int)arg2;
+ (id)hexToString:(id)arg1;
+ (id)hexToString:(const char *)arg1 Length:(int)arg2;
+ (id)getVisibleString:(id)arg1;
+ (id)getSave2WYErrMsg:(int)arg1;
+ (id)calculateStringMD5:(id)arg1;
+ (id)calculateFileSHA3:(id)arg1;
+ (id)calculateFileSHA:(id)arg1;
+ (id)calculateFileOldVersionCompatibleMD5:(id)arg1;
+ (id)calculateFileMD5:(id)arg1;
+ (id)getFileSuffix:(id)arg1;
+ (id)getThumbnailSaveDirectory;
+ (_Bool)isFileExistAtFileSaveDirectory:(id)arg1;
+ (id)getAvailableFileSavePath:(id)arg1 tmpDirectory:(_Bool)arg2;
+ (id)getAvailableFileSavePath:(id)arg1;
+ (id)getFileOriginalSavePath:(id)arg1;
+ (id)getFileSaveTmpDirectory;
+ (id)getFileSaveDirectory;
+ (id)GetFileTypeName:(id)arg1;
+ (unsigned long long)getFreeDiskSpaceInBytes;
+ (_Bool)isUseProxyHttpStrategy;
+ (unsigned long long)currentServerTime;
+ (_Bool)isFileTransferNetworkError:(int)arg1;
+ (_Bool)isNetworkReady;
+ (unsigned long long)generateFileSizeID:(unsigned long long)arg1;
+ (unsigned long long)generateRandomUINT64;
+ (unsigned long long)generateUniMsgSeq:(unsigned int)arg1 msgTime:(unsigned int)arg2 msgRandom:(unsigned int)arg3 msgType:(int)arg4;
+ (unsigned long long)generateJobID;

@end

