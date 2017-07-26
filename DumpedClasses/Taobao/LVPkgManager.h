//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LVPkgManager : NSObject
{
}

+ (void)clearCachesPath;
+ (id)gzipUnpack:(id)arg1;
+ (id)readLuaFile:(id)arg1 rsa:(id)arg2;
+ (long long)unpackageData:(id)arg1 packageName:(id)arg2 withInfo:(id)arg3 callback:(CDUnknownBlockType)arg4;
+ (void)doDownloadPackage:(id)arg1 withInfo:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (_Bool)sha256Check:(id)arg1 ret:(id)arg2;
+ (long long)downloadPackage:(id)arg1 withInfo:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (long long)downloadPackage:(id)arg1 withInfo:(id)arg2;
+ (int)compareDownloadUrlOfPackage:(id)arg1 withServerInfo:(id)arg2;
+ (id)signfileNameOfOriginFile:(id)arg1;
+ (int)unpackageData:(id)arg1 packageName:(id)arg2;
+ (_Bool)checkUpdateWithNewTS:(id)arg1 oldTS:(id)arg2;
+ (int)unpackageFile:(id)arg1 packageName:(id)arg2;
+ (_Bool)setPackage:(id)arg1 timestamp:(id)arg2;
+ (id)timestampOfPackage:(id)arg1;
+ (_Bool)setPackage:(id)arg1 downloadUrl:(id)arg2;
+ (id)downloadUrlOfPackage:(id)arg1;
+ (_Bool)deleteFileOfPackageTimestamp:(id)arg1;
+ (_Bool)deleteFileOfPackageDownloadUrl:(id)arg1;
+ (id)filePathOfPackageTimestamp:(id)arg1;
+ (id)filePathOfPackageDownloadUrl:(id)arg1;
+ (id)readFileFromPackage:(id)arg1 fileName:(id)arg2;
+ (_Bool)writeFile:(id)arg1 packageName:(id)arg2 fileName:(id)arg3;
+ (id)pathForFileName:(id)arg1 package:(id)arg2;
+ (id)rootDirectoryOfPackage:(id)arg1;

@end
