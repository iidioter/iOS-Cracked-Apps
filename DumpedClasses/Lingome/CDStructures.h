//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AQCallbackStruct {
    struct AudioStreamBasicDescription mDataFormat;
    struct OpaqueAudioQueue *queue;
    struct AudioQueueBuffer *mBuffers[3];
    struct OpaqueAudioFileID *outputFile;
    unsigned int frameSize;
    long long recPtr;
    int run;
};

struct AudioQueueBuffer {
    unsigned int _field1;
    void *_field2;
    unsigned int _field3;
    void *_field4;
    unsigned int _field5;
    struct AudioStreamPacketDescription *_field6;
    unsigned int _field7;
};

struct AudioStreamBasicDescription {
    double mSampleRate;
    unsigned int mFormatID;
    unsigned int mFormatFlags;
    unsigned int mBytesPerPacket;
    unsigned int mFramesPerPacket;
    unsigned int mBytesPerFrame;
    unsigned int mChannelsPerFrame;
    unsigned int mBitsPerChannel;
    unsigned int mReserved;
};

struct AudioStreamPacketDescription;

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CGrabInfo {
    long long _field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    long long _field3;
    unsigned int _field4;
    _Bool _field5;
};

struct CHongbaoInfo {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field1;
    long long _field2;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    int _field7;
    long long _field8;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field9;
    int _field10;
    int _field11;
    unsigned int _field12;
    long long _field13;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field14;
};

struct CLSMachOFile {
    int fd;
    unsigned long long mappedSize;
    void *mappedFile;
};

struct CLSMachOSlice {
    void *startAddress;
    int cputype;
    int cpusubtype;
};

struct CQaQuestion {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field3;
    long long _field4;
    unsigned int _field5;
    unsigned int _field6;
    _Bool _field7;
    _Bool _field8;
    long long _field9;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field10;
    struct list<CQaAnswer *, std::__1::allocator<CQaAnswer *>> _field11;
    unsigned char _field12;
};

struct CUserGrabInfo {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field1;
    long long _field2;
    unsigned int _field3;
    long long _field4;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field5;
    _Bool _field6;
};

struct CVoteAnwser {
    _Bool _field1;
    _Bool _field2;
    unsigned int _field3;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field4;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field5;
    struct vector<long long, std::__1::allocator<long long>> _field6;
};

struct CVoteGroup {
    _Bool _field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
    long long _field5;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field6;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field7;
    struct vector<CVoteQuestion, std::__1::allocator<CVoteQuestion>> _field8;
    struct vector<long long, std::__1::allocator<long long>> _field9;
};

struct CVoteQuestion {
    unsigned int _field1;
    unsigned int _field2;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field3;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field4;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field5;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field6;
    struct vector<CVoteAnwser, std::__1::allocator<CVoteAnwser>> _field7;
    struct vector<long long, std::__1::allocator<long long>> _field8;
};

struct CVoteResultItem {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field3;
};

struct DDListNode {
    void *_field1;
    struct DDListNode *_field2;
    struct DDListNode *_field3;
};

struct GSAudioEvent {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
};

struct GSChatEvent {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
};

struct GSDesktopShareEvent {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
    id _field3;
};

struct GSDocEvent {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
    id _field3;
};

struct GSDocSwfEvent {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
};

struct GSHongbaoEvent {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
};

struct GSInvestigationEvent {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
};

struct GSLodEvent {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
};

struct GSQaEvent {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
};

struct GSRoomEvent {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
};

struct GSVideoEvent {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
    id _field3;
    id _field4;
};

struct ICMPHeader {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned short _field4;
    unsigned short _field5;
};

struct IIOSAudioEngineSink {
    CDUnknownFunctionPointerType *_field1;
};

struct IRoutine {
    CDUnknownFunctionPointerType *_field1;
};

struct IVideoDataSink {
    CDUnknownFunctionPointerType *_field1;
};

struct LiveodItem {
    int _field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field3;
    int _field4;
    unsigned int _field5;
    unsigned int _field6;
};

struct OpaqueAudioFileID;

struct OpaqueAudioQueue;

struct RtAnnoBase {
    CDUnknownFunctionPointerType *_field1;
    long long _field2;
    int _field3;
    unsigned int _field4;
    unsigned int _field5;
    long long _field6;
};

struct RtAnnoCircle {
    CDUnknownFunctionPointerType *_field1;
    long long _field2;
    int _field3;
    unsigned int _field4;
    unsigned int _field5;
    long long _field6;
    struct tagRECT _field7;
    unsigned int _field8;
    unsigned char _field9;
};

struct RtAnnoCleaner {
    CDUnknownFunctionPointerType *_field1;
    long long _field2;
    int _field3;
    unsigned int _field4;
    unsigned int _field5;
    long long _field6;
    long long _field7;
};

struct RtAnnoFreepen {
    CDUnknownFunctionPointerType *_field1;
    long long _field2;
    int _field3;
    unsigned int _field4;
    unsigned int _field5;
    long long _field6;
    struct vector<tagPOINT, std::__1::allocator<tagPOINT>> _field7;
    unsigned int _field8;
    unsigned char _field9;
    _Bool _field10;
};

struct RtAnnoFreepenEx {
    CDUnknownFunctionPointerType *_field1;
    long long _field2;
    int _field3;
    unsigned int _field4;
    unsigned int _field5;
    long long _field6;
    struct vector<tagPOINT, std::__1::allocator<tagPOINT>> _field7;
    unsigned int _field8;
    unsigned char _field9;
    _Bool _field10;
    unsigned char _field11;
};

struct RtAnnoLine {
    CDUnknownFunctionPointerType *_field1;
    long long _field2;
    int _field3;
    unsigned int _field4;
    unsigned int _field5;
    long long _field6;
    struct tagRECT _field7;
    unsigned int _field8;
    unsigned char _field9;
};

struct RtAnnoLineEx {
    CDUnknownFunctionPointerType *_field1;
    long long _field2;
    int _field3;
    unsigned int _field4;
    unsigned int _field5;
    long long _field6;
    struct tagRECT _field7;
    unsigned int _field8;
    unsigned char _field9;
    unsigned char _field10;
};

struct RtAnnoPointer {
    CDUnknownFunctionPointerType *_field1;
    long long _field2;
    int _field3;
    unsigned int _field4;
    unsigned int _field5;
    long long _field6;
    struct tagPOINT _field7;
};

struct RtAnnoPointerEx {
    CDUnknownFunctionPointerType *_field1;
    long long _field2;
    int _field3;
    unsigned int _field4;
    unsigned int _field5;
    long long _field6;
    struct tagPOINT _field7;
    unsigned char _field8;
};

struct RtAnnoRect {
    CDUnknownFunctionPointerType *_field1;
    long long _field2;
    int _field3;
    unsigned int _field4;
    unsigned int _field5;
    long long _field6;
    struct tagRECT _field7;
    unsigned int _field8;
    unsigned char _field9;
};

struct RtAnnoText {
    CDUnknownFunctionPointerType *_field1;
    long long _field2;
    int _field3;
    unsigned int _field4;
    unsigned int _field5;
    long long _field6;
    unsigned int _field7;
    unsigned char _field8;
    struct tagRECT _field9;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field10;
};

struct RtDocument {
    CDUnknownFunctionPointerType *_field1;
    struct vector<RtPage *, std::__1::allocator<RtPage *>> _field2;
    unsigned int _field3;
    int _field4;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field5;
    long long _field6;
    unsigned char _field7;
    int _field8;
};

struct RtPage {
    CDUnknownFunctionPointerType *_field1;
    unsigned int _field2;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field3;
    char _field4;
    short _field5;
    short _field6;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field7;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field8;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field9;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field10;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field11;
    int _field12;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field13;
    _Bool _field14;
    struct list<RtAnnoBase *, std::__1::allocator<RtAnnoBase *>> _field15;
};

struct STATE {
    unsigned char _field1;
};

struct SwfPlayerBase {
    CDUnknownFunctionPointerType *_field1;
};

struct UIEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct UserInfo {
    long long _field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    int _field3;
    long long _field4;
    unsigned int _field5;
    int _field6;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field7;
    long long _field8;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __list_node<CQaAnswer *, void *>;

struct __list_node<RtAnnoBase *, void *>;

struct __sbuf {
    char *_field1;
    int _field2;
};

struct _xmlAttr {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlAttr *_field7;
    struct _xmlAttr *_field8;
    struct _xmlDoc *_field9;
    struct _xmlNs *_field10;
    int _field11;
    void *_field12;
};

struct _xmlDict;

struct _xmlDoc {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlNode *_field7;
    struct _xmlNode *_field8;
    struct _xmlDoc *_field9;
    int _field10;
    int _field11;
    struct _xmlDtd *_field12;
    struct _xmlDtd *_field13;
    struct _xmlNs *_field14;
    char *_field15;
    char *_field16;
    void *_field17;
    void *_field18;
    char *_field19;
    int _field20;
    struct _xmlDict *_field21;
    void *_field22;
    int _field23;
    int _field24;
};

struct _xmlDtd;

struct _xmlHashTable;

struct _xmlKind {
    void *_field1;
    int _field2;
};

struct _xmlNode {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlNode *_field7;
    struct _xmlNode *_field8;
    struct _xmlDoc *_field9;
    struct _xmlNs *_field10;
    char *_field11;
    struct _xmlAttr *_field12;
    struct _xmlNs *_field13;
    void *_field14;
    unsigned short _field15;
    unsigned short _field16;
};

struct _xmlNs {
    struct _xmlNs *_field1;
    int _field2;
    char *_field3;
    char *_field4;
    void *_field5;
    struct _xmlDoc *_field6;
};

struct _xmlParserInput;

struct _xmlParserNodeInfo;

struct _xmlStd {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlStd *_field7;
    struct _xmlStd *_field8;
    struct _xmlDoc *_field9;
};

struct _xmlValidState;

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    char *_field1;
                    unsigned long long _field2;
                    unsigned long long _field3;
                } _field1;
                struct __short {
                    char _field1[23];
                    struct {
                        unsigned char _field1;
                    } _field2;
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
};

struct in6_addr {
    union {
        unsigned char _field1[16];
        unsigned short _field2[8];
        unsigned int _field3[4];
    } _field1;
};

struct in_addr {
    unsigned int _field1;
};

struct internal_state;

struct list<CQaAnswer *, std::__1::allocator<CQaAnswer *>> {
    struct __list_node_base<CQaAnswer *, void *> {
        struct __list_node<CQaAnswer *, void *> *_field1;
        struct __list_node<CQaAnswer *, void *> *_field2;
    } _field1;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<CQaAnswer *, void *>>> {
        unsigned long long _field1;
    } _field2;
};

struct list<RtAnnoBase *, std::__1::allocator<RtAnnoBase *>> {
    struct __list_node_base<RtAnnoBase *, void *> {
        struct __list_node<RtAnnoBase *, void *> *_field1;
        struct __list_node<RtAnnoBase *, void *> *_field2;
    } _field1;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<RtAnnoBase *, void *>>> {
        unsigned long long _field1;
    } _field2;
};

struct sockaddr {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[14];
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct sockaddr_in6 {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned int _field4;
    struct in6_addr _field5;
    unsigned int _field6;
};

struct tagPOINT {
    int _field1;
    int _field2;
};

struct tagRECT {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
};

struct vector<CVoteAnwser, std::__1::allocator<CVoteAnwser>> {
    struct CVoteAnwser *_field1;
    struct CVoteAnwser *_field2;
    struct __compressed_pair<CVoteAnwser *, std::__1::allocator<CVoteAnwser>> {
        struct CVoteAnwser *_field1;
    } _field3;
};

struct vector<CVoteQuestion, std::__1::allocator<CVoteQuestion>> {
    struct CVoteQuestion *_field1;
    struct CVoteQuestion *_field2;
    struct __compressed_pair<CVoteQuestion *, std::__1::allocator<CVoteQuestion>> {
        struct CVoteQuestion *_field1;
    } _field3;
};

struct vector<RtPage *, std::__1::allocator<RtPage *>> {
    struct RtPage **_field1;
    struct RtPage **_field2;
    struct __compressed_pair<RtPage **, std::__1::allocator<RtPage *>> {
        struct RtPage **_field1;
    } _field3;
};

struct vector<long long, std::__1::allocator<long long>> {
    long long *_field1;
    long long *_field2;
    struct __compressed_pair<long long *, std::__1::allocator<long long>> {
        long long *_field1;
    } _field3;
};

struct vector<tagPOINT, std::__1::allocator<tagPOINT>> {
    struct tagPOINT *_field1;
    struct tagPOINT *_field2;
    struct __compressed_pair<tagPOINT *, std::__1::allocator<tagPOINT>> {
        struct tagPOINT *_field1;
    } _field3;
};

struct z_stream_s {
    char *next_in;
    unsigned int avail_in;
    unsigned long long total_in;
    char *next_out;
    unsigned int avail_out;
    unsigned long long total_out;
    char *msg;
    struct internal_state *state;
    CDUnknownFunctionPointerType zalloc;
    CDUnknownFunctionPointerType zfree;
    void *opaque;
    int data_type;
    unsigned long long adler;
    unsigned long long reserved;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int major;
    unsigned int minor;
    unsigned int bugfix;
} CDStruct_e24ffa00;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    char *_field1;
    char *_field2;
    unsigned int _field3;
    unsigned int _field4;
} CDStruct_4355734a;

typedef struct {
    char *_field1;
    void *_field2;
    _Bool _field3;
    void *_field4;
    char *_field5;
    char *_field6;
    char *_field7;
    char *_field8;
    char *_field9;
    unsigned int _field10;
    _Bool _field11;
    _Bool _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    unsigned int _field16;
} CDStruct_1e2a2a70;

typedef struct {
    void *_field1;
    unsigned long long _field2;
} CDStruct_6c7289c3;

typedef struct {
    long long _field1;
    int _field2;
    unsigned int _field3;
    long long _field4;
} CDStruct_198678f7;

typedef struct {
    long long _field1;
    int _field2;
} CDStruct_87dc826d;

typedef struct {
    char _field1[33];
    _Bool _field2;
    CDStruct_e24ffa00 _field3;
    CDStruct_e24ffa00 _field4;
    struct {
        void *_field1;
        unsigned long long _field2;
        void *_field3;
        void *_field4;
        void *_field5;
    } _field5;
    struct CLSMachOSlice _field6;
    long long _field7;
} CDStruct_fad71a87;

