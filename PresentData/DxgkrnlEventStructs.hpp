/*
Copyright 2019 Intel Corporation

Permission is hereby granted, free of charge, to any person obtaining a copy of
this software and associated documentation files (the "Software"), to deal in
the Software without restriction, including without limitation the rights to
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
of the Software, and to permit persons to whom the Software is furnished to do
so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

// This file originally generated by etw_list
//     version:    39cbad322984eb15ebf4c422610241bcaf098e09
//     parameters: --show=all --output=c++ --event=Blit::Info --event=Flip::Info --event=FlipMultiPlaneOverlay::Info --event=HSyncDPCMultiPlane::Info --event=MMIOFlip::Info --event=MMIOFlipMultiPlaneOverlay::Info --event=Present::Info --event=PresentHistory::Start --event=PresentHistory::Info --event=PresentHistoryDetailed::Start --event=QueuePacket::Start --event=QueuePacket::Stop --event=VSyncDPC::Info --provider=*dxgkrnl

namespace Microsoft_Windows_DxgKrnl {

struct __declspec(uuid("{802ec45a-1e99-4b83-9920-87c98277ba9d}")) GUID_STRUCT;
static const auto GUID = __uuidof(GUID_STRUCT);

// Win7 GUID added manually:
namespace Win7 {
struct __declspec(uuid("{65cd4c8a-0848-4583-92a0-31c0fbaf00c0}")) GUID_STRUCT;
struct __declspec(uuid("{069f67f2-c380-4a65-8a61-071cd4a87275}")) BLT_GUID_STRUCT;
struct __declspec(uuid("{22412531-670b-4cd3-81d1-e709c154ae3d}")) FLIP_GUID_STRUCT;
struct __declspec(uuid("{c19f763a-c0c1-479d-9f74-22abfc3a5f0a}")) PRESENTHISTORY_GUID_STRUCT;
struct __declspec(uuid("{295e0d8e-51ec-43b8-9cc6-9f79331d27d6}")) QUEUEPACKET_GUID_STRUCT;
struct __declspec(uuid("{5ccf1378-6b2c-4c0f-bd56-8eeb9e4c5c77}")) VSYNCDPC_GUID_STRUCT;
struct __declspec(uuid("{547820fe-5666-4b41-93dc-6cfd5dea28cc}")) MMIOFLIP_GUID_STRUCT;
static const auto GUID                = __uuidof(GUID_STRUCT);
static const auto BLT_GUID            = __uuidof(BLT_GUID_STRUCT);
static const auto FLIP_GUID           = __uuidof(FLIP_GUID_STRUCT);
static const auto PRESENTHISTORY_GUID = __uuidof(PRESENTHISTORY_GUID_STRUCT);
static const auto QUEUEPACKET_GUID    = __uuidof(QUEUEPACKET_GUID_STRUCT);
static const auto VSYNCDPC_GUID       = __uuidof(VSYNCDPC_GUID_STRUCT);
static const auto MMIOFLIP_GUID       = __uuidof(MMIOFLIP_GUID_STRUCT);
}

enum class Keyword : uint64_t {
    Base                                  = 0x1,
    Profiler                              = 0x2,
    References                            = 0x4,
    ForceVsync                            = 0x8,
    Patch                                 = 0x10,
    Cdd                                   = 0x20,
    Resource                              = 0x40,
    Memory                                = 0x80,
    Dxgkrnl_StatusChangeNotify            = 0x100,
    DxgKrnl_Power                         = 0x200,
    DriverEvents                          = 0x400,
    LongHaul                              = 0x800,
    StablePower                           = 0x1000,
    DefaultOverride                       = 0x2000,
    HistoryBuffer                         = 0x4000,
    GPUScheduler                          = 0x8000,
    DxgKrnl                               = 0x10000,
    DxgKrnl_WDI                           = 0x20000,
    Miracast                              = 0x40000,
    IndirectSwapChain                     = 0x80000,
    GPUVA                                 = 0x100000,
    VidMmWorkerThread                     = 0x200000,
    Diagnostics                           = 0x400000,
    VirtualGpu                            = 0x800000,
    AdapterLock                           = 0x1000000,
    MixedReality                          = 0x2000000,
    HardwareSchedulingLog                 = 0x4000000,
    win_ResponseTime                      = 0x1000000000000,
    Microsoft_Windows_DxgKrnl_Diagnostic  = 0x8000000000000000,
    Microsoft_Windows_DxgKrnl_Performance = 0x4000000000000000,
    Microsoft_Windows_DxgKrnl_Power       = 0x2000000000000000,
    Microsoft_Windows_DxgKrnl_Contention  = 0x1000000000000000,
};

enum class Level : uint8_t {
    win_LogAlways     = 0x0,
    win_Informational = 0x4,
};

enum class Channel : uint8_t {
    Microsoft_Windows_DxgKrnl_Diagnostic  = 0x10,
    Microsoft_Windows_DxgKrnl_Performance = 0x11,
    Microsoft_Windows_DxgKrnl_Power       = 0x12,
    Microsoft_Windows_DxgKrnl_Contention  = 0x13,
};

// Event descriptors:
#define EVENT_DESCRIPTOR_DECL(name_, id_, version_, channel_, level_, opcode_, task_, keyword_) struct name_ { \
    static uint16_t const Id      = id_; \
    static uint8_t  const Version = version_; \
    static uint8_t  const Channel = channel_; \
    static uint8_t  const Level   = level_; \
    static uint8_t  const Opcode  = opcode_; \
    static uint16_t const Task    = task_; \
    static Keyword  const Keyword = (Keyword) keyword_; \
};

EVENT_DESCRIPTOR_DECL(Blit_Info                     , 0x00a6, 0x00, 0x11, 0x04, 0x00, 0x0067, 0x4000000000000001)
EVENT_DESCRIPTOR_DECL(Flip_Info                     , 0x00a8, 0x00, 0x11, 0x00, 0x00, 0x0003, 0x4000000000000001)
EVENT_DESCRIPTOR_DECL(FlipMultiPlaneOverlay_Info    , 0x00fc, 0x00, 0x11, 0x00, 0x00, 0x008f, 0x4000000000000001)
EVENT_DESCRIPTOR_DECL(HSyncDPCMultiPlane_Info       , 0x017e, 0x00, 0x11, 0x00, 0x00, 0x00e6, 0x4000000000000001)
EVENT_DESCRIPTOR_DECL(MMIOFlip_Info                 , 0x0074, 0x00, 0x11, 0x00, 0x00, 0x0011, 0x4000000000000001)
EVENT_DESCRIPTOR_DECL(MMIOFlipMultiPlaneOverlay_Info, 0x0103, 0x03, 0x11, 0x00, 0x00, 0x0090, 0x4000000000000001)
EVENT_DESCRIPTOR_DECL(Present_Info                  , 0x00b8, 0x00, 0x11, 0x00, 0x00, 0x006b, 0x4000000000000001)
EVENT_DESCRIPTOR_DECL(PresentHistory_Start          , 0x00ab, 0x00, 0x11, 0x00, 0x01, 0x0006, 0x4000000000000001)
EVENT_DESCRIPTOR_DECL(PresentHistory_Info           , 0x00ac, 0x00, 0x11, 0x00, 0x00, 0x0006, 0x4000000000000001)
EVENT_DESCRIPTOR_DECL(PresentHistoryDetailed_Start  , 0x00d7, 0x00, 0x11, 0x00, 0x01, 0x007e, 0x4000000000000001)
EVENT_DESCRIPTOR_DECL(QueuePacket_Start             , 0x00b2, 0x01, 0x11, 0x00, 0x01, 0x0009, 0x4000000000000001)
EVENT_DESCRIPTOR_DECL(QueuePacket_Stop              , 0x00b4, 0x01, 0x11, 0x00, 0x02, 0x0009, 0x4000000000000001)
EVENT_DESCRIPTOR_DECL(QueuePacket_Start_2           , 0x00f4, 0x01, 0x11, 0x00, 0x01, 0x0009, 0x4000000000000001)
EVENT_DESCRIPTOR_DECL(QueuePacket_Start_3           , 0x00f5, 0x02, 0x11, 0x00, 0x01, 0x0009, 0x4000000000000001)
EVENT_DESCRIPTOR_DECL(VSyncDPC_Info                 , 0x0011, 0x00, 0x11, 0x00, 0x00, 0x000b, 0x4000000000000001)

#undef EVENT_DESCRIPTOR_DECL

#pragma warning(push)
#pragma warning(disable: 4200) // nonstandard extension used: zero-sized array in struct

#pragma pack(push)
#pragma pack(1)

template<typename PointerT>
struct Blit_Info_Struct {
    PointerT    hwnd;
    PointerT    pDmaBuffer;
    uint64_t    PresentHistoryToken;
    PointerT    hSourceAllocation;
    PointerT    hDestAllocation;
    uint32_t    bSubmit;
    uint32_t    bRedirectedPresent;
    uint32_t    Flags;
    int32_t     Source_Left;
    int32_t     Source_Right;
    int32_t     Source_Top;
    int32_t     Source_Bottom;
    int32_t     Dest_Left;
    int32_t     Dest_Right;
    int32_t     Dest_Top;
    int32_t     Dest_Bottom;
    uint32_t    SubRectCount;
};

template<typename PointerT>
struct Flip_Info_Struct {
    PointerT    pDmaBuffer;
    uint32_t    VidPnSourceId;
    PointerT    FlipToAllocation;
    uint32_t    FlipInterval;
    uint32_t    FlipWithNoWait;
    uint32_t    MMIOFlip;
};

template<typename PointerT>
struct FlipMultiPlaneOverlay_Info_Struct {
    uint32_t    VidPnSourceId;
    uint32_t    LayerIndex;
    uint32_t    Enabled;
    PointerT    hAllocation;
    uint32_t    Flags;
    int32_t     SrcRect_left;
    int32_t     SrcRect_right;
    int32_t     SrcRect_top;
    int32_t     SrcRect_bottom;
    int32_t     DstRect_left;
    int32_t     DstRect_right;
    int32_t     DstRect_top;
    int32_t     DstRect_bottom;
    int32_t     ClipRect_left;
    int32_t     ClipRect_right;
    int32_t     ClipRect_top;
    int32_t     ClipRect_bottom;
    uint32_t    Rotation;
    uint32_t    Blend;
    uint32_t    NumFilters;
    uint32_t    ColorSpace;
    uint32_t    HDRMetaDataType;
    uint32_t    SDRWhiteLevel;
};

template<typename PointerT>
struct HSyncDPCMultiPlane_Info_Struct_Part1 {
    PointerT    pDxgAdapter;
    uint32_t    PlaneCount;
    uint64_t    ScannedPhysicalAddress[]; // Count provided by PlaneCount.
};
struct HSyncDPCMultiPlane_Info_Struct_Part2 {
    uint32_t    VidPnSourceId;
    uint32_t    FrameNumber;
    uint32_t    FlipEntryCount;
    uint64_t    FlipSubmitSequence[]; // Count provided by FlipEntryCount.
};

template<typename PointerT>
struct MMIOFlip_Info_Struct {
    PointerT    pDxgAdapter;
    uint32_t    VidPnSourceId;
    uint32_t    FlipSubmitSequence;
    PointerT    FlipToDriverAllocation;
    uint64_t    FlipToPhysicalAddress;
    uint32_t    FlipToSegmentId;
    uint32_t    FlipPresentId;
    uint32_t    FlipPhysicalAdapterMask;
    uint32_t    Flags;
};

template<typename PointerT>
struct MMIOFlipMultiPlaneOverlay_Info_Struct {
    PointerT    pDxgAdapter;
    uint32_t    VidPnSourceId;
    uint32_t    LayerIndex;
    uint64_t    FlipSubmitSequence;
    PointerT    FlipToDriverAllocation;
    uint64_t    FlipToPhysicalAddress;
    uint32_t    FlipToSegmentId;
    uint32_t    FlipPresentId;
    uint32_t    FlipPhysicalAdapterMask;
    int32_t     SrcRect_left;
    int32_t     SrcRect_right;
    int32_t     SrcRect_top;
    int32_t     SrcRect_bottom;
    int32_t     DstRect_left;
    int32_t     DstRect_right;
    int32_t     DstRect_top;
    int32_t     DstRect_bottom;
    int32_t     ClipRect_left;
    int32_t     ClipRect_right;
    int32_t     ClipRect_top;
    int32_t     ClipRect_bottom;
    uint32_t    ColorSpace;
    uint32_t    FlipEntryStatusAfterFlip;
    uint32_t    Enabled;
    uint32_t    SDRWhiteLevel;
    uint32_t    DirtyRectCount;
};

template<typename PointerT>
struct Present_Info_Struct {
    uint32_t    hContext;
    PointerT    hWindow;
    uint32_t    VidPnSourceId;
    uint32_t    Flags;
    uint32_t    ReturnStatus;
    PointerT    hSrcAllocHandle;
    PointerT    hDstAllocHandle;
};

template<typename PointerT>
struct PresentHistory_Start_Struct {
    PointerT    hAdapter;
    PointerT    Token;
    uint32_t    Model;
    uint32_t    TokenSize;
    uint64_t    TokenData;
};

template<typename PointerT>
struct PresentHistory_Info_Struct {
    PointerT    hAdapter;
    PointerT    Token;
    uint32_t    Model;
    uint32_t    TokenSize;
    uint64_t    TokenData;
};

template<typename PointerT>
struct PresentHistoryDetailed_Start_Struct_Part1 {
    PointerT    hAdapter;
    PointerT    Token;
    uint32_t    Model;
    uint32_t    TokenSize;
    uint64_t    TokenData;
    uint32_t    ScrollRect_left;
    uint32_t    ScrollRect_right;
    uint32_t    ScrollRect_top;
    uint32_t    ScrollRect_bottom;
    uint32_t    ScrollOffset_X;
    uint32_t    ScrollOffset_Y;
    uint32_t    DirtyRectCount;
    int32_t     Left[]; // Count provided by DirtyRectCount.
};
struct PresentHistoryDetailed_Start_Struct_Part2 {
    int32_t     Right[]; // Count provided by DirtyRectCount.
};
struct PresentHistoryDetailed_Start_Struct_Part3 {
    int32_t     Top[]; // Count provided by DirtyRectCount.
};
struct PresentHistoryDetailed_Start_Struct_Part4 {
    int32_t     Bottom[]; // Count provided by DirtyRectCount.
};
struct PresentHistoryDetailed_Start_Struct_Part5 {
    uint32_t    SourceRect_left;
    uint32_t    SourceRect_right;
    uint32_t    SourceRect_top;
    uint32_t    SourceRect_bottom;
    uint32_t    DestWidth;
    uint32_t    DestHeight;
    uint32_t    TargetRect_left;
    uint32_t    TargetRect_right;
    uint32_t    TargetRect_top;
    uint32_t    TargetRect_bottom;
};

template<typename PointerT>
struct QueuePacket_Start_Struct {
    PointerT    hContext;
    uint32_t    PacketType;
    uint32_t    SubmitSequence;
    uint64_t    DmaBufferSize;
    uint32_t    AllocationListSize;
    uint32_t    PatchLocationListSize;
    uint32_t    bPresent;
    PointerT    hDmaBuffer;
    PointerT    pQueuePacket;
    uint64_t    ProgressFenceValue;
};

template<typename PointerT>
struct QueuePacket_Stop_Struct {
    PointerT    hContext;
    uint32_t    PacketType;
    uint32_t    SubmitSequence;
    uint32_t    bPreempted;
    uint32_t    bTimeouted;
    PointerT    pQueuePacket;
};

template<typename PointerT>
struct QueuePacket_Start_2_Struct {
    PointerT    hContext;
    uint32_t    SubmitSequence;
    uint32_t    Flags;
    PointerT    hSyncObject;
    uint64_t    FenceValue;
    PointerT    pQueuePacket;
};

template<typename PointerT>
struct QueuePacket_Start_3_Struct_Part1 {
    PointerT    hContext;
    uint32_t    SubmitSequence;
    uint32_t    Flags;
    uint32_t    ObjectCount;
    PointerT    ObjectArray[]; // Count provided by ObjectCount.
};
struct QueuePacket_Start_3_Struct_Part2 {
    uint64_t    FenceValue[]; // Count provided by ObjectCount.
};
template<typename PointerT>
struct QueuePacket_Start_3_Struct_Part3 {
    PointerT    pQueuePacket;
};

template<typename PointerT>
struct VSyncDPC_Info_Struct {
    PointerT    pDxgAdapter;
    uint32_t    VidPnTargetId;
    uint64_t    ScannedPhysicalAddress;
    uint32_t    VidPnSourceId;
    uint32_t    FrameNumber;
    int64_t     FrameQPCTime;
    PointerT    hFlipDevice;
    uint32_t    FlipType;
    uint64_t    FlipFenceId;
};

#pragma pack(pop)
#pragma warning(pop)

// Manually added:
enum class FlipEntryStatus {
    FlipWaitVSync = 5,
    FlipWaitComplete = 11,
    FlipWaitHSync = 15,
    // There are others, but they're more complicated to deal with.
};

enum class QueueSubmitType {
    MMIOFlip = 3,
    Software = 7,
};

enum class MMIOFlip {
    Immediate = 0x2,
    OnNextVSync = 0x4
};

}

// d3dkmthk.h
typedef enum _D3DKMT_PRESENT_MODEL
{
    D3DKMT_PM_UNINITIALIZED       = 0,
    D3DKMT_PM_REDIRECTED_GDI       = 1,
    D3DKMT_PM_REDIRECTED_FLIP      = 2,
    D3DKMT_PM_REDIRECTED_BLT       = 3,
    D3DKMT_PM_REDIRECTED_VISTABLT  = 4,
    D3DKMT_PM_SCREENCAPTUREFENCE   = 5,
    D3DKMT_PM_REDIRECTED_GDI_SYSMEM  = 6,
    D3DKMT_PM_REDIRECTED_COMPOSITION = 7,
    D3DKMT_PM_SURFACECOMPLETE        = 8,
    D3DKMT_PM_FLIPMANAGER            = 9,
} D3DKMT_PRESENT_MODEL;

