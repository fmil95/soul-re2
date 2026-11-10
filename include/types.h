/**
 * @file types.h
 *
 * @brief Types of the prototype, generated from stdump output. Do not edit by hand.
 */
#ifndef TYPES_H
#define TYPES_H

#include <stddef.h>
#include <eetypes.h>

#ifndef FALSE
#define FALSE 0
#endif
#ifndef TRUE
#define TRUE 1
#endif

/* stdump built-ins that are not C types */
typedef int int128 __attribute__((mode(TI)));
typedef unsigned int uint128 __attribute__((mode(TI)));
typedef void G2AppData;
typedef void G2PoolMem;
typedef void VOID;

/* forward declarations: the dump names aggregates without the struct/union keyword */
typedef struct tm tm;
typedef struct _glue _glue;
typedef struct _Bigint _Bigint;
typedef struct _atexit _atexit;
typedef struct __sbuf __sbuf;
typedef struct __sFILE __sFILE;
typedef struct _reent _reent;
typedef union __dmath __dmath;
typedef struct exception exception;
typedef struct _types_fd_set _types_fd_set;
typedef struct RECT_PSX RECT_PSX;
typedef struct MATRIX MATRIX;
typedef struct VECTOR VECTOR;
typedef struct SVECTOR SVECTOR;
typedef struct CVECTOR CVECTOR;
typedef struct DVECTOR DVECTOR;
typedef struct DWVECTOR DWVECTOR;
typedef struct DFVECTOR DFVECTOR;
typedef struct Vector4f Vector4f;
typedef struct Vector3f Vector3f;
typedef struct Vector2f Vector2f;
typedef struct NodeType NodeType;
typedef struct MYPS2VERTEX MYPS2VERTEX;
typedef struct TextureMT3 TextureMT3;
typedef struct _G2EulerAngles_Type _G2EulerAngles_Type;
typedef struct _G2AnimSegValue_Type _G2AnimSegValue_Type;
typedef struct _G2AnimQuatInfo_Type _G2AnimQuatInfo_Type;
typedef struct _G2AnimAlphaTable_Type _G2AnimAlphaTable_Type;
typedef struct _G2AnimInterpStateBlock_Type _G2AnimInterpStateBlock_Type;
typedef struct _G2AnimInterpInfo_Type _G2AnimInterpInfo_Type;
typedef struct _G2AnimChanStatus_Type _G2AnimChanStatus_Type;
typedef struct _G2AnimChanStatusBlock_Type _G2AnimChanStatusBlock_Type;
typedef struct _G2AnimFxHeader_Type _G2AnimFxHeader_Type;
typedef struct _G2AnimKeylist_Type _G2AnimKeylist_Type;
typedef struct _G2AnimController_Type _G2AnimController_Type;
typedef struct _G2AnimSection_Type _G2AnimSection_Type;
typedef struct _G2Anim_Type _G2Anim_Type;
typedef struct _Vector _Vector;
typedef struct _SVector _SVector;
typedef struct _SVectorNoPad _SVectorNoPad;
typedef struct _Triangle2D _Triangle2D;
typedef struct _Quad2D _Quad2D;
typedef struct _Box2D _Box2D;
typedef struct _Position _Position;
typedef struct _Rotation _Rotation;
typedef struct _Normal _Normal;
typedef struct FNormal FNormal;
typedef struct _PlaneConstants _PlaneConstants;
typedef struct _SKUVertex _SKUVertex;
typedef struct _Face _Face;
typedef struct _Face32 _Face32;
typedef struct _MVertex _MVertex;
typedef struct _MFace _MFace;
typedef struct _PVertex _PVertex;
typedef struct _VertexPool _VertexPool;
typedef struct _Sphere _Sphere;
typedef struct _CameraKey _CameraKey;
typedef struct Signal Signal;
typedef struct _MultiSignal _MultiSignal;
typedef struct _HFace _HFace;
typedef struct _HSphere _HSphere;
typedef struct _HBox _HBox;
typedef struct _HMarker _HMarker;
typedef struct _HPrim _HPrim;
typedef struct _HModel _HModel;
typedef struct _HInfo _HInfo;
typedef struct _Segment _Segment;
typedef struct _VirtSegment _VirtSegment;
typedef struct _SegmentBox _SegmentBox;
typedef struct _PS2TerrainXYZ _PS2TerrainXYZ;
typedef struct _PS2ModelXYZ _PS2ModelXYZ;
typedef struct _PS2_TerrainStripData _PS2_TerrainStripData;
typedef struct _PS2_ModelStripData _PS2_ModelStripData;
typedef struct _TextureStripInfo _TextureStripInfo;
typedef struct ScrollInfo ScrollInfo;
typedef struct AnimatedInfo AnimatedInfo;
typedef struct AnimatedListInfo AnimatedListInfo;
typedef struct _Model _Model;
typedef struct SoundInstance SoundInstance;
typedef struct _AnimSoundData_Type _AnimSoundData_Type;
typedef struct _AnimVariableSoundData_Type _AnimVariableSoundData_Type;
typedef struct RandomSoundInfo RandomSoundInfo;
typedef struct _AnimRandomSoundData_Type _AnimRandomSoundData_Type;
typedef struct ObjectEffect ObjectEffect;
typedef struct _ObjectOwnerInfo _ObjectOwnerInfo;
typedef struct Object Object;
typedef struct _Plane _Plane;
typedef struct _TFace _TFace;
typedef struct _TVertex _TVertex;
typedef struct _TVertexRGB _TVertexRGB;
typedef struct _Mirror _Mirror;
typedef struct _PCollideInfo _PCollideInfo;
typedef struct _Instance _Instance;
typedef struct _InstanceHandle _InstanceHandle;
typedef struct _InstancePool _InstancePool;
typedef struct _InstanceList _InstanceList;
typedef struct _ObjectTracker _ObjectTracker;
typedef struct Intro Intro;
typedef struct _BoundingBox _BoundingBox;
typedef struct CDLight CDLight;
typedef struct AnimTextList AnimTextList;
typedef struct AnimLinkInfo AnimLinkInfo;
typedef struct _TerrainTextureStripInfo _TerrainTextureStripInfo;
typedef struct _TerrainScrollVertex _TerrainScrollVertex;
typedef struct _TerrainScrollStripInfo _TerrainScrollStripInfo;
typedef struct TerrainAnimTexture TerrainAnimTexture;
typedef struct _BSPLeaf _BSPLeaf;
typedef struct _BSPNode _BSPNode;
typedef struct _IntroList _IntroList;
typedef struct _MorphVertex _MorphVertex;
typedef struct _MorphColor _MorphColor;
typedef struct BoundingSphere BoundingSphere;
typedef struct OctreeSphere OctreeSphere;
typedef struct BSPTree BSPTree;
typedef struct AnimList AnimList;
typedef struct _Terrain _Terrain;
typedef struct LightGroup LightGroup;
typedef struct LightList LightList;
typedef struct LightTableEntry LightTableEntry;
typedef struct _LightTable _LightTable;
typedef struct _VMVertexMove _VMVertexMove;
typedef struct _VMVertexColor _VMVertexColor;
typedef struct _VMOffset _VMOffset;
typedef struct _VMColorOffset _VMColorOffset;
typedef struct _VMInterpolated _VMInterpolated;
typedef struct _VMOffsetTable _VMOffsetTable;
typedef struct _VMObject _VMObject;
typedef struct _PlanMkr _PlanMkr;
typedef struct _SFXMkr _SFXMkr;
typedef struct _PlanPoint _PlanPoint;
typedef struct _PlanFace _PlanFace;
typedef struct _PlanOctTree _PlanOctTree;
typedef struct _PlanData _PlanData;
typedef struct Level Level;
typedef struct _ColorType _ColorType;
typedef struct _SavedCinematic _SavedCinematic;
typedef struct _CameraCore_Type _CameraCore_Type;
typedef struct Camera Camera;
typedef struct CameraCollisionInfo CameraCollisionInfo;
typedef struct MusicLoadCmd MusicLoadCmd;
typedef struct MusicLoadInfo MusicLoadInfo;
typedef struct ObjectPeriodicSound ObjectPeriodicSound;
typedef struct ObjectExtendedEventSound ObjectExtendedEventSound;
typedef struct ObjectEventSound ObjectEventSound;
typedef struct ObjectOneShotSound ObjectOneShotSound;
typedef struct SoundEffectChannel SoundEffectChannel;
typedef struct gSoundData gSoundData;
typedef struct LightInstance LightInstance;
typedef struct _GameTrackerASMData_Type _GameTrackerASMData_Type;
typedef struct _GameData_Type _GameData_Type;
typedef struct GameTracker GameTracker;
typedef struct SpQuat SpQuat;
typedef struct SplineRotKey SplineRotKey;
typedef struct RSpline RSpline;
typedef struct SplineKey SplineKey;
typedef struct Spline Spline;
typedef struct SplineDef SplineDef;
typedef struct MultiSpline MultiSpline;
typedef struct _FX_MATRIX _FX_MATRIX;
typedef struct _Splyn _Splyn;
typedef struct _FX_PRIM _FX_PRIM;
typedef struct _FXTracker _FXTracker;
typedef struct __BubbleParams __BubbleParams;
typedef struct __GenericBubbleParams __GenericBubbleParams;
typedef struct _GenericParticleParams _GenericParticleParams;
typedef struct _GenericRibbonParams _GenericRibbonParams;
typedef struct _GenericGlowParams _GenericGlowParams;
typedef struct _GenericLightningParams _GenericLightningParams;
typedef struct _GenericBlastringParams _GenericBlastringParams;
typedef struct _GenericFlashParams _GenericFlashParams;
typedef struct _GenericDynamicLightParams _GenericDynamicLightParams;
typedef struct _GenericCutplaneParams _GenericCutplaneParams;
typedef struct _FXGeneralEffect _FXGeneralEffect;
typedef struct _FXRibbon _FXRibbon;
typedef struct _FXParticleGen _FXParticleGen;
typedef struct _FXCutplane _FXCutplane;
typedef struct _FXGlowEffect _FXGlowEffect;
typedef struct _FXLightBeam _FXLightBeam;
typedef struct _FXBlastringEffect _FXBlastringEffect;
typedef struct _FXForceFieldEffect _FXForceFieldEffect;
typedef struct _FXLightning _FXLightning;
typedef struct _FXFlash _FXFlash;
typedef struct _FXFlashLight _FXFlashLight;
typedef struct _FXTarget _FXTarget;
typedef struct _GenericFXObject _GenericFXObject;
typedef struct FXSplinter FXSplinter;
typedef struct _WeatherPrim _WeatherPrim;
typedef struct LINEVERTEX LINEVERTEX;
typedef struct DRAWVERTEX DRAWVERTEX;
typedef struct SCREENRECT SCREENRECT;
typedef struct _AadDynSfxFileHdr _AadDynSfxFileHdr;
typedef struct AadDynSfxSmfFileHdr AadDynSfxSmfFileHdr;
typedef struct AadRawSampleHeader AadRawSampleHeader;
typedef struct AadLoadedSfxWaveAttr AadLoadedSfxWaveAttr;
typedef struct AadLoadedSfxToneAttr AadLoadedSfxToneAttr;
typedef struct AadDynSfxAttr AadDynSfxAttr;
typedef struct RIFF_Header RIFF_Header;
typedef struct _MemHeader _MemHeader;
typedef struct _MUSSCRIPT_ScriptData _MUSSCRIPT_ScriptData;
typedef struct MUS_LoadingVars MUS_LoadingVars;
typedef struct MUSMIDI_FileHeader MUSMIDI_FileHeader;
typedef struct _MUSMIDI_Channel _MUSMIDI_Channel;
typedef struct MUSMIDITRACK_LoopData MUSMIDITRACK_LoopData;
typedef struct _MUSMIDI_Track _MUSMIDI_Track;
typedef struct _MUSMIDI_Song _MUSMIDI_Song;
typedef struct MUS_PresetZone MUS_PresetZone;
typedef struct MUS_Preset MUS_Preset;
typedef struct _MUS_Envelope _MUS_Envelope;
typedef struct MUS_InstrumentZone MUS_InstrumentZone;
typedef struct MUS_Instrument MUS_Instrument;
typedef struct MUS_Sample MUS_Sample;
typedef struct MUS_SequenceHeader MUS_SequenceHeader;
typedef struct MUS_Header MUS_Header;
typedef struct _MUS_Song _MUS_Song;
typedef struct _MUSBANK_GlobalChannel _MUSBANK_GlobalChannel;
typedef struct AadSynthVoice AadSynthVoice;
typedef struct AadSfxCommand AadSfxCommand;
typedef struct AadSfxSlot AadSfxSlot;
typedef struct _FILEREQUEST _FILEREQUEST;
typedef struct DynamicSfxLoadInfo DynamicSfxLoadInfo;
typedef struct MainTracker MainTracker;
typedef struct BigFileEntry BigFileEntry;
typedef struct BigFile BigFile;
typedef struct LoadInfo LoadInfo;
typedef struct FileInfo FileInfo;
typedef struct STREAMFILE STREAMFILE;
typedef struct div_t div_t;
typedef struct ldiv_t ldiv_t;
typedef struct mallinfo mallinfo;
typedef struct MUSSCRIPT_ScriptAtt MUSSCRIPT_ScriptAtt;
typedef struct ThreadParam ThreadParam;
typedef struct SemaParam SemaParam;
typedef struct sceExecData sceExecData;
typedef struct _sif_rpc_data _sif_rpc_data;
typedef struct _sif_client_data _sif_client_data;
typedef struct _sif_receive_data _sif_receive_data;
typedef struct _sif_serve_data _sif_serve_data;
typedef struct _sif_queue_data _sif_queue_data;
typedef struct sceSdBatch sceSdBatch;
typedef struct sceSdEffectAttr sceSdEffectAttr;
typedef struct RemoteDataStruct RemoteDataStruct;
typedef struct _RPC_StreamUploadData _RPC_StreamUploadData;
typedef struct _RPC_StreamUpdateData _RPC_StreamUpdateData;
typedef struct _RPC_StreamUpload _RPC_StreamUpload;
typedef struct RPC_StreamFirstData RPC_StreamFirstData;
typedef struct _SRAMChunk _SRAMChunk;
typedef struct _SAMPLE _SAMPLE;
typedef struct CHANNELINFO CHANNELINFO;
typedef struct _SAMPLEMEM _SAMPLEMEM;
typedef struct _SRAMMEM _SRAMMEM;
typedef struct STRHEADER STRHEADER;
typedef struct sceSifDmaData sceSifDmaData;
typedef struct _SOUNDSTREAM_CHANNEL _SOUNDSTREAM_CHANNEL;
typedef struct _SOUNDSTREAM _SOUNDSTREAM;
typedef struct _STREAMMEM _STREAMMEM;
typedef struct CheatTable CheatTable;
typedef struct DebugMenuLine DebugMenuLine;
typedef struct LevelSelection LevelSelection;
typedef struct _IOPFileRequest _IOPFileRequest;
typedef struct _IOPStreamStatus _IOPStreamStatus;
typedef struct tT_COUNT tT_COUNT;
typedef struct tT_MODE tT_MODE;
typedef struct tT_COMP tT_COMP;
typedef struct tT_HOLD tT_HOLD;
typedef struct tIPU_CMD_write tIPU_CMD_write;
typedef struct tIPU_CMD_read tIPU_CMD_read;
typedef struct tIPU_TOP tIPU_TOP;
typedef struct tIPU_CTRL tIPU_CTRL;
typedef struct tIPU_BP tIPU_BP;
typedef struct tGIF_CTRL tGIF_CTRL;
typedef struct tGIF_MODE tGIF_MODE;
typedef struct tGIF_STAT tGIF_STAT;
typedef struct tGIF_TAG0 tGIF_TAG0;
typedef struct tGIF_TAG1 tGIF_TAG1;
typedef struct tGIF_TAG2 tGIF_TAG2;
typedef struct tGIF_TAG3 tGIF_TAG3;
typedef struct tGIF_CNT tGIF_CNT;
typedef struct tGIF_P3CNT tGIF_P3CNT;
typedef struct tGIF_P3TAG tGIF_P3TAG;
typedef struct tVIF0_STAT tVIF0_STAT;
typedef struct tVIF0_FBRST tVIF0_FBRST;
typedef struct tVIF0_ERR tVIF0_ERR;
typedef struct tVIF_MARK tVIF_MARK;
typedef struct tVIF_CYCLE tVIF_CYCLE;
typedef struct tVIF_MODE tVIF_MODE;
typedef struct tVIF0_NUM tVIF0_NUM;
typedef struct tVIF_MASK tVIF_MASK;
typedef struct tVIF_CODE tVIF_CODE;
typedef struct tVIF_ITOPS tVIF_ITOPS;
typedef struct tVIF_ITOP tVIF_ITOP;
typedef struct tVIF_R0 tVIF_R0;
typedef struct tVIF_R1 tVIF_R1;
typedef struct tVIF_R2 tVIF_R2;
typedef struct tVIF_R3 tVIF_R3;
typedef struct tVIF_C0 tVIF_C0;
typedef struct tVIF_C1 tVIF_C1;
typedef struct tVIF_C2 tVIF_C2;
typedef struct tVIF_C3 tVIF_C3;
typedef struct tVIF1_STAT tVIF1_STAT;
typedef struct tVIF1_FBRST tVIF1_FBRST;
typedef struct tVIF1_ERR tVIF1_ERR;
typedef struct tVIF1_NUM tVIF1_NUM;
typedef struct tVIF1_BASE tVIF1_BASE;
typedef struct tVIF1_OFST tVIF1_OFST;
typedef struct tVIF1_TOPS tVIF1_TOPS;
typedef struct tVIF1_TOP tVIF1_TOP;
typedef struct tD_CHCR tD_CHCR;
typedef struct tD_MADR tD_MADR;
typedef struct tD_QWC tD_QWC;
typedef struct tD_TADR tD_TADR;
typedef struct tD_ASR0 tD_ASR0;
typedef struct tD_ASR1 tD_ASR1;
typedef struct tD_SADR tD_SADR;
typedef struct tD_CTRL tD_CTRL;
typedef struct tD_STAT tD_STAT;
typedef struct tD_PCR tD_PCR;
typedef struct tD_SQWC tD_SQWC;
typedef struct tD_RBSR tD_RBSR;
typedef struct tD_RBOR tD_RBOR;
typedef struct tD_STADR tD_STADR;
typedef struct tD_ENABLER tD_ENABLER;
typedef struct tD_ENABLEW tD_ENABLEW;
typedef struct tGS_PMODE tGS_PMODE;
typedef struct tGS_SMODE2 tGS_SMODE2;
typedef struct tGS_DISPFB1 tGS_DISPFB1;
typedef struct tGS_DISPLAY1 tGS_DISPLAY1;
typedef struct tGS_DISPFB2 tGS_DISPFB2;
typedef struct tGS_DISPLAY2 tGS_DISPLAY2;
typedef struct tGS_EXTBUF tGS_EXTBUF;
typedef struct tGS_EXTDATA tGS_EXTDATA;
typedef struct tGS_EXTWRITE tGS_EXTWRITE;
typedef struct tGS_BGCOLOR tGS_BGCOLOR;
typedef struct tGS_CSR tGS_CSR;
typedef struct tGS_IMR tGS_IMR;
typedef struct tGS_BUSDIR tGS_BUSDIR;
typedef struct tGS_SIGLBLID tGS_SIGLBLID;
typedef struct sceGifTag sceGifTag;
typedef struct sceGsAlpha sceGsAlpha;
typedef struct sceGsBitbltbuf sceGsBitbltbuf;
typedef struct sceGsClamp sceGsClamp;
typedef struct sceGsColclamp sceGsColclamp;
typedef struct sceGsDimx sceGsDimx;
typedef struct sceGsDthe sceGsDthe;
typedef struct sceGsFba sceGsFba;
typedef struct sceGsFinish sceGsFinish;
typedef struct sceGsFogcol sceGsFogcol;
typedef struct sceGsFrame sceGsFrame;
typedef struct sceGsHwreg sceGsHwreg;
typedef struct sceGsLabel sceGsLabel;
typedef struct sceGsMiptbp1 sceGsMiptbp1;
typedef struct sceGsMiptbp2 sceGsMiptbp2;
typedef struct sceGsPabe sceGsPabe;
typedef struct sceGsPrim sceGsPrim;
typedef struct sceGsPrmode sceGsPrmode;
typedef struct sceGsPrmodecont sceGsPrmodecont;
typedef struct sceGsRgbaq sceGsRgbaq;
typedef struct sceGsScanmsk sceGsScanmsk;
typedef struct sceGsScissor sceGsScissor;
typedef struct sceGsSignal sceGsSignal;
typedef struct sceGsSt sceGsSt;
typedef struct sceGsTest sceGsTest;
typedef struct sceGsTex0 sceGsTex0;
typedef struct sceGsTex1 sceGsTex1;
typedef struct sceGsTex2 sceGsTex2;
typedef struct sceGsTexa sceGsTexa;
typedef struct sceGsTexclut sceGsTexclut;
typedef struct sceGsTexflush sceGsTexflush;
typedef struct sceGsTrxdir sceGsTrxdir;
typedef struct sceGsTrxpos sceGsTrxpos;
typedef struct sceGsTrxreg sceGsTrxreg;
typedef struct sceGsUv sceGsUv;
typedef struct sceGsXyoffset sceGsXyoffset;
typedef struct sceGsXyz sceGsXyz;
typedef struct sceGsXyzf sceGsXyzf;
typedef struct sceGsZbuf sceGsZbuf;
typedef struct sceGsDispEnv sceGsDispEnv;
typedef struct sceGsDrawEnv1 sceGsDrawEnv1;
typedef struct sceGsDrawEnv2 sceGsDrawEnv2;
typedef struct sceGsClear sceGsClear;
typedef struct sceGsDBuff sceGsDBuff;
typedef struct sceGsDBuffDc sceGsDBuffDc;
typedef struct sceGsTexEnv sceGsTexEnv;
typedef struct sceGsTexEnv2 sceGsTexEnv2;
typedef struct sceGsAlphaEnv sceGsAlphaEnv;
typedef struct sceGsAlphaEnv2 sceGsAlphaEnv2;
typedef struct sceGsLoadImage sceGsLoadImage;
typedef struct sceGsStoreImage sceGsStoreImage;
typedef struct sceGsGParam sceGsGParam;
typedef struct __Event __Event;
typedef struct __MessageQueue __MessageQueue;
typedef struct __State __State;
typedef struct __CharacterState __CharacterState;
typedef struct __EventAnimInfo __EventAnimInfo;
typedef struct __FatalityInterface __FatalityInterface;
typedef struct evMonsterHitData evMonsterHitData;
typedef struct evMonsterThrownData evMonsterThrownData;
typedef struct evMonsterAlarmData evMonsterAlarmData;
typedef struct evMonsterSoulSuckData evMonsterSoulSuckData;
typedef struct evMonsterHitTerrainData evMonsterHitTerrainData;
typedef struct evMonsterHitObjectData evMonsterHitObjectData;
typedef struct evObjectData evObjectData;
typedef struct evPositionData evPositionData;
typedef struct evPhysicsGravityData evPhysicsGravityData;
typedef struct evPhysicsDropOffData evPhysicsDropOffData;
typedef struct evPhysicsEdgeData evPhysicsEdgeData;
typedef struct evPhysicsSlideData evPhysicsSlideData;
typedef struct evPhysicsWallCrawlData evPhysicsWallCrawlData;
typedef struct evPhysicsSwimData evPhysicsSwimData;
typedef struct evPhysicsLOSData evPhysicsLOSData;
typedef struct evPhysicsDropHeightData evPhysicsDropHeightData;
typedef struct evPhysicsLinkedMoveData evPhysicsLinkedMoveData;
typedef struct evFXHitData evFXHitData;
typedef struct evAnimationControllerDoneData evAnimationControllerDoneData;
typedef struct evAnimationInstanceSwitchData evAnimationInstanceSwitchData;
typedef struct evMonsterImpaleData evMonsterImpaleData;
typedef struct evMonsterDecapData evMonsterDecapData;
typedef struct evCollideInstanceStatsData evCollideInstanceStatsData;
typedef struct evObjectThrowData evObjectThrowData;
typedef struct evObjectBreakOffData evObjectBreakOffData;
typedef struct evObjectDraftData evObjectDraftData;
typedef struct evObjectAbsorbData evObjectAbsorbData;
typedef struct evControlSaveDataData evControlSaveDataData;
typedef struct evObjectIdleData evObjectIdleData;
typedef struct evControlInitHangData evControlInitHangData;
typedef struct evControlInitIdleData evControlInitIdleData;
typedef struct evActionLookAroundData evActionLookAroundData;
typedef struct evActionPlayHostAnimationData evActionPlayHostAnimationData;
typedef struct evObjectBirthProjectileData evObjectBirthProjectileData;
typedef struct evShadowSegmentData evShadowSegmentData;
typedef struct evMonsterAllyData evMonsterAllyData;
typedef struct evMonsterFatalityInterfaceData evMonsterFatalityInterfaceData;
typedef struct evActionBlockAttackData evActionBlockAttackData;
typedef struct evObjectDoorData evObjectDoorData;
typedef struct evObjectSoundData evObjectSoundData;
typedef struct evCollideForceData evCollideForceData;
typedef struct evMonsterCompleteAttackData evMonsterCompleteAttackData;
typedef struct _StreamUnit _StreamUnit;
typedef struct STracker STracker;
typedef struct StreamUnitPortal StreamUnitPortal;
typedef struct _MONAPI_Regenerator _MONAPI_Regenerator;
typedef struct _GlobalSaveTracker _GlobalSaveTracker;
typedef struct ObjectFunc ObjectFunc;
typedef struct ObjectAccess ObjectAccess;
typedef struct _HFaceInfo _HFaceInfo;
typedef struct _CollideInfo _CollideInfo;
typedef struct _LCollideInfo _LCollideInfo;
typedef struct SCollideInfo SCollideInfo;
typedef struct _LegIK _LegIK;
typedef struct _ArmIK _ArmIK;
typedef struct _ClothNode _ClothNode;
typedef struct SavedInfoTracker SavedInfoTracker;
typedef struct SavedBasic SavedBasic;
typedef struct SavedIntroSmall SavedIntroSmall;
typedef struct SavedIntroSpline SavedIntroSpline;
typedef struct _SavedIntro _SavedIntro;
typedef struct _SavedIntroWithIntro _SavedIntroWithIntro;
typedef struct SavedEvent SavedEvent;
typedef struct SavedEventSmallVars SavedEventSmallVars;
typedef struct SavedLevel SavedLevel;
typedef struct SavedBspTree SavedBspTree;
typedef struct ActualSavedLevel ActualSavedLevel;
typedef struct sceCdRMode sceCdRMode;
typedef struct sceCdlLOCCD sceCdlLOCCD;
typedef struct sceCdlFILE sceCdlFILE;
typedef struct sceCdCLOCK sceCdCLOCK;
typedef struct sceScfT10kConfig sceScfT10kConfig;
typedef struct InterfaceItem InterfaceItem;
typedef struct INICommand INICommand;
typedef struct GenericTune GenericTune;
typedef struct __Force __Force;
typedef struct WaterLevelProcess WaterLevelProcess;
typedef struct HintSystemStruct HintSystemStruct;
typedef struct _MonsterRadar _MonsterRadar;
typedef struct _MonsterIR _MonsterIR;
typedef struct _MonsterBehavior _MonsterBehavior;
typedef struct _SkipData _SkipData;
typedef struct _BehaviorPupateData _BehaviorPupateData;
typedef struct _BehaviorAmbushData _BehaviorAmbushData;
typedef struct _BehaviorDeadData _BehaviorDeadData;
typedef struct _BehaviorWanderData _BehaviorWanderData;
typedef struct _BehaviorPatrolData _BehaviorPatrolData;
typedef struct _BehaviorCombatData _BehaviorCombatData;
typedef struct _BehaviorProjectileData _BehaviorProjectileData;
typedef struct _BehaviorSpawnData _BehaviorSpawnData;
typedef struct _BehaviorFleeData _BehaviorFleeData;
typedef struct _BehaviorTrackData _BehaviorTrackData;
typedef struct _MonsterSaveInfo _MonsterSaveInfo;
typedef struct _MonsterAnim _MonsterAnim;
typedef struct _MonsterIdle _MonsterIdle;
typedef struct _MonsterBehaviorIdles _MonsterBehaviorIdles;
typedef struct _MonsterSenses _MonsterSenses;
typedef struct _MonsterAllegiances _MonsterAllegiances;
typedef struct _MonsterAttackAttributes _MonsterAttackAttributes;
typedef struct _MonsterAttackStream _MonsterAttackStream;
typedef struct _MonsterEvadeAttributes _MonsterEvadeAttributes;
typedef struct _MonsterReactionList _MonsterReactionList;
typedef struct _MonsterReaction _MonsterReaction;
typedef struct _MonsterBlockAttributes _MonsterBlockAttributes;
typedef struct _MonsterCombatMoveAttributes _MonsterCombatMoveAttributes;
typedef struct _MonsterMissile _MonsterMissile;
typedef struct _MonsterTaunt _MonsterTaunt;
typedef struct _MonsterCombatAttributes _MonsterCombatAttributes;
typedef struct _MonsterBurnSegments _MonsterBurnSegments;
typedef struct _MonsterBehaviorSpec _MonsterBehaviorSpec;
typedef struct _MonsterBehaviorStack _MonsterBehaviorStack;
typedef struct _MonsterFatality _MonsterFatality;
typedef struct _MonsterAccessory _MonsterAccessory;
typedef struct _MonsterFallDamage _MonsterFallDamage;
typedef struct _MonsterSubAttributes _MonsterSubAttributes;
typedef struct _MonsterVO _MonsterVO;
typedef struct _MonsterSpawn _MonsterSpawn;
typedef struct _MonsterAttributes _MonsterAttributes;
typedef struct _MonsterSchedule _MonsterSchedule;
typedef struct _MonsterVars _MonsterVars;
typedef struct Triangle2Dc Triangle2Dc;
typedef struct __ReaverSaveDat __ReaverSaveDat;
typedef struct __ReaverSegment __ReaverSegment;
typedef struct __ReaverData __ReaverData;
typedef struct __ReaverWaveData __ReaverWaveData;
typedef struct __ReaverTuneData __ReaverTuneData;
typedef struct burntTuneType burntTuneType;
typedef struct burntMessType burntMessType;
typedef struct bloodyMessType bloodyMessType;
typedef struct _sceDmaTag _sceDmaTag;
typedef struct sceDmaEnv sceDmaEnv;
typedef struct sceDmaChan sceDmaChan;
typedef struct sceDmaPacket sceDmaPacket;
typedef struct sceVif0Packet sceVif0Packet;
typedef struct sceVif1Packet sceVif1Packet;
typedef struct sceGifPacket sceGifPacket;
typedef struct sceDevVu0Cnd sceDevVu0Cnd;
typedef struct sceDevVu1Cnd sceDevVu1Cnd;
typedef struct sceDevGifCnd sceDevGifCnd;
typedef struct sceDevVif0Cnd sceDevVif0Cnd;
typedef struct sceDevVif1Cnd sceDevVif1Cnd;
typedef union QWdata QWdata;
typedef struct GifPacket GifPacket;
typedef struct DmaTag DmaTag;
typedef struct _PS2Vertex _PS2Vertex;
typedef struct _PS2VertexNoTex _PS2VertexNoTex;
typedef struct _PS2DrawItem _PS2DrawItem;
typedef struct _PS2TriStrip _PS2TriStrip;
typedef struct _PS2PrelitTriStrip _PS2PrelitTriStrip;
typedef struct _PS2DynamicLight _PS2DynamicLight;
typedef struct _PS2Triangle _PS2Triangle;
typedef struct _PS2Quad _PS2Quad;
typedef struct _PS2QuadNoTex _PS2QuadNoTex;
typedef struct _PS2Sprite _PS2Sprite;
typedef struct _PS2SpriteDMA _PS2SpriteDMA;
typedef struct _PS2SpriteVertex _PS2SpriteVertex;
typedef struct _PS2Line _PS2Line;
typedef struct _PS2LineDMA _PS2LineDMA;
typedef struct _PS2LineVertex _PS2LineVertex;
typedef struct PS2_GeneralPrim PS2_GeneralPrim;
typedef struct VisibleSphere VisibleSphere;
typedef struct _VramLink _VramLink;
typedef struct _VramTextureHeader _VramTextureHeader;
typedef struct _TexEnvOpaque _TexEnvOpaque;
typedef struct _TexEnvTranslucent _TexEnvTranslucent;
typedef struct _VramTracker _VramTracker;
typedef struct _PS2LoadImage _PS2LoadImage;
typedef struct _VramPixelPacket _VramPixelPacket;
typedef struct _VramTexEnvOpaquePacket _VramTexEnvOpaquePacket;
typedef struct _VramTexEnvTranslucentPacket _VramTexEnvTranslucentPacket;
typedef struct _ImageBlock _ImageBlock;
typedef struct _ImageInfo _ImageInfo;
typedef struct GameCheat GameCheat;
typedef struct debug_dispatch_t debug_dispatch_t;
typedef struct debug_format_t debug_format_t;
typedef struct _ControllerRecord _ControllerRecord;
typedef struct _RecordedDemo _RecordedDemo;
typedef struct _TextureItem _TextureItem;
typedef struct _ZBucket _ZBucket;
typedef struct StencilBufferPrim StencilBufferPrim;
typedef struct VAnim VAnim;
typedef struct __SAnim __SAnim;
typedef struct __AttackItem __AttackItem;
typedef struct _ObjProp _ObjProp;
typedef struct _ObjState _ObjState;
typedef struct _ObjSaveData _ObjSaveData;
typedef struct _ObjSplinter _ObjSplinter;
typedef struct _GravitateData _GravitateData;
typedef struct _ThrowData _ThrowData;
typedef struct _BurningData _BurningData;
typedef struct _RealignData _RealignData;
typedef struct _HoverData _HoverData;
typedef struct _CuttingPlaneData _CuttingPlaneData;
typedef struct _ObjCamera _ObjCamera;
typedef struct _ObjSound _ObjSound;
typedef struct _DoorData _DoorData;
typedef struct _FadeData _FadeData;
typedef struct _CollisionData _CollisionData;
typedef struct _MotionInterface _MotionInterface;
typedef struct _ObjWeaponAttributes _ObjWeaponAttributes;
typedef struct __Projectile __Projectile;
typedef struct __ObjectEngagement __ObjectEngagement;
typedef struct _PhysicsProp _PhysicsProp;
typedef struct EventTypeStructure EventTypeStructure;
typedef struct AttributesReference AttributesReference;
typedef struct _GlobalData _GlobalData;
typedef struct EventSoundStream EventSoundStream;
typedef struct FontColor FontColor;
typedef struct __textEntry __textEntry;
typedef struct RAWHeader RAWHeader;
typedef struct timImage timImage;
typedef struct timFileHeader timFileHeader;
typedef struct FontPos FontPos;
typedef struct __GlyphData __GlyphData;
typedef struct _GlyphTuneData _GlyphTuneData;
typedef struct KeyCfgNameStruct KeyCfgNameStruct;
typedef struct JoypadMappingStruct JoypadMappingStruct;
typedef struct AnalogueData AnalogueData;
typedef struct ControllerPacket ControllerPacket;
typedef struct checkable checkable;
typedef struct checker checker;
typedef struct MemTracker MemTracker;
typedef struct VisibleInstance VisibleInstance;
typedef struct _RAZCNTRL_Key _RAZCNTRL_Key;
typedef struct _RAZCNTRL_StringKey _RAZCNTRL_StringKey;
typedef struct _RAZCNTRL_Command _RAZCNTRL_Command;
typedef struct _RAZCNTRL_String _RAZCNTRL_String;
typedef struct _WeaponData _WeaponData;
typedef struct _WeaponProp _WeaponProp;
typedef struct BlockResolveList BlockResolveList;
typedef struct BlockInfo BlockInfo;
typedef struct BlockList BlockList;
typedef struct _ResolveLoadCallbackInfo _ResolveLoadCallbackInfo;
typedef struct SignalInfo SignalInfo;
typedef struct SignalResetStruct SignalResetStruct;
typedef struct _VramLoader _VramLoader;
typedef struct _VramLoadCallbackInfo _VramLoadCallbackInfo;
typedef struct AnimName AnimName;
typedef struct DOSHEADER DOSHEADER;
typedef struct LPDOSHEADER_s LPDOSHEADER_s;
typedef struct PEDIRECTORYENTRY PEDIRECTORYENTRY;
typedef struct LPPEDIRECTORYENTRY_s LPPEDIRECTORYENTRY_s;
typedef struct PEHEADER PEHEADER;
typedef struct LPPEHEADER_s LPPEHEADER_s;
typedef struct PESECTIONHEADER PESECTIONHEADER;
typedef struct LPPESECTIONHEADER_s LPPESECTIONHEADER_s;
typedef struct PEEXPORTTABLE PEEXPORTTABLE;
typedef struct LPPEEXPORTTABLE_s LPPEEXPORTTABLE_s;
typedef struct PEIMPORTTABLE PEIMPORTTABLE;
typedef struct LPPEIMPORTTABLE_s LPPEIMPORTTABLE_s;
typedef struct PERELOCHEADER PERELOCHEADER;
typedef struct LPPERELOCHEADER_s LPPERELOCHEADER_s;
typedef struct PEHANDLE PEHANDLE;
typedef struct LPPEHANDLE_s LPPEHANDLE_s;
typedef struct _LoadStatus _LoadStatus;
typedef struct _MapInfo _MapInfo;
typedef struct _MonsterStateFuncs _MonsterStateFuncs;
typedef struct _MonsterStateChoice _MonsterStateChoice;
typedef struct _MonsterBehaviorFuncs _MonsterBehaviorFuncs;
typedef struct _MonsterBehaviorChoice _MonsterBehaviorChoice;
typedef struct _MonsterFunctionTable _MonsterFunctionTable;
typedef struct _BehaviorAmbientWanderData _BehaviorAmbientWanderData;
typedef struct _BehaviorAmbientFleeData _BehaviorAmbientFleeData;
typedef struct _BehaviorBirdFleeData _BehaviorBirdFleeData;
typedef struct _ProjectileData _ProjectileData;
typedef struct __ProjectileProp __ProjectileProp;
typedef struct _InteractData _InteractData;
typedef struct _FireData _FireData;
typedef struct _InteractProp _InteractProp;
typedef struct _InteractWeaponData _InteractWeaponData;
typedef struct _InteractSaveData _InteractSaveData;
typedef struct _CollectibleData _CollectibleData;
typedef struct _CollectibleProp _CollectibleProp;
typedef struct _CollectibleSaveData _CollectibleSaveData;
typedef struct _PuzzleData _PuzzleData;
typedef struct _PuzzleSaveData _PuzzleSaveData;
typedef struct _PuzzleAnim _PuzzleAnim;
typedef struct _SourceInterface _SourceInterface;
typedef struct _KeyInterface _KeyInterface;
typedef struct _LockInterface _LockInterface;
typedef struct _EnableInterface _EnableInterface;
typedef struct _PuzzleProp _PuzzleProp;
typedef struct RadarInfo RadarInfo;
typedef struct _MonsterWaypoint _MonsterWaypoint;
typedef struct _BehaviorSoulFleeData _BehaviorSoulFleeData;
typedef struct _BehaviorSentryiTrackData _BehaviorSentryiTrackData;
typedef struct _BehaviorSentryiWarnData _BehaviorSentryiWarnData;
typedef struct _BehaviorSentryiAttackData _BehaviorSentryiAttackData;
typedef struct _BehaviorSentryiSetTriggeredData _BehaviorSentryiSetTriggeredData;
typedef struct _G2PoolMemPool_Type _G2PoolMemPool_Type;
typedef struct _G2AnimSegKeyflagInfo_Type _G2AnimSegKeyflagInfo_Type;
typedef struct _G2AnimDecompressChannelInfo_Type _G2AnimDecompressChannelInfo_Type;
typedef struct _G2AnimChanStatusBlockPool_Type _G2AnimChanStatusBlockPool_Type;
typedef struct _G2AnimControllerPool_Type _G2AnimControllerPool_Type;
typedef struct _G2AnimInterpStateBlockPool_Type _G2AnimInterpStateBlockPool_Type;
typedef struct _G2AppDataVM_Type _G2AppDataVM_Type;
typedef struct _PROFHDR _PROFHDR;
typedef struct _PROFSAMPLE _PROFSAMPLE;
typedef struct DECI2_HDR DECI2_HDR;
typedef struct ps2DrawEnv ps2DrawEnv;
typedef struct ps2BlitEnv ps2BlitEnv;
typedef struct blitChunk blitChunk;
typedef struct BackBufferCopy BackBufferCopy;
typedef struct _MSwitchTransition _MSwitchTransition;
typedef struct _MSwitchState _MSwitchState;
typedef struct _MSwitchData _MSwitchData;
typedef struct _MSwitchSaveData _MSwitchSaveData;
typedef struct _MSwitchProp _MSwitchProp;
typedef struct __CannedSound __CannedSound;
typedef struct __AlarmData __AlarmData;
typedef struct __Idle __Idle;
typedef struct __ThrowItem __ThrowItem;
typedef struct __EngagedInstance __EngagedInstance;
typedef struct __FitPoint __FitPoint;
typedef struct __SensoryData __SensoryData;
typedef struct _SoundRamp _SoundRamp;
typedef struct __Player __Player;
typedef struct PlayerSaveData PlayerSaveData;
typedef struct _TuneData _TuneData;
typedef struct RazielData RazielData;
typedef struct _PuzzleInitData _PuzzleInitData;
typedef struct _SwitchData _SwitchData;
typedef struct _SwitchSaveData _SwitchSaveData;
typedef struct _SwitchProp _SwitchProp;
typedef struct _BlockData _BlockData;
typedef struct _BlockProp _BlockProp;
typedef struct __razController __razController;
typedef struct LocalizationHeader LocalizationHeader;
typedef struct sceIpuRAW8 sceIpuRAW8;
typedef struct sceIpuRAW16 sceIpuRAW16;
typedef struct sceIpuRGB32 sceIpuRGB32;
typedef struct sceIpuRGB16 sceIpuRGB16;
typedef struct sceIpuINDX4 sceIpuINDX4;
typedef struct sceIpuDmaEnv sceIpuDmaEnv;
typedef struct sceMpegCbDataError sceMpegCbDataError;
typedef struct sceMpegCbDataTimeStamp sceMpegCbDataTimeStamp;
typedef struct sceMpegCbDataStr sceMpegCbDataStr;
typedef union sceMpegCbData sceMpegCbData;
typedef struct sceMpeg sceMpeg;
typedef struct TimeStamp TimeStamp;
typedef struct ViBuf ViBuf;
typedef struct VideoDec VideoDec;
typedef struct ReadBuf ReadBuf;
typedef struct VoData VoData;
typedef struct VoTag VoTag;
typedef struct VoBuf VoBuf;
typedef struct SpuStreamHeader SpuStreamHeader;
typedef struct SpuStreamBody SpuStreamBody;
typedef struct AudioDec AudioDec;
typedef struct Rect Rect;
typedef union QWORD QWORD;
typedef struct menu_format_t menu_format_t;
typedef struct menu_stack_t menu_stack_t;
typedef struct menu_item_t menu_item_t;
typedef struct menu_t menu_t;
typedef struct Extents2d Extents2d;
typedef struct menu_sound_entry_t menu_sound_entry_t;
typedef struct sceMcIconSys sceMcIconSys;
typedef struct sceMcTblGetDir sceMcTblGetDir;
typedef struct _MemCardFile _MemCardFile;
typedef struct _MemCardInfo _MemCardInfo;
typedef struct _AnimatedData _AnimatedData;
typedef struct _AnimatedProp _AnimatedProp;
typedef struct _AnimatedSaveData _AnimatedSaveData;
typedef struct SoftSegment SoftSegment;
typedef struct SoftBody SoftBody;
typedef struct _ArmorData _ArmorData;
typedef struct _ArmorProp _ArmorProp;
typedef struct IOPFileInfo IOPFileInfo;
typedef struct _IOPStream _IOPStream;
typedef struct PS2ShadowModel PS2ShadowModel;
typedef struct mips_frame_info mips_frame_info;
typedef struct mips_args mips_args;
typedef struct DIstruct DIstruct;
typedef union DIunion DIunion;
typedef struct fp_number_type fp_number_type;
typedef union FLO_union_type FLO_union_type;
typedef union ieee_double_shape_type ieee_double_shape_type;
typedef union ieee_float_shape_type ieee_float_shape_type;
typedef struct __siov __siov;
typedef struct __suio __suio;
typedef union __ieee_double_shape_type __ieee_double_shape_type;
typedef union __ieee_float_shape_type __ieee_float_shape_type;
typedef union double_union double_union;
typedef struct lconv lconv;
typedef struct flock flock;
typedef struct eflock eflock;
typedef struct stat stat;
typedef struct malloc_chunk malloc_chunk;
typedef struct _G2PoolMem_Type _G2PoolMem_Type; /* opaque: no definition in the dump */
typedef struct rtx_def rtx_def; /* opaque: no definition in the dump */

enum __fdlibm_version {
	__fdlibm_ieee = -1,
	__fdlibm_svid = 0,
	__fdlibm_xopen = 1,
	__fdlibm_posix = 2
};
typedef enum __fdlibm_version __fdlibm_version;

enum {
	__no_type_class = -1,
	__void_type_class = 0,
	__integer_type_class = 1,
	__char_type_class = 2,
	__enumeral_type_class = 3,
	__boolean_type_class = 4,
	__pointer_type_class = 5,
	__reference_type_class = 6,
	__offset_type_class = 7,
	__real_type_class = 8,
	__complex_type_class = 9,
	__function_type_class = 10,
	__method_type_class = 11,
	__record_type_class = 12,
	__union_type_class = 13,
	__array_type_class = 14,
	__string_type_class = 15,
	__set_type_class = 16,
	__file_type_class = 17,
	__lang_type_class = 18
};

enum {
	FONTCOL_UNCOLORED = 0,
	FONTCOL_HALFBRIGHT = 1,
	FONTCOL_BLUE = 2,
	FONTCOL_RED = 3,
	FONTCOL_YELLOW = 4,
	FONTCOL_HEADING = 5,
	FONTCOL_DYNAMIC = 6,
	NUM_FONTCOLS = 7
};

enum {
	GAMEVALUE_TYPE_SOUNDVALUES = 0,
	MAX_GAMEVALUE_TYPES = 1
};

enum {
	SOUNDVALUE_SFXVOL = 0,
	SOUNDVALUE_MUSVOL = 1,
	MAX_SOUNDVALUES = 2
};

enum {
	G2Euler_XAxis = 0,
	G2Euler_YAxis = 1,
	G2Euler_ZAxis = 2,
	G2Euler_WAxis = 3
};

enum _G2AnimControllerType_Enum {
	G2ANIM_CTRLRTYPE_DUMMY = 0,
	G2ANIM_CTRLRTYPE_FUNCTION = 128,
	G2ANIM_CTRLRTYPE_SET_WORLDROT = 8,
	G2ANIM_CTRLRTYPE_SET_LOCALROT = 10,
	G2ANIM_CTRLRTYPE_ADD_LOCALROT = 14,
	G2ANIM_CTRLRTYPE_SET_WORLDSCALE = 16,
	G2ANIM_CTRLRTYPE_SET_LOCALSCALE = 18,
	G2ANIM_CTRLRTYPE_ADD_LOCALSCALE = 22,
	G2ANIM_CTRLRTYPE_SET_WORLDTRANS = 32,
	G2ANIM_CTRLRTYPE_SET_LOCALTRANS = 34,
	G2ANIM_CTRLRTYPE_ADD_LOCALTRANS = 38,
	G2ANIM_CTRLRTYPE_ADD_WORLDROT = 76,
	G2ANIM_CTRLRTYPE_ADD_WORLDSCALE = 84,
	G2ANIM_CTRLRTYPE_ADD_WORLDTRANS = 100,
	G2ANIM_CTRLRTYPE_COUNT = 101
};
typedef enum _G2AnimControllerType_Enum _G2AnimControllerType_Enum;

enum _G2AnimChannelID_Enum {
	G2ANIM_CHANNEL_XROT = 0,
	G2ANIM_CHANNEL_XQUAT = 0,
	G2ANIM_CHANNEL_YROT = 1,
	G2ANIM_CHANNEL_YQUAT = 1,
	G2ANIM_CHANNEL_ZROT = 2,
	G2ANIM_CHANNEL_ZQUAT = 2,
	G2ANIM_CHANNEL_PAD0 = 3,
	G2ANIM_CHANNEL_WQUAT = 3,
	G2ANIM_CHANNEL_XSCALE = 4,
	G2ANIM_CHANNEL_YSCALE = 5,
	G2ANIM_CHANNEL_ZSCALE = 6,
	G2ANIM_CHANNEL_PAD1 = 7,
	G2ANIM_CHANNEL_XTRANS = 8,
	G2ANIM_CHANNEL_YTRANS = 9,
	G2ANIM_CHANNEL_ZTRANS = 10,
	G2ANIM_CHANNEL_PAD2 = 11
};
typedef enum _G2AnimChannelID_Enum _G2AnimChannelID_Enum;

enum _G2AnimCallbackMsg_Enum {
	G2ANIM_MSG_DONE = 1,
	G2ANIM_MSG_LOOPPOINT = 2,
	G2ANIM_MSG_SECTION_INTERPDONE = 3,
	G2ANIM_MSG_SEGCTRLR_INTERPDONE = 4,
	G2ANIM_MSG_SWALARMSET = 5,
	G2ANIM_MSG_PLAYEFFECT = 6
};
typedef enum _G2AnimCallbackMsg_Enum _G2AnimCallbackMsg_Enum;

enum _G2AnimCompressionType_Enum {
	G2ANIM_COMPRESSION_RAW = 0,
	G2ANIM_COMPRESSION_CONSTANT = 1,
	G2ANIM_COMPRESSION_LINEAR = 2
};
typedef enum _G2AnimCompressionType_Enum _G2AnimCompressionType_Enum;

enum {
	OBJECTTRACKER_UNUSED = 0,
	OBJECTTRACKER_LOADING = 1,
	OBJECTTRACKER_USED = 2,
	OBJECTTRACKER_DUMP = 3,
	OBJECTTRACKER_LOADING_VRAM = 4
};

enum MATH3D_AXIS {
	AXIS_X = 0,
	AXIS_Y = 1,
	AXIS_Z = 2,
	AXIS_NEG_X = 3,
	AXIS_NEG_Y = 4,
	AXIS_NEG_Z = 5
};
typedef enum MATH3D_AXIS MATH3D_AXIS;

enum {
	MUSIC_CMD_PLANE_SHIFT = 0,
	MUSIC_CMD_SHUTDOWN = 1
};

enum {
	MUSIC_STATE_IDLE = 0,
	MUSIC_STATE_INITIAL_MUSIC_LOADING = 1,
	MUSIC_STATE_INITIAL_MUSIC_LOADED = 2,
	MUSIC_STATE_TRANSITION_MUSIC_LOADING = 3,
	MUSIC_STATE_TRANSITION_MUSIC_LOADED = 4,
	MUSIC_STATE_WAIT_FOR_MAIN_MUSIC_END = 5,
	MUSIC_STATE_MAIN_MUSIC_ENDED = 6,
	MUSIC_STATE_NEW_MAIN_MUSIC_LOADING = 7,
	MUSIC_STATE_NEW_MAIN_MUSIC_LOADED = 8,
	MUSIC_STATE_WAIT_FOR_TRANSITION_END = 9,
	MUSIC_STATE_TRANSITION_ENDED = 10,
	MUSIC_STATE_MAIN_MUSIC_FADEING_OUT = 11,
	MUSIC_STATE_DUMP_MUSIC_FADEOUT_DONE = 12,
	MUSIC_STATE_PLANE_SHIFT_FADEOUT_DONE = 13,
	NUM_MUSIC_STATES = 14
};

enum {
	OBJECT_SOUND_TYPE_PERIODIC = 0,
	OBJECT_SOUND_TYPE_EVENT = 1,
	OBJECT_SOUND_TYPE_DEATH = 2,
	OBJECT_SOUND_TYPE_HIT_WALL = 3,
	OBJECT_SOUND_TYPE_THROWN = 4,
	OBJECT_SOUND_TYPE_EXTENDED_EVENT = 5
};

enum {
	SPS_STATE_UNINITIALIZED = 0,
	SPS_STATE_INITIAL_DELAY = 1,
	SPS_STATE_SOUND_ON = 2,
	SPS_STATE_SOUND_OFF = 3
};

enum {
	ETS_STATE_UNINITIALIZED = 0,
	ETS_STATE_IDLE = 1,
	ETS_STATE_PLAY = 2
};

enum {
	ETSEXT_STATE_UNINITIALIZED = 0,
	ETSEXT_STATE_IDLE = 1,
	ETSEXT_STATE_PLAY = 2,
	ETSEXT_STATE_PLAY_ON = 3
};

enum {
	OSS_STATE_UNINITIALIZED = 0,
	OSS_STATE_IDLE = 1,
	OSS_STATE_INITIAL_DELAY = 2,
	OSS_STATE_PLAY = 3
};

enum SoundModifers {
	SOUND_MODIFIER_NONE = 0,
	SOUND_MODIFIER_SUSPENSE = 1,
	SOUND_MODIFIER_DANGER = 2,
	SOUND_MODIFIER_COMBAT = 3,
	SOUND_MODIFIER_PROBLEM_SOLVING = 4,
	SOUND_MODIFIER_SWIMMING = 5,
	SOUND_MODIFIER_OUTDOORS = 6,
	SOUND_MODIFIER_DAY = 7,
	SOUND_MODIFIER_NIGHT = 8,
	SOUND_MODIFIER_GLYPH_ROOM = 9,
	SOUND_MODIFIER_FORGE = 10,
	SOUND_MODIFIER_CLAN_BATTLE = 11,
	SOUND_MODIFIER_SPECTRAL = 12,
	SOUND_MODIFIER_PROBLEM_SOLVED = 13,
	SOUND_MODIFIER_EXTRA_MUSIC = 14,
	SOUND_MODIFIER_BOSS_LOADED = 15,
	SOUND_MODIFIER_MAX = 16
};
typedef enum SoundModifers SoundModifers;

enum MemoryType {
	MEMORY_TYPE_STATIC = 0,
	MEMORY_TYPE_OBJECT = 1,
	MEMORY_TYPE_AREA = 2,
	MEMORY_TYPE_PLAYER = 3,
	MEMORY_TYPE_MUSIC = 4,
	MEMORY_TYPE_FONT = 5,
	MEMORY_TYPE_GAME_STATIC = 6,
	MEMORY_TYPE_VRAM = 7,
	MEMORY_TYPE_CD_LOADER = 8,
	MEMORY_TYPE_CINEMA = 9,
	MEMORY_TYPE_ARG_FILE = 10,
	MEMORY_TYPE_TIM = 11,
	MEMORY_TYPE_SCRIPT_CODE = 12,
	MEMORY_TYPE_FX = 13,
	MEMORY_TYPE_INSTANCECOLL = 14,
	MEMORY_TYPE_AADSOUND = 15,
	MEMORY_TYPE_REARRANGE_VRAM = 16,
	MEMORY_TYPE_SAMPLER_DEMO = 17,
	MEMORY_TYPE_SAVEINFO = 18,
	MEMORY_TYPE_EMULATE2MEG = 19,
	MEMORY_TYPE_INTERPOLATION = 20,
	MEMORY_TYPE_CHARACTERSTATE = 21,
	MEMORY_TYPE_PATHS = 22,
	MEMORY_TYPE_MONSTERDATA = 23,
	MEMORY_TYPE_SCREEN_MORPH = 24,
	MEMORY_TYPE_G2ANIMATION = 25,
	MEMORY_TYPE_PHYSOBDATA = 26,
	MEMORY_TYPE_BEHAVIORSTACK = 27,
	MEMORY_TYPE_WALLCRDATA = 28,
	MEMORY_TYPE_GLYPHDATA = 29,
	MEMORY_TYPE_REAVERDATA = 30,
	MEMORY_TYPE_SKINBOSDATA = 31,
	MEMORY_TYPE_RONINBSSDATA = 32,
	MEMORY_TYPE_INSTVTXCOLOR = 33,
	MEMORY_TYPE_ALUKABSSDATA = 34,
	MEMORY_TYPE_TEMP_BUFFER = 35,
	MEMORY_TYPE_HUNTERDATA = 36,
	MEMORY_TYPE_PRIESTSDATA = 37,
	MEMORY_TYPE_MORBOSSDATA = 38,
	MEMORY_TYPE_PALETTE_SAVE = 39,
	MEMORY_TYPE_VMTABLE = 40,
	MEMORY_TYPE_WALBOSSDATA = 41,
	MEMORY_TYPE_WALBOSBDATA = 42,
	MEMORY_TYPE_MCARD = 43,
	MEMORY_TYPE_RELOCATABLE_CD_LOADER = 44,
	MEMORY_TYPE_MENU = 45,
	MEMORY_TYPE_KAINDATA = 46,
	MEMORY_TYPE_SFX = 47,
	MEMORY_TYPE_SRAM_DEFRAG = 48,
	MEMORY_TYPE_OBJECTCACHE = 49,
	MEMORY_TYPE_TEXTUREDATA = 50,
	MEMORY_TYPE_IMAGE = 51,
	MEMORY_TYPE_MONSTERNAV = 52,
	MEMORY_TYPE_SNDSTRM = 53,
	MEMORY_TYPE_VRAM_LOAD = 54,
	MEMORY_TYPE_DRAM_LOAD = 55,
	MEMORY_TYPE_DEMO_RECORDING = 56,
	MEMORY_TYPE_MATRIX = 57,
	MEMORY_TYPE_IOP = 58,
	MEMORY_MAX_TYPES = 59
};
typedef enum MemoryType MemoryType;

enum {
	MIDICHANNEL_STATUS_ON = 0,
	MIDICHANNEL_STATUS_NOTEON = 1,
	MIDICHANNEL_STATUS_NOTEOFF = 2
};

enum {
	MIDI_SUCCES = 0,
	MIDIFILE_BADHEADER = 1,
	MIDIFILE_BADTRACK = 2,
	MIDI_INVALIDSONG = 3
};

enum InterfaceItemIds {
	PUBLOGO_SCREEN = 0,
	CRYLOGO_SCREEN = 1,
	MOVIE_KAININTRO = 2,
	MOVIE_VERSE = 3,
	MOVIE_CREDITS = 4,
	MOVIE_RAZLOGO = 5,
	NUM_INTERFACE_ITEMS = 6
};
typedef enum InterfaceItemIds InterfaceItemIds;

enum InterfaceItemTypes {
	IFACE_ITEM_MOVIE = 0,
	IFACE_ITEM_SCREEN = 1
};
typedef enum InterfaceItemTypes InterfaceItemTypes;

enum {
	MS_NONE = 0,
	MS_PLAYGAME = 1,
	MS_LOADLEVEL = 2,
	MS_PLAY_CINEMATIC = 3,
	MS_SAMPLER_DEMO_DONE = 4,
	MS_ATTRACT_MODE = 5,
	MS_DISPLAY_MAIN_MENU = 6,
	MS_SHOW_STATIC_SCREEN = 7
};

enum {
	MENU_SCREEN_START = 0,
	MENU_SCREEN_OPTIONS = 1,
	MENU_SCREEN_LOAD = 2,
	MENU_SCREEN_EXTRAS = 3
};

enum DEBUG_LINE_TYPE {
	DEBUG_LINE_TYPE_BIT = 0,
	DEBUG_LINE_TYPE_LONG = 1,
	DEBUG_LINE_TYPE_SHORT = 2,
	DEBUG_LINE_TYPE_BYTE = 3,
	DEBUG_LINE_TYPE_SIGNED_BYTE = 4,
	DEBUG_LINE_TYPE_SEGMENT_BYTE = 5,
	DEBUG_LINE_TYPE_ACTION = 6,
	DEBUG_LINE_TYPE_ACTION_WITH_LINE = 7,
	DEBUG_LINE_TYPE_MENU = 8,
	DEBUG_LINE_TYPE_FLOAT = 9,
	DEBUG_LINE_TYPE_OBJECT = 10,
	DEBUG_LINE_TYPE_ENDLIST = 11,
	DEBUG_LINE_TYPE_FORMAT = 12,
	DEBUG_LINE_TYPE_INFO = 13
};
typedef enum DEBUG_LINE_TYPE DEBUG_LINE_TYPE;

enum {
	queryHitState = 0,
	queryWhatAmI = 1,
	queryPhysicalAbility = 2,
	queryPhysicalMode = 3,
	queryPhysicalClass = 4,
	queryPhysicalStatus = 5,
	queryPosition = 6,
	queryOrientation = 7,
	queryExtraOrientation = 8,
	queryWaterStatus = 9,
	queryMode = 10,
	queryPlane = 11,
	queryLookatMatrix = 12,
	querySpatialMatrix = 13,
	queryIDMatrix = 14,
	queryNeckSegment = 15,
	queryFacingNormal = 16,
	queryG2CurrentAnimation = 17,
	queryG2CurrentFrame = 18,
	queryGlyphStatus = 19,
	queryPhysicalBreakOffData = 20,
	queryPhysicalInteractProperties = 21,
	queryPhysicalDraftData = 22,
	queryPhysicalSwitchProperties = 23,
	querySaveData = 24,
	querySoulForce = 25,
	queryPhysicalEnable = 26,
	queryPhysicalDisable = 27,
	queryPhysicalSwitchData = 28,
	queryPhysicalCollectibleData = 29,
	querySpecialInfo = 30,
	queryHealth = 31,
	queryMana = 32,
	queryBoosted = 33,
	queryPlayerAutoFaceInstance = 34,
	queryPlayerCurrentAutoFaceInstance = 35,
	queryMessageQueue = 36,
	queryRazielAbilities = 37,
	queryDangerous = 38,
	queryShadowSegments = 39,
	queryEngagementMask = 40,
	queryReaverStatus = 41,
	queryPlayerEvent = 42,
	queryPlayerEventHistory = 43,
	queryPlayerAtMaxHealth = 44,
	queryHeldInstance = 45,
	queryManaMax = 46,
	queryInvincible = 47,
	queryBlockSave = 48,
	queryPlayerInPuppetShow = 49,
	queryAnimFXMode = 50,
	queryDropSound = 51,
	queryWeaponAttributes = 52,
	queryThrowData = 53,
	queryLightTable = 54,
	queryGravitateData = 55,
	queryCollisionSphereData = 56,
	queryRazielDecapitateAnim = 57,
	queryLockCameraBehind = 58,
	queryMotionInterface = 59,
	queryWeaponInterface = 60,
	queryPuzzleSourceInterface = 61,
	queryPuzzleKeyInterface = 62,
	queryPuzzleLockInterface = 63,
	queryPuzzleMode = 64,
	querySelectedGlyph = 65,
	queryBeingSucked = 66,
	queryHitByWhat = 67,
	queryLightColor = 68,
	queryLightRadius = 69,
	queryProjectileData = 70,
	queryFatalityMask = 71,
	queryVulnerableMask = 72,
	queryBurningData = 73,
	queryRealignData = 74,
	queryDoorData = 75,
	queryDamageMultiplier = 76,
	queryBounceOffset = 77,
	queryAttackSequence = 78,
	queryLungeAttackSequence = 79,
	queryRunAttackSequence = 80,
	queryLowAttackSequence = 81,
	queryHeavyAttackSequence = 82,
	queryLowHeavyAttackSequence = 83,
	queryLowLungeAttackSequence = 84,
	queryAirAttackSequence = 85,
	queryFatalClass = 86,
	queryFatalID = 87,
	queryEffectsDisableMask = 88,
	queryAttackBlocked = 89,
	queryObjectEngagement = 90,
	queryMSwitchState = 91,
	queryDisabled = 92,
	queryAutofaceMode = 93,
	queryCollisionData = 94,
	queryNumSegmentBoxes = 95,
	querySegmentBoxes = 96,
	queryCurrentSoulReaver = 97,
	queryAttacking = 98,
	queryAttackFollowThrough = 99,
	queryObjectShouldSave = 100,
	queryEnemy = 101,
	queryAttacker = 102,
	queryBackstabber = 103,
	queryWeaponInstance = 104,
	queryIgnore = 105,
	queryHitSignal = 106,
	queryCheckPoint = 107,
	queryPuzzleMask = 108,
	queryNoHitIdList = 109,
	queryNumNoHit = 110,
	queryDistance = 111,
	queryHoverData = 112,
	queryCuttingPlaneData = 113
};

enum {
	OBJECT_HUD = 0,
	OBJECT_FLAME = 1,
	OBJECT_WATERFX = 2,
	OBJECT_PATHS = 3,
	OBJECT_SOUL = 4,
	OBJECT_PARTICLE = 5,
	OBJECT_KNIFE = 6,
	OBJECT_STICK = 7,
	OBJECT_XBOW = 8,
	OBJECT_FTHROW = 9,
	OBJECT_MOREGG = 10,
	OBJECT_WCEGG = 11,
	OBJECT_EGGSAC = 12,
	OBJECT_MOUND = 13,
	OBJECT_FORCE = 14,
	OBJECT_GLPHICON = 15,
	OBJECT_HEALTHU = 16,
	OBJECT_SREAVER = 17,
	OBJECT_WARP_FACE = 18,
	OBJECT_BOX = 19,
	OBJECT_SPHERE = 20,
	OBJECT_LAST = 21
};

enum {
	DEATH_NO_NOTHING = -1,
	DEATH_NO_FX = 0,
	DEATH_DEFAULT = 1,
	DEATH_DEREZ = 2,
	DEATH_SPIRAL = 3,
	DEATH_SHRINK = 4,
	DEATH_EXPLODE = 5,
	DEATH_SM_EXPLODE = 6,
	DEATH_FADEOUT = 7,
	DEATH_MAX_EFFECTS = 8
};

enum {
	VRAMFILE_FILE_HEADER = 0,
	VRAMFILE_TEXTURE_HEADER = 1,
	VRAMFILE_CLUT = 2,
	VRAMFILE_PIXELS = 3,
	VRAMFILE_SKIP = 4
};

enum SavedIDEnums {
	SAVED_ID_NONE = 0,
	SAVED_ID_INSTANCE = 1,
	SAVED_ID_EVENT = 2,
	SAVED_ID_LEVEL = 3,
	SAVED_ID_SMALL_INSTANCE = 4,
	SAVED_ID_INSTANCE_WITH_INTRO = 5,
	SAVED_ID_INSTANCE_SPLINE = 6,
	SAVED_ID_EVENT_SMALL_VARS = 7,
	SAVED_ID_MAX_IDS = 8
};
typedef enum SavedIDEnums SavedIDEnums;

enum language_t {
	language_default = -1,
	language_english = 0,
	language_french = 1,
	language_german = 2,
	language_italian = 3,
	language_spanish = 4,
	language_japanese = 5,
	language_portugese = 6,
	language_num_states = 7
};
typedef enum language_t language_t;

enum localstr_t {
	LOCALSTR_BOGUS = 0,
	LOCALSTR_format_card = 1,
	LOCALSTR_accessing_card = 2,
	LOCALSTR_back = 3,
	LOCALSTR_cancel = 4,
	LOCALSTR_choose_load_file = 5,
	LOCALSTR_choose_save_file = 6,
	LOCALSTR_confirm = 7,
	LOCALSTR_continue = 8,
	LOCALSTR_controller = 9,
	LOCALSTR_create_file = 10,
	LOCALSTR_creating = 11,
	LOCALSTR_demos = 12,
	LOCALSTR_do_not_remove_card = 13,
	LOCALSTR_done = 14,
	LOCALSTR_exit_game = 15,
	LOCALSTR_formatting = 16,
	LOCALSTR_go_back = 17,
	LOCALSTR_go_back2 = 18,
	LOCALSTR_insert_card = 19,
	LOCALSTR_insert_card_free = 20,
	LOCALSTR_invalid_card = 21,
	LOCALSTR_load_failed = 22,
	LOCALSTR_load_game = 23,
	LOCALSTR_loading = 24,
	LOCALSTR_music = 25,
	LOCALSTR_new_game = 26,
	LOCALSTR_no = 27,
	LOCALSTR_no_card = 28,
	LOCALSTR_card_full = 29,
	LOCALSTR_card_not_enough_blocks = 30,
	LOCALSTR_ok = 31,
	LOCALSTR_options = 32,
	LOCALSTR_overwrite_game = 33,
	LOCALSTR_paused = 34,
	LOCALSTR_press_start = 35,
	LOCALSTR_query_format_card = 36,
	LOCALSTR_query_overwrite = 37,
	LOCALSTR_query_quit = 38,
	LOCALSTR_quit_game = 39,
	LOCALSTR_resume_game = 40,
	LOCALSTR_save_failed = 41,
	LOCALSTR_save_game = 42,
	LOCALSTR_save_ok = 43,
	LOCALSTR_saving = 44,
	LOCALSTR_sound = 45,
	LOCALSTR_start_game = 46,
	LOCALSTR_start_new_game = 47,
	LOCALSTR_try_card_again = 48,
	LOCALSTR_unformatted_card = 49,
	LOCALSTR_vibration_off = 50,
	LOCALSTR_vibration_on = 51,
	LOCALSTR_compass_on = 52,
	LOCALSTR_compass_off = 53,
	LOCALSTR_dark_diary = 54,
	LOCALSTR_map = 55,
	LOCALSTR_voice = 56,
	LOCALSTR_loading_data = 57,
	LOCALSTR_warning_one = 58,
	LOCALSTR_warning_two = 59,
	LOCALSTR_yes = 60,
	LOCALSTR_Hint0 = 61,
	LOCALSTR_Hint1 = 62,
	LOCALSTR_Hint2 = 63,
	LOCALSTR_Hint3 = 64,
	LOCALSTR_Hint4 = 65,
	LOCALSTR_Hint5 = 66,
	LOCALSTR_Hint6 = 67,
	LOCALSTR_Hint7 = 68,
	LOCALSTR_Hint8 = 69,
	LOCALSTR_Hint9 = 70,
	LOCALSTR_Hint10 = 71,
	LOCALSTR_Hint11 = 72,
	LOCALSTR_Hint12 = 73,
	LOCALSTR_Hint13 = 74,
	LOCALSTR_Hint14 = 75,
	LOCALSTR_Hint15 = 76,
	LOCALSTR_Hint16 = 77,
	LOCALSTR_Hint17 = 78,
	LOCALSTR_Hint18 = 79,
	LOCALSTR_Hint19 = 80,
	LOCALSTR_Hint20 = 81,
	LOCALSTR_Hint21 = 82,
	LOCALSTR_Hint22 = 83,
	LOCALSTR_Hint23 = 84,
	LOCALSTR_Hint24 = 85,
	LOCALSTR_Hint25 = 86,
	LOCALSTR_Hint26 = 87,
	LOCALSTR_Hint27 = 88,
	LOCALSTR_Hint28 = 89,
	LOCALSTR_Hint29 = 90,
	LOCALSTR_Hint30 = 91,
	LOCALSTR_Hint31 = 92,
	LOCALSTR_Hint32 = 93,
	LOCALSTR_Hint33 = 94,
	LOCALSTR_Hint34 = 95,
	LOCALSTR_Hint35 = 96,
	LOCALSTR_Hint36 = 97,
	LOCALSTR_Hint37 = 98,
	LOCALSTR_Hint38 = 99,
	LOCALSTR_Hint39 = 100,
	LOCALSTR_Hint40 = 101,
	LOCALSTR_Hint41 = 102,
	LOCALSTR_Hint42 = 103,
	LOCALSTR_Hint43 = 104,
	LOCALSTR_Hint44 = 105,
	LOCALSTR_Hint45 = 106,
	LOCALSTR_Hint46 = 107,
	LOCALSTR_Hint47 = 108,
	LOCALSTR_Hint48 = 109,
	LOCALSTR_Hint49 = 110,
	LOCALSTR_Hint50 = 111,
	LOCALSTR_Hint51 = 112,
	LOCALSTR_Hint52 = 113,
	LOCALSTR_Hint53 = 114,
	LOCALSTR_Hint54 = 115,
	LOCALSTR_Hint55 = 116,
	LOCALSTR_Hint56 = 117,
	LOCALSTR_Hint57 = 118,
	LOCALSTR_Hint58 = 119,
	LOCALSTR_Hint59 = 120,
	LOCALSTR_Hint60 = 121,
	LOCALSTR_Hint61 = 122,
	LOCALSTR_Hint62 = 123,
	LOCALSTR_Hint63 = 124,
	LOCALSTR_Hint64 = 125,
	LOCALSTR_Hint65 = 126,
	LOCALSTR_Hint66 = 127,
	LOCALSTR_Hint67 = 128,
	LOCALSTR_Hint68 = 129,
	LOCALSTR_Hint69 = 130,
	LOCALSTR_Hint70 = 131,
	LOCALSTR_Hint71 = 132,
	LOCALSTR_Hint72 = 133,
	LOCALSTR_Hint73 = 134,
	LOCALSTR_Hint74 = 135,
	LOCALSTR_Hint75 = 136,
	LOCALSTR_Hint76 = 137,
	LOCALSTR_Hint77 = 138,
	LOCALSTR_Hint78 = 139,
	LOCALSTR_Hint79 = 140,
	LOCALSTR_hint80 = 141,
	LOCALSTR_EndOfHintStrings = 142,
	LOCALSTR_no_controller = 143,
	LOCALSTR_save_progress = 144,
	LOCALSTR_mono_sound = 145,
	LOCALSTR_stereo_sound = 146,
	LOCALSTR_controller_removed = 147,
	LOCALSTR_vmu_recognized = 148,
	LOCALSTR_demo = 149,
	LOCALSTR_MAP_REGION_TSD1 = 150,
	LOCALSTR_MAP_REGION_TSD2 = 151,
	LOCALSTR_MAP_REGION_STRONGHOLD = 152,
	LOCALSTR_MAP_REGION_RETREAT = 153,
	LOCALSTR_MAP_REGION_LIGHT = 154,
	LOCALSTR_MAP_REGION_DARK = 155,
	LOCALSTR_MAP_REGION_AIR = 156,
	LOCALSTR_MAP_REGION_FIRE = 157,
	LOCALSTR_MAP_REGION_LAKE = 158,
	LOCALSTR_MAP_REGION_PATH = 159,
	LOCALSTR_MAP_REGION_PILLARS = 160,
	LOCALSTR_MAP_REGION_RUINS = 161,
	LOCALSTR_MAP_REGION_SWAMP = 162,
	LOCALSTR_MAP_REGION_MOUNTAINS = 163,
	LOCALSTR_MAP_REGION_SAVE1 = 164,
	LOCALSTR_MAP_REGION_SAVE2 = 165,
	LOCALSTR_MAP_REGION_SAVE3 = 166,
	LOCALSTR_MAP_REGION_SAVE4 = 167,
	LOCALSTR_MAP_REGION_SAVE5 = 168,
	LOCALSTR_lang_e = 169,
	LOCALSTR_lang_f = 170,
	LOCALSTR_lang_i = 171,
	LOCALSTR_lang_g = 172,
	LOCALSTR_lang_s = 173,
	LOCALSTR_sr_a = 174,
	LOCALSTR_sr_b = 175,
	LOCALSTR_sr_c = 176,
	LOCALSTR_sr_d = 177,
	LOCALSTR_sr_e = 178,
	LOCALSTR_extras = 179,
	LOCALSTR_extra_movie_1 = 180,
	LOCALSTR_extra_movie_2 = 181,
	LOCALSTR_extra_movie_3 = 182,
	LOCALSTR_extra_movie_4 = 183,
	LOCALSTR_extra_movie_5 = 184,
	LOCALSTR_extra_movie_6 = 185,
	LOCALSTR_extra_movie_7 = 186,
	LOCALSTR_NUM_ITEMS = 187
};
typedef enum localstr_t localstr_t;

enum {
	MONSTER_BEHAVIOR_AMBIENT = 0,
	MONSTER_BEHAVIOR_PUPATE = 1,
	MONSTER_BEHAVIOR_AMBUSH = 2,
	MONSTER_BEHAVIOR_DEAD = 3,
	MONSTER_BEHAVIOR_WANDER = 4,
	MONSTER_BEHAVIOR_PATROL = 5,
	MONSTER_BEHAVIOR_COMBAT = 6,
	MONSTER_BEHAVIOR_PROJECTILE = 7,
	MONSTER_BEHAVIOR_FLEE = 8,
	MONSTER_BEHAVIOR_STANDIDLE = 9,
	MONSTER_BEHAVIOR_TRACK = 10,
	MONSTER_BEHAVIOR_PURSUERUNEND = 11,
	MONSTER_BEHAVIOR_RUNATTACK = 12,
	MONSTER_BEHAVIOR_SPAWN = 13,
	MONSTER_BEHAVIOR_SKIPIFNOENEMY = 14,
	MONSTER_BEHAVIOR_REVIVE = 15,
	MONSTER_BEHAVIOR_KILLED = 16,
	MONSTER_BEHAVIOR_GRABBED = 17,
	MONSTER_BEHAVIOR_FALL = 18,
	MONSTER_BEHAVIOR_HIT = 19,
	MONSTER_BEHAVIOR_FATAL = 20,
	MONSTER_BEHAVIOR_STUNNED = 21,
	MONSTER_BEHAVIOR_PUPPET = 22,
	MONSTER_BEHAVIOR_PARRY = 23,
	MONSTER_BEHAVIOR_NOTICE = 24,
	MONSTER_BEHAVIOR_GOTOVALIDUNIT = 25,
	MONSTER_BEHAVIOR_LOOKAROUND = 26,
	MONSTER_BEHAVIOR_PHYSMOVEEND = 27,
	MONSTER_BEHAVIOR_THROWN = 28,
	MONSTER_BEHAVIOR_DISMEMBER = 29,
	MONSTER_BEHAVIOR_RESTORE = 30,
	MONSTER_BEHAVIOR_OTHERPLANE = 31,
	MONSTER_BEHAVIOR_STUNTOFATAL = 32,
	MONSTER_BEHAVIOR_RECOVER = 33,
	MONSTER_BEHAVIOR_BLOCKEDHIT = 34,
	MONSTER_BEHAVIOR_MOVETOPOS = 35,
	MONSTER_BEHAVIOR_SPAWNED = 36,
	MONSTER_BEHAVIOR_HITTOFATAL = 37,
	MONSTER_NUM_BEHAVIORS = 38
};

enum {
	MONSTER_DIRECTION_NONE = -1,
	MONSTER_DIRECTION_LEFT = 0,
	MONSTER_DIRECTION_FORWARD = 1,
	MONSTER_DIRECTION_RIGHT = 2,
	MONSTER_DIRECTION_BACK = 3,
	NUM_MONSTER_DIRECTIONS = 4
};

enum MonsterAnim {
	MONSTER_ANIM_WALK = 0,
	MONSTER_ANIM_RUN = 1,
	MONSTER_ANIM_GRABBED = 2,
	MONSTER_ANIM_STUNNED = 3,
	MONSTER_ANIM_STANCE_HEALTHY = 4,
	MONSTER_ANIM_STANCE_VULNERABLE = 5,
	MONSTER_ANIM_STUNNED_RECOVERY = 6,
	MONSTER_ANIM_IMPALED = 7,
	MONSTER_ANIM_STRUGGLE = 8,
	MONSTER_ANIM_BREAKHOLD = 9,
	MONSTER_ANIM_THROWN = 10,
	MONSTER_ANIM_IMPACT = 11,
	MONSTER_ANIM_LANDONFEET = 12,
	MONSTER_ANIM_FALL = 13,
	MONSTER_ANIM_BREAKFALL = 14,
	MONSTER_ANIM_SPINLAND = 15,
	MONSTER_ANIM_IMPALEDEATH = 16,
	MONSTER_ANIM_GETUP = 17,
	MONSTER_ANIM_GENERALDEATH = 18,
	MONSTER_ANIM_MISSILEIMPALEDEATH = 19,
	MONSTER_ANIM_SURPRISED = 20,
	MONSTER_ANIM_AGONY = 21,
	MONSTER_ANIM_PUPATE = 22,
	MONSTER_ANIM_NOTICE = 23,
	MONSTER_ANIM_SOULSUCK = 24,
	MONSTER_ANIM_IMPALEVERT = 25,
	MONSTER_ANIM_FALLOVER = 26,
	MONSTER_ANIM_EMBRACE = 27,
	MONSTER_ANIM_SHOVE = 28,
	MONSTER_ANIM_FLIPSWITCH = 29,
	MONSTER_ANIM_ALARM = 30,
	MONSTER_ANIM_SUCKED = 31,
	MONSTER_ANIM_DECAPITATE = 32,
	MONSTER_ANIM_JUMPFORWARD = 33,
	MONSTER_ANIM_JUMPLEFT = 34,
	MONSTER_ANIM_JUMPRIGHT = 35,
	MONSTER_ANIM_JUMPBACK = 36,
	MONSTER_ANIM_FATALEVADELEFT = 37,
	MONSTER_ANIM_FATALEVADERIGHT = 38,
	MONSTER_ANIM_FATALEVADEBACK = 39,
	MONSTER_ANIM_PURSUERUN = 40,
	MONSTER_ANIM_PURSUERUNEND = 41,
	MONSTER_ANIM_SHUFFLELEFT = 42,
	MONSTER_ANIM_SHUFFLERIGHT = 43,
	MONSTER_ANIM_FALLDEATH = 44,
	MONSTER_ANIM_HITFRONT = 45,
	MONSTER_ANIM_HITBACK = 46,
	MONSTER_ANIM_HITLEFT = 47,
	MONSTER_ANIM_HITRIGHT = 48,
	MONSTER_ANIM_HITLOW = 49,
	MONSTER_ANIM_HITLIGHTFRONT = 50,
	MONSTER_ANIM_HITLIGHTBACK = 51,
	MONSTER_ANIM_HITLIGHTLEFT = 52,
	MONSTER_ANIM_HITLIGHTRIGHT = 53,
	MONSTER_ANIM_HITLIGHTLOW = 54,
	MONSTER_ANIM_HITHEAVYFRONT = 55,
	MONSTER_ANIM_HITHEAVYBACK = 56,
	MONSTER_ANIM_HITHEAVYLEFT = 57,
	MONSTER_ANIM_HITHEAVYRIGHT = 58,
	MONSTER_ANIM_HITHEAVYLOW = 59,
	MONSTER_ANIM_HITUNBLOCKABLEFRONT = 60,
	MONSTER_ANIM_HITUNBLOCKABLEBACK = 61,
	MONSTER_ANIM_HITUNBLOCKABLELEFT = 62,
	MONSTER_ANIM_HITUNBLOCKABLERIGHT = 63,
	MONSTER_ANIM_HITUNBLOCKABLELOW = 64,
	MONSTER_ANIM_HITALTUNBLOCKABLEFRONT = 65,
	MONSTER_ANIM_HITALTUNBLOCKABLEBACK = 66,
	MONSTER_ANIM_HITALTUNBLOCKABLELEFT = 67,
	MONSTER_ANIM_HITALTUNBLOCKABLERIGHT = 68,
	MONSTER_ANIM_HITALTUNBLOCKABLELOW = 69,
	MONSTER_ANIM_TOSTUNNED = 70,
	MONSTER_ANIM_WALLHITDEATH = 71,
	MONSTER_ANIM_BURROWIN = 72,
	MONSTER_ANIM_BURROWOUT = 73,
	MONSTER_ANIM_SPAWNED = 74,
	MONSTER_NUM_ANIMS = 75
};

enum MonsterState {
	MONSTER_STATE_STANDINGIDLE = 0,
	MONSTER_STATE_PUPATE = 1,
	MONSTER_STATE_PUPATEBURST = 2,
	MONSTER_STATE_AMBUSH = 3,
	MONSTER_STATE_AMBUSHJUMP = 4,
	MONSTER_STATE_REANIMATE = 5,
	MONSTER_STATE_FALLOVER = 6,
	MONSTER_STATE_DEATH = 7,
	MONSTER_STATE_FINALDEATHFADEOUT = 8,
	MONSTER_STATE_WANDERIDLE = 9,
	MONSTER_STATE_WANDER = 10,
	MONSTER_STATE_PATROLIDLE = 11,
	MONSTER_STATE_TRACK = 12,
	MONSTER_STATE_COMBAT = 13,
	MONSTER_STATE_EVADE = 14,
	MONSTER_STATE_ATTACK = 15,
	MONSTER_STATE_DRAIN = 16,
	MONSTER_STATE_PROJECTILE = 17,
	MONSTER_STATE_FLEE = 18,
	MONSTER_STATE_FALL = 19,
	MONSTER_STATE_SLIDE = 20,
	MONSTER_STATE_LANDONGROUND = 21,
	MONSTER_STATE_THROWN = 22,
	MONSTER_STATE_ROLLONGROUND = 23,
	MONSTER_STATE_WALLIMPACT = 24,
	MONSTER_STATE_HIT = 25,
	MONSTER_STATE_SHATTERHIT = 26,
	MONSTER_STATE_SHATTERDEATH = 27,
	MONSTER_STATE_TERRAINIMPALEDEATH = 28,
	MONSTER_STATE_IMPALEHIT = 29,
	MONSTER_STATE_IMPALEDEATH = 30,
	MONSTER_STATE_MISSILEIMPALEDEATH = 31,
	MONSTER_STATE_DECAPITATE = 32,
	MONSTER_STATE_BURN = 33,
	MONSTER_STATE_STUNNED = 34,
	MONSTER_STATE_STUNRECOVERY = 35,
	MONSTER_STATE_GRABBED = 36,
	MONSTER_STATE_BREAKHOLD = 37,
	MONSTER_STATE_PUPPET = 38,
	MONSTER_STATE_PARRY = 39,
	MONSTER_STATE_SURPRISED = 40,
	MONSTER_STATE_NOTICE = 41,
	MONSTER_STATE_ALARM = 42,
	MONSTER_STATE_LOOKAROUND = 43,
	MONSTER_STATE_LOOKAROUNDIDLE = 44,
	MONSTER_STATE_IMMOLATEHIT = 45,
	MONSTER_STATE_IMMOLATE = 46,
	MONSTER_STATE_DECAPITATEHIT = 47,
	MONSTER_STATE_TRACKIDLE = 48,
	MONSTER_STATE_DISMEMBER = 49,
	MONSTER_STATE_REPOSITION = 50,
	MONSTER_STATE_PURSUERUNEND = 51,
	MONSTER_STATE_PARRYWAIT = 52,
	MONSTER_STATE_BLOCKEDHIT = 53,
	MONSTER_STATE_EVADECOMPLETE = 54,
	MONSTER_STATE_FALLDEATH = 55,
	MONSTER_STATE_BLOCK = 56,
	MONSTER_STATE_BLOCKCONTINUE = 57,
	MONSTER_STATE_ATTACKCOMPLETE = 58,
	MONSTER_STATE_CLAWHIT = 59,
	MONSTER_STATE_CLAW = 60,
	MONSTER_STATE_TRACKGOODUNIT = 61,
	MONSTER_STATE_TRACKGOODUNITIDLE = 62,
	MONSTER_STATE_TOSTUNNED = 63,
	MONSTER_STATE_OTHERPLANEIDLE = 64,
	MONSTER_STATE_OTHERPLANE = 65,
	MONSTER_STATE_PROJECTILEIDLE = 66,
	MONSTER_STATE_FINALDEATHCUTTINGPLANE = 67,
	MONSTER_STATE_WALLHITDEATH = 68,
	MONSTER_STATE_ATTACKCOMPLETEBACK = 69,
	MONSTER_STATE_TAUNT = 70,
	MONSTER_STATE_MOVETOPOS = 71,
	MONSTER_STATE_SPAWNIDLE = 72,
	MONSTER_STATE_SPAWN = 73,
	MONSTER_STATE_PROJECTILECOMPLETE = 74,
	MONSTER_STATE_SPAWNCOMPLETE = 75,
	MONSTER_STATE_SPAWNED = 76,
	MONSTER_STATE_TRACKROTATE = 77,
	MONSTER_STATE_BLOODREAVERHIT = 78,
	MONSTER_STATE_BLOODREAVERDEATH = 79,
	MONSTER_NUM_STATES = 80
};
typedef enum MonsterState MonsterState;

enum option_ctrl_t {
	option_ctrl_bogus = 0,
	option_ctrl_none = 1,
	option_ctrl_select = 2,
	option_ctrl_left = 3,
	option_ctrl_right = 4,
	option_ctrl_num_states = 5
};
typedef enum option_ctrl_t option_ctrl_t;

enum {
	MONSTER_ATTACKRESULT_FAIL = 0,
	MONSTER_ATTACKRESULT_SUCCESS = 1,
	MONSTER_ATTACKRESULT_TOOCLOSE = 2,
	MONSTER_ATTACKRESULT_TOOFAR = 3,
	MONSTER_ATTACKRESULT_BLOCKEDLEFT = 4,
	MONSTER_ATTACKRESULT_BLOCKEDRIGHT = 5
};

enum {
	MONSTER_EVADERESULT_NONE = 0,
	MONSTER_EVADERESULT_EVADE = 1,
	MONSTER_EVADERESULT_BLOCK = 2
};

enum {
	INSTANCE_STAT_NONE = 0,
	INSTANCE_STAT_DISTANCE = 1,
	INSTANCE_STAT_NUMFACES = 2,
	INSTANCE_STAT_NUMVERTS = 3,
	INSTANCE_STAT_NUMBONES = 4,
	INSTANCE_STAT_INSTANCETIME = 5,
	INSTANCE_STAT_DRAMSIZE = 6,
	INSTANCE_STAT_VRAMSIZE = 7,
	INSTANCE_STAT_NUMTEXTURES = 8,
	INSTANCE_STAT_DCACHEMISSES = 9,
	NUM_INSTANCE_STATS = 10
};

enum {
	Cheat_SoulReaver = 0,
	Cheat_ShiftAnyTime = 1,
	Cheat_FireReaver = 2,
	Cheat_ReaverImbueAriel = 3,
	Cheat_Constrict = 4,
	Cheat_ReaverImbueKain = 5,
	Cheat_SunlightGlyph = 6,
	Cheat_MaxMagic = 7,
	Cheat_PassThrough = 8,
	Cheat_Swim = 9,
	Cheat_StoneGlyph = 10,
	Cheat_SoundGlyph = 11,
	Cheat_FireGlyph = 12,
	Cheat_RefillHealth = 13,
	Cheat_RaiseHealthCoil = 14,
	Cheat_FillHealthCoil = 15,
	Cheat_RefillMagic = 16,
	Cheat_WallCrawl = 17,
	Cheat_Force = 18,
	Cheat_HurtRaziel = 19,
	Cheat_ReaverImbueFire = 20,
	Cheat_ForceGlyph = 21,
	Cheat_WaterGlyph = 22,
	NUM_CHEATS = 23
};

enum {
	CK_LEFT = 0,
	CK_RIGHT = 1,
	CK_DOWN = 2,
	CK_UP = 3,
	CK_TRI = 4,
	CK_CIRC = 5,
	CK_X = 6,
	CK_L2R2 = 7,
	CK_L2 = 8,
	CK_R2 = 9,
	NUM_CHEAT_KEYS = 10
};

enum ATTR_ENUM {
	ATTR_VARIABLE = 1,
	ATTR_DESTROY = 2,
	ATTR_POSITION = 3,
	ATTR_X = 4,
	ATTR_Y = 5,
	ATTR_Z = 6,
	ATTR_ROTATION = 7,
	ATTR_HIDE = 8,
	ATTR_UNHIDE = 9,
	ATTR_SPLINE = 10,
	ATTR_START = 11,
	ATTR_STOP = 12,
	ATTR_KEYFRAME = 13,
	ATTR_MODE = 14,
	ATTR_DIRECTION = 15,
	ATTR_WATERSTATUS = 16,
	ATTR_MODE_STATUS = 17,
	ATTR_SPECTRAL = 18,
	ATTR_MATERIAL = 19,
	ATTR_MAXKEYFRAMES = 20,
	ATTR_SPHERE = 21,
	ATTR_CYLINDER = 22,
	ATTR_BOX = 23,
	ATTR_CALL = 24,
	ATTR_KEYPAD = 25,
	ATTR_PLAYTO = 26,
	ATTR_ANIMATE = 27,
	ATTR_ANIMATION = 28,
	ATTR_SETCLIP = 29,
	ATTR_SETACTION = 30,
	ATTR_FORWARD = 31,
	ATTR_BACKWARD = 32,
	ATTR_SWITCHON = 33,
	ATTR_SWITCHOFF = 34,
	ATTR_SETSWITCHON = 35,
	ATTR_SETSWITCHOFF = 36,
	ATTR_DISABLE = 37,
	ATTR_ENABLE = 38,
	ATTR_FRAME = 39,
	ATTR_PLAY = 40,
	ATTR_PLAYLOOP = 41,
	ATTR_ON = 42,
	ATTR_MOVEZ = 43,
	ATTR_WATERMOVEZ = 44,
	ATTR_TIMER = 45,
	ATTR_CROSSED = 46,
	ATTR_SETPIECE = 47,
	ATTR_NODRAW = 48,
	ATTR_NOCOLLIDE = 49,
	ATTR_PUSH = 50,
	ATTR_STARTEFFECT = 51,
	ATTR_SPECIALINFO = 52,
	ATTR_CONSTRICT = 53,
	ATTR_CLOCKWISE = 54,
	ATTR_COUNTERCLOCKWISE = 55,
	ATTR_ATTACKED = 56,
	ATTR_INTRO = 57,
	ATTR_INTRODUCED = 58,
	ATTR_BOOST = 59,
	ATTR_WATERLEVEL = 60,
	ATTR_CAMERA = 61,
	ATTR_SMOOTH = 62,
	ATTR_SPLINE0 = 63,
	ATTR_SPLINE1 = 64,
	ATTR_TILT = 65,
	ATTR_DISTANCE = 66,
	ATTR_RESTOREMODE = 67,
	ATTR_SETFOCUS = 68,
	ATTR_SCREENWIPE = 69,
	ATTR_MOVETOPOS = 70,
	ATTR_SETPOSITION = 71,
	ATTR_SETROTATION = 72,
	ATTR_STOPCONTROL = 73,
	ATTR_STARTCONTROL = 74,
	ATTR_MOVETOROT = 75,
	ATTR_STARTALLMONSTERCONTROL = 76,
	ATTR_STOPALLMONSTERCONTROL = 77,
	ATTR_LOOKAT = 78,
	ATTR_STOPLOOKAT = 79,
	ATTR_GRAVITY = 80,
	ATTR_STARTVERTEXMORPH = 81,
	ATTR_STOPVERTEXMORPH = 82,
	ATTR_SNOW = 83,
	ATTR_RAIN = 84,
	ATTR_LIGHTGROUP = 85,
	ATTR_SPECTRALLIGHTGROUP = 86,
	ATTR_SHAKE = 87,
	ATTR_BURN = 88,
	ATTR_SOFTX = 89,
	ATTR_SOFTY = 90,
	ATTR_SOFTZ = 91,
	ATTR_TABLE = 92,
	ATTR_INDEX = 93,
	ATTR_HOSTINSTANCE = 94,
	ATTR_INTERPFRAMES = 95,
	ATTR_USEFLOORLIGHTING = 96,
	ATTR_ROLL = 97,
	ATTR_MOVETOROLL = 98,
	ATTR_FORCED = 99,
	ATTR_SET = 100,
	ATTR_SETSLIDEANGLE = 101,
	ATTR_RESETSLIDEANGLE = 102,
	ATTR_GOTOUNDERWORLD = 103,
	ATTR_ENABLEABILITY = 104,
	ATTR_FOGFAR = 105,
	ATTR_FOGNEAR = 106,
	ATTR_ANIMTOPOS = 107,
	ATTR_SUNLIGHT = 108,
	ATTR_CINEMATICDONE = 109,
	ATTR_INTERACTED = 110,
	ATTR_INTERACTEDAUX = 111,
	ATTR_ROTATETOWARD = 112,
	ATTR_SOUND = 113,
	ATTR_SET_VOLUME = 114,
	ATTR_SET_PITCH = 115,
	ATTR_SPEED = 116,
	ATTR_ROT_SPEED = 117,
	ATTR_SKIP_PUPPET_SHOW = 118,
	ATTR_SETMUSICVARIABLE = 119,
	ATTR_ABILITY = 120,
	ATTR_DEAD = 121,
	ATTR_SHOWHINT = 122,
	ATTR_SWITCHTURNINGON = 123,
	ATTR_SWITCHTURNINGOFF = 124,
	ATTR_ENDGAMENOW = 125,
	ATTR_DESTROYED = 126,
	ATTR_STOPHINT = 127,
	ATTR_FIRE = 128,
	ATTR_PLAYMOVIE = 129,
	ATTR_INUNIT = 130,
	ATTR_PLAYEREVENT = 131,
	ATTR_PLAYEREVENTHISTORY = 132,
	ATTR_KILLSPFCHINT = 133,
	ATTR_CURRENTHINT = 134,
	ATTR_GLYPH_MENU_OPEN = 135,
	ATTR_FULL_HEALTH = 136,
	ATTR_SLUAGH_SUCKABLE = 137,
	ATTR_HOLDING_ID = 138,
	ATTR_PAD_SHOCK = 139,
	ATTR_KAIN_ZAP = 140,
	ATTR_KAIN_ZAPSTOP = 141,
	ATTR_NOKEYPADINPUT = 142,
	ATTR_DEADORDESTROYED = 143,
	ATTR_DYING = 144,
	ATTR_KEYPAD_PRESS = 145,
	ATTR_SPAWN = 146,
	ATTR_TEXTUREMORPH = 147,
	ATTR_FOG = 148,
	ATTR_RESTORE = 149,
	ATTR_RESET = 150,
	ATTR_RELATIVEPOSITION = 151,
	ATTR_STOPALLEFFECTS = 152,
	ATTR_LOCKED = 153,
	ATTR_FADE_START = 154,
	ATTR_FADE_VALUE = 155,
	ATTR_FADE_FRAMES = 156,
	ATTR_REAVER_ON = 157,
	ATTR_REAVER_OFF = 158,
	ATTR_FX_OFF_SCREEN = 159,
	ATTR_BLADE_ON = 160,
	ATTR_BLADE_OFF = 161,
	ATTR_AIMED = 162,
	ATTR_PRINT = 163,
	ATTR_STREAMPLAY = 164,
	ATTR_STREAMWAIT = 165,
	ATTR_STREAMSTOP = 166,
	ATTR_STREAMCREATE = 167,
	ATTR_MOTIONBLUR = 168,
	ATTR_SETSOUNDMIC = 169,
	ATTR_LOOP = 170,
	ATTR_CLOCK = 171,
	ATTR_STARTCLOCK = 172,
	ATTR_STOPCLOCK = 173,
	ATTR_READCLOCK = 174,
	ATTR_RESETCLOCK = 175,
	ATTR_DRAINENERGY = 176,
	ATTR_DAMAGE = 177,
	ATTR_MUSICVOL = 178,
	ATTR_ENABLE_ANIM_SOUND = 179,
	ATTR_DISABLE_ANIM_SOUND = 180,
	ATTR_ENABLE_ANIM_EFFECT = 181,
	ATTR_DISABLE_ANIM_EFFECT = 182,
	ATTR_IMBUED = 183,
	ATTR_ENDPROC = 184,
	ATTR_DOORINIT = 185,
	ATTR_HITSIGNAL = 186,
	ATTR_RANDOM = 187,
	ATTR_DOORADDSPLINE = 188,
	ATTR_FOGCOLOR = 189,
	ATTR_EXECUTE_DOOR = 190,
	ATTR_PLAYMUSIC = 191,
	ATTR_PLAYAMBIENT = 192,
	ATTR_DOORADDCAMERA = 193,
	ATTR_WAIT = 194,
	ATTR_BENDMODE = 195,
	ATTR_MAPGOAL = 196,
	ATTR_STOPALLEFFECTSBYGROUP = 197,
	ATTR_LINKTOPARENT = 198,
	ATTR_DYNAMICLINKTOPARENT = 199,
	ATTR_UNLINKFROMPARENT = 200,
	ATTR_FOCALLENGTH = 201,
	ATTR_ATTACHSTARTSOUND = 202,
	ATTR_ATTACHENDSOUND = 203,
	ATTR_MAX_ATTRIBUTES = 204
};
typedef enum ATTR_ENUM ATTR_ENUM;

enum AttributeType {
	ATTR_TYPE_NONE = 0,
	ATTR_TYPE_OBJECT = 1,
	ATTR_TYPE_NUMBER = 2,
	ATTR_TYPE_VECTOR2D = 3,
	ATTR_TYPE_VECTOR3D = 4
};
typedef enum AttributeType AttributeType;

enum AttributeMode {
	ATTR_MODE_NONE = 0,
	ATTR_MODE_QUERY = 1,
	ATTR_MODE_VARIABLE = 2,
	ATTR_MODE_FUNCTION = 3,
	ATTR_MODE_SPLINE = 4
};
typedef enum AttributeMode AttributeMode;

enum menu_ctrl_t {
	menu_ctrl_none = 0,
	menu_ctrl_up = 1,
	menu_ctrl_down = 2,
	menu_ctrl_left = 3,
	menu_ctrl_right = 4,
	menu_ctrl_engage = 5,
	menu_ctrl_cancel = 6,
	menu_ctrl_start = 7,
	menu_ctrl_num_items = 8
};
typedef enum menu_ctrl_t menu_ctrl_t;

enum JOYPAD_CONFIGURABLE_CONTROLS {
	JPC_JUMP = 0,
	JPC_DEVOUR = 1,
	JPC_FATAL = 2,
	JPC_ATTACK = 3,
	JPC_CROUCH = 4,
	JPC_SNEAK = 5,
	JPC_PAN_LEFT = 6,
	JPC_PAN_RIGHT = 7,
	JPC_SELECT = 8,
	NUM_JOYPAD_CONFIGURABLE_CONTROLS = 9
};
typedef enum JOYPAD_CONFIGURABLE_CONTROLS JOYPAD_CONFIGURABLE_CONTROLS;

enum JOYPAD_KEYS {
	JPK_LU = 0,
	JPK_LD = 1,
	JPK_LL = 2,
	JPK_LR = 3,
	JPK_RU = 4,
	JPK_RD = 5,
	JPK_RL = 6,
	JPK_RR = 7,
	JPK_FLT = 8,
	JPK_FLB = 9,
	JPK_FRT = 10,
	JPK_FRB = 11,
	JPK_I = 12,
	JPK_J = 13,
	JPK_START = 14,
	JPK_SELECT = 15,
	NUM_JOYPAD_KEYS = 16
};
typedef enum JOYPAD_KEYS JOYPAD_KEYS;

enum INPUT_PREFERENCES {
	IP_JOYPAD = 0,
	IP_KEYBOARD_SCHEME1 = 1,
	NUM_INPUT_PREFERENCES = 2
};
typedef enum INPUT_PREFERENCES INPUT_PREFERENCES;

enum {
	RESOLVE_LOAD_START = 0,
	RESOLVE_LOAD_SECTION_RELOCS = 1,
	RESOLVE_LOAD_SECTION_BODY = 2
};

enum {
	GAME_VALUE_IS_GEX_ON_FIRE = 0,
	GAME_VALUE_GEX_MAX = 1
};

enum {
	VRAM_LOAD_START = 0,
	VRAM_LOAD_HEADER = 1,
	VRAM_LOAD_CLUT = 2,
	VRAM_LOAD_BODY = 3,
	VRAM_LOAD_SKIP_BODY = 4
};

enum PlayMode {
	MODE_PLAY = 0,
	MODE_STEP = 1,
	MODE_LOOP = 2,
	MODE_STEP_LOOP = 3,
	MODE_NUM_MODES = 4
};
typedef enum PlayMode PlayMode;

enum {
	FROG_STATE_HOP = 80,
	FROG_NUM_STATES = 81
};

enum {
	FROG_BEHAVIOR_HOP = 100,
	FROG_NUM_BEHAVIORS = 101
};

enum {
	BIRD_ANIM_TAKEOFF = 0,
	BIRD_ANIM_LAND = 1,
	BIRD_ANIM_RISE = 2,
	BIRD_ANIM_LANDING = 3
};

enum {
	BIRD_STATE_LANDING = 80,
	BIRD_STATE_LAND = 81,
	BIRD_STATE_RISE = 82,
	BIRD_STATE_RISING = 83,
	BIRD_STATE_WANDERRISE = 84,
	BIRD_STATE_WANDERRISING = 85,
	BIRD_NUM_STATES = 86
};

enum {
	BIRD_BEHAVIOR_LANDING = 100,
	BIRD_BEHAVIOR_LAND = 101,
	BIRD_NUM_BEHAVIORS = 102
};

enum {
	FISH_STATE_JUMP = 80,
	FISH_NUM_STATES = 81
};

enum {
	FISH_BEHAVIOR_JUMP = 100,
	FISH_BEHAVIOR_JUMPING = 101,
	FISH_NUM_BEHAVIORS = 102
};

enum {
	FISH_ANIM_JUMP = 0
};

enum {
	SLUAGH_ANIM_SOULSUCK = 0
};

enum {
	SLUAGH_STATE_EAT = 80,
	SLUAGH_STATE_EATDONE = 81,
	SLUAGH_STATE_SOULSUCK = 82,
	SLUAGH_STATE_SUCKANIM = 83,
	SLUAGH_STATE_BECOMEVULNERABLE = 84,
	SLUAGH_NUM_STATES = 85
};

enum {
	SLUAGH_BEHAVIOR_SOULSUCK = 100,
	SLUAGH_BEHAVIOR_EAT = 101,
	SLUAGH_BEHAVIOR_FLEEIFNOHEALTH = 102,
	SLUAGH_BEHAVIOR_BECOMEVULNERABLE = 103,
	SLUAGH_BEHAVIOR_SKIPIFNOTHUNGRY = 104,
	SLUAGH_NUM_BEHAVIORS = 105
};

enum {
	SOUL_STATE_RETURNTOBODY = 80,
	SOUL_STATE_HOVER = 81,
	SOUL_STATE_SOULSUCK = 82,
	SOUL_NUM_STATES = 83
};

enum {
	SOUL_BEHAVIOR_FADE = 100,
	SOUL_BEHAVIOR_HOVER = 101,
	SOUL_BEHAVIOR_SOULSUCK = 102,
	SOUL_BEHAVIOR_RETURNTOBODY = 103,
	SOUL_NUM_BEHAVIORS = 104
};

enum {
	FREESOUL_STATE_RISE = 80,
	FREESOUL_NUM_STATES = 81
};

enum {
	FREESOUL_BEHAVIOR_RISE = 100,
	FREESOUL_NUM_BEHAVIORS = 101
};

enum {
	THRALL_SPECIALINFO_UP = 1
};

enum {
	THRALL_SETPIECE_RETURN = 0,
	THRALL_SETPIECE_EMERGE = 1,
	THRALL_SETPIECE_GOHOME = 2
};

enum {
	THRALL_ANIM_BURNRUN = 0,
	THRALL_ANIM_IMPALEDAMN = 1,
	THRALL_ANIM_IMPALEPULL = 2,
	THRALL_ANIM_IMPALEWALK = 3,
	THRALL_ANIM_IMPALERECOVERY = 4
};

enum {
	THRALL_STATE_IMPALEWANDERIDLE = 80,
	THRALL_STATE_IMPALEWANDER = 81,
	THRALL_STATE_IMPALERECOVER = 82,
	THRALL_STATE_BURNRUN = 83,
	THRALL_STATE_BURROWIN = 84,
	THRALL_STATE_BURROWOUT = 85,
	THRALL_STATE_EMERGE = 86,
	THRALL_STATE_BURROWINSTAY = 87,
	THRALL_NUM_STATES = 88
};

enum {
	THRALL_BEHAVIOR_UNDERWATER = 100,
	THRALL_BEHAVIOR_IMPALESTUMBLE = 101,
	THRALL_BEHAVIOR_RETURN = 102,
	THRALL_BEHAVIOR_EMERGE = 103,
	THRALL_BEHAVIOR_GOHOME = 104,
	THRALL_NUM_BEHAVIORS = 105
};

enum {
	SENTRYI_SETPIECE_INACTIVENOSOUND = 0,
	SENTRYI_SETPIECE_INACTIVE = 1,
	SENTRYI_SETPIECE_ACTIVE = 2
};

enum {
	SENTRYI_ANIM_OPEN = 0,
	SENTRYI_ANIM_CLOSE = 1,
	SENTRYI_ANIM_OPENLOOP = 2,
	SENTRYI_ANIM_CLOSENOSOUND = 3
};

enum {
	SENTRYI_STATE_TRACK = 80,
	SENTRYI_STATE_ATTACK = 81,
	SENTRYI_STATE_IDLEPREP = 82,
	SENTRYI_STATE_IDLE = 83,
	SENTRYI_STATE_CLOSE = 84,
	SENTRYI_STATE_OPEN = 85,
	SENTRYI_STATE_CLOSENOSOUND = 86,
	SENTRYI_NUM_STATES = 87
};

enum {
	SENTRYI_BEHAVIOR_BLINDED = 100,
	SENTRYI_BEHAVIOR_TRACK = 101,
	SENTRYI_BEHAVIOR_WARN = 102,
	SENTRYI_BEHAVIOR_ATTACK = 103,
	SENTRYI_BEHAVIOR_SETTRIGGERED = 104,
	SENTRYI_BEHAVIOR_STARTCLOSED = 105,
	SENTRYI_BEHAVIOR_DORMANT = 106,
	SENTRYI_BEHAVIOR_OPEN = 107,
	SENTRYI_BEHAVIOR_DONOTHINGINSPECTRAL = 108,
	SENTRYI_BEHAVIOR_INACTIVE = 109,
	SENTRYI_BEHAVIOR_INACTIVENOSOUND = 110,
	SENTRYI_NUM_BEHAVIORS = 111
};

enum {
	SHADES_SPECIALINFO_UP = 0
};

enum {
	SHADES_SETPIECE_RETURN = 0,
	SHADES_SETPIECE_EMERGE = 1
};

enum {
	SHADES_STATE_BURROWINSTAY = 80,
	SHADES_STATE_BURROWOUT = 81,
	SHADES_STATE_SUCKBACK = 82,
	SHADES_STATE_SUCKANIM = 83,
	SHADES_STATE_GOHOME = 84,
	SHADES_STATE_GOHOMEIDLE = 85,
	SHADES_STATE_GOHOMESUCKBACK = 86,
	SHADES_STATE_GOHOMESUCKANIM = 87,
	SHADES_STATE_EMERGE = 88
};

enum {
	SHADES_BEHAVIOR_GOHOME = 100,
	SHADES_BEHAVIOR_UNUSED0 = 101,
	SHADES_BEHAVIOR_UNUSED1 = 102,
	SHADES_BEHAVIOR_EMERGE = 103
};

enum {
	DEMON_SPECIALINFO_UP = 0
};

enum {
	DEMON_SETPIECE_RETURN = 0,
	DEMON_SETPIECE_EMERGE = 1,
	DEMON_SETPIECE_GOHOME = 2
};

enum {
	DEMON_STATE_TELEPORTIN = 80,
	DEMON_STATE_TELEPORTOUT = 81,
	DEMON_STATE_EMERGE = 82,
	DEMON_STATE_TELEPORTINSTAY = 83,
	DEMON_NUM_STATES = 84
};

enum {
	DEMON_BEHAVIOR_UNDERWATER = 100,
	DEMON_BEHAVIOR_UNUSED = 101,
	DEMON_BEHAVIOR_RETURN = 102,
	DEMON_BEHAVIOR_EMERGE = 103,
	DEMON_BEHAVIOR_GOHOME = 104,
	DEMON_BEHAVIOR_RETURNIMMEDIATE = 105,
	DEMON_NUM_BEHAVIORS = 106
};

enum {
	GENERATOR_SETPIECE_OFF = 0,
	GENERATOR_SETPIECE_ON = 1
};

enum sceDemoEndReason {
	SCE_DEMO_ENDREASON_ATTRACT_INTERRUPTED = 0,
	SCE_DEMO_ENDREASON_ATTRACT_COMPLETE = 1,
	SCE_DEMO_ENDREASON_PLAYABLE_INACTIVITY_TIMEOUT = 2,
	SCE_DEMO_ENDREASON_PLAYABLE_GAMEPLAY_TIMEOUT = 3,
	SCE_DEMO_ENDREASON_PLAYABLE_COMPLETE = 4,
	SCE_DEMO_ENDREASON_PLAYABLE_QUIT = 5
};
typedef enum sceDemoEndReason sceDemoEndReason;

enum {
	SAVE_BLOCKS = 3
};

enum sceMpegStrType {
	sceMpegStrM2V = 0,
	sceMpegStrIPU = 1,
	sceMpegStrPCM = 2,
	sceMpegStrADPCM = 3,
	sceMpegStrDATA = 4
};
typedef enum sceMpegStrType sceMpegStrType;

enum sceMpegCbType {
	sceMpegCbError = 0,
	sceMpegCbNodata = 1,
	sceMpegCbStopDMA = 2,
	sceMpegCbRestartDMA = 3,
	sceMpegCbBackground = 4,
	sceMpegCbTimeStamp = 5,
	sceMpegCbStr = 6
};
typedef enum sceMpegCbType sceMpegCbType;

enum menu_sound_t {
	menu_sound_none = 0,
	menu_sound_default = 1,
	menu_sound_select = 2,
	menu_sound_adjust = 3,
	menu_sound_engage = 4,
	menu_sound_pop = 5
};
typedef enum menu_sound_t menu_sound_t;

enum {
	MAX_MENUS = 5,
	MAX_ITEMS = 12,
	MAX_BYTES = 512,
	CURSOR = 16
};

enum sfx_t {
	sfx_sound = 0,
	sfx_music = 1,
	sfx_voice = 2,
	sfx_error = 3
};
typedef enum sfx_t sfx_t;

enum {
	MAX_RAW_VOLUME = 127,
	MAX_COOKED_VOLUME = 10
};

enum {
	MEMCARD_FILE_STATUS_AVAILABLE = 0,
	MEMCARD_FILE_STATUS_DIRECTORY = 1,
	MEMCARD_FILE_STATUS_USED = 2
};

enum {
	MEMCARD_ATTRIBUTES_FORMATTED = 0,
	MEMCARD_ATTRIBUTES_UNFORMATTED = 1,
	MEMCARD_ATTRIBUTES_NOCARD = 2,
	MEMCARD_ATTRIBUTES_CHANGED = 3
};

enum {
	MEMCARD_STATE_GETINFO = 0,
	MEMCARD_STATE_WAITINFO = 1,
	MEMCARD_STATE_GETDIR = 2,
	MEMCARD_STATE_WAITDIR = 3,
	MEMCARD_STATE_CREATEFILE = 4,
	MEMCARD_STATE_WAITCREATEFILE = 5,
	MEMCARD_STATE_SAVEFILE = 6,
	MEMCARD_STATE_WAITSAVEFILE = 7,
	MEMCARD_STATE_SAVEICONFILE = 8,
	MEMCARD_STATE_WAITSAVEICONFILE = 9,
	MEMCARD_STATE_LOADFILE = 10,
	MEMCARD_STATE_WAITLOADFILE = 11,
	MEMCARD_STATE_FORMATCARD = 12,
	MEMCARD_STATE_WAITFORMATCARD = 13,
	MEMCARD_STATE_ERROR = 14
};

enum {
	MEMCARD_COMMAND_SAVE = 0,
	MEMCARD_COMMAND_LOAD = 1,
	MEMCARD_COMMAND_FORMAT = 2,
	MEMCARD_COMMAND_NONE = 3
};

enum {
	MCFILE_STATE_OPEN = 0,
	MCFILE_STATE_WAITOPEN = 1,
	MCFILE_STATE_WRITE = 2,
	MCFILE_STATE_WAITWRITE = 3,
	MCFILE_STATE_READ = 4,
	MCFILE_STATE_WAITREAD = 5,
	MCFILE_STATE_CLOSE = 6,
	MCFILE_STATE_WAITCLOSE = 7
};

enum {
	ICON_STATE_INIT = 0,
	ICON_STATE_WRITESYS = 1,
	ICON_STATE_READICO1 = 2,
	ICON_STATE_WRITEICO1 = 3,
	ICON_STATE_READICO2 = 4,
	ICON_STATE_WRITEICO2 = 5,
	ICON_STATE_READICO3 = 6,
	ICON_STATE_WRITEICO3 = 7
};

enum cmp_type {
	CMP_SI = 0,
	CMP_DI = 1,
	CMP_SF = 2,
	CMP_DF = 3,
	CMP_MAX = 4
};
typedef enum cmp_type cmp_type;

enum delay_type {
	DELAY_NONE = 0,
	DELAY_LOAD = 1,
	DELAY_HILO = 2,
	DELAY_HILO1 = 3,
	DELAY_FCMP = 4
};
typedef enum delay_type delay_type;

enum processor_type {
	PROCESSOR_DEFAULT = 0,
	PROCESSOR_R3000 = 1,
	PROCESSOR_R3900 = 2,
	PROCESSOR_R6000 = 3,
	PROCESSOR_R4000 = 4,
	PROCESSOR_R4100 = 5,
	PROCESSOR_R4300 = 6,
	PROCESSOR_R4600 = 7,
	PROCESSOR_R4650 = 8,
	PROCESSOR_R5000 = 9,
	PROCESSOR_R5400 = 10,
	PROCESSOR_R5900 = 11,
	PROCESSOR_R8000 = 12
};
typedef enum processor_type processor_type;

enum mips_abicalls_type {
	MIPS_ABICALLS_NO = 0,
	MIPS_ABICALLS_YES = 1
};
typedef enum mips_abicalls_type mips_abicalls_type;

enum block_move_type {
	BLOCK_MOVE_NORMAL = 0,
	BLOCK_MOVE_NOT_LAST = 1,
	BLOCK_MOVE_LAST = 2
};
typedef enum block_move_type block_move_type;

enum reg_class {
	NO_REGS = 0,
	M16_NA_REGS = 1,
	M16_REGS = 2,
	T_REG = 3,
	M16_T_REGS = 4,
	GR_REGS = 5,
	FP_REGS = 6,
	HI_REG = 7,
	LO_REG = 8,
	HILO_REG = 9,
	MD_REGS = 10,
	HI_AND_GR_REGS = 11,
	LO_AND_GR_REGS = 12,
	HILO_AND_GR_REGS = 13,
	HI1_REG = 14,
	LO1_REG = 15,
	HILO1_REG = 16,
	MD1_REGS = 17,
	HI1_AND_GR_REGS = 18,
	LO1_AND_GR_REGS = 19,
	HILO1_AND_GR_REGS = 20,
	HI01_REG = 21,
	LO01_REG = 22,
	HILO01_REG = 23,
	MD01_REGS = 24,
	HI01_AND_GR_REGS = 25,
	LO01_AND_GR_REGS = 26,
	HILO01_AND_GR_REGS = 27,
	ST_REGS = 28,
	ALL_REGS = 29,
	LIM_REG_CLASSES = 30
};
typedef enum reg_class reg_class;

enum machine_mode {
	VOIDmode = 0,
	PQImode = 1,
	QImode = 2,
	PHImode = 3,
	HImode = 4,
	PSImode = 5,
	SImode = 6,
	PDImode = 7,
	DImode = 8,
	TImode = 9,
	OImode = 10,
	QFmode = 11,
	HFmode = 12,
	TQFmode = 13,
	SFmode = 14,
	DFmode = 15,
	XFmode = 16,
	TFmode = 17,
	QCmode = 18,
	HCmode = 19,
	SCmode = 20,
	DCmode = 21,
	XCmode = 22,
	TCmode = 23,
	CQImode = 24,
	CHImode = 25,
	CSImode = 26,
	CDImode = 27,
	CTImode = 28,
	COImode = 29,
	BLKmode = 30,
	CCmode = 31,
	MAX_MACHINE_MODE = 32
};
typedef enum machine_mode machine_mode;

enum mode_class {
	MODE_RANDOM = 0,
	MODE_INT = 1,
	MODE_FLOAT = 2,
	MODE_PARTIAL_INT = 3,
	MODE_CC = 4,
	MODE_COMPLEX_INT = 5,
	MODE_COMPLEX_FLOAT = 6,
	MAX_MODE_CLASS = 7
};
typedef enum mode_class mode_class;

enum fp_class_type {
	CLASS_SNAN = 0,
	CLASS_QNAN = 1,
	CLASS_ZERO = 2,
	CLASS_NUMBER = 3,
	CLASS_INFINITY = 4
};
typedef enum fp_class_type fp_class_type;

enum {
	OCT = 0,
	DEC = 1,
	HEX = 2
};

typedef int __int32_t;

typedef unsigned int __uint32_t;

typedef long unsigned int clock_t;

typedef long int time_t;

struct tm { // 0x24
	/* 0x00 */ int tm_sec;
	/* 0x04 */ int tm_min;
	/* 0x08 */ int tm_hour;
	/* 0x0c */ int tm_mday;
	/* 0x10 */ int tm_mon;
	/* 0x14 */ int tm_year;
	/* 0x18 */ int tm_wday;
	/* 0x1c */ int tm_yday;
	/* 0x20 */ int tm_isdst;
};

typedef __uint32_t ULong;

struct _glue { // 0xc
	/* 0x0 */ _glue *_next;
	/* 0x4 */ int _niobs;
	/* 0x8 */ __sFILE *_iobs;
};

struct _Bigint { // 0x18
	/* 0x00 */ _Bigint *_next;
	/* 0x04 */ int _k;
	/* 0x08 */ int _maxwds;
	/* 0x0c */ int _sign;
	/* 0x10 */ int _wds;
	/* 0x14 */ ULong _x[1];
};

struct _atexit { // 0x88
	/* 0x00 */ _atexit *_next;
	/* 0x04 */ int _ind;
	/* 0x08 */ void (*_fns[32])(/* parameters unknown */);
};

struct __sbuf { // 0x8
	/* 0x0 */ unsigned char *_base;
	/* 0x4 */ int _size;
};

typedef long int _fpos_t;

struct __sFILE { // 0x58
	/* 0x00 */ unsigned char *_p;
	/* 0x04 */ int _r;
	/* 0x08 */ int _w;
	/* 0x0c */ short int _flags;
	/* 0x0e */ short int _file;
	/* 0x10 */ __sbuf _bf;
	/* 0x18 */ int _lbfsize;
	/* 0x1c */ void *_cookie;
	/* 0x20 */ int (*_read)(/* parameters unknown */);
	/* 0x24 */ int (*_write)(/* parameters unknown */);
	/* 0x28 */ _fpos_t (*_seek)(/* parameters unknown */);
	/* 0x2c */ int (*_close)(/* parameters unknown */);
	/* 0x30 */ __sbuf _ub;
	/* 0x38 */ unsigned char *_up;
	/* 0x3c */ int _ur;
	/* 0x40 */ unsigned char _ubuf[3];
	/* 0x43 */ unsigned char _nbuf[1];
	/* 0x44 */ __sbuf _lb;
	/* 0x4c */ int _blksize;
	/* 0x50 */ int _offset;
	/* 0x54 */ _reent *_data;
};

struct _reent { // 0x2ec
	/* 0x000 */ int _errno;
	/* 0x004 */ __sFILE *_stdin;
	/* 0x008 */ __sFILE *_stdout;
	/* 0x00c */ __sFILE *_stderr;
	/* 0x010 */ int _inc;
	/* 0x014 */ char _emergency[25];
	/* 0x030 */ int _current_category;
	/* 0x034 */ char *_current_locale;
	/* 0x038 */ int __sdidinit;
	/* 0x03c */ void (*__cleanup)(/* parameters unknown */);
	/* 0x040 */ _Bigint *_result;
	/* 0x044 */ int _result_k;
	/* 0x048 */ _Bigint *_p5s;
	/* 0x04c */ _Bigint **_freelist;
	/* 0x050 */ int _cvtlen;
	/* 0x054 */ char *_cvtbuf;
	/* 0x058 */ union { // 0xf0
		/* 0x058 */ struct { // 0x4c
			/* 0x058 */ unsigned int _rand_next;
			/* 0x05c */ char *_strtok_last;
			/* 0x060 */ char _asctime_buf[26];
			/* 0x07c */ tm _localtime_buf;
			/* 0x0a0 */ int _gamma_signgam;
		} _reent;
		/* 0x058 */ struct { // 0xf0
			/* 0x058 */ unsigned char *_nextf[30];
			/* 0x0d0 */ unsigned int _nmalloc[30];
		} _unused;
	} _new;
	/* 0x148 */ _atexit *_atexit;
	/* 0x14c */ _atexit _atexit0;
	/* 0x1d4 */ void (**_sig_func)(/* parameters unknown */);
	/* 0x1d8 */ _glue __sglue;
	/* 0x1e4 */ __sFILE __sf[3];
};

union __dmath { // 0x8
	/* 0x0 */ __uint32_t i[2];
	/* 0x0 */ double d;
};

struct exception { // 0x28
	/* 0x00 */ int type;
	/* 0x04 */ char *name;
	/* 0x08 */ double arg1;
	/* 0x10 */ double arg2;
	/* 0x18 */ double retval;
	/* 0x20 */ int err;
};

typedef short unsigned int ushort;

typedef unsigned int uint;

typedef long int daddr_t;

typedef char *caddr_t;

typedef short unsigned int ino_t;

typedef short int dev_t;

typedef long int off_t;

typedef short unsigned int uid_t;

typedef short unsigned int gid_t;

typedef int pid_t;

typedef long int key_t;

typedef long int ssize_t;

typedef unsigned int mode_t;

typedef short unsigned int nlink_t;

typedef long int fd_mask;

struct _types_fd_set { // 0x8
	/* 0x0 */ fd_mask fds_bits[1];
};

typedef unsigned char uchar;

typedef unsigned char u_byte;

typedef unsigned char ubyte;

typedef long unsigned int ulong;

typedef signed char int8;

typedef short int int16;

typedef int int32;

typedef long int int64;

typedef unsigned char uint8;

typedef short unsigned int uint16;

typedef unsigned int uint32;

typedef long unsigned int uint64;

typedef char BYTE;

typedef unsigned char UBYTE;

typedef long unsigned int ULONG;

typedef short unsigned int USHORT;

struct RECT_PSX { // 0x8
	/* 0x0 */ int16 x;
	/* 0x2 */ int16 y;
	/* 0x4 */ int16 w;
	/* 0x6 */ int16 h;
};

struct MATRIX { // 0x20
	/* 0x00 */ int16 m[3][3];
	/* 0x12 */ int16 pad;
	/* 0x14 */ int32 t[3];
};

struct VECTOR { // 0x10
	/* 0x0 */ int32 vx;
	/* 0x4 */ int32 vy;
	/* 0x8 */ int32 vz;
	/* 0xc */ int32 pad;
};

struct SVECTOR { // 0x8
	/* 0x0 */ int16 vx;
	/* 0x2 */ int16 vy;
	/* 0x4 */ int16 vz;
	/* 0x6 */ int16 pad;
};

struct CVECTOR { // 0x4
	/* 0x0 */ uint8 r;
	/* 0x1 */ uint8 g;
	/* 0x2 */ uint8 b;
	/* 0x3 */ uint8 a;
};

struct DVECTOR { // 0x4
	/* 0x0 */ int16 vx;
	/* 0x2 */ int16 vy;
};

struct DWVECTOR { // 0x8
	/* 0x0 */ int32 vx;
	/* 0x4 */ int32 vy;
};

struct DFVECTOR { // 0x8
	/* 0x0 */ float vx;
	/* 0x4 */ float vy;
};

typedef float Matrixf[4][4] __attribute__((aligned(16)));

struct Vector4f { // 0x10
	/* 0x0 */ float x;
	/* 0x4 */ float y;
	/* 0x8 */ float z;
	/* 0xc */ float w;
} __attribute__((aligned(16)));

struct Vector3f { // 0xc
	/* 0x0 */ float x;
	/* 0x4 */ float y;
	/* 0x8 */ float z;
};

struct Vector2f { // 0x8
	/* 0x0 */ float x;
	/* 0x4 */ float y;
};

typedef uint128 Vector4fr;

typedef void (*SNDCHANNELLOSTFUNC)(/* parameters unknown */);

typedef void (*SNDTIMERFUNC)(/* parameters unknown */);

typedef char *__gnuc_va_list;

typedef __gnuc_va_list va_list;

struct NodeType { // 0x8
	/* 0x0 */ NodeType *prev;
	/* 0x4 */ NodeType *next;
};

typedef int ListOrderFunc(/* parameters unknown */);

struct MYPS2VERTEX { // 0x20
	/* 0x00 */ int32 x;
	/* 0x04 */ int32 y;
	/* 0x08 */ int32 z;
	/* 0x0c */ int32 fog;
	/* 0x10 */ uint32 color;
	/* 0x14 */ int16 textureID;
	/* 0x16 */ uint16 outcode;
	/* 0x18 */ float u;
	/* 0x1c */ float v;
};

struct TextureMT3 { // 0x24
	/* 0x00 */ int32 pad0;
	/* 0x04 */ int32 pad1;
	/* 0x08 */ int32 pad2;
	/* 0x0c */ int32 pad3;
	/* 0x10 */ int32 pad4;
	/* 0x14 */ int32 pad5;
	/* 0x18 */ uint16 tpageid;
	/* 0x1a */ int16 textureCacheID;
	/* 0x1c */ int32 attr;
	/* 0x20 */ int32 color;
};

typedef int32 G2Bool;

struct _G2EulerAngles_Type { // 0x10
	/* 0x0 */ float x;
	/* 0x4 */ float y;
	/* 0x8 */ float z;
	/* 0xc */ int32 order;
};

typedef _G2EulerAngles_Type G2EulerAngles;

typedef float G2TimerAtomicUnit;

typedef _G2AnimChannelID_Enum G2AnimChannelID;

typedef _G2AnimCallbackMsg_Enum G2AnimCallbackMsg;

typedef _G2AnimCompressionType_Enum G2AnimCompressionType;

typedef int G2AnimKeyframeNumber;

typedef int G2AnimKeylistID;

typedef int G2AnimSectionID;

typedef uint8 G2AnimSegmentID;

typedef uint8 G2AnimControllerType;

typedef uint16 G2AnimChanMask;

typedef int32 (*G2AnimCallback)(/* parameters unknown */);

struct _G2AnimSegValue_Type { // 0x40
	/* 0x00 */ Vector4f rot;
	/* 0x10 */ Vector4f scale;
	/* 0x20 */ Vector4f trans;
	/* 0x30 */ Vector4f quat;
};

typedef _G2AnimSegValue_Type G2AnimSegValue;

typedef uint32 (*G2AnimControllerFn)(/* parameters unknown */);

struct _G2AnimQuatInfo_Type { // 0x60
	/* 0x00 */ Vector4f srcQuat;
	/* 0x10 */ Vector4f destQuat;
	/* 0x20 */ Vector4f srcScale;
	/* 0x30 */ Vector4f destScale;
	/* 0x40 */ Vector4f srcTrans;
	/* 0x50 */ Vector4f destTrans;
};

typedef _G2AnimQuatInfo_Type G2AnimQuatInfo;

struct _G2AnimAlphaTable_Type { // 0x4
	/* 0x0 */ int32 size;
	/* 0x4 */ float data[0];
};

typedef _G2AnimAlphaTable_Type G2AnimAlphaTable;

struct _G2AnimInterpStateBlock_Type { // 0x190
	/* 0x000 */ _G2AnimInterpStateBlock_Type *next;
	/* 0x010 */ _G2AnimQuatInfo_Type quatInfo[4];
};

typedef _G2AnimInterpStateBlock_Type G2AnimInterpStateBlock;

struct _G2AnimInterpInfo_Type { // 0x10
	/* 0x0 */ G2TimerAtomicUnit duration;
	/* 0x4 */ G2TimerAtomicUnit targetTime;
	/* 0x8 */ _G2AnimAlphaTable_Type *alphaTable;
	/* 0xc */ _G2AnimInterpStateBlock_Type *stateBlockList;
};

typedef _G2AnimInterpInfo_Type G2AnimInterpInfo;

typedef float G2AnimChanKeyData;

typedef float G2AnimChanFinalValue;

struct _G2AnimChanStatus_Type { // 0x8
	/* 0x0 */ G2AnimChanKeyData keyData;
	/* 0x4 */ int16 index;
};

typedef _G2AnimChanStatus_Type G2AnimChanStatus;

struct _G2AnimChanStatusBlock_Type { // 0x44
	/* 0x00 */ _G2AnimChanStatusBlock_Type *next;
	/* 0x04 */ _G2AnimChanStatus_Type chunks[8];
};

typedef _G2AnimChanStatusBlock_Type G2AnimChanStatusBlock;

struct _G2AnimFxHeader_Type { // 0x4
	/* 0x0 */ uint8 sizeAndSection;
	/* 0x1 */ uint8 modeAndType;
	/* 0x2 */ uint16 keyframeID;
};

typedef _G2AnimFxHeader_Type G2AnimFxHeader;

struct _G2AnimKeylist_Type { // 0x10
	/* 0x0 */ _G2AnimKeylist_Type *next;
	/* 0x4 */ int32 animID;
	/* 0x8 */ uint8 sectionCount;
	/* 0x9 */ uint8 s0TailTime;
	/* 0xa */ uint8 s1TailTime;
	/* 0xb */ uint8 s2TailTime;
	/* 0xc */ uint16 keyCount;
	/* 0xe */ int16 timePerKey;
	/* 0x10 */ int32 sectionDataOffset[0];
};

typedef _G2AnimKeylist_Type G2AnimKeylist;

struct _G2AnimController_Type { // 0x40
	/* 0x00 */ uint16 next;
	/* 0x02 */ G2AnimControllerType type;
	/* 0x03 */ G2AnimSegmentID segNumber;
	/* 0x04 */ void *callbackData;
	/* 0x08 */ uint16 flags;
	/* 0x0c */ G2TimerAtomicUnit duration;
	/* 0x10 */ G2TimerAtomicUnit elapsedTime;
	/* 0x14 */ _G2AnimAlphaTable_Type *alphaTable;
	/* 0x20 */ union { // 0x20
		/* 0x20 */ struct { // 0x8
			/* 0x20 */ G2AnimControllerFn function;
			/* 0x24 */ void *fnData;
		} callback;
		/* 0x20 */ struct { // 0x20
			/* 0x20 */ Vector4f base;
			/* 0x30 */ Vector4f offset;
		} vector;
		/* 0x20 */ struct { // 0x20
			/* 0x20 */ Vector4f src;
			/* 0x30 */ Vector4f dest;
		} quat;
	} data;
};

typedef _G2AnimController_Type G2AnimController;

struct _G2AnimSection_Type { // 0x3c
	/* 0x00 */ uint8 flags;
	/* 0x01 */ uint8 sectionID;
	/* 0x02 */ G2AnimSegmentID firstSeg;
	/* 0x03 */ G2AnimSegmentID segCount;
	/* 0x04 */ G2TimerAtomicUnit elapsedTime;
	/* 0x08 */ G2TimerAtomicUnit storedTime;
	/* 0x0c */ G2TimerAtomicUnit loopStartTime;
	/* 0x10 */ G2TimerAtomicUnit loopEndTime;
	/* 0x14 */ G2TimerAtomicUnit *swAlarmTable;
	/* 0x18 */ float speedAdjustment;
	/* 0x1c */ uint16 keylistID;
	/* 0x20 */ uint32 alarmFlags;
	/* 0x24 */ G2AnimCallback callback;
	/* 0x28 */ void *callbackData;
	/* 0x2c */ G2AnimFxHeader *fxList;
	/* 0x30 */ _G2AnimKeylist_Type *keylist;
	/* 0x34 */ _G2AnimChanStatusBlock_Type *chanStatusBlockList;
	/* 0x38 */ _G2AnimInterpInfo_Type *interpInfo;
};

typedef _G2AnimSection_Type G2AnimSection;

struct _G2Anim_Type { // 0xe0
	/* 0x00 */ Vector4f rootTrans;
	/* 0x10 */ uint8 sectionCount;
	/* 0x11 */ uint8 masterSection;
	/* 0x12 */ uint16 controllerList;
	/* 0x14 */ uint16 disabledControllerList;
	/* 0x16 */ uint16 flags;
	/* 0x18 */ _Model *modelData;
	/* 0x1c */ Matrixf *segMatrices;
	/* 0x20 */ _G2AnimSection_Type section[3];
};

typedef _G2Anim_Type G2Anim;

typedef G2Bool (*G2InstanceRebuildCallback)(/* parameters unknown */);

typedef int32 lfixed;

typedef int16 sfixed;

typedef float VectorCoord;

typedef float SVectorCoord;

typedef sfixed NormalCoord;

typedef sfixed ShortAngle;

struct _Vector { // 0xc
	/* 0x0 */ int32 x;
	/* 0x4 */ int32 y;
	/* 0x8 */ int32 z;
};

typedef _Vector Vector;

struct _SVector { // 0x8
	/* 0x0 */ int16 x;
	/* 0x2 */ int16 y;
	/* 0x4 */ int16 z;
	/* 0x6 */ int16 pad;
};

typedef _SVector SVector;

struct _SVectorNoPad { // 0x6
	/* 0x0 */ int16 x;
	/* 0x2 */ int16 y;
	/* 0x4 */ int16 z;
};

typedef _SVectorNoPad SVectorNoPad;

struct _Triangle2D { // 0xc
	/* 0x0 */ int16 x0;
	/* 0x2 */ int16 y0;
	/* 0x4 */ int16 x1;
	/* 0x6 */ int16 y1;
	/* 0x8 */ int16 x2;
	/* 0xa */ int16 y2;
};

typedef _Triangle2D Triangle2D;

struct _Quad2D { // 0x10
	/* 0x0 */ int16 x0;
	/* 0x2 */ int16 y0;
	/* 0x4 */ int16 x1;
	/* 0x6 */ int16 y1;
	/* 0x8 */ int16 x2;
	/* 0xa */ int16 y2;
	/* 0xc */ int16 x3;
	/* 0xe */ int16 y3;
};

typedef _Quad2D Quad2D;

struct _Box2D { // 0x8
	/* 0x0 */ int16 x0;
	/* 0x2 */ int16 y0;
	/* 0x4 */ int16 x1;
	/* 0x6 */ int16 y1;
};

typedef _Box2D Box2D;

struct _Position { // 0x6
	/* 0x0 */ int16 x;
	/* 0x2 */ int16 y;
	/* 0x4 */ int16 z;
};

typedef _Position Position;

struct _Rotation { // 0x8
	/* 0x0 */ ShortAngle x;
	/* 0x2 */ ShortAngle y;
	/* 0x4 */ ShortAngle z;
	/* 0x6 */ ShortAngle pad;
};

typedef _Rotation Rotation;

struct _Normal { // 0x8
	/* 0x0 */ NormalCoord x;
	/* 0x2 */ NormalCoord y;
	/* 0x4 */ NormalCoord z;
	/* 0x6 */ NormalCoord pad;
};

typedef _Normal Normal;

struct FNormal { // 0x10
	/* 0x0 */ float x;
	/* 0x4 */ float y;
	/* 0x8 */ float z;
	/* 0xc */ float pad;
};

struct _PlaneConstants { // 0xc
	/* 0x0 */ NormalCoord a;
	/* 0x2 */ NormalCoord b;
	/* 0x4 */ NormalCoord c;
	/* 0x6 */ int16 flags;
	/* 0x8 */ int32 d;
};

typedef _PlaneConstants PlaneConstants;

struct _SKUVertex { // 0x6
	/* 0x0 */ int16 x;
	/* 0x2 */ int16 y;
	/* 0x4 */ int16 z;
};

typedef _SKUVertex SKUVertex;

struct _Face { // 0x6
	/* 0x0 */ uint16 v0;
	/* 0x2 */ uint16 v1;
	/* 0x4 */ uint16 v2;
};

typedef _Face Face;

struct _Face32 { // 0xc
	/* 0x0 */ uint32 v0;
	/* 0x4 */ uint32 v1;
	/* 0x8 */ uint32 v2;
};

typedef _Face32 Face32;

struct _MVertex { // 0x8
	/* 0x0 */ SKUVertex vertex;
	/* 0x6 */ int8 normal;
	/* 0x7 */ int8 segment;
};

typedef _MVertex MVertex;

struct _MFace { // 0x8
	/* 0x0 */ Face face;
	/* 0x6 */ uint8 normal;
	/* 0x7 */ uint8 flags;
};

typedef _MFace MFace;

struct _PVertex { // 0x8
	/* 0x0 */ int16 x;
	/* 0x2 */ int16 y;
	/* 0x4 */ int32 otz;
};

typedef _PVertex PVertex;

struct _VertexPool { // 0xc000
	/* 0x0000 */ PVertex vertex[4096];
	/* 0x8000 */ CVECTOR color[4096];
};

typedef _VertexPool VertexPool;

struct _Sphere { // 0x20
	/* 0x00 */ Vector4f position;
	/* 0x10 */ float radius;
	/* 0x14 */ float radiusSquared;
};

typedef _Sphere Sphere;

struct _CameraKey { // 0x18
	/* 0x00 */ int16 x;
	/* 0x02 */ int16 y;
	/* 0x04 */ int16 z;
	/* 0x06 */ int16 id;
	/* 0x08 */ int16 rx;
	/* 0x0a */ int16 ry;
	/* 0x0c */ int16 rz;
	/* 0x0e */ int16 flags;
	/* 0x10 */ int16 tx;
	/* 0x12 */ int16 ty;
	/* 0x14 */ int16 tz;
	/* 0x16 */ int16 pad;
};

typedef _CameraKey CameraKey;

struct Signal { // 0x1c
	/* 0x00 */ int32 id;
	/* 0x04 */ union { // 0x18
		/* 0x04 */ struct { // 0x4
			/* 0x04 */ union { // 0x4
				/* 0x04 */ int32 l;
				/* 0x04 */ int16 s[2];
				/* 0x04 */ char c[4];
			} size;
		} misc[3];
		/* 0x04 */ CameraKey *cameraKey;
		/* 0x04 */ struct { // 0x10
			/* 0x04 */ int16 x;
			/* 0x06 */ int16 y;
			/* 0x08 */ int16 z;
			/* 0x0a */ int16 zrot;
			/* 0x0c */ SVector offset;
		} teleport;
		/* 0x04 */ struct { // 0x8
			/* 0x04 */ int32 index;
			/* 0x08 */ int32 value;
		} cameraValue;
		/* 0x04 */ struct { // 0x8
			/* 0x04 */ int32 index;
			/* 0x08 */ int32 value;
		} miscValue;
		/* 0x04 */ struct { // 0x8
			/* 0x04 */ int32 index;
			/* 0x08 */ int32 value;
		} logicValue;
		/* 0x04 */ int32 timer;
		/* 0x04 */ int32 times;
		/* 0x04 */ int32 lightGroup;
		/* 0x04 */ int32 farPlane;
		/* 0x04 */ int32 cameraAdjust;
		/* 0x04 */ int32 cameraMode;
		/* 0x04 */ int32 cameraLock;
		/* 0x04 */ int32 cameraUnlock;
		/* 0x04 */ int32 cameraSmooth;
		/* 0x04 */ int32 cameraTimer;
		/* 0x04 */ struct { // 0x8
			/* 0x04 */ int32 type;
			/* 0x08 */ int32 volume;
		} reverb;
		/* 0x04 */ struct { // 0x8
			/* 0x04 */ int32 time;
			/* 0x08 */ int32 scale;
		} cameraShake;
		/* 0x04 */ int32 cameraSave;
		/* 0x04 */ int32 cameraRestore;
		/* 0x04 */ int32 value[2];
		/* 0x04 */ struct { // 0xc
			/* 0x04 */ int32 action;
			/* 0x08 */ int32 value[2];
		} sound;
		/* 0x04 */ void *intro;
		/* 0x04 */ int32 deathZ;
		/* 0x04 */ struct { // 0x8
			/* 0x04 */ void *intro;
			/* 0x08 */ void *data;
		} dsignal;
		/* 0x04 */ void *mirror;
		/* 0x04 */ int32 fogNear;
		/* 0x04 */ int32 fogFar;
		/* 0x04 */ struct { // 0x8
			/* 0x04 */ void *intro;
			/* 0x08 */ int32 frame;
		} gotoFrame;
		/* 0x04 */ struct { // 0x8
			/* 0x04 */ void *intro;
			/* 0x08 */ int32 model;
		} changeModel;
		/* 0x04 */ void *vmObject;
		/* 0x04 */ struct { // 0x8
			/* 0x04 */ uint8 target;
			/* 0x05 */ uint8 source1;
			/* 0x06 */ uint8 source2;
			/* 0x07 */ uint8 pad;
			/* 0x08 */ Signal *gotoLabel;
		} logic;
		/* 0x04 */ void *callSignal;
		/* 0x04 */ SVector offset;
		/* 0x04 */ Signal *gotoLabel;
		/* 0x04 */ Signal *gosubLabel;
		/* 0x04 */ struct { // 0x8
			/* 0x04 */ int32 timer;
			/* 0x08 */ int32 action;
		} control;
		/* 0x04 */ struct { // 0xc
			/* 0x04 */ int16 index;
			/* 0x06 */ int16 z;
			/* 0x08 */ _MultiSignal *upSignal;
			/* 0x0c */ _MultiSignal *downSignal;
		} zSignal;
		/* 0x04 */ struct { // 0x18
			/* 0x04 */ int32 currentnum;
			/* 0x08 */ int32 streamID;
			/* 0x0c */ char toname[16];
		} StreamLevel;
		/* 0x04 */ struct { // 0xc
			/* 0x04 */ char num;
			/* 0x05 */ char vel;
			/* 0x06 */ int16 misc;
			/* 0x08 */ char flags;
			/* 0x09 */ char timeToLive;
			/* 0x0a */ int16 dummy2;
			/* 0x0c */ Object *object;
		} shards;
		/* 0x04 */ struct { // 0x8
			/* 0x04 */ int32 index;
			/* 0x08 */ void *intro;
		} cameraSpline;
		/* 0x04 */ struct { // 0x4
			/* 0x04 */ int16 type;
			/* 0x06 */ int16 time;
		} screenWipe;
		/* 0x04 */ int32 voiceSitId;
		/* 0x04 */ struct { // 0x8
			/* 0x04 */ int32 time;
			/* 0x08 */ void *intro;
		} introFX;
		/* 0x04 */ struct { // 0x8
			/* 0x04 */ void *intro;
			/* 0x08 */ Signal *gotoLabel;
		} introActive;
		/* 0x04 */ struct { // 0x12
			/* 0x04 */ char world[9];
			/* 0x0d */ char level[9];
		} levelChange;
		/* 0x04 */ int32 blendStart;
		/* 0x04 */ struct { // 0x8
			/* 0x04 */ Signal *signal;
			/* 0x08 */ int32 times;
		} setTimes;
		/* 0x04 */ struct { // 0x4
			/* 0x04 */ uint8 r;
			/* 0x05 */ uint8 g;
			/* 0x06 */ uint8 b;
			/* 0x07 */ uint8 pad;
		} color;
		/* 0x04 */ struct { // 0xc
			/* 0x04 */ int16 x;
			/* 0x06 */ int16 y;
			/* 0x08 */ int16 time;
			/* 0x0a */ int16 index;
			/* 0x0c */ char *text;
		} print;
		/* 0x04 */ int32 slideAngle;
	} data;
};

struct _MultiSignal { // 0x388
	/* 0x000 */ int32 numSignals;
	/* 0x004 */ int16 signalNum;
	/* 0x006 */ int16 flags;
	/* 0x008 */ Signal signalList[32];
};

typedef _MultiSignal MultiSignal;

struct _HFace { // 0xc
	/* 0x0 */ uint16 v0;
	/* 0x2 */ uint16 v1;
	/* 0x4 */ uint16 v2;
	/* 0x6 */ uint16 normal;
	/* 0x8 */ uint16 attr;
	/* 0xa */ uint16 ni0;
};

typedef _HFace HFace;

struct _HSphere { // 0x14
	/* 0x00 */ int32 attr;
	/* 0x04 */ uint8 id;
	/* 0x05 */ uint8 rank;
	/* 0x06 */ int16 pad;
	/* 0x08 */ Position position;
	/* 0x0e */ uint16 radius;
	/* 0x10 */ uint32 radiusSquared;
};

typedef _HSphere HSphere;

struct _HBox { // 0x1c
	/* 0x00 */ int16 flags;
	/* 0x02 */ uint8 id;
	/* 0x03 */ uint8 rank;
	/* 0x04 */ int16 minX;
	/* 0x06 */ int16 minY;
	/* 0x08 */ int16 minZ;
	/* 0x0a */ int16 maxX;
	/* 0x0c */ int16 maxY;
	/* 0x0e */ int16 maxZ;
	/* 0x10 */ int16 refMinX;
	/* 0x12 */ int16 refMinY;
	/* 0x14 */ int16 refMinZ;
	/* 0x16 */ int16 refMaxX;
	/* 0x18 */ int16 refMaxY;
	/* 0x1a */ int16 refMaxZ;
};

typedef _HBox HBox;

struct _HMarker { // 0x20
	/* 0x00 */ int32 segment;
	/* 0x04 */ int32 index;
	/* 0x08 */ float px;
	/* 0x0c */ float py;
	/* 0x10 */ float pz;
	/* 0x14 */ float rx;
	/* 0x18 */ float ry;
	/* 0x1c */ float rz;
};

typedef _HMarker HMarker;

struct _HPrim { // 0x8
	/* 0x0 */ uint8 hpFlags;
	/* 0x1 */ uint8 withFlags;
	/* 0x2 */ uint8 type;
	/* 0x3 */ uint8 segment;
	/* 0x4 */ union { // 0x4
		/* 0x4 */ HSphere *hsphere;
		/* 0x4 */ HBox *hbox;
		/* 0x4 */ HFace *hface;
		/* 0x4 */ HMarker *hmarker;
	} data;
};

typedef _HPrim HPrim;

struct _HModel { // 0x10
	/* 0x0 */ HPrim *hPrimList;
	/* 0x4 */ int32 numHPrims;
	/* 0x8 */ HMarker *dynamicHMarkerList;
	/* 0xc */ int32 numDynamicHMarkers;
};

typedef _HModel HModel;

struct _HInfo { // 0x20
	/* 0x00 */ int32 numHFaces;
	/* 0x04 */ HFace *hfaceList;
	/* 0x08 */ int32 numHSpheres;
	/* 0x0c */ HSphere *hsphereList;
	/* 0x10 */ int32 numHBoxes;
	/* 0x14 */ HBox *hboxList;
	/* 0x18 */ int32 numHMarkers;
	/* 0x1c */ HMarker *hmarkerList;
};

typedef _HInfo HInfo;

struct _Segment { // 0x20
	/* 0x00 */ Vector4f pivot;
	/* 0x10 */ int32 flags;
	/* 0x14 */ int16 firstVertex;
	/* 0x16 */ int16 lastVertex;
	/* 0x18 */ int32 parent;
	/* 0x1c */ HInfo *hInfo;
};

typedef _Segment Segment;

struct _VirtSegment { // 0x20
	/* 0x00 */ Vector4f pivot;
	/* 0x10 */ int32 flags;
	/* 0x14 */ int16 firstVertex;
	/* 0x16 */ int16 lastVertex;
	/* 0x18 */ int16 index;
	/* 0x1a */ int16 weightIndex;
	/* 0x1c */ float weight;
};

typedef _VirtSegment VirtSegment;

struct _SegmentBox { // 0x90
	/* 0x00 */ int32 segment;
	/* 0x10 */ Vector4f vertex[8];
};

typedef _SegmentBox SegmentBox;

struct _PS2TerrainXYZ { // 0x8
	/* 0x0 */ int16 x;
	/* 0x2 */ int16 y;
	/* 0x4 */ int16 z;
	/* 0x6 */ uint16 nodraw;
};

typedef _PS2TerrainXYZ PS2TerrainXYZ;

struct _PS2ModelXYZ { // 0x8
	/* 0x0 */ int16 x;
	/* 0x2 */ int16 y;
	/* 0x4 */ int16 z;
	/* 0x6 */ uint8 matrixOffset;
	/* 0x7 */ uint8 nodraw;
};

typedef _PS2ModelXYZ PS2ModelXYZ;

struct _PS2_TerrainStripData { // 0x10
	/* 0x0 */ uint32 vifUnpackQCmd;
	/* 0x4 */ float qAverage;
	/* 0x8 */ float vAdjust;
	/* 0xc */ uint32 vifUnpackXYZCmd;
	/* 0x10 */ PS2TerrainXYZ xyz[0];
};

typedef _PS2_TerrainStripData PS2_TerrainStripData;

struct _PS2_ModelStripData { // 0x10
	/* 0x0 */ uint32 vifUnpackQCmd;
	/* 0x4 */ float qAverage;
	/* 0x8 */ float vAdjust;
	/* 0xc */ uint32 vifUnpackXYZCmd;
	/* 0x10 */ PS2ModelXYZ xyz[0];
};

typedef _PS2_ModelStripData PS2_ModelStripData;

struct _TextureStripInfo { // 0x20
	/* 0x00 */ uint8 vertexCount;
	/* 0x01 */ uint8 qwc;
	/* 0x02 */ uint8 numMatrices;
	/* 0x03 */ uint8 drawGroup;
	/* 0x04 */ uint16 tpageid;
	/* 0x06 */ int16 attr;
	/* 0x08 */ PS2_ModelStripData *stripData;
	/* 0x0c */ float qAverage;
	/* 0x10 */ int16 sortPush;
	/* 0x12 */ uint8 matrixIndices[14];
};

typedef _TextureStripInfo TextureStripInfo;

struct ScrollInfo { // 0x4
	/* 0x0 */ int count;
};

struct AnimatedInfo { // 0x4
	/* 0x0 */ int count;
};

struct AnimatedListInfo { // 0x4
	/* 0x0 */ int count;
};

struct _Model { // 0x70
	/* 0x00 */ int32 version;
	/* 0x04 */ int32 numSegments;
	/* 0x08 */ int32 numVirtSegments;
	/* 0x0c */ Segment *segmentList;
	/* 0x10 */ Vector4f modelScale;
	/* 0x20 */ int32 numVertices;
	/* 0x24 */ MVertex *vertexList;
	/* 0x28 */ int32 numNormals;
	/* 0x2c */ int16 *normalList;
	/* 0x30 */ int32 numFaces;
	/* 0x34 */ MFace *faceList;
	/* 0x38 */ void *aniTextures;
	/* 0x3c */ float maxRad;
	/* 0x40 */ float maxRadSq;
	/* 0x44 */ TextureMT3 *startTextures;
	/* 0x48 */ TextureMT3 *endTextures;
	/* 0x4c */ AnimatedListInfo *animatedListInfo;
	/* 0x50 */ AnimatedInfo *animatedInfo;
	/* 0x54 */ ScrollInfo *scrollInfo;
	/* 0x58 */ TextureStripInfo *textureStripInfo;
	/* 0x5c */ int32 *envMappedVertices;
	/* 0x60 */ uint32 *materialVertexColors;
	/* 0x64 */ uint32 *spectralVertexColors;
	/* 0x68 */ int16 *pnShadowFaces;
	/* 0x6c */ int16 *pnShadowVolumes;
};

typedef _Model Model;

struct SoundInstance { // 0x3
	/* 0x0 */ uint8 channel;
	/* 0x1 */ uint8 state;
	/* 0x2 */ uint8 delay;
};

struct _AnimSoundData_Type { // 0xc
	/* 0x0 */ int16 sfxToneID;
	/* 0x2 */ int16 volume;
	/* 0x4 */ float pitch;
	/* 0x8 */ int16 minVolDistance;
	/* 0xa */ int16 pad;
};

typedef _AnimSoundData_Type AnimSoundData;

struct _AnimVariableSoundData_Type { // 0x10
	/* 0x0 */ int16 sfxToneID;
	/* 0x2 */ int16 volume;
	/* 0x4 */ float pitch;
	/* 0x8 */ float pitchVariation;
	/* 0xc */ int16 minVolDistance;
	/* 0xe */ int16 pad;
};

typedef _AnimVariableSoundData_Type AnimVariableSoundData;

struct RandomSoundInfo { // 0x10
	/* 0x0 */ int16 chance;
	/* 0x2 */ int16 pad;
	/* 0x4 */ int16 sfxToneID;
	/* 0x6 */ int16 volume;
	/* 0x8 */ float pitch;
	/* 0xc */ float pitchVariation;
};

struct _AnimRandomSoundData_Type { // 0x34
	/* 0x00 */ int16 minVolDistance;
	/* 0x02 */ int16 pad;
	/* 0x04 */ RandomSoundInfo sounds[3];
};

typedef _AnimRandomSoundData_Type AnimRandomSoundData;

struct ObjectEffect { // 0x4
	/* 0x0 */ uint8 effectNumber;
	/* 0x1 */ uint8 modifierList[3];
};

typedef ObjectEffect AnimEffectData;

struct _ObjectOwnerInfo { // 0x8
	/* 0x0 */ int32 magicnum;
	/* 0x4 */ int16 animID;
	/* 0x6 */ char objectName[0];
};

typedef _ObjectOwnerInfo ObjectOwnerInfo;

struct Object { // 0x5c
	/* 0x00 */ int32 oflags;
	/* 0x04 */ int16 id;
	/* 0x06 */ int16 sfxFileHandle;
	/* 0x08 */ int16 numModels;
	/* 0x0a */ int16 numAnims;
	/* 0x0c */ Model **modelList;
	/* 0x10 */ _G2AnimKeylist_Type **animList;
	/* 0x14 */ _G2AnimFxHeader_Type **animFXList;
	/* 0x18 */ int16 introDist;
	/* 0x1a */ int16 vvIntroDist;
	/* 0x1c */ uint16 removeDist;
	/* 0x1e */ uint16 vvRemoveDist;
	/* 0x20 */ void *data;
	/* 0x24 */ char *script;
	/* 0x28 */ char *name;
	/* 0x2c */ uint8 *soundData;
	/* 0x30 */ int32 oflags2;
	/* 0x34 */ int16 sectionA;
	/* 0x36 */ int16 sectionB;
	/* 0x38 */ int16 sectionC;
	/* 0x3a */ int16 numberOfEffects;
	/* 0x3c */ ObjectEffect *effectList;
	/* 0x40 */ _GenericFXObject *effectData;
	/* 0x44 */ uint32 *relocList;
	/* 0x48 */ void *relocModule;
	/* 0x4c */ _VramLink *textureLoadList;
	/* 0x50 */ char *childObjectList;
	/* 0x54 */ uint16 lod1Dist;
	/* 0x56 */ uint16 lod2Dist;
	/* 0x58 */ int16 lod1Model;
	/* 0x5a */ int16 lod2Model;
};

struct _Plane { // 0x8
	/* 0x0 */ uint16 normal;
	/* 0x2 */ int16 pad;
	/* 0x4 */ int32 constant;
};

typedef _Plane Plane;

struct _TFace { // 0xc
	/* 0x0 */ Face face;
	/* 0x6 */ uint16 normal;
	/* 0x8 */ uint8 attr;
	/* 0x9 */ int8 sortPush;
	/* 0xa */ uint16 texattr;
};

typedef _TFace TFace;

struct _TVertex { // 0x6
	/* 0x0 */ SKUVertex vertex;
};

typedef _TVertex TVertex;

struct _TVertexRGB { // 0x4
	/* 0x0 */ uint8 r0;
	/* 0x1 */ uint8 g0;
	/* 0x2 */ uint8 b0;
	/* 0x3 */ uint8 a0;
};

typedef _TVertexRGB TVertexRGB;

struct _Mirror { // 0x8
	/* 0x0 */ int16 a;
	/* 0x2 */ int16 b;
	/* 0x4 */ int16 c;
	/* 0x6 */ int16 d;
};

typedef _Mirror Mirror;

struct _PCollideInfo { // 0x30
	/* 0x00 */ Vector4f worldNormal;
	/* 0x10 */ int32 type;
	/* 0x14 */ int32 segment;
	/* 0x18 */ void *prim;
	/* 0x1c */ _Instance *inst;
	/* 0x20 */ Vector4f *newPoint;
	/* 0x24 */ Vector4f *oldPoint;
	/* 0x28 */ int32 collideType;
	/* 0x2c */ _Instance *instance;
};

typedef _PCollideInfo PCollideInfo;

typedef void InitFunc(/* parameters unknown */);

typedef void ProcessFunc(/* parameters unknown */);

typedef void CollideFunc(/* parameters unknown */);

typedef uint32 QueryFunc(/* parameters unknown */);

typedef void MessageFunc(/* parameters unknown */);

typedef void RelocateTuneFunc(/* parameters unknown */);

struct _Instance { // 0x360
	/* 0x000 */ NodeType node;
	/* 0x008 */ _Instance *next;
	/* 0x00c */ _Instance *prev;
	/* 0x010 */ Vector4f position;
	/* 0x020 */ Vector4f oldPos;
	/* 0x030 */ Vector4f initialPos;
	/* 0x040 */ Vector4f rotation;
	/* 0x050 */ Vector4f oldRotation;
	/* 0x060 */ Vector4f scale;
	/* 0x070 */ Vector4f shadowPosition;
	/* 0x080 */ Matrixf relativeMatrix;
	/* 0x0c0 */ Vector4f wNormal;
	/* 0x0d0 */ Vector4f offset;
	/* 0x0e0 */ Vector4f splitPoint;
	/* 0x0f0 */ Vector4f vel;
	/* 0x100 */ Vector4f accl;
	/* 0x110 */ Vector4f maxVel;
	/* 0x120 */ int32 instanceID;
	/* 0x124 */ int32 iflags;
	/* 0x128 */ int32 iflags2;
	/* 0x12c */ Object *object;
	/* 0x130 */ Intro *intro;
	/* 0x134 */ void *data;
	/* 0x138 */ void *introData;
	/* 0x13c */ _Instance *parent;
	/* 0x140 */ int32 introNum;
	/* 0x144 */ int32 birthStreamUnitID;
	/* 0x148 */ int32 currentStreamUnitID;
	/* 0x14c */ int32 introUniqueID;
	/* 0x150 */ Matrixf *matrix;
	/* 0x154 */ Matrixf *oldMatrix;
	/* 0x158 */ Matrixf *matrixPool[2];
	/* 0x160 */ int curMatrixPool;
	/* 0x164 */ uint32 maxCheckDistance;
	/* 0x168 */ uint32 checkMask;
	/* 0x16c */ float lightGroupInterpValue;
	/* 0x170 */ float lightGroupInterpSpeed;
	/* 0x174 */ uint32 lightGroupStreamId;
	/* 0x178 */ uint32 spectralLightGroupStreamId;
	/* 0x17c */ uint32 oldLightGroupStreamId;
	/* 0x180 */ uint32 oldSpectralLightGroupStreamId;
	/* 0x184 */ uint8 oldLightGroup;
	/* 0x185 */ uint8 oldSpectralLightGroup;
	/* 0x186 */ uint8 lightGroup;
	/* 0x187 */ uint8 spectralLightGroup;
	/* 0x188 */ uint16 currentTextureAnimFrame;
	/* 0x18a */ uint16 reflectFlag;
	/* 0x18c */ uint16 vvRemoveDist;
	/* 0x18e */ uint16 removeDist;
	/* 0x190 */ int32 attachedID;
	/* 0x194 */ int32 attachedSegment;
	/* 0x198 */ SoundInstance soundInstanceTbl[4];
	/* 0x1a4 */ TFace *tface;
	/* 0x1a8 */ TFace *oldTFace;
	/* 0x1ac */ void *tfaceLevel;
	/* 0x1b0 */ void *collideInfo;
	/* 0x1b4 */ int32 bspTree;
	/* 0x1b8 */ int32 cachedTFace;
	/* 0x1bc */ int32 cachedBSPTree;
	/* 0x1c0 */ void *cachedTFaceLevel;
	/* 0x1c4 */ HModel *hModelList;
	/* 0x1c8 */ int16 fadeValue;
	/* 0x1ca */ int16 lightMatrix;
	/* 0x1cc */ ProcessFunc *processFunc;
	/* 0x1d0 */ CollideFunc *collideFunc;
	/* 0x1d4 */ CollideFunc *additionalCollideFunc;
	/* 0x1d8 */ QueryFunc *queryFunc;
	/* 0x1dc */ MessageFunc *messageFunc;
	/* 0x1e0 */ int32 currentModel;
	/* 0x1e4 */ TFace *waterFace;
	/* 0x1e8 */ TFace *oldWaterFace;
	/* 0x1ec */ _Terrain *waterFaceTerrain;
	/* 0x1f0 */ PlaneConstants halvePlane;
	/* 0x1fc */ _Instance *LinkParent;
	/* 0x200 */ _Instance *LinkChild;
	/* 0x204 */ _Instance *LinkSibling;
	/* 0x208 */ int32 ParentLinkNode;
	/* 0x20c */ int32 linkMarkerIndex;
	/* 0x210 */ void *InstanceState;
	/* 0x214 */ char introName[12];
	/* 0x220 */ void *extraData;
	/* 0x224 */ int16 constrictAngle;
	/* 0x226 */ int16 petrifyValue;
	/* 0x228 */ int32 currentMainState;
	/* 0x22c */ int32 work0;
	/* 0x230 */ int32 work1;
	/* 0x234 */ int32 work2;
	/* 0x238 */ int32 work3;
	/* 0x23c */ int32 work4;
	/* 0x240 */ int32 work5;
	/* 0x244 */ G2InstanceRebuildCallback rebuildCallback;
	/* 0x248 */ int16 splineFlags;
	/* 0x24a */ int16 targetFrame;
	/* 0x24c */ int16 clipBeg;
	/* 0x24e */ int16 clipEnd;
	/* 0x250 */ int32 light_color;
	/* 0x254 */ CVECTOR *perVertexColor;
	/* 0x258 */ uint32 noDrawGroups;
	/* 0x25c */ uint32 fxNoDrawGroups;
	/* 0x260 */ int32 startFadeTime;
	/* 0x264 */ int16 fadeFrames;
	/* 0x266 */ int16 fadeDuration;
	/* 0x268 */ int16 startFade;
	/* 0x26a */ int16 targetFade;
	/* 0x26c */ int16 diffFade;
	/* 0x270 */ G2Anim anim;
	/* 0x350 */ _Instance *noCollideInstance;
	/* 0x354 */ int32 distance_to_camera_sq;
	/* 0x358 */ uint8 shadowRed;
	/* 0x359 */ uint8 shadowGreen;
	/* 0x35a */ uint8 shadowBlue;
};

typedef _Instance Instance;

struct _InstanceHandle { // 0x8
	/* 0x0 */ Instance *instance;
	/* 0x4 */ int32 instanceID;
};

typedef _InstanceHandle InstanceHandle;

struct _InstancePool { // 0x2a320
	/* 0x00000 */ int32 nextInstanceID;
	/* 0x00004 */ int32 numFreeInstances;
	/* 0x00010 */ Instance instance[200];
	/* 0x2a310 */ Instance *first_free;
};

typedef _InstancePool InstancePool;

struct _InstanceList { // 0x10c
	/* 0x000 */ int32 numInstances;
	/* 0x004 */ Instance *first;
	/* 0x008 */ InstancePool *pool;
	/* 0x00c */ NodeType group[32];
};

typedef _InstanceList InstanceList;

struct _ObjectTracker { // 0x28
	/* 0x00 */ char name[12];
	/* 0x0c */ Object *object;
	/* 0x10 */ int16 objectStatus;
	/* 0x12 */ int16 numInUse;
	/* 0x14 */ void *vramBlock;
	/* 0x18 */ int8 numObjectsUsing;
	/* 0x19 */ int8 objectsUsing[15];
};

typedef _ObjectTracker ObjectTracker;

struct Intro { // 0x60
	/* 0x00 */ char name[16];
	/* 0x10 */ Vector4f rotation;
	/* 0x20 */ Vector4f position;
	/* 0x30 */ Vector4f spectralPosition;
	/* 0x40 */ int32 intronum;
	/* 0x44 */ int32 UniqueID;
	/* 0x48 */ float maxRad;
	/* 0x4c */ float maxRadSq;
	/* 0x50 */ int32 introFlags;
	/* 0x54 */ void *data;
	/* 0x58 */ MultiSpline *multiSpline;
	/* 0x5c */ int16 lightGroup;
	/* 0x5e */ int16 spectralLightGroup;
};

struct _BoundingBox { // 0xc
	/* 0x0 */ int16 minX;
	/* 0x2 */ int16 minY;
	/* 0x4 */ int16 minZ;
	/* 0x6 */ int16 maxX;
	/* 0x8 */ int16 maxY;
	/* 0xa */ int16 maxZ;
};

typedef _BoundingBox BoundingBox;

struct CDLight { // 0x30
	/* 0x00 */ NodeType node;
	/* 0x08 */ uint8 r;
	/* 0x09 */ uint8 g;
	/* 0x0a */ uint8 b;
	/* 0x0b */ uint8 flags;
	/* 0x10 */ Sphere sphere;
};

struct AnimTextList { // 0x4
	/* 0x0 */ uint32 numTextures;
	/* 0x4 */ uint32 pageid[0];
};

struct AnimLinkInfo { // 0x10
	/* 0x0 */ AnimTextList *animList;
	/* 0x4 */ int32 aniSpeed;
	/* 0x8 */ float aniOffset;
	/* 0xc */ int numPtrs;
	/* 0x10 */ int *tpageidPtr[0];
};

struct _TerrainTextureStripInfo { // 0x10
	/* 0x0 */ uint8 vertexCount;
	/* 0x1 */ uint8 qwc;
	/* 0x2 */ int16 sortPush;
	/* 0x4 */ uint16 tpageid;
	/* 0x6 */ int16 attr;
	/* 0x8 */ PS2_TerrainStripData *stripData;
	/* 0xc */ float qAverage;
};

typedef _TerrainTextureStripInfo TerrainTextureStripInfo;

struct _TerrainScrollVertex { // 0x4
	/* 0x0 */ float *uvPtr;
};

typedef _TerrainScrollVertex TerrainScrollVertex;

struct _TerrainScrollStripInfo { // 0x14
	/* 0x00 */ _TerrainScrollStripInfo *next;
	/* 0x04 */ int32 scrollSpeed;
	/* 0x08 */ int32 scrollNumTiles;
	/* 0x0c */ int32 scrollTile;
	/* 0x10 */ int32 count;
	/* 0x14 */ TerrainScrollVertex v[0];
};

typedef _TerrainScrollStripInfo TerrainScrollStripInfo;

struct TerrainAnimTexture { // 0x4
	/* 0x0 */ int numTextures;
};

struct _BSPLeaf { // 0x20
	/* 0x00 */ int16 flags;
	/* 0x02 */ int16 numFaces;
	/* 0x04 */ TFace *faceList;
	/* 0x08 */ BoundingBox box;
	/* 0x14 */ BoundingBox spectralBox;
};

typedef _BSPLeaf BSPLeaf;

struct _BSPNode { // 0x1c
	/* 0x00 */ int16 flags;
	/* 0x02 */ int16 a;
	/* 0x04 */ int16 b;
	/* 0x06 */ int16 c;
	/* 0x08 */ float d;
	/* 0x0c */ void *front;
	/* 0x10 */ void *back;
	/* 0x14 */ int16 front_spectral_error;
	/* 0x16 */ int16 back_spectral_error;
	/* 0x18 */ int16 front_material_error;
	/* 0x1a */ int16 back_material_error;
};

typedef _BSPNode BSPNode;

struct _IntroList { // 0x44
	/* 0x00 */ int32 numIntros;
	/* 0x04 */ Intro *intro[16];
};

typedef _IntroList IntroList;

struct _MorphVertex { // 0x10
	/* 0x0 */ uint32 vindex;
	/* 0x4 */ int16 x;
	/* 0x6 */ int16 y;
	/* 0x8 */ int16 z;
	/* 0xa */ int16 hx;
	/* 0xc */ int16 hy;
	/* 0xe */ int16 hz;
};

typedef _MorphVertex MorphVertex;

struct _MorphColor { // 0x8
	/* 0x0 */ uint8 mr;
	/* 0x1 */ uint8 mg;
	/* 0x2 */ uint8 mb;
	/* 0x3 */ uint8 ma;
	/* 0x4 */ uint8 sr;
	/* 0x5 */ uint8 sg;
	/* 0x6 */ uint8 sb;
	/* 0x7 */ uint8 sa;
};

typedef _MorphColor MorphColor;

struct BoundingSphere { // 0x10
	/* 0x0 */ float x;
	/* 0x4 */ float y;
	/* 0x8 */ float z;
	/* 0xc */ float r;
};

struct OctreeSphere { // 0x58
	/* 0x00 */ BoundingSphere boundsphere[3];
	/* 0x30 */ TerrainTextureStripInfo *strip;
	/* 0x34 */ int numSpheres;
	/* 0x38 */ OctreeSphere *spheres[8];
};

struct BSPTree { // 0x50
	/* 0x00 */ Vector4f globalOffset;
	/* 0x10 */ Vector4f localOffset;
	/* 0x20 */ BSPNode *bspRoot;
	/* 0x24 */ BSPLeaf *startLeaves;
	/* 0x28 */ int32 numLeaves;
	/* 0x2c */ int32 flags;
	/* 0x30 */ int32 ID;
	/* 0x34 */ int32 splineID;
	/* 0x38 */ Instance *instanceSpline;
	/* 0x3c */ int32 textureMorphValue;
	/* 0x40 */ int32 textureMorphStep;
	/* 0x44 */ OctreeSphere *octreeSphere;
	/* 0x48 */ ScrollInfo *octreeScrollInfo;
	/* 0x4c */ AnimatedInfo *octreeAnimatedInfo;
};

struct AnimList { // 0x4
	/* 0x0 */ int codeListLen;
	/* 0x4 */ int puncList[0];
};

struct _Terrain { // 0x50
	/* 0x00 */ int16 UnitChangeFlags;
	/* 0x02 */ int16 spad;
	/* 0x04 */ int32 numIntros;
	/* 0x08 */ Intro *introList;
	/* 0x0c */ int32 numVertices;
	/* 0x10 */ int32 numFaces;
	/* 0x14 */ int32 numNormals;
	/* 0x18 */ TVertex *vertexList;
	/* 0x1c */ TFace *faceList;
	/* 0x20 */ TVertexRGB *vertexRGBList;
	/* 0x24 */ int16 *normalList;
	/* 0x28 */ int numStreamUnitPortals;
	/* 0x2c */ void *streamUnitPortals;
	/* 0x30 */ MorphVertex *MorphDiffList;
	/* 0x34 */ MorphColor *MorphColorList;
	/* 0x38 */ int32 numBSPTrees;
	/* 0x3c */ BSPTree *BSPTreeArray;
	/* 0x40 */ int16 *morphNormalIdx;
	/* 0x44 */ MultiSignal *signals;
	/* 0x48 */ TerrainAnimTexture *terrainAnimTextures;
	/* 0x4c */ void *Occluders;
};

typedef _Terrain Terrain;

struct LightGroup { // 0x80
	/* 0x00 */ Matrixf lightMatrix;
	/* 0x40 */ Matrixf colorMatrix;
};

struct LightList { // 0xc
	/* 0x0 */ CVECTOR ambient;
	/* 0x4 */ int32 numLightGroups;
	/* 0x8 */ LightGroup *lightGroupList;
};

struct LightTableEntry { // 0x8
	/* 0x0 */ int16 r;
	/* 0x2 */ int16 g;
	/* 0x4 */ int16 b;
	/* 0x6 */ int16 radius;
};

struct _LightTable { // 0x8
	/* 0x0 */ uint8 length;
	/* 0x1 */ uint8 segment;
	/* 0x2 */ int16 speed;
	/* 0x4 */ LightTableEntry *lightTable;
};

typedef _LightTable LightTable;

struct _VMVertexMove { // 0x10
	/* 0x0 */ uint32 tvIdx;
	/* 0x4 */ Position base;
	/* 0xa */ uint16 offset;
	/* 0xc */ uint32 numStripVerts;
};

typedef _VMVertexMove VMVertexMove;

struct _VMVertexColor { // 0xc
	/* 0x0 */ uint32 tvIdx;
	/* 0x4 */ uint32 offset;
	/* 0x8 */ uint32 numStripVerts;
};

typedef _VMVertexColor VMVertexColor;

struct _VMOffset { // 0x6
	/* 0x0 */ int16 dx;
	/* 0x2 */ int16 dy;
	/* 0x4 */ int16 dz;
};

typedef _VMOffset VMMoveOffset;

struct _VMColorOffset { // 0x4
	/* 0x0 */ int8 dr;
	/* 0x1 */ int8 dg;
	/* 0x2 */ int8 db;
	/* 0x3 */ int8 da;
};

typedef _VMColorOffset VMColorOffset;

struct _VMInterpolated { // 0x10
	/* 0x0 */ uint32 tvIdx;
	/* 0x4 */ uint32 startIdx;
	/* 0x8 */ uint32 endIdx;
	/* 0xc */ int32 time;
};

typedef _VMInterpolated VMInterpolated;

struct _VMOffsetTable { // 0xc
	/* 0x0 */ int32 numVMOffsets;
	/* 0x4 */ union { // 0x6
		/* 0x4 */ VMMoveOffset moveOffsets;
		/* 0x4 */ VMColorOffset colorOffsets;
	} offsets;
};

typedef _VMOffsetTable VMOffsetTable;

struct _VMObject { // 0x40
	/* 0x00 */ uint16 flags;
	/* 0x02 */ uint16 bspIdx;
	/* 0x04 */ uint16 materialIdx;
	/* 0x06 */ uint16 spectralIdx;
	/* 0x08 */ uint16 currentIdx;
	/* 0x0a */ uint16 timeScale;
	/* 0x0c */ int32 timer;
	/* 0x10 */ Position position;
	/* 0x16 */ int16 radius;
	/* 0x18 */ int32 radiusSquared;
	/* 0x1c */ int32 numVMOffsetTables;
	/* 0x20 */ VMOffsetTable **vmoffsetTableList;
	/* 0x24 */ VMOffsetTable *curVMOffsetTable;
	/* 0x28 */ int32 numVMVertices;
	/* 0x2c */ void *vmvertexList;
	/* 0x30 */ int32 numVMInterpolated;
	/* 0x34 */ VMInterpolated *vminterpolatedList;
	/* 0x38 */ char *name;
	/* 0x3c */ int32 uniqueID;
};

typedef _VMObject VMObject;

struct _PlanMkr { // 0x8
	/* 0x0 */ Position pos;
	/* 0x6 */ int16 id;
};

typedef _PlanMkr PlanMkr;

struct _SFXMkr { // 0x24
	/* 0x00 */ uint8 *soundData;
	/* 0x04 */ int32 uniqueID;
	/* 0x08 */ SoundInstance sfxTbl[4];
	/* 0x14 */ Position pos;
	/* 0x1a */ int16 pad;
	/* 0x1c */ int32 livesInOnePlace;
	/* 0x20 */ int32 inSpectral;
};

typedef _SFXMkr SFXMkr;

struct _PlanPoint { // 0xc
	/* 0x0 */ float x;
	/* 0x4 */ float y;
	/* 0x8 */ float z;
};

typedef _PlanPoint PlanPoint;

struct _PlanFace { // 0x28
	/* 0x00 */ int16 pointIdx[3];
	/* 0x06 */ int16 faceIdx[3];
	/* 0x0c */ int16 min[3];
	/* 0x12 */ int16 max[3];
	/* 0x18 */ PlanPoint normal;
	/* 0x24 */ int32 searchCount;
};

typedef _PlanFace PlanFace;

struct _PlanOctTree { // 0x14
	/* 0x00 */ int16 faceIdx;
	/* 0x02 */ int16 count;
	/* 0x04 */ int16 octTreeIdx[8];
};

typedef _PlanOctTree PlanOctTree;

struct _PlanData { // 0x24
	/* 0x00 */ PlanPoint *pointList;
	/* 0x04 */ PlanFace *faceList;
	/* 0x08 */ PlanOctTree *planOctTree;
	/* 0x0c */ PlanPoint boundingBox[2];
};

typedef _PlanData PlanData;

struct Level { // 0xa4
	/* 0x00 */ Terrain *terrain;
	/* 0x04 */ LightList *lightList;
	/* 0x08 */ int32 numVMObjects;
	/* 0x0c */ VMObject *vmobjectList;
	/* 0x10 */ float waterZLevel;
	/* 0x14 */ uint8 backColorR;
	/* 0x15 */ uint8 backColorG;
	/* 0x16 */ uint8 backColorB;
	/* 0x17 */ uint8 cpad1;
	/* 0x18 */ uint8 spectralColorR;
	/* 0x19 */ uint8 spectralColorG;
	/* 0x1a */ uint8 spectralColorB;
	/* 0x1b */ uint8 cpad2;
	/* 0x1c */ uint8 waterColorR;
	/* 0x1d */ uint8 waterColorG;
	/* 0x1e */ uint8 waterColorB;
	/* 0x1f */ uint8 waterBlend;
	/* 0x20 */ uint16 fogFar;
	/* 0x22 */ uint16 fogNear;
	/* 0x24 */ uint16 spectralFogFar;
	/* 0x26 */ uint16 spectralFogNear;
	/* 0x28 */ uint16 waterFogFar;
	/* 0x2a */ uint16 waterFogNear;
	/* 0x2c */ int32 reverbType;
	/* 0x30 */ int32 reverbVolume;
	/* 0x34 */ LightList *spectrallightList;
	/* 0x38 */ int32 numCameras;
	/* 0x3c */ void *cameraList;
	/* 0x40 */ int32 flags;
	/* 0x44 */ int32 numIntros;
	/* 0x48 */ Intro *introList;
	/* 0x4c */ void *objectNameList;
	/* 0x50 */ char *worldName;
	/* 0x54 */ MultiSignal *startGoingIntoWaterSignal;
	/* 0x58 */ MultiSignal *startGoingOutOfWaterSignal;
	/* 0x5c */ int32 unitFlags;
	/* 0x60 */ MultiSignal *SignalListStart;
	/* 0x64 */ MultiSignal *SignalListEnd;
	/* 0x68 */ uint32 *relocList;
	/* 0x6c */ void *relocModule;
	/* 0x70 */ int32 NumberOfPlanMarkers;
	/* 0x74 */ PlanMkr *PlanMarkerList;
	/* 0x78 */ int32 NumberOfSFXMarkers;
	/* 0x7c */ SFXMkr *SFXMarkerList;
	/* 0x80 */ uint32 versionNumber;
	/* 0x84 */ char *dynamicMusicName;
	/* 0x88 */ int32 streamUnitID;
	/* 0x8c */ LightGroup *razielLightGroup;
	/* 0x90 */ LightGroup *razielSpectralLightGroup;
	/* 0x94 */ _VramLink *textureLoadList;
	/* 0x98 */ PlanData *planData;
	/* 0x9c */ uint32 mapRegion;
	/* 0xa0 */ int16 **WeatherHeightmapData;
};

struct _ColorType { // 0x4
	/* 0x0 */ uint8 r;
	/* 0x1 */ uint8 g;
	/* 0x2 */ uint8 b;
	/* 0x3 */ uint8 code;
};

typedef _ColorType ColorType;

struct _SavedCinematic { // 0x120
	/* 0x000 */ Vector4f position;
	/* 0x010 */ Vector4f focusPoint;
	/* 0x020 */ Vector4f base;
	/* 0x030 */ Vector4f targetPos;
	/* 0x040 */ Vector4f targetFocusPoint;
	/* 0x050 */ Vector4f targetBase;
	/* 0x060 */ Vector4f baseRot;
	/* 0x070 */ Vector4f focusRotation;
	/* 0x080 */ Vector4f focusPointVel;
	/* 0x090 */ Vector4f focusPointAccl;
	/* 0x0a0 */ Vector4f targetFocusRotation;
	/* 0x0b0 */ Vector4f baseVel;
	/* 0x0c0 */ Vector4f baseAccl;
	/* 0x0d0 */ float targetFocusDistance;
	/* 0x0d4 */ float focusDistance;
	/* 0x0d8 */ float maxVel;
	/* 0x0dc */ MultiSpline *posSpline;
	/* 0x0e0 */ MultiSpline *targetSpline;
	/* 0x0e4 */ int32 Cinematic_Camera_StreamID;
	/* 0x0f0 */ Vector4f sourceStartPoint;
	/* 0x100 */ Vector4f targetStartPoint;
	/* 0x110 */ short int useSourceStartPoint;
	/* 0x112 */ short int useTargetStartPoint;
	/* 0x114 */ Level *level;
};

typedef _SavedCinematic SavedCinematic;

struct _CameraCore_Type { // 0x310
	/* 0x000 */ Vector4f position;
	/* 0x010 */ Matrixf vvNormalWorVecMatf[2];
	/* 0x090 */ Matrixf defaultvvNormalWorVecMatf[2];
	/* 0x110 */ Matrixf wcTransformf;
	/* 0x150 */ Matrixf wcTransform2f;
	/* 0x190 */ Matrixf cwTransform2f;
	/* 0x1d0 */ Vector4f viewVolumeNormal[5];
	/* 0x220 */ Vector4f viewVolumeNormalPS2[4];
	/* 0x260 */ Matrixf vvNormalWorVecMatfPS2;
	/* 0x2a0 */ Vector4f rotation;
	/* 0x2b0 */ Vector4f debugPos;
	/* 0x2c0 */ Vector4f nondebugPos;
	/* 0x2d0 */ float leftX;
	/* 0x2d4 */ float rightX;
	/* 0x2d8 */ float topY;
	/* 0x2dc */ float bottomY;
	/* 0x2e0 */ int32 farPlane;
	/* 0x2e4 */ float projDistance;
	/* 0x2e8 */ float oldProjDistance;
	/* 0x2ec */ int32 aspectRatio;
	/* 0x2f0 */ int32 oldAspectRatio;
	/* 0x2f4 */ int32 nearPlane;
	/* 0x2f8 */ int32 waterBlurFlag;
	/* 0x2fc */ Rotation debugRot;
	/* 0x304 */ TFace *tiltTface;
	/* 0x308 */ Terrain *tiltTfaceTerrain;
};

typedef _CameraCore_Type CameraCore;

struct Camera { // 0xb00
	/* 0x000 */ _CameraCore_Type core;
	/* 0x310 */ float shake;
	/* 0x314 */ int16 shakeFrame;
	/* 0x316 */ int16 shakeScale;
	/* 0x318 */ int32 flags;
	/* 0x31c */ int32 lock;
	/* 0x320 */ int16 mode;
	/* 0x322 */ uint16 specialModeBits;
	/* 0x324 */ int16 posState;
	/* 0x326 */ int16 rotState;
	/* 0x328 */ int16 tiltState;
	/* 0x32a */ int16 distanceState;
	/* 0x32c */ float lagZ;
	/* 0x330 */ float tilt;
	/* 0x340 */ Vector4f focusPoint;
	/* 0x350 */ float focusDistance;
	/* 0x354 */ Instance *focusInstance;
	/* 0x360 */ Vector4f oldFocusInstancePos;
	/* 0x370 */ Vector4f newFocusInstancePos;
	/* 0x380 */ Vector4f oldFocusInstanceRot;
	/* 0x390 */ Vector4f newFocusInstanceRot;
	/* 0x3a0 */ Vector4f focusInstanceVelVec;
	/* 0x3b0 */ Vector4f focusLeadPivot;
	/* 0x3c0 */ Vector4f focusOffset;
	/* 0x3d0 */ Vector4f focusRotation;
	/* 0x3e0 */ float tiltVel;
	/* 0x3e4 */ float tiltAccl;
	/* 0x3f0 */ Vector4f positionVel;
	/* 0x400 */ Vector4f positionAccl;
	/* 0x410 */ Vector4f focusPointVel;
	/* 0x420 */ Vector4f focusPointAccl;
	/* 0x430 */ float focusDistanceVel;
	/* 0x434 */ float focusDistanceAccl;
	/* 0x440 */ Vector4f focusRotVel;
	/* 0x450 */ Vector4f focusRotAccl;
	/* 0x460 */ float maxVel;
	/* 0x470 */ Vector4f targetPos;
	/* 0x480 */ float targetTilt;
	/* 0x484 */ float targetFocusDistance;
	/* 0x490 */ Vector4f targetFocusPoint;
	/* 0x4a0 */ float collisionTargetFocusDistance;
	/* 0x4b0 */ Vector4f targetFocusRotation;
	/* 0x4c0 */ float tfaceTilt;
	/* 0x4d0 */ Vector4f collisionTargetFocusRotation;
	/* 0x4e0 */ float smooth;
	/* 0x4e4 */ CameraKey *cameraKey;
	/* 0x4e8 */ int16 lookTimer;
	/* 0x4ea */ int16 lookSavedMode;
	/* 0x4ec */ int16 CameraLookStickyFlag;
	/* 0x4ee */ int16 panic_count;
	/* 0x4f0 */ int16 stack;
	/* 0x4f2 */ int16 targetStack;
	/* 0x4f4 */ int32 savedMode[3];
	/* 0x500 */ float savedTargetFocusDistance[3];
	/* 0x510 */ Vector4f savedFocusRotation;
	/* 0x520 */ float savedFocusDistance;
	/* 0x524 */ float signalFocusDistance;
	/* 0x530 */ SavedCinematic savedCinematic[3];
	/* 0x890 */ Vector4f savedfocusRotation;
	/* 0x8a0 */ Vector4f signalPos;
	/* 0x8b0 */ Vector4f signalRot;
	/* 0x8c0 */ int32 lookThrowMode;
	/* 0x8c4 */ int16 forced_movement;
	/* 0x8c6 */ int16 last_forced_movement;
	/* 0x8c8 */ int16 rotDirection;
	/* 0x8d0 */ Vector4f lookRot;
	/* 0x8e0 */ MultiSpline *Spline00;
	/* 0x8e4 */ MultiSpline *Spline01;
	/* 0x8e8 */ int32 Cinematic_Camera_StreamID;
	/* 0x8f0 */ Vector4f sourceStartPoint;
	/* 0x900 */ Vector4f targetStartPoint;
	/* 0x910 */ short int useSourceStartPoint;
	/* 0x912 */ short int useTargetStartPoint;
	/* 0x920 */ Vector4f splinecam_helprot;
	/* 0x930 */ struct { // 0x80
		/* 0x930 */ struct { // 0x60
			/* 0x930 */ MultiSpline *posSpline;
			/* 0x934 */ MultiSpline *targetSpline;
			/* 0x938 */ int32 Cinematic_Camera_StreamID;
			/* 0x940 */ Vector4f sourceStartPoint;
			/* 0x950 */ Vector4f targetStartPoint;
			/* 0x960 */ short int useSourceStartPoint;
			/* 0x962 */ short int useTargetStartPoint;
			/* 0x970 */ Vector4f lastSplinePos;
			/* 0x980 */ int16 splinePointAhead;
			/* 0x982 */ int16 cinema_done;
			/* 0x984 */ int splinecam_currkey;
			/* 0x988 */ int splinecam_helpkey;
		} Cinematic;
		/* 0x990 */ struct { // 0x14
			/* 0x990 */ float stopTimer;
			/* 0x994 */ int32 stopHit;
			/* 0x998 */ TFace *tface;
			/* 0x99c */ TFace *oldTFace;
			/* 0x9a0 */ int32 hit;
		} Follow;
	} data;
	/* 0x9b0 */ float teleportZRot;
	/* 0x9b4 */ float extraZRot;
	/* 0x9b8 */ float extraXRot;
	/* 0x9bc */ int16 leftTimer;
	/* 0x9be */ int16 rightTimer;
	/* 0x9c0 */ int16 collision_lastPush;
	/* 0x9c2 */ int16 collision_timer;
	/* 0x9c4 */ uint32 prev_instance_mode;
	/* 0x9c8 */ uint32 instance_mode;
	/* 0x9cc */ float instance_xyvel;
	/* 0x9d0 */ float instance_prev_xyvel;
	/* 0x9e0 */ Vector4f real_focuspoint;
	/* 0x9f0 */ int16 always_rotate_flag;
	/* 0x9f2 */ int16 pad;
	/* 0x9f4 */ float actual_x_rot;
	/* 0x9f8 */ float actual_vel_x;
	/* 0x9fc */ float actual_acc_x;
	/* 0xa00 */ float x_rot_change;
	/* 0xa04 */ float focuspoint_fallz;
	/* 0xa08 */ float lead_angle;
	/* 0xa0c */ float lead_vel;
	/* 0xa10 */ float lead_accl;
	/* 0xa14 */ float lead_timer;
	/* 0xa20 */ Vector4f camera_plane;
	/* 0xa30 */ Vector4f left_point;
	/* 0xa40 */ Vector4f right_point;
	/* 0xa50 */ Vector4f left_point2;
	/* 0xa60 */ Vector4f right_point2;
	/* 0xa70 */ float ACE_amount;
	/* 0xa74 */ int16 shorten_count;
	/* 0xa76 */ int16 shorten_flag;
	/* 0xa78 */ int16 camera_still;
	/* 0xa7c */ float Camera_lookDist;
	/* 0xa80 */ float combat_cam_distance;
	/* 0xa84 */ float combat_cam_angle;
	/* 0xa88 */ float combat_cam_weight;
	/* 0xa8c */ int32 combat_cam_debounce;
	/* 0xa90 */ float newCombatCamDist;
	/* 0xa94 */ float newCombatCamSpeed;
	/* 0xa98 */ float CameraCenterDelay;
	/* 0xa9c */ float CenterFlag;
	/* 0xaa0 */ uint16 LockBehindMode;
	/* 0xaa2 */ uint16 LastLockBehindMode;
	/* 0xaa4 */ float roll_target;
	/* 0xaa8 */ float current_roll_amount;
	/* 0xaac */ float roll_inc;
	/* 0xab0 */ Vector4f ThrowLookPoint;
	/* 0xac0 */ Vector4f lookaccl;
	/* 0xad0 */ Vector4f lookvel;
	/* 0xae0 */ int matrixmode;
	/* 0xaf0 */ Vector4f lastCombatPos;
};

struct CameraCollisionInfo { // 0xa0
	/* 0x00 */ TFace *tfaceList[5];
	/* 0x14 */ Terrain *tfaceTerrain[5];
	/* 0x28 */ int32 bspTree[6];
	/* 0x40 */ float lengthList[6];
	/* 0x58 */ int32 flags;
	/* 0x5c */ int32 line;
	/* 0x60 */ int32 numCollided;
	/* 0x64 */ float lenCenterToExtend;
	/* 0x70 */ Vector4f start;
	/* 0x80 */ Vector4f end;
	/* 0x90 */ int32 cldLines;
};

struct MusicLoadCmd { // 0x8
	/* 0x0 */ int type;
	/* 0x4 */ int data;
};

struct MusicLoadInfo { // 0x4c
	/* 0x00 */ int state;
	/* 0x04 */ int nextState;
	/* 0x08 */ int errorStatus;
	/* 0x0c */ int bankLoaded;
	/* 0x10 */ int checkMusicDelay;
	/* 0x14 */ int currentMusicPlane;
	/* 0x18 */ char currentMusicName[8];
	/* 0x20 */ MusicLoadCmd commandQueue[4];
	/* 0x40 */ int commandIn;
	/* 0x44 */ int commandOut;
	/* 0x48 */ int numCmdsInQueue;
};

struct ObjectPeriodicSound { // 0x18
	/* 0x00 */ uint8 type;
	/* 0x01 */ uint8 numSfxIDs;
	/* 0x02 */ uint8 soundInst;
	/* 0x03 */ uint8 flags;
	/* 0x04 */ uint16 minVolDistance;
	/* 0x08 */ float pitch;
	/* 0x0c */ float pitchVariation;
	/* 0x10 */ uint8 maxVolume;
	/* 0x11 */ uint8 maxVolVariation;
	/* 0x12 */ uint8 initialDelay;
	/* 0x13 */ uint8 initialDelayVariation;
	/* 0x14 */ uint8 onTime;
	/* 0x15 */ uint8 onTimeVariation;
	/* 0x16 */ uint8 offTime;
	/* 0x17 */ uint8 offTimeVariation;
};

struct ObjectExtendedEventSound { // 0x18
	/* 0x00 */ uint8 type;
	/* 0x01 */ uint8 numSfxIDs;
	/* 0x02 */ uint8 soundInst;
	/* 0x03 */ uint8 flags;
	/* 0x04 */ uint16 minVolDistance;
	/* 0x08 */ float pitch;
	/* 0x0c */ float pitchVariation;
	/* 0x10 */ uint8 maxVolume;
	/* 0x11 */ uint8 maxVolVariation;
	/* 0x12 */ uint8 initialDelay;
	/* 0x13 */ uint8 initialDelayVariation;
	/* 0x14 */ uint8 onTime;
	/* 0x15 */ uint8 onTimeVariation;
	/* 0x16 */ uint8 offTime;
	/* 0x17 */ uint8 offTimeVariation;
};

struct ObjectEventSound { // 0x14
	/* 0x00 */ uint8 type;
	/* 0x01 */ uint8 numSfxIDs;
	/* 0x02 */ uint8 soundInst;
	/* 0x03 */ uint8 flags;
	/* 0x04 */ uint16 minVolDistance;
	/* 0x08 */ float pitch;
	/* 0x0c */ float pitchVariation;
	/* 0x10 */ uint8 maxVolume;
	/* 0x11 */ uint8 maxVolVariation;
	/* 0x12 */ uint8 initialDelay;
	/* 0x13 */ uint8 initialDelayVariation;
};

struct ObjectOneShotSound { // 0x14
	/* 0x00 */ uint8 type;
	/* 0x01 */ uint8 numSfxIDs;
	/* 0x02 */ uint8 soundInst;
	/* 0x03 */ uint8 flags;
	/* 0x04 */ uint16 minVolDistance;
	/* 0x08 */ float pitch;
	/* 0x0c */ float pitchVariation;
	/* 0x10 */ uint8 maxVolume;
	/* 0x11 */ uint8 maxVolVariation;
	/* 0x12 */ uint8 initialDelay;
	/* 0x13 */ uint8 initialDelayVariation;
};

struct SoundEffectChannel { // 0x24
	/* 0x00 */ uint8 inUse;
	/* 0x01 */ uint8 unused;
	/* 0x02 */ uint16 unused1;
	/* 0x04 */ uint32 handle;
	/* 0x08 */ int16 volume;
	/* 0x0a */ int16 volumeChangeTime;
	/* 0x0c */ int16 volumeChangeTimeSave;
	/* 0x0e */ int16 volumeChangePerUpdate;
	/* 0x10 */ int16 volumeChangeSign;
	/* 0x12 */ int16 volumeChangeErrPerUpdate;
	/* 0x14 */ int16 volumeChangeError;
	/* 0x16 */ int16 pad;
	/* 0x18 */ float pitch;
	/* 0x1c */ float pitchChangePerUpdate;
	/* 0x20 */ int pitchChangeTime;
};

struct gSoundData { // 0x14
	/* 0x00 */ uint32 gMasterVol;
	/* 0x04 */ uint32 gMusicVol;
	/* 0x08 */ uint32 gSfxVol;
	/* 0x0c */ uint32 gVoiceVol;
	/* 0x10 */ int8 gSfxOn;
	/* 0x11 */ int8 gMusicOn;
	/* 0x12 */ int8 gVoiceOn;
	/* 0x13 */ int8 soundsLoaded;
};

struct LightInstance { // 0x54
	/* 0x00 */ float x;
	/* 0x04 */ float y;
	/* 0x08 */ float z;
	/* 0x0c */ float radius;
	/* 0x10 */ float r;
	/* 0x14 */ float g;
	/* 0x18 */ float b;
	/* 0x1c */ _Instance *lightInstance;
	/* 0x20 */ float mr;
	/* 0x24 */ float mg;
	/* 0x28 */ float mb;
	/* 0x2c */ int32 diffTime;
	/* 0x30 */ float sr;
	/* 0x34 */ float sg;
	/* 0x38 */ float sb;
	/* 0x3c */ int32 lifeTime;
	/* 0x40 */ int32 segment;
	/* 0x44 */ uint32 flags;
	/* 0x48 */ int32 inBSP;
	/* 0x4c */ int32 Priority;
	/* 0x50 */ int16 fadein;
	/* 0x52 */ int16 fadeout;
};

struct _GameTrackerASMData_Type { // 0x4
	/* 0x0 */ int16 MorphTime;
	/* 0x2 */ int16 MorphType;
};

typedef _GameTrackerASMData_Type GameTrackerASMData;

struct _GameData_Type { // 0x4
	/* 0x0 */ _GameTrackerASMData_Type asmData;
};

typedef _GameData_Type GameData;

struct GameTracker { // 0x240
	/* 0x000 */ _GameData_Type gameData;
	/* 0x004 */ menu_t *menu;
	/* 0x008 */ void *memcard;
	/* 0x00c */ Level *level;
	/* 0x010 */ Instance *playerInstance;
	/* 0x014 */ InstanceList *instanceList;
	/* 0x018 */ InstancePool *instancePool;
	/* 0x01c */ VertexPool *vertexPool;
	/* 0x020 */ Matrixf *matrixPool[2];
	/* 0x028 */ int32 matrixToggle;
	/* 0x02c */ int32 numMatrices;
	/* 0x030 */ ObjectTracker *GlobalObjects;
	/* 0x034 */ int32 controlCommand[2][7];
	/* 0x06c */ int32 controlData[2][7];
	/* 0x0a4 */ int32 overrideData[2][7];
	/* 0x0dc */ int32 debugFlags;
	/* 0x0e0 */ int32 debugFlags2;
	/* 0x0e4 */ int32 debugFlags3;
	/* 0x0e8 */ int wipeType;
	/* 0x0ec */ float wipeCur;
	/* 0x0f0 */ float wipeTarget;
	/* 0x0f4 */ float wipeStep;
	/* 0x0f8 */ void *reqDisp;
	/* 0x0fc */ int32 *drawTimerReturn;
	/* 0x100 */ int32 usecsStartDraw;
	/* 0x104 */ uint32 displayFrameCount;
	/* 0x108 */ uint32 frameCount;
	/* 0x10c */ uint32 fpsFast;
	/* 0x110 */ int32 gameFlags;
	/* 0x114 */ int32 streamFlags;
	/* 0x118 */ Level *mainDrawUnit;
	/* 0x11c */ int8 baseAreaName[16];
	/* 0x12c */ int8 timezone;
	/* 0x12e */ int16 levelDone;
	/* 0x130 */ int16 levelChange;
	/* 0x132 */ int16 gameMode;
	/* 0x134 */ int32 StreamUnitID;
	/* 0x138 */ int8 SwitchToNewStreamUnit;
	/* 0x139 */ int8 DoLightingBlend;
	/* 0x13a */ int16 SwitchToNewWarpIndex;
	/* 0x13c */ int8 S_baseAreaName[16];
	/* 0x14c */ int16 toSignal;
	/* 0x14e */ int16 fromSignal;
	/* 0x150 */ int8 LastSignal;
	/* 0x152 */ int16 StreamNormalA;
	/* 0x154 */ int16 StreamNormalB;
	/* 0x156 */ int16 StreamNormalC;
	/* 0x158 */ int32 StreamNormalD;
	/* 0x15c */ int32 moveRazielToStreamID;
	/* 0x160 */ gSoundData sound;
	/* 0x174 */ int16 controllerMode;
	/* 0x176 */ uint8 plan_collide_override;
	/* 0x177 */ uint8 cheatMode;
	/* 0x178 */ int8 currentLvl;
	/* 0x179 */ int8 lastLvl;
	/* 0x17c */ int32 defRemoveDist;
	/* 0x180 */ int32 playerCheatFlags;
	/* 0x184 */ int32 debugDrawFlags;
	/* 0x188 */ void *planningPool;
	/* 0x18c */ void *enemyPlanPool;
	/* 0x190 */ uint8 block_collide_override;
	/* 0x191 */ uint8 raziel_collide_override;
	/* 0x192 */ int16 timeOfDay;
	/* 0x194 */ int32 decoupleGame;
	/* 0x198 */ int32 multGameTime;
	/* 0x19c */ int16 spectral_fadeValue;
	/* 0x19e */ int16 material_fadeValue;
	/* 0x1a0 */ uint32 drawTime;
	/* 0x1a4 */ uint32 currentTime;
	/* 0x1a8 */ uint32 currentMaterialTime;
	/* 0x1ac */ uint32 currentSpectralTime;
	/* 0x1b0 */ uint32 lastLoopTime;
	/* 0x1b4 */ uint32 oldtimeMult;
	/* 0x1b8 */ uint32 currentTicks;
	/* 0x1bc */ uint32 totalTime;
	/* 0x1c0 */ uint32 idleTime;
	/* 0x1c4 */ int32 visibleInstances;
	/* 0x1c8 */ int gameFramePassed;
	/* 0x1cc */ uint32 timeSinceLastGameFrame;
	/* 0x1d0 */ float timeMult;
	/* 0x1d4 */ float globalTimeMult;
	/* 0x1d8 */ float spectralTimeMult;
	/* 0x1dc */ float materialTimeMult;
	/* 0x1e0 */ int32 debugTimeMult;
	/* 0x1e4 */ int32 frameRateLock;
	/* 0x1e8 */ int32 monster_collide_override;
	/* 0x1f0 */ Vector4f skydomeOffset;
	/* 0x200 */ char playerName[16];
	/* 0x210 */ char playerNamePadded[16];
	/* 0x220 */ int32 noMonstersCount;
	/* 0x224 */ Instance *reaverInstance;
	/* 0x228 */ _MonsterSchedule *currentSense;
	/* 0x22c */ _MonsterSchedule *currentSchedule;
	/* 0x230 */ _MonsterSchedule *streamHolder;
	/* 0x234 */ int32 streamHandle;
	/* 0x238 */ int32 voID;
};

struct SpQuat { // 0x10
	/* 0x0 */ float x;
	/* 0x4 */ float y;
	/* 0x8 */ float z;
	/* 0xc */ float w;
};

struct SplineRotKey { // 0x14
	/* 0x00 */ int32 count;
	/* 0x04 */ SpQuat q;
};

struct RSpline { // 0x8
	/* 0x0 */ SplineRotKey *key;
	/* 0x4 */ int16 numkeys;
	/* 0x6 */ uint8 type;
	/* 0x7 */ uint8 flags;
};

struct SplineKey { // 0x28
	/* 0x00 */ int32 count;
	/* 0x04 */ Vector3f point;
	/* 0x10 */ Vector3f dd;
	/* 0x1c */ Vector3f ds;
};

struct Spline { // 0x8
	/* 0x0 */ SplineKey *key;
	/* 0x4 */ int16 numkeys;
	/* 0x6 */ uint8 type;
	/* 0x7 */ uint8 flags;
};

struct SplineDef { // 0x8
	/* 0x0 */ int16 currkey;
	/* 0x2 */ uint16 denomFlag;
	/* 0x4 */ int32 fracCurr;
};

struct MultiSpline { // 0x70
	/* 0x00 */ Spline *positional;
	/* 0x04 */ RSpline *rotational;
	/* 0x08 */ Spline *scaling;
	/* 0x0c */ Spline *color;
	/* 0x10 */ SplineDef curPositional;
	/* 0x18 */ SplineDef curRotational;
	/* 0x20 */ SplineDef curScaling;
	/* 0x28 */ SplineDef curColor;
	/* 0x30 */ Matrixf curRotMatrix;
};

struct _FX_MATRIX { // 0x50
	/* 0x00 */ NodeType node;
	/* 0x08 */ int32 flags;
	/* 0x0c */ int32 pad;
	/* 0x10 */ Matrixf lwTransform;
};

typedef _FX_MATRIX FX_MATRIX;

struct _Splyn { // 0xc
	/* 0x0 */ Instance *instance;
	/* 0x4 */ SplineDef splineDef;
};

typedef _Splyn Splyn;

struct _FX_PRIM { // 0xc0
	/* 0x00 */ NodeType node;
	/* 0x08 */ uint32 flags;
	/* 0x0c */ int32 tpageid;
	/* 0x10 */ Vector4f position;
	/* 0x20 */ Vector3f v0;
	/* 0x2c */ int16 timeToLive;
	/* 0x2e */ int8 segment;
	/* 0x2f */ int8 local_seg;
	/* 0x30 */ Vector3f v1;
	/* 0x3c */ uint32 color;
	/* 0x40 */ int32 *aniTpageid;
	/* 0x44 */ int8 aniTextureCurrent;
	/* 0x45 */ int8 aniTextureCount;
	/* 0x46 */ int8 aniTextureTimerCurrent;
	/* 0x47 */ int8 aniTextureRate;
	/* 0x48 */ Instance *attach_instance;
	/* 0x4c */ uint32 startColor;
	/* 0x50 */ Vector3f v2;
	/* 0x5c */ uint32 endColor;
	/* 0x60 */ Vector3f Vel;
	/* 0x6c */ float scale_speed;
	/* 0x70 */ Vector3f Accl;
	/* 0x7c */ int16 colorFadeValue;
	/* 0x7e */ int16 colorFadeStep;
	/* 0x80 */ Vector3f v3;
	/* 0x8c */ union { // 0x4
		/* 0x8c */ FX_MATRIX *matrix;
		/* 0x8c */ void *prim_ptr;
	} ptrs;
	/* 0x90 */ int16 fadeValue[4];
	/* 0x98 */ int16 fadeStep;
	/* 0x9a */ int16 bone_pos;
	/* 0x9c */ int16 work0;
	/* 0x9e */ int16 work1;
	/* 0xa0 */ int16 work2;
	/* 0xa2 */ int16 work3;
	/* 0xa4 */ Splyn splyn;
	/* 0xb0 */ int32 pad1;
	/* 0xb4 */ int8 pad2;
	/* 0xb5 */ int8 predator_offset;
	/* 0xb6 */ int16 quad_sortpush;
	/* 0xb8 */ int32 spatter_tpageid;
	/* 0xbc */ uint8 spatter_size;
	/* 0xbd */ uint8 spatter_lifetime;
	/* 0xbe */ int16 primNumber;
};

typedef _FX_PRIM FX_PRIM;

struct _FXTracker { // 0x30a30
	/* 0x00000 */ FX_PRIM primPool[1024];
	/* 0x30000 */ FX_MATRIX matrixPool[32];
	/* 0x30a00 */ NodeType usedPrimList;
	/* 0x30a08 */ NodeType usedPrimListSprite;
	/* 0x30a10 */ NodeType freePrimList;
	/* 0x30a18 */ NodeType usedMatrixList;
	/* 0x30a20 */ NodeType freeMatrixList;
};

typedef _FXTracker FXTracker;

struct __BubbleParams { // 0x14
	/* 0x00 */ int16 DisperseFrames;
	/* 0x02 */ int16 KillScale;
	/* 0x04 */ int16 MinSplashSize;
	/* 0x06 */ int16 MaxSpeed;
	/* 0x08 */ int16 MaxSpeedRange;
	/* 0x0a */ int16 ScaleRate;
	/* 0x0c */ int16 ScaleRateRange;
	/* 0x0e */ int16 StartScale;
	/* 0x10 */ int16 StartScaleRange;
	/* 0x12 */ int16 UniqueBubbles;
};

typedef __BubbleParams BubbleParams;

struct __GenericBubbleParams { // 0x30
	/* 0x00 */ BubbleParams BP;
	/* 0x14 */ int16 number;
	/* 0x16 */ int16 birthradius;
	/* 0x18 */ int16 velx;
	/* 0x1a */ int16 vely;
	/* 0x1c */ int16 velz;
	/* 0x1e */ int16 velxrange;
	/* 0x20 */ int16 velyrange;
	/* 0x22 */ int16 velzrange;
	/* 0x24 */ int16 accx;
	/* 0x26 */ int16 accy;
	/* 0x28 */ int16 accz;
	/* 0x2a */ int16 accxrange;
	/* 0x2c */ int16 accyrange;
	/* 0x2e */ int16 acczrange;
};

typedef __GenericBubbleParams GenericBubbleParams;

struct _GenericParticleParams { // 0x74
	/* 0x00 */ int16 size;
	/* 0x02 */ uint8 StartOnInit;
	/* 0x03 */ uint8 type;
	/* 0x04 */ int16 birthRadius;
	/* 0x06 */ int8 startSegment;
	/* 0x07 */ int8 endSegment;
	/* 0x08 */ Vector3f direction;
	/* 0x14 */ float accx;
	/* 0x18 */ float accy;
	/* 0x1c */ float accz;
	/* 0x20 */ uint8 startColor_red;
	/* 0x21 */ uint8 startColor_green;
	/* 0x22 */ uint8 startColor_blue;
	/* 0x23 */ uint8 startColor_alpha;
	/* 0x24 */ uint8 endColor_red;
	/* 0x25 */ uint8 endColor_green;
	/* 0x26 */ uint8 endColor_blue;
	/* 0x27 */ uint8 endColor_alpha;
	/* 0x28 */ int8 texture;
	/* 0x29 */ int8 model;
	/* 0x2a */ int8 useInstanceModel;
	/* 0x2b */ int8 use_child;
	/* 0x2c */ int16 lifeTime;
	/* 0x2e */ int16 primLifeTime;
	/* 0x30 */ int8 numberBirthParticles;
	/* 0x31 */ int8 z_undulation_mode;
	/* 0x32 */ int16 scaleSpeed;
	/* 0x34 */ Position offset;
	/* 0x3a */ int16 startScale;
	/* 0x3c */ int8 subtype;
	/* 0x3d */ int8 stay_linked_to_startinstance;
	/* 0x3e */ int16 absolute_direction;
	/* 0x40 */ int8 shape;
	/* 0x41 */ int8 shape_model;
	/* 0x42 */ int16 birthradiusmin;
	/* 0x44 */ uint8 spatter_number;
	/* 0x45 */ uint8 spatter_sizeRand;
	/* 0x46 */ uint8 spatter_textureRand;
	/* 0x47 */ uint8 group_id;
	/* 0x48 */ uint16 deactivate_range;
	/* 0x4a */ int16 primLifeTimeRand;
	/* 0x4c */ int16 endsize;
	/* 0x4e */ int16 endsizeRand;
	/* 0x50 */ int16 sizerand;
	/* 0x52 */ int8 green_blood_flag;
	/* 0x53 */ int8 textureRand;
	/* 0x54 */ int8 attractor_seg;
	/* 0x55 */ int8 absolute_seg;
	/* 0x56 */ uint8 spatter_size;
	/* 0x57 */ int8 always_generate;
	/* 0x58 */ float velocity_scale;
	/* 0x5c */ float gravity_distance;
	/* 0x60 */ float elasticity;
	/* 0x64 */ int8 local_seg;
	/* 0x65 */ uint8 spectral_colorize;
	/* 0x66 */ int8 rotation_seg;
	/* 0x67 */ int8 sortpush;
	/* 0x68 */ uint8 spectral_color_red;
	/* 0x69 */ uint8 spectral_color_green;
	/* 0x6a */ uint8 spectral_color_blue;
	/* 0x6b */ uint8 spectral_color_alpha;
	/* 0x6c */ int8 aniTextureCount;
	/* 0x6d */ int8 aniTextureRate;
	/* 0x6e */ int8 spatter_texture;
	/* 0x6f */ uint8 spatter_lifetime;
	/* 0x70 */ int16 suck_instanceID;
	/* 0x72 */ int8 predator_offset;
	/* 0x73 */ int8 pad;
};

typedef _GenericParticleParams GenericParticleParams;

struct _GenericRibbonParams { // 0x20
	/* 0x00 */ uint8 group_id;
	/* 0x01 */ int8 StartOnInit;
	/* 0x02 */ int8 startSegment;
	/* 0x03 */ int8 endSegment;
	/* 0x04 */ int8 type;
	/* 0x05 */ int8 use_child;
	/* 0x06 */ int16 ribbonLifeTime;
	/* 0x08 */ int16 faceLifeTime;
	/* 0x0a */ int16 startFadeValue;
	/* 0x0c */ uint32 startColor;
	/* 0x10 */ uint32 endColor;
	/* 0x14 */ uint32 spectral_startColor;
	/* 0x18 */ uint32 spectral_endColor;
	/* 0x1c */ int8 texture;
	/* 0x1d */ int8 model;
	/* 0x1e */ int8 useInstanceModel;
	/* 0x1f */ int8 spectral_colorize;
};

typedef _GenericRibbonParams GenericRibbonParams;

struct _GenericGlowParams { // 0x28
	/* 0x00 */ int8 StartOnInit;
	/* 0x01 */ int8 segment;
	/* 0x02 */ int8 segmentEnd;
	/* 0x03 */ int8 numSegments;
	/* 0x04 */ uint8 color_num;
	/* 0x05 */ int8 use_child;
	/* 0x06 */ uint8 numColors;
	/* 0x07 */ int8 rotate_with_camera;
	/* 0x08 */ int16 ColorCycleRate;
	/* 0x0a */ int8 spectral_color_num;
	/* 0x0b */ uint8 spectral_colorize;
	/* 0x0c */ int16 width;
	/* 0x0e */ int16 height;
	/* 0x10 */ int16 endwidth;
	/* 0x12 */ int16 endheight;
	/* 0x14 */ int32 lifetime;
	/* 0x18 */ int16 fadein_time;
	/* 0x1a */ int16 fadeout_time;
	/* 0x1c */ int16 sortpush;
	/* 0x1e */ int8 bright_when_facing;
	/* 0x1f */ int8 facing_seg0;
	/* 0x20 */ int8 facing_seg1;
	/* 0x21 */ int8 texture;
	/* 0x22 */ int8 model;
	/* 0x23 */ int8 useInstanceModel;
	/* 0x24 */ int16 rotation_speed;
	/* 0x26 */ int8 textureRand;
	/* 0x27 */ uint8 group_id;
};

typedef _GenericGlowParams GenericGlowParams;

struct _GenericLightningParams { // 0x54
	/* 0x00 */ int8 type;
	/* 0x01 */ int8 use_child;
	/* 0x02 */ int16 lifeTime;
	/* 0x04 */ int16 deg;
	/* 0x06 */ int16 deg_inc;
	/* 0x08 */ Position start_offset;
	/* 0x0e */ int8 startSeg;
	/* 0x0f */ int8 endSeg;
	/* 0x10 */ Position end_offset;
	/* 0x16 */ int8 matrixSeg;
	/* 0x17 */ uint8 segs;
	/* 0x18 */ int16 width;
	/* 0x1a */ int16 small_width;
	/* 0x1c */ int16 sine_size;
	/* 0x1e */ int16 variation;
	/* 0x20 */ uint32 color;
	/* 0x24 */ uint32 endcolor;
	/* 0x28 */ uint32 glow_color;
	/* 0x2c */ uint32 glow_endcolor;
	/* 0x30 */ uint32 spectral_color;
	/* 0x34 */ uint32 spectral_endcolor;
	/* 0x38 */ uint32 spectral_glow_color;
	/* 0x3c */ uint32 spectral_glow_endcolor;
	/* 0x40 */ int8 StartOnInit;
	/* 0x41 */ int8 model;
	/* 0x42 */ int8 texture;
	/* 0x43 */ int8 glow_texture;
	/* 0x44 */ int8 useInstanceModel;
	/* 0x45 */ int8 spectral_colorize;
	/* 0x46 */ int8 fade_when_facing;
	/* 0x47 */ uint8 group_id;
	/* 0x48 */ int16 end_width;
	/* 0x4a */ int16 end_small_width;
	/* 0x4c */ int16 fadein_time;
	/* 0x4e */ int16 fadeout_time;
	/* 0x50 */ int16 end_InstanceID;
	/* 0x52 */ int8 end_inst_override;
	/* 0x53 */ int8 predator_offset;
};

typedef _GenericLightningParams GenericLightningParams;

struct _GenericBlastringParams { // 0x34
	/* 0x00 */ int8 type;
	/* 0x01 */ int8 use_child;
	/* 0x02 */ int16 lifeTime;
	/* 0x04 */ Position offset;
	/* 0x0a */ int8 matrixSeg;
	/* 0x0b */ int8 useInstanceModel;
	/* 0x0c */ int8 segment;
	/* 0x0d */ int8 sortInWorld;
	/* 0x0e */ int16 radius;
	/* 0x10 */ int16 size1;
	/* 0x12 */ int16 size2;
	/* 0x14 */ int16 endRadius;
	/* 0x16 */ int16 colorchange_radius;
	/* 0x18 */ int16 vel;
	/* 0x1a */ int8 model;
	/* 0x1b */ int8 texture;
	/* 0x1c */ int accl;
	/* 0x20 */ int16 height1;
	/* 0x22 */ int16 height2;
	/* 0x24 */ int16 height3;
	/* 0x26 */ int8 predator_offset;
	/* 0x27 */ int8 stay_in_place;
	/* 0x28 */ uint32 startColor;
	/* 0x2c */ uint32 endColor;
	/* 0x30 */ int8 StartOnInit;
	/* 0x31 */ int8 dfacade_flag;
	/* 0x32 */ uint8 group_id;
	/* 0x33 */ int8 pad;
};

typedef _GenericBlastringParams GenericBlastringParams;

struct _GenericFlashParams { // 0xc
	/* 0x0 */ int8 type;
	/* 0x1 */ int8 StartOnInit;
	/* 0x2 */ int16 timeToColor;
	/* 0x4 */ uint32 color;
	/* 0x8 */ uint8 timeAtColor;
	/* 0x9 */ uint8 group_id;
	/* 0xa */ int16 timeFromColor;
};

typedef _GenericFlashParams GenericFlashParams;

struct _GenericDynamicLightParams { // 0x24
	/* 0x00 */ int16 type;
	/* 0x02 */ int16 length;
	/* 0x04 */ int16 startSegment;
	/* 0x06 */ int8 endSegment;
	/* 0x07 */ int8 Priority;
	/* 0x08 */ uint8 rMin;
	/* 0x09 */ uint8 gMin;
	/* 0x0a */ uint8 bMin;
	/* 0x0b */ int8 terrainOnly;
	/* 0x0c */ uint8 rMax;
	/* 0x0d */ uint8 gMax;
	/* 0x0e */ uint8 bMax;
	/* 0x0f */ int8 StartOnInit;
	/* 0x10 */ int16 minRadius;
	/* 0x12 */ int16 maxRadius;
	/* 0x14 */ int16 lifeTime;
	/* 0x16 */ int16 fadein_time;
	/* 0x18 */ int16 fadeout_time;
	/* 0x1a */ uint8 group_id;
	/* 0x1b */ int8 pad;
	/* 0x1c */ uint8 srMin;
	/* 0x1d */ uint8 sgMin;
	/* 0x1e */ uint8 sbMin;
	/* 0x1f */ int8 pad2;
	/* 0x20 */ uint8 srMax;
	/* 0x21 */ uint8 sgMax;
	/* 0x22 */ uint8 sbMax;
	/* 0x23 */ int8 pad3;
};

typedef _GenericDynamicLightParams GenericDynamicLightParams;

struct _GenericCutplaneParams { // 0x18
	/* 0x00 */ int8 startseg;
	/* 0x01 */ int8 endseg;
	/* 0x02 */ int16 lifeTime;
	/* 0x04 */ Position startoffset;
	/* 0x0a */ int8 directionseg;
	/* 0x0b */ int8 has_particles;
	/* 0x0c */ Position endoffset;
	/* 0x12 */ int8 cutflag;
	/* 0x13 */ int8 ringflag;
	/* 0x14 */ uint32 color;
};

typedef _GenericCutplaneParams GenericCutplaneParams;

struct _FXGeneralEffect { // 0x14
	/* 0x00 */ void *next;
	/* 0x04 */ void *continue_process;
	/* 0x08 */ Instance *instance;
	/* 0x0c */ uint8 effectType;
	/* 0x0d */ uint8 type;
	/* 0x0e */ int16 lifeTime;
	/* 0x10 */ int16 group_id;
	/* 0x12 */ uint16 pad_gen;
};

typedef _FXGeneralEffect FXGeneralEffect;

struct _FXRibbon { // 0x3c
	/* 0x00 */ void *next;
	/* 0x04 */ void *continue_process;
	/* 0x08 */ Instance *instance;
	/* 0x0c */ uint8 effectType;
	/* 0x0d */ uint8 type;
	/* 0x0e */ int16 lifeTime;
	/* 0x10 */ int16 group_id;
	/* 0x12 */ uint16 pad_gen;
	/* 0x14 */ int16 numberVerts;
	/* 0x16 */ int16 endIndex;
	/* 0x18 */ Vector4f *vertexPool;
	/* 0x1c */ int8 startSegment;
	/* 0x1d */ int8 endSegment;
	/* 0x1e */ int8 spectral_colorize;
	/* 0x1f */ int8 pad;
	/* 0x20 */ uint32 startColor;
	/* 0x24 */ uint32 endColor;
	/* 0x28 */ uint32 spectral_startColor;
	/* 0x2c */ uint32 spectral_endColor;
	/* 0x30 */ int16 colorStepValue;
	/* 0x32 */ int16 faceLifeTime;
	/* 0x34 */ int16 startFadeValue;
	/* 0x36 */ int16 fadeStep;
	/* 0x38 */ uint32 tpageid;
};

typedef _FXRibbon FXRibbon;

struct _FXParticleGen { // 0xd0
	/* 0x00 */ void *next;
	/* 0x04 */ void *continue_process;
	/* 0x08 */ Instance *instance;
	/* 0x0c */ uint8 effectType;
	/* 0x0d */ uint8 type;
	/* 0x0e */ int16 lifeTime;
	/* 0x10 */ int16 group_id;
	/* 0x12 */ uint16 pad_gen;
	/* 0x14 */ Instance *generate_instance;
	/* 0x18 */ uint16 flag_bits;
	/* 0x1a */ int8 attractor_seg;
	/* 0x1b */ int8 absolute_seg;
	/* 0x1c */ float numBirthParticles;
	/* 0x20 */ float birthTimeCounter;
	/* 0x24 */ int32 tpageid;
	/* 0x28 */ void *fxprim_process;
	/* 0x2c */ int16 size;
	/* 0x2e */ int16 primLifeTime;
	/* 0x30 */ int16 sizeRand;
	/* 0x32 */ int16 primLifeTimeRand;
	/* 0x34 */ int16 birthRadius;
	/* 0x36 */ int16 minbirthRadius;
	/* 0x38 */ int8 shape;
	/* 0x39 */ int8 shape_model;
	/* 0x3a */ int16 scaleSpeed;
	/* 0x3c */ Vector3f direction;
	/* 0x48 */ Vector3f acceleration;
	/* 0x54 */ float startScale;
	/* 0x58 */ Vector3f offset;
	/* 0x64 */ int8 startSegment;
	/* 0x65 */ int8 z_undulate;
	/* 0x66 */ int8 rotation_seg;
	/* 0x67 */ int8 textureRand;
	/* 0x68 */ uint32 startColor;
	/* 0x6c */ uint32 endColor;
	/* 0x70 */ uint32 spectralColor;
	/* 0x74 */ uint32 currentStartColor;
	/* 0x80 */ Vector4f lastStartingOffset;
	/* 0x90 */ int16 colorStepValue;
	/* 0x92 */ int8 local_seg;
	/* 0x93 */ int8 endSegment;
	/* 0x94 */ int16 endsize;
	/* 0x96 */ int16 endsizeRand;
	/* 0x98 */ float velocity_scale;
	/* 0x9c */ float gravity_distance;
	/* 0xa0 */ float elasticity;
	/* 0xa4 */ int16 sortpush;
	/* 0xa6 */ int8 aniTextureCount;
	/* 0xa7 */ int8 aniTextureRate;
	/* 0xa8 */ int32 deactivate_range_sq;
	/* 0xac */ FX_PRIM *prim_ptr;
	/* 0xb0 */ int32 *aniTpageid;
	/* 0xb4 */ int32 *spatterTpageid;
	/* 0xb8 */ uint8 spatter_size;
	/* 0xb9 */ uint8 spatter_lifetime;
	/* 0xba */ uint8 spatter_number;
	/* 0xbb */ uint8 spatter_count;
	/* 0xbc */ uint8 spatter_sizeRand;
	/* 0xbd */ uint8 spatter_textureRand;
	/* 0xbe */ uint8 predator_offset;
	/* 0xbf */ uint8 pad;
	/* 0xc0 */ Instance *suck_instance;
};

typedef _FXParticleGen FXParticleGen;

struct _FXCutplane { // 0x48
	/* 0x00 */ void *next;
	/* 0x04 */ void *continue_process;
	/* 0x08 */ Instance *instance;
	/* 0x0c */ uint8 effectType;
	/* 0x0d */ uint8 type;
	/* 0x0e */ int16 lifeTime;
	/* 0x10 */ int16 group_id;
	/* 0x12 */ uint16 pad_gen;
	/* 0x14 */ int32 diffTime;
	/* 0x18 */ PlaneConstants ringPlane;
	/* 0x24 */ uint32 currentColor;
	/* 0x28 */ uint32 *colorArray;
	/* 0x2c */ int16 numColors;
	/* 0x2e */ int16 colorBlendLife;
	/* 0x30 */ uint32 particleColor;
	/* 0x34 */ Position startoffset;
	/* 0x3a */ int8 startseg;
	/* 0x3b */ int8 endseg;
	/* 0x3c */ Position endoffset;
	/* 0x42 */ int8 directionseg;
	/* 0x43 */ int8 has_particles;
	/* 0x44 */ uint32 color;
};

typedef _FXCutplane FXCutplane;

struct _FXGlowEffect { // 0x5c
	/* 0x00 */ void *next;
	/* 0x04 */ void *continue_process;
	/* 0x08 */ Instance *instance;
	/* 0x0c */ uint8 effectType;
	/* 0x0d */ uint8 type;
	/* 0x0e */ int16 lifeTime;
	/* 0x10 */ int16 group_id;
	/* 0x12 */ uint16 pad_gen;
	/* 0x14 */ uint32 diffTime;
	/* 0x18 */ float current_angle;
	/* 0x1c */ float angle_inc;
	/* 0x20 */ float current_width_scale;
	/* 0x24 */ float width_scale_inc;
	/* 0x28 */ float current_height_scale;
	/* 0x2c */ float height_scale_inc;
	/* 0x30 */ uint32 *colorArray;
	/* 0x34 */ uint32 *colorSpectralArray;
	/* 0x38 */ uint32 currentColor;
	/* 0x3c */ uint32 currentSpectralColor;
	/* 0x40 */ int16 numColors;
	/* 0x42 */ int16 colorBlendCycle;
	/* 0x44 */ int16 width;
	/* 0x46 */ int16 height;
	/* 0x48 */ uint8 numSegments;
	/* 0x49 */ int8 SegmentInc;
	/* 0x4a */ int16 segment;
	/* 0x4c */ int16 fadein_time;
	/* 0x4e */ int16 fadeout_time;
	/* 0x50 */ int32 tpageid;
	/* 0x54 */ int16 sortpush;
	/* 0x56 */ int8 rotate_with_camera;
	/* 0x57 */ int8 bright_when_facing;
	/* 0x58 */ int8 facing_seg0;
	/* 0x59 */ int8 facing_seg1;
	/* 0x5a */ uint8 spectral_colorize;
	/* 0x5b */ int8 pad;
};

typedef _FXGlowEffect FXGlowEffect;

struct _FXLightBeam { // 0x1c
	/* 0x00 */ void *next;
	/* 0x04 */ void *continue_process;
	/* 0x08 */ Instance *instance;
	/* 0x0c */ uint8 effectType;
	/* 0x0d */ uint8 type;
	/* 0x0e */ int16 lifeTime;
	/* 0x10 */ int16 group_id;
	/* 0x12 */ uint16 pad_gen;
	/* 0x14 */ int16 startSeg;
	/* 0x16 */ int16 endSeg;
	/* 0x18 */ uint32 color;
};

typedef _FXLightBeam FXLightBeam;

struct _FXBlastringEffect { // 0xd0
	/* 0x00 */ void *next;
	/* 0x04 */ void *continue_process;
	/* 0x08 */ Instance *instance;
	/* 0x0c */ uint8 effectType;
	/* 0x0d */ uint8 type;
	/* 0x0e */ int16 lifeTime;
	/* 0x10 */ int16 group_id;
	/* 0x12 */ uint16 pad_gen;
	/* 0x20 */ Vector4f position;
	/* 0x30 */ Vector4f offset;
	/* 0x40 */ Matrixf matrix;
	/* 0x80 */ int32 tpageid;
	/* 0x84 */ int radius;
	/* 0x88 */ int size1;
	/* 0x8c */ int size2;
	/* 0x90 */ int8 pos_segment;
	/* 0x91 */ int8 matrix_segment;
	/* 0x92 */ int8 dfacade_flag;
	/* 0x94 */ int16 pad;
	/* 0x98 */ int32 startRadius;
	/* 0x9c */ int32 endRadius;
	/* 0xa0 */ int32 colorchange_radius;
	/* 0xa4 */ int vel;
	/* 0xa8 */ int accl;
	/* 0xac */ int height1;
	/* 0xb0 */ int height2;
	/* 0xb4 */ int height3;
	/* 0xb8 */ int8 predator_offset;
	/* 0xb9 */ int8 stay_in_place;
	/* 0xba */ int8 sortInWorld;
	/* 0xbb */ int8 predator_offset_orig;
	/* 0xbc */ uint32 color;
	/* 0xc0 */ uint32 startColor;
	/* 0xc4 */ uint32 endColor;
};

typedef _FXBlastringEffect FXBlastringEffect;

struct _FXForceFieldEffect { // 0x30
	/* 0x00 */ void *next;
	/* 0x04 */ void *continue_process;
	/* 0x08 */ Instance *instance;
	/* 0x0c */ uint8 effectType;
	/* 0x0d */ uint8 type;
	/* 0x0e */ int16 lifeTime;
	/* 0x10 */ int16 group_id;
	/* 0x12 */ uint16 pad_gen;
	/* 0x14 */ SVector offset;
	/* 0x1c */ int16 size;
	/* 0x1e */ int16 size_diff;
	/* 0x20 */ int16 size_change;
	/* 0x22 */ int16 deg;
	/* 0x24 */ int16 deg_change;
	/* 0x26 */ int16 start_fade;
	/* 0x28 */ int16 end_fade;
	/* 0x2c */ uint32 color;
};

typedef _FXForceFieldEffect FXForceFieldEffect;

struct _FXLightning { // 0xa0
	/* 0x00 */ void *next;
	/* 0x04 */ void *continue_process;
	/* 0x08 */ Instance *instance;
	/* 0x0c */ uint8 effectType;
	/* 0x0d */ uint8 type;
	/* 0x0e */ int16 lifeTime;
	/* 0x10 */ int16 group_id;
	/* 0x12 */ uint16 pad_gen;
	/* 0x14 */ int32 diffTime;
	/* 0x18 */ int16 deg;
	/* 0x1a */ int16 deg_inc;
	/* 0x20 */ Vector4f start_offset;
	/* 0x30 */ int8 has_start_offset;
	/* 0x31 */ int8 startSeg;
	/* 0x34 */ Instance *end_instance;
	/* 0x40 */ Vector4f end_offset;
	/* 0x50 */ int8 has_end_offset;
	/* 0x51 */ int8 endSeg;
	/* 0x52 */ int16 width;
	/* 0x54 */ int16 endwidth;
	/* 0x56 */ int16 small_width;
	/* 0x58 */ int16 small_endwidth;
	/* 0x5a */ int16 matrixSeg;
	/* 0x5c */ int16 segs;
	/* 0x5e */ int16 sine_size;
	/* 0x60 */ int16 variation;
	/* 0x64 */ uint32 color;
	/* 0x68 */ uint32 endcolor;
	/* 0x6c */ uint32 glow_color;
	/* 0x70 */ uint32 glow_endcolor;
	/* 0x74 */ uint32 spectral_color;
	/* 0x78 */ uint32 spectral_endcolor;
	/* 0x7c */ uint32 spectral_glow_color;
	/* 0x80 */ uint32 spectral_glow_endcolor;
	/* 0x84 */ int8 predator_offset;
	/* 0x85 */ int8 beamflag;
	/* 0x86 */ int8 spectral_colorize;
	/* 0x87 */ int8 fade_when_facing;
	/* 0x88 */ int32 tpageid;
	/* 0x8c */ int32 glow_tpageid;
	/* 0x90 */ int16 fadein_time;
	/* 0x92 */ int16 fadeout_time;
};

typedef _FXLightning FXLightning;

struct _FXFlash { // 0x28
	/* 0x00 */ void *next;
	/* 0x04 */ void *continue_process;
	/* 0x08 */ Instance *instance;
	/* 0x0c */ uint8 effectType;
	/* 0x0d */ uint8 type;
	/* 0x0e */ int16 lifeTime;
	/* 0x10 */ int16 group_id;
	/* 0x12 */ uint16 pad_gen;
	/* 0x14 */ int32 timeToColor;
	/* 0x18 */ int32 timeAtColor;
	/* 0x1c */ int32 timeFromColor;
	/* 0x20 */ int32 currentTime;
	/* 0x24 */ uint32 color;
};

typedef _FXFlash FXFlash;

struct _FXFlashLight { // 0x80
	/* 0x00 */ void *next;
	/* 0x04 */ void *continue_process;
	/* 0x08 */ Instance *instance;
	/* 0x0c */ uint8 effectType;
	/* 0x0d */ uint8 type;
	/* 0x0e */ int16 lifeTime;
	/* 0x10 */ int16 group_id;
	/* 0x12 */ uint16 pad_gen;
	/* 0x14 */ int32 length;
	/* 0x18 */ int16 startSegment;
	/* 0x1a */ int16 endSegment;
	/* 0x1c */ uint8 rMin;
	/* 0x1d */ uint8 gMin;
	/* 0x1e */ uint8 bMin;
	/* 0x1f */ uint8 pad1;
	/* 0x20 */ uint8 rMax;
	/* 0x21 */ uint8 gMax;
	/* 0x22 */ uint8 bMax;
	/* 0x23 */ uint8 pad2;
	/* 0x24 */ uint8 srMin;
	/* 0x25 */ uint8 sgMin;
	/* 0x26 */ uint8 sbMin;
	/* 0x27 */ uint8 pad3;
	/* 0x28 */ uint8 srMax;
	/* 0x29 */ uint8 sgMax;
	/* 0x2a */ uint8 sbMax;
	/* 0x2b */ uint8 pad4;
	/* 0x2c */ int32 minRadius;
	/* 0x30 */ int32 maxRadius;
	/* 0x34 */ int16 terrainOnlyFlag;
	/* 0x36 */ int16 Priority;
	/* 0x38 */ VECTOR v1;
	/* 0x50 */ PCollideInfo CInfo;
};

typedef _FXFlashLight FXFlashLight;

struct _FXTarget { // 0x40
	/* 0x00 */ void *next;
	/* 0x04 */ void *continue_process;
	/* 0x08 */ Instance *instance;
	/* 0x0c */ uint8 effectType;
	/* 0x0d */ uint8 type;
	/* 0x0e */ int16 lifeTime;
	/* 0x10 */ int16 group_id;
	/* 0x12 */ uint16 pad_gen;
	/* 0x20 */ Vector4f start;
	/* 0x30 */ Vector4f target;
};

typedef _FXTarget FXTarget;

struct _GenericFXObject { // 0x24
	/* 0x00 */ uint16 ParticleFXCount;
	/* 0x02 */ uint16 ParticleFXOffset;
	/* 0x04 */ uint16 RibbonFXCount;
	/* 0x06 */ uint16 RibbonFXOffset;
	/* 0x08 */ uint16 GlowFXCount;
	/* 0x0a */ uint16 GlowFXOffset;
	/* 0x0c */ uint16 LightningFXCount;
	/* 0x0e */ uint16 LightningFXOffset;
	/* 0x10 */ uint16 BlastFXCount;
	/* 0x12 */ uint16 BlastFXOffset;
	/* 0x14 */ uint16 FlashFXCount;
	/* 0x16 */ uint16 FlashFXOffset;
	/* 0x18 */ uint16 ColorFXCount;
	/* 0x1a */ uint16 ColorFXOffset;
	/* 0x1c */ uint16 LightFXCount;
	/* 0x1e */ uint16 LightFXOffset;
	/* 0x20 */ uint16 CutplaneFXCount;
	/* 0x22 */ uint16 CutplaneFXOffset;
};

typedef _GenericFXObject GenericFXObject;

struct FXSplinter { // 0x14
	/* 0x00 */ int16 flags;
	/* 0x02 */ int16 soundFx;
	/* 0x04 */ int16 chunkVelXY;
	/* 0x06 */ int16 chunkVelZ;
	/* 0x08 */ int16 chunkVelRng;
	/* 0x0a */ int16 triVelRng;
	/* 0x0c */ int16 lifetime;
	/* 0x0e */ int16 faceLimit;
	/* 0x10 */ int16 rotRateRng;
	/* 0x12 */ int16 gravityZ;
};

typedef void FX_PRIM_PROCESS(/* parameters unknown */);

typedef void FX_PARTICLE_PROCESS(/* parameters unknown */);

typedef void FX_GENERAL_PROCESS(/* parameters unknown */);

typedef void FX_SETUP(/* parameters unknown */);

struct _WeatherPrim { // 0x10
	/* 0x0 */ int16 x;
	/* 0x2 */ int16 y;
	/* 0x4 */ int16 z;
	/* 0x6 */ int16 lifetime;
	/* 0x8 */ int16 xvel;
	/* 0xa */ int16 yvel;
	/* 0xc */ int16 zvel;
	/* 0xe */ int16 floorz;
};

typedef _WeatherPrim WeatherPrim;

struct LINEVERTEX { // 0x10
	/* 0x0 */ float x;
	/* 0x4 */ float y;
	/* 0x8 */ float z;
	/* 0xc */ uint32 color;
};

struct DRAWVERTEX { // 0x20
	/* 0x00 */ float x;
	/* 0x04 */ float y;
	/* 0x08 */ float z;
	/* 0x0c */ uint32 color;
	/* 0x10 */ float u;
	/* 0x14 */ float v;
	/* 0x18 */ uint32 anPad[2];
};

struct SCREENRECT { // 0x14
	/* 0x00 */ float x;
	/* 0x04 */ float y;
	/* 0x08 */ float w;
	/* 0x0c */ float h;
	/* 0x10 */ CVECTOR color;
};

typedef unsigned int AadSfxToneID;

struct _AadDynSfxFileHdr { // 0x14
	/* 0x00 */ uint32 snfID;
	/* 0x04 */ uint16 snfVersion;
	/* 0x06 */ uint16 uniqueID;
	/* 0x08 */ uint16 handle;
	/* 0x0a */ uint16 numSfxInFile;
	/* 0x0c */ _AadDynSfxFileHdr *prevDynSfxFile;
	/* 0x10 */ _AadDynSfxFileHdr *nextDynSfxFile;
};

typedef _AadDynSfxFileHdr AadDynSfxSnfFileHdr;

struct AadDynSfxSmfFileHdr { // 0x10
	/* 0x0 */ uint32 smfID;
	/* 0x4 */ uint16 smfVersion;
	/* 0x6 */ uint16 uniqueID;
	/* 0x8 */ uint16 numSfxInFile;
	/* 0xa */ uint8 pad[6];
};

struct AadRawSampleHeader { // 0xc
	/* 0x0 */ int32 sampleRate;
	/* 0x4 */ int32 loopStart;
	/* 0x8 */ int32 loopEnd;
};

struct AadLoadedSfxWaveAttr { // 0x18
	/* 0x00 */ uint16 referenceCount;
	/* 0x02 */ uint16 unused;
	/* 0x04 */ void *sampleData;
	/* 0x08 */ int32 sampleRate;
	/* 0x0c */ int32 loopStart;
	/* 0x10 */ int32 loopEnd;
	/* 0x14 */ int32 smpLen;
};

struct AadLoadedSfxToneAttr { // 0x14
	/* 0x00 */ uint16 referenceCount;
	/* 0x02 */ uint16 waveID;
	/* 0x04 */ uint8 priority;
	/* 0x05 */ uint8 volume;
	/* 0x06 */ uint8 panPosition;
	/* 0x07 */ uint8 mode;
	/* 0x08 */ float note;
	/* 0x0c */ uint16 adsr1;
	/* 0x0e */ uint16 adsr2;
	/* 0x10 */ int unloadedPrintTime;
};

struct AadDynSfxAttr { // 0x14
	/* 0x00 */ uint16 sfxID;
	/* 0x02 */ uint16 waveID;
	/* 0x04 */ uint8 priority;
	/* 0x05 */ uint8 volume;
	/* 0x06 */ uint8 panPosition;
	/* 0x07 */ uint8 mode;
	/* 0x08 */ float note;
	/* 0x0c */ uint16 adsr1;
	/* 0x0e */ uint16 adsr2;
	/* 0x10 */ uint32 waveSize;
};

struct RIFF_Header { // 0x8
	/* 0x0 */ char id[4];
	/* 0x4 */ int length;
};

struct _MemHeader { // 0x10
	/* 0x0 */ uint16 magicNumber;
	/* 0x2 */ uint16 memStatus;
	/* 0x4 */ uint16 memType;
	/* 0x6 */ uint16 prefixSize;
	/* 0x8 */ uint32 memSize;
	/* 0xc */ _MemHeader *next;
};

typedef _MemHeader MemHeader;

struct _MUSSCRIPT_ScriptData { // 0x18
	/* 0x00 */ int32 curSlot;
	/* 0x04 */ int32 curChannel;
	/* 0x08 */ int32 curSequence;
	/* 0x0c */ int32 delayMute;
	/* 0x10 */ int32 delayedMuteMask;
	/* 0x14 */ int32 delayedUnMuteMask;
};

typedef _MUSSCRIPT_ScriptData MUSSCRIPT_ScriptData;

typedef void *MUSHANDLE;

struct MUS_LoadingVars { // 0x418
	/* 0x000 */ char curMusicName[256];
	/* 0x100 */ char pendingMusicName[256];
	/* 0x200 */ char musicFullPath[256];
	/* 0x300 */ char bankFullPath[256];
	/* 0x400 */ int32 doingTransition;
	/* 0x404 */ int32 canceledLoad;
	/* 0x408 */ int32 loading;
	/* 0x40c */ void *musicPtr;
	/* 0x410 */ void *bankPtr;
	/* 0x414 */ MUSHANDLE curMusicHandle;
};

struct MUSMIDI_FileHeader { // 0x10
	/* 0x0 */ uint32 sequenceID;
	/* 0x4 */ uint32 quarterNoteTime;
	/* 0x8 */ uint16 ppqn;
	/* 0xa */ uint16 version;
	/* 0xc */ uint16 numTracks;
	/* 0xe */ uint16 unused;
};

struct _MUSMIDI_Channel { // 0xb4
	/* 0x00 */ uint8 controllers[128];
	/* 0x80 */ uint8 patchNr;
	/* 0x81 */ uint8 bankNr;
	/* 0x82 */ uint8 pressure;
	/* 0x84 */ uint32 status;
	/* 0x88 */ int32 transpose;
	/* 0x8c */ int32 pitch;
	/* 0x90 */ int32 pitchBendRange;
	/* 0x94 */ float panFadeStep;
	/* 0x98 */ float panFadeTime;
	/* 0x9c */ float panValue;
	/* 0xa0 */ float volFadeStep;
	/* 0xa4 */ float volFadeTime;
	/* 0xa8 */ float volValue;
	/* 0xac */ int32 volumeType;
	/* 0xb0 */ _MUSBANK_GlobalChannel *globalChannels;
};

typedef _MUSMIDI_Channel MUSMIDI_Channel;

struct MUSMIDITRACK_LoopData { // 0x8
	/* 0x0 */ int32 loopStart;
	/* 0x4 */ int32 loopCount;
};

struct _MUSMIDI_Track { // 0xa4
	/* 0x00 */ int32 curTime;
	/* 0x04 */ int32 curOffset;
	/* 0x08 */ int32 status;
	/* 0x0c */ int32 lastChannel;
	/* 0x10 */ int32 runningStatus;
	/* 0x14 */ int32 startTime;
	/* 0x18 */ uint8 *trackData;
	/* 0x1c */ uint8 used;
	/* 0x20 */ int32 curNestedLevel;
	/* 0x24 */ MUSMIDITRACK_LoopData loopData[16];
};

typedef _MUSMIDI_Track MUSMIDI_Track;

struct _MUSMIDI_Song { // 0xc94
	/* 0x000 */ MUSMIDI_FileHeader midiHeader;
	/* 0x010 */ MUSMIDI_Track *midiTracks[64];
	/* 0x110 */ MUSMIDI_Channel midiChannels[16];
	/* 0xc50 */ uint32 midiTempo;
	/* 0xc54 */ uint32 midiTime;
	/* 0xc58 */ uint32 numBeats;
	/* 0xc5c */ float beatFrac;
	/* 0xc60 */ float volume;
	/* 0xc64 */ float pan;
	/* 0xc68 */ int32 filled;
	/* 0xc6c */ int32 playing;
	/* 0xc70 */ uint32 songNr;
	/* 0xc74 */ uint32 sequenceNr;
	/* 0xc78 */ _MUS_Song *musSong;
	/* 0xc7c */ _MUSSCRIPT_ScriptData scriptData;
};

typedef _MUSMIDI_Song MUSMIDI_Song;

struct MUS_PresetZone { // 0xc
	/* 0x0 */ int32 rootkey;
	/* 0x4 */ int8 keyRangeLo;
	/* 0x5 */ int8 keyRangeHi;
	/* 0x6 */ int8 velRangeLo;
	/* 0x7 */ int8 velRangeHi;
	/* 0x8 */ int32 instrumentIndex;
};

struct MUS_Preset { // 0x20
	/* 0x00 */ char name[20];
	/* 0x14 */ int32 midiBankNr;
	/* 0x18 */ int32 midiPresetNr;
	/* 0x1c */ int32 numZones;
	/* 0x20 */ MUS_PresetZone zones[0];
};

struct _MUS_Envelope { // 0x18
	/* 0x00 */ float delay;
	/* 0x04 */ float attack;
	/* 0x08 */ float hold;
	/* 0x0c */ float decay;
	/* 0x10 */ float sustain;
	/* 0x14 */ float release;
};

typedef _MUS_Envelope MUS_Envelope;

struct MUS_InstrumentZone { // 0x68
	/* 0x00 */ int32 finetune;
	/* 0x04 */ int32 reverb;
	/* 0x08 */ float pan;
	/* 0x0c */ int32 keynumHold;
	/* 0x10 */ int32 keynumDecay;
	/* 0x14 */ _MUS_Envelope volenv;
	/* 0x2c */ float volenvAttenuation;
	/* 0x30 */ float vibDelay;
	/* 0x34 */ float vibFreq;
	/* 0x38 */ float vibToPitch;
	/* 0x3c */ int32 rootkey;
	/* 0x40 */ int8 keyRangeLo;
	/* 0x41 */ int8 keyRangeHi;
	/* 0x42 */ int8 velRangeLo;
	/* 0x43 */ int8 velRangeHi;
	/* 0x44 */ int32 sampleIndex;
	/* 0x48 */ float basePriority;
	/* 0x4c */ _MUS_Envelope modenv;
	/* 0x64 */ float modenvToPitch;
};

struct MUS_Instrument { // 0x18
	/* 0x00 */ char name[20];
	/* 0x14 */ int32 numZones;
	/* 0x18 */ MUS_InstrumentZone zones[0];
};

struct MUS_Sample { // 0x34
	/* 0x00 */ char name[20];
	/* 0x14 */ int32 start;
	/* 0x18 */ int32 startLoop;
	/* 0x1c */ int32 end;
	/* 0x20 */ int32 endLoop;
	/* 0x24 */ int32 sampleRate;
	/* 0x28 */ int32 originalPitch;
	/* 0x2c */ int32 loopInfo;
	/* 0x30 */ void *sndHandle;
};

struct MUS_SequenceHeader { // 0x8
	/* 0x0 */ uint32 sequenceNr;
	/* 0x4 */ uint8 *fileOffset;
};

struct MUS_Header { // 0x30
	/* 0x00 */ RIFF_Header riffHeader;
	/* 0x08 */ int32 version;
	/* 0x0c */ int32 reverbVol;
	/* 0x10 */ int32 reverbType;
	/* 0x14 */ int32 reverbMult;
	/* 0x18 */ int32 numSequences;
	/* 0x1c */ int32 numLabels;
	/* 0x20 */ int32 *labelOffsets;
	/* 0x24 */ int32 numSamples;
	/* 0x28 */ int32 numInstruments;
	/* 0x2c */ int32 numPresets;
	/* 0x30 */ MUS_SequenceHeader sequences[0];
};

struct _MUS_Song { // 0x65c0
	/* 0x0000 */ MUS_Header *header;
	/* 0x0004 */ MUS_Sample *samples;
	/* 0x0008 */ MUS_Instrument **instruments;
	/* 0x000c */ MUS_Preset **presets;
	/* 0x0010 */ int32 songInUse;
	/* 0x0014 */ int32 playing;
	/* 0x0018 */ char songName[256];
	/* 0x0118 */ int32 bankLoadingOffset;
	/* 0x011c */ int32 bankLoadingCurSample;
	/* 0x0120 */ _MUSMIDI_Song songs[8];
};

typedef _MUS_Song MUS_Song;

struct _MUSBANK_GlobalChannel { // 0x8c
	/* 0x00 */ MUS_Preset *preset;
	/* 0x04 */ MUS_PresetZone *presetZone;
	/* 0x08 */ MUS_Instrument *instrument;
	/* 0x0c */ MUS_InstrumentZone *instrumentZone;
	/* 0x10 */ MUS_Sample *sample;
	/* 0x14 */ uint32 chanNr;
	/* 0x18 */ uint32 period;
	/* 0x1c */ uint32 status;
	/* 0x20 */ float frequency;
	/* 0x24 */ float attenuation;
	/* 0x28 */ float peakLevel;
	/* 0x2c */ float sustainLevel;
	/* 0x30 */ float envTime;
	/* 0x34 */ float releaseStartTime;
	/* 0x38 */ float envVolume;
	/* 0x3c */ float envKeyOffVolume;
	/* 0x40 */ float oldEnvVolume;
	/* 0x44 */ float volenvAttackTime;
	/* 0x48 */ float volenvReleaseTime;
	/* 0x4c */ float envMod;
	/* 0x50 */ float envKeyOffMod;
	/* 0x54 */ float oldEnvMod;
	/* 0x58 */ float modenvReleaseTime;
	/* 0x5c */ float modenvReleaseStartTime;
	/* 0x60 */ float keyEnvHold;
	/* 0x64 */ float keyEnvDecay;
	/* 0x68 */ float voll;
	/* 0x6c */ float volr;
	/* 0x70 */ float priority;
	/* 0x74 */ uint8 noteNr;
	/* 0x75 */ uint8 velocity;
	/* 0x76 */ uint8 pressure;
	/* 0x77 */ uint8 patchNr;
	/* 0x78 */ uint8 bankNr;
	/* 0x7c */ _MUSMIDI_Channel *midiChannel;
	/* 0x80 */ _MUSMIDI_Song *midiSong;
	/* 0x84 */ _MUS_Song *musSong;
	/* 0x88 */ _MUSBANK_GlobalChannel *next;
};

typedef _MUSBANK_GlobalChannel MUSBANK_GlobalChannel;

struct AadSynthVoice { // 0x48
	/* 0x00 */ uint32 handle;
	/* 0x04 */ uint8 voiceID;
	/* 0x05 */ uint8 priority;
	/* 0x06 */ uint8 voiceNum;
	/* 0x08 */ AadLoadedSfxToneAttr *toneAtr;
	/* 0x0c */ AadLoadedSfxWaveAttr *sfxWaveAttr;
	/* 0x10 */ float fPlayRate;
	/* 0x14 */ float finalvoll;
	/* 0x18 */ float finalvolr;
	/* 0x1c */ int basevolume;
	/* 0x20 */ int basepan;
	/* 0x24 */ int envmode;
	/* 0x28 */ float lastsustainvol;
	/* 0x2c */ float envvol;
	/* 0x30 */ float sustainlevel;
	/* 0x34 */ float envtime;
	/* 0x38 */ float attacktime;
	/* 0x3c */ float sustaintime;
	/* 0x40 */ float decaytime;
	/* 0x44 */ float releasetime;
};

struct AadSfxCommand { // 0xc
	/* 0x0 */ uint8 statusByte;
	/* 0x1 */ uint8 dataByte[3];
	/* 0x4 */ uint32 ulongParam;
	/* 0x8 */ float floatParam;
};

struct AadSfxSlot { // 0x188
	/* 0x000 */ AadSfxCommand commandQueue[32];
	/* 0x180 */ uint8 commandIn;
	/* 0x181 */ uint8 commandOut;
	/* 0x182 */ uint16 commandsInQueue;
	/* 0x184 */ uint16 handleCounter;
	/* 0x186 */ uint8 sfxPan;
};

typedef void (*SNDAPPSTREAMCALLBACK)(/* parameters unknown */);

typedef void (*SNDAPPCALLBACK)(/* parameters unknown */);

typedef _fpos_t fpos_t;

typedef __sFILE FILE;

typedef void (*ASLDCALLBACK)(/* parameters unknown */);

typedef void (*ASLDCANCELCALLBACK)(/* parameters unknown */);

typedef void (*ASLDBLOCKCALLBACK)(/* parameters unknown */);

struct _FILEREQUEST { // 0xc4
	/* 0x00 */ _FILEREQUEST *next;
	/* 0x04 */ int cancelled;
	/* 0x08 */ int event;
	/* 0x0c */ char name[128];
	/* 0x8c */ int priority;
	/* 0x90 */ int fhandle;
	/* 0x94 */ int streamHandle;
	/* 0x98 */ int size;
	/* 0x9c */ int offset;
	/* 0xa0 */ ASLDCALLBACK callback;
	/* 0xa4 */ ASLDBLOCKCALLBACK blockCallback;
	/* 0xa8 */ ASLDCANCELCALLBACK cancelCallback;
	/* 0xac */ void *bcbinfo;
	/* 0xb0 */ void *context;
	/* 0xb4 */ int memtype;
	/* 0xb8 */ int close;
	/* 0xbc */ int compressed;
	/* 0xc0 */ void *destination;
};

typedef _FILEREQUEST FILEREQUEST;

struct DynamicSfxLoadInfo { // 0xd0
	/* 0x00 */ char snfFileName[64];
	/* 0x40 */ char smfFileName[64];
	/* 0x80 */ int fileHandle;
	/* 0x88 */ long int flags;
	/* 0x90 */ AadDynSfxSnfFileHdr *snfFile;
	/* 0x94 */ AadDynSfxAttr attr;
	/* 0xa8 */ AadRawSampleHeader rawHeader;
	/* 0xb4 */ AadDynSfxSmfFileHdr *smfFile;
	/* 0xb8 */ int smfLoadingState;
	/* 0xbc */ int numSfxToLoad;
	/* 0xc0 */ int bytesToLoad;
	/* 0xc4 */ char *sramPtr;
	/* 0xc8 */ char *waveTransferAddr;
	/* 0xcc */ AadLoadedSfxWaveAttr *waveAttr;
};

struct MainTracker { // 0x14
	/* 0x00 */ int mainState;
	/* 0x04 */ int previousState;
	/* 0x08 */ int movieNum;
	/* 0x0c */ int done;
	/* 0x10 */ int screen;
};

struct BigFileEntry { // 0x10
	/* 0x0 */ int32 fileHash;
	/* 0x4 */ int32 fileLen;
	/* 0x8 */ int32 filePos;
	/* 0xc */ int32 compressedLen;
};

struct BigFile { // 0xc
	/* 0x0 */ int32 numFiles;
	/* 0x4 */ int32 bigfileBaseOffset;
	/* 0x8 */ BigFileEntry *contents;
};

struct LoadInfo { // 0x6c
	/* 0x00 */ void *retFunc;
	/* 0x04 */ void *retData;
	/* 0x08 */ void *retData2;
	/* 0x0c */ void **retPointer;
	/* 0x10 */ int32 relocateBinary;
	/* 0x14 */ unsigned char memType;
	/* 0x18 */ void *data;
	/* 0x1c */ int size;
	/* 0x20 */ int offset;
	/* 0x24 */ char name[64];
	/* 0x64 */ char done;
	/* 0x68 */ int cancelled;
};

struct FileInfo { // 0x5c
	/* 0x00 */ int32 filehandle;
	/* 0x04 */ int32 offset;
	/* 0x08 */ int32 size;
	/* 0x0c */ char fileName[80];
};

typedef void (*LoadReturnProc)(/* parameters unknown */);

typedef void (*BufferedLoadReturnProc)(/* parameters unknown */);

struct STREAMFILE { // 0x5c
	/* 0x00 */ FileInfo fi;
};

struct div_t { // 0x8
	/* 0x0 */ int quot;
	/* 0x4 */ int rem;
};

struct ldiv_t { // 0x10
	/* 0x0 */ long int quot;
	/* 0x8 */ long int rem;
};

struct mallinfo { // 0x28
	/* 0x00 */ int arena;
	/* 0x04 */ int ordblks;
	/* 0x08 */ int smblks;
	/* 0x0c */ int hblks;
	/* 0x10 */ int hblkhd;
	/* 0x14 */ int usmblks;
	/* 0x18 */ int fsmblks;
	/* 0x1c */ int uordblks;
	/* 0x20 */ int fordblks;
	/* 0x24 */ int keepcost;
};

struct MUSSCRIPT_ScriptAtt { // 0x24
	/* 0x00 */ MUS_Song *musSong;
	/* 0x04 */ MUSMIDI_Song *midiSong;
	/* 0x08 */ MUSMIDI_Track *midiTrack;
	/* 0x0c */ MUSSCRIPT_ScriptData *scriptData;
	/* 0x10 */ MUSMIDI_Song *selectedSlot;
	/* 0x14 */ MUSMIDI_Channel *selectedChannel;
	/* 0x18 */ uint8 *data;
	/* 0x1c */ uint8 *trackData;
	/* 0x20 */ uint8 length;
};

typedef void (*MUSSCRIPT_CommandFunc)(/* parameters unknown */);

struct ThreadParam { // 0x30
	/* 0x00 */ int status;
	/* 0x04 */ void *entry;
	/* 0x08 */ void *stack;
	/* 0x0c */ int stackSize;
	/* 0x10 */ void *gpReg;
	/* 0x14 */ int initPriority;
	/* 0x18 */ int currentPriority;
	/* 0x1c */ u_int attr;
	/* 0x20 */ u_int option;
	/* 0x24 */ int waitType;
	/* 0x28 */ int waitId;
	/* 0x2c */ int wakeupCount;
};

struct SemaParam { // 0x18
	/* 0x00 */ int currentCount;
	/* 0x04 */ int maxCount;
	/* 0x08 */ int initCount;
	/* 0x0c */ int numWaitThreads;
	/* 0x10 */ u_int attr;
	/* 0x14 */ u_int option;
};

struct sceExecData { // 0x10
	/* 0x0 */ unsigned int epc;
	/* 0x4 */ unsigned int gp;
	/* 0x8 */ unsigned int sp;
	/* 0xc */ unsigned int dummy;
};

struct _sif_rpc_data { // 0x10
	/* 0x0 */ void *paddr;
	/* 0x4 */ unsigned int pid;
	/* 0x8 */ int tid;
	/* 0xc */ unsigned int mode;
};

typedef _sif_rpc_data sceSifRpcData;

typedef void (*sceSifEndFunc)(/* parameters unknown */);

struct _sif_client_data { // 0x28
	/* 0x00 */ _sif_rpc_data rpcd;
	/* 0x10 */ unsigned int command;
	/* 0x14 */ void *buff;
	/* 0x18 */ void *cbuff;
	/* 0x1c */ sceSifEndFunc func;
	/* 0x20 */ void *para;
	/* 0x24 */ _sif_serve_data *serve;
};

typedef _sif_client_data sceSifClientData;

struct _sif_receive_data { // 0x1c
	/* 0x00 */ _sif_rpc_data rpcd;
	/* 0x10 */ void *src;
	/* 0x14 */ void *dest;
	/* 0x18 */ int size;
};

typedef _sif_receive_data sceSifReceiveData;

typedef void* (*sceSifRpcFunc)(/* parameters unknown */);

struct _sif_serve_data { // 0x44
	/* 0x00 */ unsigned int command;
	/* 0x04 */ sceSifRpcFunc func;
	/* 0x08 */ void *buff;
	/* 0x0c */ int size;
	/* 0x10 */ sceSifRpcFunc cfunc;
	/* 0x14 */ void *cbuff;
	/* 0x18 */ int csize;
	/* 0x1c */ sceSifClientData *client;
	/* 0x20 */ void *paddr;
	/* 0x24 */ unsigned int fno;
	/* 0x28 */ void *receive;
	/* 0x2c */ int rsize;
	/* 0x30 */ int rmode;
	/* 0x34 */ unsigned int rid;
	/* 0x38 */ _sif_serve_data *link;
	/* 0x3c */ _sif_serve_data *next;
	/* 0x40 */ _sif_queue_data *base;
};

typedef _sif_serve_data sceSifServeData;

struct _sif_queue_data { // 0x18
	/* 0x00 */ int key;
	/* 0x04 */ int active;
	/* 0x08 */ _sif_serve_data *link;
	/* 0x0c */ _sif_serve_data *start;
	/* 0x10 */ _sif_serve_data *end;
	/* 0x14 */ _sif_queue_data *next;
};

typedef _sif_queue_data sceSifQueueData;

typedef int (*sceSdTransIntrHandler)(/* parameters unknown */);

typedef int (*sceSdSpu2IntrHandler)(/* parameters unknown */);

struct sceSdBatch { // 0x8
	/* 0x0 */ u_short func;
	/* 0x2 */ u_short entry;
	/* 0x4 */ u_int value;
};

struct sceSdEffectAttr { // 0x14
	/* 0x00 */ int core;
	/* 0x04 */ int mode;
	/* 0x08 */ short int depth_L;
	/* 0x0a */ short int depth_R;
	/* 0x0c */ int delay;
	/* 0x10 */ int feedback;
};

struct RemoteDataStruct { // 0x810
	/* 0x000 */ int core0ReverbType;
	/* 0x004 */ int core1ReverbType;
	/* 0x008 */ int numSDCommands;
	/* 0x00c */ int pad;
	/* 0x010 */ sceSdBatch soundbatch[256];
};

struct _RPC_StreamUploadData { // 0x24
	/* 0x00 */ int uploadSize;
	/* 0x04 */ int dataSize;
	/* 0x08 */ char *chanBuffer;
	/* 0x0c */ int chanOfs;
	/* 0x10 */ char *dmaBuffer;
	/* 0x14 */ int dmaOfs;
	/* 0x18 */ int block;
	/* 0x1c */ int setLAXS;
	/* 0x20 */ int streamBufSize;
};

typedef _RPC_StreamUploadData RPC_StreamUploadData;

struct _RPC_StreamUpdateData { // 0x24
	/* 0x00 */ int numChan;
	/* 0x04 */ void *inputData;
	/* 0x08 */ int inputOffset;
	/* 0x0c */ int inputSize;
	/* 0x10 */ char *chan1buffer;
	/* 0x14 */ char *chan2buffer;
	/* 0x18 */ int chan1ofs;
	/* 0x1c */ int chan2ofs;
	/* 0x20 */ int streamBufSize;
};

typedef _RPC_StreamUpdateData RPC_StreamUpdateData;

struct _RPC_StreamUpload { // 0x4c
	/* 0x00 */ int numUploads;
	/* 0x04 */ _RPC_StreamUploadData uploadData[2];
};

typedef _RPC_StreamUpload RPC_StreamUpload;

struct RPC_StreamFirstData { // 0x70
	/* 0x00 */ _RPC_StreamUpload upload;
	/* 0x4c */ _RPC_StreamUpdateData updateData;
};

struct _SRAMChunk { // 0x18
	/* 0x00 */ int used;
	/* 0x04 */ int len;
	/* 0x08 */ char *data;
	/* 0x0c */ int type;
	/* 0x10 */ _SRAMChunk *next;
	/* 0x14 */ _SRAMChunk *prev;
};

typedef _SRAMChunk SRAMChunk;

struct _SAMPLE { // 0x10
	/* 0x0 */ void *data;
	/* 0x4 */ unsigned int len;
	/* 0x8 */ _SAMPLE *next;
	/* 0xc */ _SAMPLE *prev;
};

typedef _SAMPLE SAMPLE;

struct CHANNELINFO { // 0x3c
	/* 0x00 */ int status;
	/* 0x04 */ int age;
	/* 0x08 */ int unavailable;
	/* 0x0c */ int allocated;
	/* 0x10 */ int priority;
	/* 0x14 */ SNDCHANNELLOSTFUNC lostfunc;
	/* 0x18 */ void *userdata;
	/* 0x1c */ SAMPLE *sample;
	/* 0x20 */ float freq;
	/* 0x24 */ float leftvolume;
	/* 0x28 */ float rightvolume;
	/* 0x2c */ int loopmode;
	/* 0x30 */ int positioned;
	/* 0x34 */ int hwvolleft;
	/* 0x38 */ int hwvolright;
};

struct _SAMPLEMEM { // 0x14
	/* 0x00 */ SAMPLE sample;
	/* 0x10 */ _SAMPLEMEM *next;
};

typedef _SAMPLEMEM SAMPLEMEM;

struct _SRAMMEM { // 0x1c
	/* 0x00 */ SRAMChunk sramchunk;
	/* 0x18 */ _SRAMMEM *next;
};

typedef _SRAMMEM SRAMMEM;

struct STRHEADER { // 0x14
	/* 0x00 */ int hertz;
	/* 0x04 */ int startLoop;
	/* 0x08 */ int endLoop;
	/* 0x0c */ int mode;
	/* 0x10 */ int reverbVol;
};

struct sceSifDmaData { // 0x10
	/* 0x0 */ unsigned int data;
	/* 0x4 */ unsigned int addr;
	/* 0x8 */ unsigned int size;
	/* 0xc */ unsigned int mode;
};

struct _SOUNDSTREAM_CHANNEL { // 0x24
	/* 0x00 */ int channel;
	/* 0x04 */ void *srampointer;
	/* 0x08 */ void *sample;
	/* 0x0c */ int sramoffset;
	/* 0x10 */ char *streambuf;
	/* 0x14 */ int streambufloadpos;
	/* 0x18 */ int streambufplaypos;
	/* 0x1c */ int sizetoplay;
	/* 0x20 */ _SOUNDSTREAM *stream;
};

typedef _SOUNDSTREAM_CHANNEL SOUNDSTREAM_CHANNEL;

struct _SOUNDSTREAM { // 0xe0
	/* 0x00 */ char strname[64];
	/* 0x40 */ void *apphandle;
	/* 0x44 */ int size;
	/* 0x48 */ int offset;
	/* 0x4c */ int hasdata;
	/* 0x50 */ int startplay;
	/* 0x54 */ int hertz;
	/* 0x58 */ int sizetoload;
	/* 0x5c */ int loopStart;
	/* 0x60 */ int replayMode;
	/* 0x64 */ int loadScheduled;
	/* 0x68 */ int streamSize;
	/* 0x6c */ int volleft;
	/* 0x70 */ int volright;
	/* 0x74 */ int reverbvol;
	/* 0x78 */ int delayToPlay;
	/* 0x7c */ int getLastCallback;
	/* 0x80 */ int streamBufSize;
	/* 0x84 */ int positioned;
	/* 0x88 */ float posx;
	/* 0x8c */ float posy;
	/* 0x90 */ float posz;
	/* 0x94 */ float maxdist;
	/* 0x98 */ SOUNDSTREAM_CHANNEL channels[2];
};

typedef _SOUNDSTREAM SOUNDSTREAM;

struct _STREAMMEM { // 0xe8
	/* 0x00 */ SOUNDSTREAM stream;
	/* 0xe0 */ int used;
	/* 0xe4 */ _STREAMMEM *next;
};

typedef _STREAMMEM STREAMMEM;

struct CheatTable { // 0x10
	/* 0x0 */ int16 *seq;
	/* 0x4 */ int32 *Addr;
	/* 0x8 */ int32 bitMask;
	/* 0xc */ int16 length;
	/* 0xe */ int16 cheatCodeStage;
};

struct DebugMenuLine { // 0x18
	/* 0x00 */ DEBUG_LINE_TYPE type;
	/* 0x04 */ int32 lower;
	/* 0x08 */ int32 upper;
	/* 0x0c */ char *text;
	/* 0x10 */ int32 *var_address;
	/* 0x14 */ int32 bit_mask;
};

struct LevelSelection { // 0xc
	/* 0x0 */ char *name;
	/* 0x4 */ int32 number;
	/* 0x8 */ char *by;
};

typedef void (*VoidProc)(/* parameters unknown */);

struct _IOPFileRequest { // 0x60
	/* 0x00 */ union { // 0x60
		/* 0x00 */ struct { // 0x60
			/* 0x00 */ int handle;
			/* 0x04 */ int offset;
			/* 0x08 */ int size;
			/* 0x0c */ int compressed;
			/* 0x10 */ char name[80];
		} startstream;
		/* 0x00 */ struct { // 0xc
			/* 0x00 */ int handle;
			/* 0x04 */ int size;
			/* 0x08 */ void *address;
		} stream;
		/* 0x00 */ struct { // 0x50
			/* 0x00 */ char name[80];
		} open;
		/* 0x00 */ struct { // 0x4
			/* 0x00 */ int handle;
		} general;
	} data;
};

typedef _IOPFileRequest IOPFileRequest;

struct _IOPStreamStatus { // 0x10
	/* 0x0 */ int status;
	/* 0x4 */ int compressedLength;
	/* 0x8 */ int pad0;
	/* 0xc */ int pad1;
};

typedef _IOPStreamStatus IOPStreamStatus;

struct tT_COUNT { // 0x4
	/* 0x0:0 */ unsigned int COUNT : 16;
	/* 0x2:0 */ unsigned int p0 : 16;
};

struct tT_MODE { // 0x4
	/* 0x0:0 */ unsigned int CLKS : 2;
	/* 0x0:2 */ unsigned int GATE : 1;
	/* 0x0:3 */ unsigned int GATS : 1;
	/* 0x0:4 */ unsigned int GATM : 2;
	/* 0x0:6 */ unsigned int ZRET : 1;
	/* 0x0:7 */ unsigned int CUE : 1;
	/* 0x1:0 */ unsigned int CMPE : 1;
	/* 0x1:1 */ unsigned int OVFE : 1;
	/* 0x1:2 */ unsigned int EQUF : 1;
	/* 0x1:3 */ unsigned int OVFF : 1;
	/* 0x1:4 */ unsigned int p0 : 20;
};

struct tT_COMP { // 0x4
	/* 0x0:0 */ unsigned int COMP : 16;
	/* 0x2:0 */ unsigned int p0 : 16;
};

struct tT_HOLD { // 0x4
	/* 0x0:0 */ unsigned int HOLD : 16;
	/* 0x2:0 */ unsigned int p0 : 16;
};

struct tIPU_CMD_write { // 0x4
	/* 0x0:0 */ unsigned int OPTION : 28;
	/* 0x3:4 */ unsigned int CODE : 4;
};

struct tIPU_CMD_read { // 0x8
	/* 0x0 */ unsigned int DATA;
	/* 0x4:0 */ unsigned int p0 : 31;
	/* 0x7:7 */ unsigned int BUSY : 1;
};

struct tIPU_TOP { // 0x8
	/* 0x0 */ unsigned int BSTOP;
	/* 0x4:0 */ unsigned int p0 : 31;
	/* 0x7:7 */ unsigned int BUSY : 1;
};

struct tIPU_CTRL { // 0x4
	/* 0x0:0 */ unsigned int IFC : 4;
	/* 0x0:4 */ unsigned int OFC : 4;
	/* 0x1:0 */ unsigned int CBP : 6;
	/* 0x1:6 */ unsigned int ECD : 1;
	/* 0x1:7 */ unsigned int SCD : 1;
	/* 0x2:0 */ unsigned int IDP : 2;
	/* 0x2:2 */ unsigned int p0 : 2;
	/* 0x2:4 */ unsigned int AS : 1;
	/* 0x2:5 */ unsigned int IVF : 1;
	/* 0x2:6 */ unsigned int QST : 1;
	/* 0x2:7 */ unsigned int MP1 : 1;
	/* 0x3:0 */ unsigned int PCT : 3;
	/* 0x3:3 */ unsigned int p1 : 3;
	/* 0x3:6 */ unsigned int RST : 1;
	/* 0x3:7 */ unsigned int BUSY : 1;
};

struct tIPU_BP { // 0x4
	/* 0x0:0 */ unsigned int BP : 7;
	/* 0x0:7 */ unsigned int p0 : 1;
	/* 0x1:0 */ unsigned int IFC : 4;
	/* 0x1:4 */ unsigned int p1 : 4;
	/* 0x2:0 */ unsigned int FP : 2;
	/* 0x2:2 */ unsigned int p2 : 14;
};

struct tGIF_CTRL { // 0x4
	/* 0x0:0 */ unsigned int RST : 1;
	/* 0x0:1 */ unsigned int p0 : 2;
	/* 0x0:3 */ unsigned int PSE : 1;
	/* 0x0:4 */ unsigned int p1 : 28;
};

struct tGIF_MODE { // 0x4
	/* 0x0:0 */ unsigned int M3R : 1;
	/* 0x0:1 */ unsigned int p0 : 1;
	/* 0x0:2 */ unsigned int IMT : 1;
	/* 0x0:3 */ unsigned int p1 : 29;
};

struct tGIF_STAT { // 0x4
	/* 0x0:0 */ unsigned int M3R : 1;
	/* 0x0:1 */ unsigned int M3P : 1;
	/* 0x0:2 */ unsigned int IMT : 1;
	/* 0x0:3 */ unsigned int PSE : 1;
	/* 0x0:4 */ unsigned int p0 : 1;
	/* 0x0:5 */ unsigned int IP3 : 1;
	/* 0x0:6 */ unsigned int P3Q : 1;
	/* 0x0:7 */ unsigned int P2Q : 1;
	/* 0x1:0 */ unsigned int P1Q : 1;
	/* 0x1:1 */ unsigned int OPH : 1;
	/* 0x1:2 */ unsigned int APATH : 2;
	/* 0x1:4 */ unsigned int DIR : 1;
	/* 0x1:5 */ unsigned int p1 : 11;
	/* 0x3:0 */ unsigned int FQC : 5;
	/* 0x3:5 */ unsigned int p2 : 3;
};

struct tGIF_TAG0 { // 0x4
	/* 0x0:0 */ unsigned int NLOOP : 15;
	/* 0x1:7 */ unsigned int EOP : 1;
	/* 0x2:0 */ unsigned int tag : 16;
};

struct tGIF_TAG1 { // 0x4
	/* 0x0:0 */ unsigned int tag : 14;
	/* 0x1:6 */ unsigned int PRE : 1;
	/* 0x1:7 */ unsigned int PRIM : 11;
	/* 0x3:2 */ unsigned int FLG : 2;
	/* 0x3:4 */ unsigned int NREG : 4;
};

struct tGIF_TAG2 { // 0x4
	/* 0x0 */ unsigned int tag;
};

struct tGIF_TAG3 { // 0x4
	/* 0x0 */ unsigned int tag;
};

struct tGIF_CNT { // 0x4
	/* 0x0:0 */ unsigned int LOOPCNT : 15;
	/* 0x1:7 */ unsigned int p0 : 1;
	/* 0x2:0 */ unsigned int REGCNT : 4;
	/* 0x2:4 */ unsigned int VUADDR : 10;
	/* 0x3:6 */ unsigned int p1 : 2;
};

struct tGIF_P3CNT { // 0x4
	/* 0x0:0 */ unsigned int P3CNT : 15;
	/* 0x1:7 */ unsigned int p0 : 17;
};

struct tGIF_P3TAG { // 0x4
	/* 0x0:0 */ unsigned int LOOPCNT : 15;
	/* 0x1:7 */ unsigned int EOP : 1;
	/* 0x2:0 */ unsigned int p0 : 16;
};

struct tVIF0_STAT { // 0x4
	/* 0x0:0 */ unsigned int VPS : 2;
	/* 0x0:2 */ unsigned int VEW : 1;
	/* 0x0:3 */ unsigned int p0 : 3;
	/* 0x0:6 */ unsigned int MRK : 1;
	/* 0x0:7 */ unsigned int p1 : 1;
	/* 0x1:0 */ unsigned int VSS : 1;
	/* 0x1:1 */ unsigned int VFS : 1;
	/* 0x1:2 */ unsigned int VIS : 1;
	/* 0x1:3 */ unsigned int INT : 1;
	/* 0x1:4 */ unsigned int ERO : 1;
	/* 0x1:5 */ unsigned int ER1 : 1;
	/* 0x1:6 */ unsigned int p2 : 10;
	/* 0x3:0 */ unsigned int FQC : 4;
	/* 0x3:4 */ unsigned int p3 : 4;
};

struct tVIF0_FBRST { // 0x4
	/* 0x0:0 */ unsigned int RST : 1;
	/* 0x0:1 */ unsigned int FBK : 1;
	/* 0x0:2 */ unsigned int STP : 1;
	/* 0x0:3 */ unsigned int STC : 1;
	/* 0x0:4 */ unsigned int p0 : 28;
};

struct tVIF0_ERR { // 0x4
	/* 0x0:0 */ unsigned int MII : 1;
	/* 0x0:1 */ unsigned int ME0 : 1;
	/* 0x0:2 */ unsigned int ME1 : 1;
	/* 0x0:3 */ unsigned int p0 : 29;
};

struct tVIF_MARK { // 0x4
	/* 0x0:0 */ unsigned int MARK : 16;
	/* 0x2:0 */ unsigned int p0 : 16;
};

struct tVIF_CYCLE { // 0x4
	/* 0x0:0 */ unsigned int CL : 8;
	/* 0x1:0 */ unsigned int WL : 8;
	/* 0x2:0 */ unsigned int p0 : 16;
};

struct tVIF_MODE { // 0x4
	/* 0x0:0 */ unsigned int MOD : 2;
	/* 0x0:2 */ unsigned int p0 : 30;
};

struct tVIF0_NUM { // 0x4
	/* 0x0:0 */ unsigned int num : 8;
	/* 0x1:0 */ unsigned int p0 : 24;
};

struct tVIF_MASK { // 0x4
	/* 0x0:0 */ unsigned int m0 : 2;
	/* 0x0:2 */ unsigned int m1 : 2;
	/* 0x0:4 */ unsigned int m2 : 2;
	/* 0x0:6 */ unsigned int m3 : 2;
	/* 0x1:0 */ unsigned int m4 : 2;
	/* 0x1:2 */ unsigned int m5 : 2;
	/* 0x1:4 */ unsigned int m6 : 2;
	/* 0x1:6 */ unsigned int m7 : 2;
	/* 0x2:0 */ unsigned int m8 : 2;
	/* 0x2:2 */ unsigned int m9 : 2;
	/* 0x2:4 */ unsigned int m10 : 2;
	/* 0x2:6 */ unsigned int m11 : 2;
	/* 0x3:0 */ unsigned int m12 : 2;
	/* 0x3:2 */ unsigned int m13 : 2;
	/* 0x3:4 */ unsigned int m14 : 2;
	/* 0x3:6 */ unsigned int m15 : 2;
};

struct tVIF_CODE { // 0x4
	/* 0x0:0 */ unsigned int immediate : 16;
	/* 0x2:0 */ unsigned int num : 8;
	/* 0x3:0 */ unsigned int CMD : 8;
};

struct tVIF_ITOPS { // 0x4
	/* 0x0:0 */ unsigned int ITOPS : 10;
	/* 0x1:2 */ unsigned int p0 : 22;
};

struct tVIF_ITOP { // 0x4
	/* 0x0:0 */ unsigned int ITOP : 10;
	/* 0x1:2 */ unsigned int p0 : 22;
};

struct tVIF_R0 { // 0x4
	/* 0x0 */ unsigned int R0;
};

struct tVIF_R1 { // 0x4
	/* 0x0 */ unsigned int R1;
};

struct tVIF_R2 { // 0x4
	/* 0x0 */ unsigned int R2;
};

struct tVIF_R3 { // 0x4
	/* 0x0 */ unsigned int R3;
};

struct tVIF_C0 { // 0x4
	/* 0x0 */ unsigned int C0;
};

struct tVIF_C1 { // 0x4
	/* 0x0 */ unsigned int C1;
};

struct tVIF_C2 { // 0x4
	/* 0x0 */ unsigned int C2;
};

struct tVIF_C3 { // 0x4
	/* 0x0 */ unsigned int C3;
};

struct tVIF1_STAT { // 0x4
	/* 0x0:0 */ unsigned int VPS : 2;
	/* 0x0:2 */ unsigned int VEW : 1;
	/* 0x0:3 */ unsigned int VGW : 1;
	/* 0x0:4 */ unsigned int p0 : 2;
	/* 0x0:6 */ unsigned int MRK : 1;
	/* 0x0:7 */ unsigned int DBF : 1;
	/* 0x1:0 */ unsigned int VSS : 1;
	/* 0x1:1 */ unsigned int VFS : 1;
	/* 0x1:2 */ unsigned int VIS : 1;
	/* 0x1:3 */ unsigned int INT : 1;
	/* 0x1:4 */ unsigned int ERO : 1;
	/* 0x1:5 */ unsigned int ER1 : 1;
	/* 0x1:6 */ unsigned int p1 : 9;
	/* 0x2:7 */ unsigned int FDR : 1;
	/* 0x3:0 */ unsigned int FQC : 5;
	/* 0x3:5 */ unsigned int p2 : 3;
};

struct tVIF1_FBRST { // 0x4
	/* 0x0:0 */ unsigned int RST : 1;
	/* 0x0:1 */ unsigned int FBK : 1;
	/* 0x0:2 */ unsigned int STP : 1;
	/* 0x0:3 */ unsigned int STC : 1;
	/* 0x0:4 */ unsigned int p0 : 28;
};

struct tVIF1_ERR { // 0x4
	/* 0x0:0 */ unsigned int MII : 1;
	/* 0x0:1 */ unsigned int ME0 : 1;
	/* 0x0:2 */ unsigned int ME1 : 1;
	/* 0x0:3 */ unsigned int p0 : 29;
};

struct tVIF1_NUM { // 0x4
	/* 0x0:0 */ unsigned int num : 8;
	/* 0x1:0 */ unsigned int p0 : 24;
};

struct tVIF1_BASE { // 0x4
	/* 0x0:0 */ unsigned int BASE : 10;
	/* 0x1:2 */ unsigned int p0 : 22;
};

struct tVIF1_OFST { // 0x4
	/* 0x0:0 */ unsigned int OFFSET : 10;
	/* 0x1:2 */ unsigned int p0 : 22;
};

struct tVIF1_TOPS { // 0x4
	/* 0x0:0 */ unsigned int TOPS : 10;
	/* 0x1:2 */ unsigned int p0 : 22;
};

struct tVIF1_TOP { // 0x4
	/* 0x0:0 */ unsigned int TOP : 10;
	/* 0x1:2 */ unsigned int p0 : 22;
};

struct tD_CHCR { // 0x4
	/* 0x0:0 */ unsigned int DIR : 1;
	/* 0x0:1 */ unsigned int p0 : 1;
	/* 0x0:2 */ unsigned int MOD : 2;
	/* 0x0:4 */ unsigned int ASP : 2;
	/* 0x0:6 */ unsigned int TTE : 1;
	/* 0x0:7 */ unsigned int TIE : 1;
	/* 0x1:0 */ unsigned int STR : 1;
	/* 0x1:1 */ unsigned int p1 : 7;
	/* 0x2:0 */ unsigned int TAG : 16;
};

struct tD_MADR { // 0x4
	/* 0x0:0 */ unsigned int ADDR : 31;
	/* 0x3:7 */ unsigned int SPR : 1;
};

struct tD_QWC { // 0x4
	/* 0x0:0 */ unsigned int QWC : 16;
	/* 0x2:0 */ unsigned int p0 : 16;
};

struct tD_TADR { // 0x4
	/* 0x0:0 */ unsigned int ADDR : 31;
	/* 0x3:7 */ unsigned int SPR : 1;
};

struct tD_ASR0 { // 0x4
	/* 0x0:0 */ unsigned int ADDR : 31;
	/* 0x3:7 */ unsigned int SPR : 1;
};

struct tD_ASR1 { // 0x4
	/* 0x0:0 */ unsigned int ADDR : 31;
	/* 0x3:7 */ unsigned int SPR : 1;
};

struct tD_SADR { // 0x4
	/* 0x0:0 */ unsigned int ADDR : 14;
	/* 0x1:6 */ unsigned int p0 : 18;
};

struct tD_CTRL { // 0x4
	/* 0x0:0 */ unsigned int DMAE : 1;
	/* 0x0:1 */ unsigned int RELE : 1;
	/* 0x0:2 */ unsigned int MFD : 2;
	/* 0x0:4 */ unsigned int STS : 2;
	/* 0x0:6 */ unsigned int STD : 2;
	/* 0x1:0 */ unsigned int RCYC : 3;
	/* 0x1:3 */ unsigned int p0 : 21;
};

struct tD_STAT { // 0x4
	/* 0x0:0 */ unsigned int CIS0 : 1;
	/* 0x0:1 */ unsigned int CIS1 : 1;
	/* 0x0:2 */ unsigned int CIS2 : 1;
	/* 0x0:3 */ unsigned int CIS3 : 1;
	/* 0x0:4 */ unsigned int CIS4 : 1;
	/* 0x0:5 */ unsigned int CIS5 : 1;
	/* 0x0:6 */ unsigned int CIS6 : 1;
	/* 0x0:7 */ unsigned int CIS7 : 1;
	/* 0x1:0 */ unsigned int CIS8 : 1;
	/* 0x1:1 */ unsigned int CIS9 : 1;
	/* 0x1:2 */ unsigned int p0 : 3;
	/* 0x1:5 */ unsigned int SIS : 1;
	/* 0x1:6 */ unsigned int MEIS : 1;
	/* 0x1:7 */ unsigned int BEIS : 1;
	/* 0x2:0 */ unsigned int CIM0 : 1;
	/* 0x2:1 */ unsigned int CIM1 : 1;
	/* 0x2:2 */ unsigned int CIM2 : 1;
	/* 0x2:3 */ unsigned int CIM3 : 1;
	/* 0x2:4 */ unsigned int CIM4 : 1;
	/* 0x2:5 */ unsigned int CIM5 : 1;
	/* 0x2:6 */ unsigned int CIM6 : 1;
	/* 0x2:7 */ unsigned int CIM7 : 1;
	/* 0x3:0 */ unsigned int CIM8 : 1;
	/* 0x3:1 */ unsigned int CIM9 : 1;
	/* 0x3:2 */ unsigned int p1 : 3;
	/* 0x3:5 */ unsigned int SIM : 1;
	/* 0x3:6 */ unsigned int MEIM : 1;
	/* 0x3:7 */ unsigned int p2 : 1;
};

struct tD_PCR { // 0x4
	/* 0x0:0 */ unsigned int CPC0 : 1;
	/* 0x0:1 */ unsigned int CPC1 : 1;
	/* 0x0:2 */ unsigned int CPC2 : 1;
	/* 0x0:3 */ unsigned int CPC3 : 1;
	/* 0x0:4 */ unsigned int CPC4 : 1;
	/* 0x0:5 */ unsigned int CPC5 : 1;
	/* 0x0:6 */ unsigned int CPC6 : 1;
	/* 0x0:7 */ unsigned int CPC7 : 1;
	/* 0x1:0 */ unsigned int CPC8 : 1;
	/* 0x1:1 */ unsigned int CPC9 : 1;
	/* 0x1:2 */ unsigned int p0 : 6;
	/* 0x2:0 */ unsigned int CDE0 : 1;
	/* 0x2:1 */ unsigned int CDE1 : 1;
	/* 0x2:2 */ unsigned int CDE2 : 1;
	/* 0x2:3 */ unsigned int CDE3 : 1;
	/* 0x2:4 */ unsigned int CDE4 : 1;
	/* 0x2:5 */ unsigned int CDE5 : 1;
	/* 0x2:6 */ unsigned int CDE6 : 1;
	/* 0x2:7 */ unsigned int CDE7 : 1;
	/* 0x3:0 */ unsigned int CDE8 : 1;
	/* 0x3:1 */ unsigned int CDE9 : 1;
	/* 0x3:2 */ unsigned int p1 : 5;
	/* 0x3:7 */ unsigned int PCE : 1;
};

struct tD_SQWC { // 0x4
	/* 0x0:0 */ unsigned int SQWC : 8;
	/* 0x1:0 */ unsigned int p0 : 8;
	/* 0x2:0 */ unsigned int TQWC : 8;
	/* 0x3:0 */ unsigned int p1 : 8;
};

struct tD_RBSR { // 0x4
	/* 0x0:0 */ unsigned int RMSK : 31;
	/* 0x3:7 */ unsigned int p0 : 1;
};

struct tD_RBOR { // 0x4
	/* 0x0:0 */ unsigned int ADDR : 31;
	/* 0x3:7 */ unsigned int p0 : 1;
};

struct tD_STADR { // 0x4
	/* 0x0:0 */ unsigned int ADDR : 31;
	/* 0x3:7 */ unsigned int p0 : 1;
};

struct tD_ENABLER { // 0x4
	/* 0x0:0 */ unsigned int p0 : 16;
	/* 0x2:0 */ unsigned int CPND : 1;
	/* 0x2:1 */ unsigned int p1 : 15;
};

struct tD_ENABLEW { // 0x4
	/* 0x0:0 */ unsigned int p0 : 16;
	/* 0x2:0 */ unsigned int CPND : 1;
	/* 0x2:1 */ unsigned int p1 : 15;
};

struct tGS_PMODE { // 0x8
	/* 0x0:0 */ unsigned int EN1 : 1;
	/* 0x0:1 */ unsigned int EN2 : 1;
	/* 0x0:2 */ unsigned int CRTMD : 3;
	/* 0x0:5 */ unsigned int MMOD : 1;
	/* 0x0:6 */ unsigned int AMOD : 1;
	/* 0x0:7 */ unsigned int SLBG : 1;
	/* 0x1:0 */ unsigned int ALP : 8;
	/* 0x2:0 */ unsigned int p0 : 16;
	/* 0x4 */ unsigned int p1;
};

struct tGS_SMODE2 { // 0x8
	/* 0x0:0 */ unsigned int INT : 1;
	/* 0x0:1 */ unsigned int FFMD : 1;
	/* 0x0:2 */ unsigned int DPMS : 2;
	/* 0x0:4 */ unsigned int p0 : 28;
	/* 0x4 */ unsigned int p1;
};

struct tGS_DISPFB1 { // 0x8
	/* 0x0:0 */ unsigned int FBP : 9;
	/* 0x1:1 */ unsigned int FBW : 6;
	/* 0x1:7 */ unsigned int PSM : 5;
	/* 0x2:4 */ unsigned int p0 : 12;
	/* 0x4:0 */ unsigned int DBX : 11;
	/* 0x5:3 */ unsigned int DBY : 11;
	/* 0x6:6 */ unsigned int p1 : 10;
};

struct tGS_DISPLAY1 { // 0x8
	/* 0x0:0 */ unsigned int DX : 12;
	/* 0x1:4 */ unsigned int DY : 11;
	/* 0x2:7 */ unsigned int MAGH : 4;
	/* 0x3:3 */ unsigned int MAGV : 2;
	/* 0x3:5 */ unsigned int p0 : 3;
	/* 0x4:0 */ unsigned int DW : 12;
	/* 0x5:4 */ unsigned int DH : 11;
	/* 0x6:7 */ unsigned int p1 : 9;
};

struct tGS_DISPFB2 { // 0x8
	/* 0x0:0 */ unsigned int FBP : 9;
	/* 0x1:1 */ unsigned int FBW : 6;
	/* 0x1:7 */ unsigned int PSM : 5;
	/* 0x2:4 */ unsigned int p0 : 12;
	/* 0x4:0 */ unsigned int DBX : 11;
	/* 0x5:3 */ unsigned int DBY : 11;
	/* 0x6:6 */ unsigned int p1 : 10;
};

struct tGS_DISPLAY2 { // 0x8
	/* 0x0:0 */ unsigned int DX : 12;
	/* 0x1:4 */ unsigned int DY : 11;
	/* 0x2:7 */ unsigned int MAGH : 4;
	/* 0x3:3 */ unsigned int MAGV : 2;
	/* 0x3:5 */ unsigned int p0 : 3;
	/* 0x4:0 */ unsigned int DW : 12;
	/* 0x5:4 */ unsigned int DH : 11;
	/* 0x6:7 */ unsigned int p1 : 9;
};

struct tGS_EXTBUF { // 0x8
	/* 0x0:0 */ unsigned int EXBP : 14;
	/* 0x1:6 */ unsigned int EXBW : 6;
	/* 0x2:4 */ unsigned int FBIN : 2;
	/* 0x2:6 */ unsigned int WFFMD : 1;
	/* 0x2:7 */ unsigned int EMODA : 2;
	/* 0x3:1 */ unsigned int EMODC : 2;
	/* 0x3:3 */ unsigned int p0 : 5;
	/* 0x4:0 */ unsigned int WDX : 11;
	/* 0x5:3 */ unsigned int WDY : 11;
	/* 0x6:6 */ unsigned int p1 : 10;
};

struct tGS_EXTDATA { // 0x8
	/* 0x0:0 */ unsigned int SX : 12;
	/* 0x1:4 */ unsigned int SY : 11;
	/* 0x2:7 */ unsigned int SMPH : 4;
	/* 0x3:3 */ unsigned int SMPV : 2;
	/* 0x3:5 */ unsigned int p0 : 3;
	/* 0x4:0 */ unsigned int WW : 12;
	/* 0x5:4 */ unsigned int WH : 11;
	/* 0x6:7 */ unsigned int p1 : 9;
};

struct tGS_EXTWRITE { // 0x8
	/* 0x0:0 */ unsigned int WRITE : 1;
	/* 0x0:1 */ unsigned int p0 : 31;
	/* 0x4 */ unsigned int p1;
};

struct tGS_BGCOLOR { // 0x8
	/* 0x0:0 */ unsigned int R : 8;
	/* 0x1:0 */ unsigned int G : 8;
	/* 0x2:0 */ unsigned int B : 8;
	/* 0x3:0 */ unsigned int p0 : 8;
	/* 0x4 */ unsigned int p1;
};

struct tGS_CSR { // 0x8
	/* 0x0:0 */ unsigned int SIGNAL : 1;
	/* 0x0:1 */ unsigned int FINISH : 1;
	/* 0x0:2 */ unsigned int HSINT : 1;
	/* 0x0:3 */ unsigned int VSINT : 1;
	/* 0x0:4 */ unsigned int EDWINT : 1;
	/* 0x0:5 */ unsigned int p0 : 3;
	/* 0x1:0 */ unsigned int FLUSH : 1;
	/* 0x1:1 */ unsigned int RESET : 1;
	/* 0x1:2 */ unsigned int p1 : 2;
	/* 0x1:4 */ unsigned int NFIELD : 1;
	/* 0x1:5 */ unsigned int FIELD : 1;
	/* 0x1:6 */ unsigned int FIFO : 2;
	/* 0x2:0 */ unsigned int REV : 8;
	/* 0x3:0 */ unsigned int ID : 8;
	/* 0x4 */ unsigned int p2;
};

struct tGS_IMR { // 0x8
	/* 0x0:0 */ unsigned int p0 : 8;
	/* 0x1:0 */ unsigned int SIGMSK : 1;
	/* 0x1:1 */ unsigned int FINISHMSK : 1;
	/* 0x1:2 */ unsigned int HSMSK : 1;
	/* 0x1:3 */ unsigned int VSMSK : 1;
	/* 0x1:4 */ unsigned int EDWMSK : 1;
	/* 0x1:5 */ unsigned int p1 : 19;
	/* 0x4 */ unsigned int p2;
};

struct tGS_BUSDIR { // 0x8
	/* 0x0:0 */ unsigned int DIR : 1;
	/* 0x0:1 */ unsigned int p0 : 31;
	/* 0x4 */ unsigned int p1;
};

struct tGS_SIGLBLID { // 0x8
	/* 0x0 */ unsigned int SIGID;
	/* 0x4 */ unsigned int LBLID;
};

struct sceGifTag { // 0x10
	/* 0x0:0 */ long unsigned int NLOOP : 15;
	/* 0x1:7 */ long unsigned int EOP : 1;
	/* 0x2:0 */ long unsigned int pad16 : 16;
	/* 0x4:0 */ long unsigned int id : 14;
	/* 0x5:6 */ long unsigned int PRE : 1;
	/* 0x5:7 */ long unsigned int PRIM : 11;
	/* 0x7:2 */ long unsigned int FLG : 2;
	/* 0x7:4 */ long unsigned int NREG : 4;
	/* 0x8:0 */ long unsigned int REGS0 : 4;
	/* 0x8:4 */ long unsigned int REGS1 : 4;
	/* 0x9:0 */ long unsigned int REGS2 : 4;
	/* 0x9:4 */ long unsigned int REGS3 : 4;
	/* 0xa:0 */ long unsigned int REGS4 : 4;
	/* 0xa:4 */ long unsigned int REGS5 : 4;
	/* 0xb:0 */ long unsigned int REGS6 : 4;
	/* 0xb:4 */ long unsigned int REGS7 : 4;
	/* 0xc:0 */ long unsigned int REGS8 : 4;
	/* 0xc:4 */ long unsigned int REGS9 : 4;
	/* 0xd:0 */ long unsigned int REGS10 : 4;
	/* 0xd:4 */ long unsigned int REGS11 : 4;
	/* 0xe:0 */ long unsigned int REGS12 : 4;
	/* 0xe:4 */ long unsigned int REGS13 : 4;
	/* 0xf:0 */ long unsigned int REGS14 : 4;
	/* 0xf:4 */ long unsigned int REGS15 : 4;
} __attribute__((aligned(16)));

struct sceGsAlpha { // 0x8
	/* 0x0:0 */ long unsigned int A : 2;
	/* 0x0:2 */ long unsigned int B : 2;
	/* 0x0:4 */ long unsigned int C : 2;
	/* 0x0:6 */ long unsigned int D : 2;
	/* 0x1:0 */ long unsigned int pad8 : 24;
	/* 0x4:0 */ long unsigned int FIX : 8;
	/* 0x5:0 */ long unsigned int pad40 : 24;
};

struct sceGsBitbltbuf { // 0x8
	/* 0x0:0 */ long unsigned int SBP : 14;
	/* 0x1:6 */ long unsigned int pad14 : 2;
	/* 0x2:0 */ long unsigned int SBW : 6;
	/* 0x2:6 */ long unsigned int pad22 : 2;
	/* 0x3:0 */ long unsigned int SPSM : 6;
	/* 0x3:6 */ long unsigned int pad30 : 2;
	/* 0x4:0 */ long unsigned int DBP : 14;
	/* 0x5:6 */ long unsigned int pad46 : 2;
	/* 0x6:0 */ long unsigned int DBW : 6;
	/* 0x6:6 */ long unsigned int pad54 : 2;
	/* 0x7:0 */ long unsigned int DPSM : 6;
	/* 0x7:6 */ long unsigned int pad62 : 2;
};

struct sceGsClamp { // 0x8
	/* 0x0:0 */ long unsigned int WMS : 2;
	/* 0x0:2 */ long unsigned int WMT : 2;
	/* 0x0:4 */ long unsigned int MINU : 10;
	/* 0x1:6 */ long unsigned int MAXU : 10;
	/* 0x3:0 */ long unsigned int MINV : 10;
	/* 0x4:2 */ long unsigned int MAXV : 10;
	/* 0x5:4 */ long unsigned int pad44 : 20;
};

struct sceGsColclamp { // 0x8
	/* 0x0:0 */ long unsigned int CLAMP : 1;
	/* 0x0:1 */ long unsigned int pad01 : 63;
};

struct sceGsDimx { // 0x8
	/* 0x0:0 */ long unsigned int DIMX00 : 3;
	/* 0x0:3 */ long unsigned int pad00 : 1;
	/* 0x0:4 */ long unsigned int DIMX01 : 3;
	/* 0x0:7 */ long unsigned int pad01 : 1;
	/* 0x1:0 */ long unsigned int DIMX02 : 3;
	/* 0x1:3 */ long unsigned int pad02 : 1;
	/* 0x1:4 */ long unsigned int DIMX03 : 3;
	/* 0x1:7 */ long unsigned int pad03 : 1;
	/* 0x2:0 */ long unsigned int DIMX10 : 3;
	/* 0x2:3 */ long unsigned int pad10 : 1;
	/* 0x2:4 */ long unsigned int DIMX11 : 3;
	/* 0x2:7 */ long unsigned int pad11 : 1;
	/* 0x3:0 */ long unsigned int DIMX12 : 3;
	/* 0x3:3 */ long unsigned int pad12 : 1;
	/* 0x3:4 */ long unsigned int DIMX13 : 3;
	/* 0x3:7 */ long unsigned int pad13 : 1;
	/* 0x4:0 */ long unsigned int DIMX20 : 3;
	/* 0x4:3 */ long unsigned int pad20 : 1;
	/* 0x4:4 */ long unsigned int DIMX21 : 3;
	/* 0x4:7 */ long unsigned int pad21 : 1;
	/* 0x5:0 */ long unsigned int DIMX22 : 3;
	/* 0x5:3 */ long unsigned int pad22 : 1;
	/* 0x5:4 */ long unsigned int DIMX23 : 3;
	/* 0x5:7 */ long unsigned int pad23 : 1;
	/* 0x6:0 */ long unsigned int DIMX30 : 3;
	/* 0x6:3 */ long unsigned int pad30 : 1;
	/* 0x6:4 */ long unsigned int DIMX31 : 3;
	/* 0x6:7 */ long unsigned int pad31 : 1;
	/* 0x7:0 */ long unsigned int DIMX32 : 3;
	/* 0x7:3 */ long unsigned int pad32 : 1;
	/* 0x7:4 */ long unsigned int DIMX33 : 3;
	/* 0x7:7 */ long unsigned int pad33 : 1;
};

struct sceGsDthe { // 0x8
	/* 0x0:0 */ long unsigned int DTHE : 1;
	/* 0x0:1 */ long unsigned int pad01 : 63;
};

struct sceGsFba { // 0x8
	/* 0x0:0 */ long unsigned int FBA : 1;
	/* 0x0:1 */ long unsigned int pad01 : 63;
};

struct sceGsFinish { // 0x8
	/* 0x0 */ long unsigned int pad00;
};

struct sceGsFogcol { // 0x8
	/* 0x0:0 */ long unsigned int FCR : 8;
	/* 0x1:0 */ long unsigned int FCG : 8;
	/* 0x2:0 */ long unsigned int FCB : 8;
	/* 0x3:0 */ long unsigned int pad24 : 40;
};

struct sceGsFrame { // 0x8
	/* 0x0:0 */ long unsigned int FBP : 9;
	/* 0x1:1 */ long unsigned int pad09 : 7;
	/* 0x2:0 */ long unsigned int FBW : 6;
	/* 0x2:6 */ long unsigned int pad22 : 2;
	/* 0x3:0 */ long unsigned int PSM : 6;
	/* 0x3:6 */ long unsigned int pad30 : 2;
	/* 0x4:0 */ long unsigned int FBMSK : 32;
};

struct sceGsHwreg { // 0x8
	/* 0x0 */ long unsigned int WDATA;
};

struct sceGsLabel { // 0x8
	/* 0x0 */ u_int ID;
	/* 0x4 */ u_int IDMSK;
};

struct sceGsMiptbp1 { // 0x8
	/* 0x0:0 */ long unsigned int TBP1 : 14;
	/* 0x1:6 */ long unsigned int TBW1 : 6;
	/* 0x2:4 */ long unsigned int TBP2 : 14;
	/* 0x4:2 */ long unsigned int TBW2 : 6;
	/* 0x5:0 */ long unsigned int TBP3 : 14;
	/* 0x6:6 */ long unsigned int TBW3 : 6;
	/* 0x7:4 */ long unsigned int pad60 : 4;
};

struct sceGsMiptbp2 { // 0x8
	/* 0x0:0 */ long unsigned int TBP4 : 14;
	/* 0x1:6 */ long unsigned int TBW4 : 6;
	/* 0x2:4 */ long unsigned int TBP5 : 14;
	/* 0x4:2 */ long unsigned int TBW5 : 6;
	/* 0x5:0 */ long unsigned int TBP6 : 14;
	/* 0x6:6 */ long unsigned int TBW6 : 6;
	/* 0x7:4 */ long unsigned int pad60 : 4;
};

struct sceGsPabe { // 0x8
	/* 0x0:0 */ long unsigned int PABE : 1;
	/* 0x0:1 */ long unsigned int pad01 : 63;
};

struct sceGsPrim { // 0x8
	/* 0x0:0 */ long unsigned int PRIM : 3;
	/* 0x0:3 */ long unsigned int IIP : 1;
	/* 0x0:4 */ long unsigned int TME : 1;
	/* 0x0:5 */ long unsigned int FGE : 1;
	/* 0x0:6 */ long unsigned int ABE : 1;
	/* 0x0:7 */ long unsigned int AA1 : 1;
	/* 0x1:0 */ long unsigned int FST : 1;
	/* 0x1:1 */ long unsigned int CTXT : 1;
	/* 0x1:2 */ long unsigned int FIX : 1;
	/* 0x1:3 */ long unsigned int pad11 : 53;
};

struct sceGsPrmode { // 0x8
	/* 0x0:0 */ long unsigned int pad00 : 3;
	/* 0x0:3 */ long unsigned int IIP : 1;
	/* 0x0:4 */ long unsigned int TME : 1;
	/* 0x0:5 */ long unsigned int FGE : 1;
	/* 0x0:6 */ long unsigned int ABE : 1;
	/* 0x0:7 */ long unsigned int AA1 : 1;
	/* 0x1:0 */ long unsigned int FST : 1;
	/* 0x1:1 */ long unsigned int CTXT : 1;
	/* 0x1:2 */ long unsigned int FIX : 1;
	/* 0x1:3 */ long unsigned int pad11 : 53;
};

struct sceGsPrmodecont { // 0x8
	/* 0x0:0 */ long unsigned int AC : 1;
	/* 0x0:1 */ long unsigned int pad01 : 63;
};

struct sceGsRgbaq { // 0x8
	/* 0x0:0 */ u_int R : 8;
	/* 0x1:0 */ u_int G : 8;
	/* 0x2:0 */ u_int B : 8;
	/* 0x3:0 */ u_int A : 8;
	/* 0x4 */ float Q;
};

struct sceGsScanmsk { // 0x8
	/* 0x0:0 */ long unsigned int MSK : 2;
	/* 0x0:2 */ long unsigned int pad02 : 62;
};

struct sceGsScissor { // 0x8
	/* 0x0:0 */ long unsigned int SCAX0 : 11;
	/* 0x1:3 */ long unsigned int pad11 : 5;
	/* 0x2:0 */ long unsigned int SCAX1 : 11;
	/* 0x3:3 */ long unsigned int pad27 : 5;
	/* 0x4:0 */ long unsigned int SCAY0 : 11;
	/* 0x5:3 */ long unsigned int pad43 : 5;
	/* 0x6:0 */ long unsigned int SCAY1 : 11;
	/* 0x7:3 */ long unsigned int pad59 : 5;
};

struct sceGsSignal { // 0x8
	/* 0x0 */ u_int ID;
	/* 0x4 */ u_int IDMSK;
};

struct sceGsSt { // 0x8
	/* 0x0 */ float S;
	/* 0x4 */ float T;
};

struct sceGsTest { // 0x8
	/* 0x0:0 */ long unsigned int ATE : 1;
	/* 0x0:1 */ long unsigned int ATST : 3;
	/* 0x0:4 */ long unsigned int AREF : 8;
	/* 0x1:4 */ long unsigned int AFAIL : 2;
	/* 0x1:6 */ long unsigned int DATE : 1;
	/* 0x1:7 */ long unsigned int DATM : 1;
	/* 0x2:0 */ long unsigned int ZTE : 1;
	/* 0x2:1 */ long unsigned int ZTST : 2;
	/* 0x2:3 */ long unsigned int pad19 : 45;
};

struct sceGsTex0 { // 0x8
	/* 0x0:0 */ long unsigned int TBP0 : 14;
	/* 0x1:6 */ long unsigned int TBW : 6;
	/* 0x2:4 */ long unsigned int PSM : 6;
	/* 0x3:2 */ long unsigned int TW : 4;
	/* 0x3:6 */ long unsigned int TH : 4;
	/* 0x4:2 */ long unsigned int TCC : 1;
	/* 0x4:3 */ long unsigned int TFX : 2;
	/* 0x4:5 */ long unsigned int CBP : 14;
	/* 0x6:3 */ long unsigned int CPSM : 4;
	/* 0x6:7 */ long unsigned int CSM : 1;
	/* 0x7:0 */ long unsigned int CSA : 5;
	/* 0x7:5 */ long unsigned int CLD : 3;
};

struct sceGsTex1 { // 0x8
	/* 0x0:0 */ long unsigned int LCM : 1;
	/* 0x0:1 */ long unsigned int pad01 : 1;
	/* 0x0:2 */ long unsigned int MXL : 3;
	/* 0x0:5 */ long unsigned int MMAG : 1;
	/* 0x0:6 */ long unsigned int MMIN : 3;
	/* 0x1:1 */ long unsigned int MTBA : 1;
	/* 0x1:2 */ long unsigned int pad10 : 9;
	/* 0x2:3 */ long unsigned int L : 2;
	/* 0x2:5 */ long unsigned int pad21 : 11;
	/* 0x4:0 */ long unsigned int K : 12;
	/* 0x5:4 */ long unsigned int pad44 : 20;
};

struct sceGsTex2 { // 0x8
	/* 0x0:0 */ long unsigned int pad00 : 20;
	/* 0x2:4 */ long unsigned int PSM : 6;
	/* 0x3:2 */ long unsigned int pad26 : 11;
	/* 0x4:5 */ long unsigned int CBP : 14;
	/* 0x6:3 */ long unsigned int CPSM : 4;
	/* 0x6:7 */ long unsigned int CSM : 1;
	/* 0x7:0 */ long unsigned int CSA : 5;
	/* 0x7:5 */ long unsigned int CLD : 3;
};

struct sceGsTexa { // 0x8
	/* 0x0:0 */ long unsigned int TA0 : 8;
	/* 0x1:0 */ long unsigned int pad08 : 7;
	/* 0x1:7 */ long unsigned int AEM : 1;
	/* 0x2:0 */ long unsigned int pad16 : 16;
	/* 0x4:0 */ long unsigned int TA1 : 8;
	/* 0x5:0 */ long unsigned int pad40 : 24;
};

struct sceGsTexclut { // 0x8
	/* 0x0:0 */ long unsigned int CBW : 6;
	/* 0x0:6 */ long unsigned int COU : 6;
	/* 0x1:4 */ long unsigned int COV : 10;
	/* 0x2:6 */ long unsigned int pad22 : 42;
};

struct sceGsTexflush { // 0x8
	/* 0x0 */ long unsigned int pad00;
};

struct sceGsTrxdir { // 0x8
	/* 0x0:0 */ long unsigned int XDR : 2;
	/* 0x0:2 */ long unsigned int pad02 : 62;
};

struct sceGsTrxpos { // 0x8
	/* 0x0:0 */ long unsigned int SSAX : 11;
	/* 0x1:3 */ long unsigned int pad11 : 5;
	/* 0x2:0 */ long unsigned int SSAY : 11;
	/* 0x3:3 */ long unsigned int pad27 : 5;
	/* 0x4:0 */ long unsigned int DSAX : 11;
	/* 0x5:3 */ long unsigned int pad43 : 5;
	/* 0x6:0 */ long unsigned int DSAY : 11;
	/* 0x7:3 */ long unsigned int DIR : 2;
	/* 0x7:5 */ long unsigned int pad61 : 3;
};

struct sceGsTrxreg { // 0x8
	/* 0x0:0 */ long unsigned int RRW : 12;
	/* 0x1:4 */ long unsigned int pad12 : 20;
	/* 0x4:0 */ long unsigned int RRH : 12;
	/* 0x5:4 */ long unsigned int pad44 : 20;
};

struct sceGsUv { // 0x8
	/* 0x0:0 */ long unsigned int U : 14;
	/* 0x1:6 */ long unsigned int pad14 : 2;
	/* 0x2:0 */ long unsigned int V : 14;
	/* 0x3:6 */ long unsigned int pad30 : 34;
};

struct sceGsXyoffset { // 0x8
	/* 0x0:0 */ long unsigned int OFX : 16;
	/* 0x2:0 */ long unsigned int pad16 : 16;
	/* 0x4:0 */ long unsigned int OFY : 16;
	/* 0x6:0 */ long unsigned int pad48 : 16;
};

struct sceGsXyz { // 0x8
	/* 0x0:0 */ long unsigned int X : 16;
	/* 0x2:0 */ long unsigned int Y : 16;
	/* 0x4:0 */ long unsigned int Z : 32;
};

struct sceGsXyzf { // 0x8
	/* 0x0:0 */ long unsigned int X : 16;
	/* 0x2:0 */ long unsigned int Y : 16;
	/* 0x4:0 */ long unsigned int Z : 24;
	/* 0x7:0 */ long unsigned int F : 8;
};

struct sceGsZbuf { // 0x8
	/* 0x0:0 */ long unsigned int ZBP : 9;
	/* 0x1:1 */ long unsigned int pad09 : 15;
	/* 0x3:0 */ long unsigned int PSM : 4;
	/* 0x3:4 */ long unsigned int pad28 : 4;
	/* 0x4:0 */ long unsigned int ZMSK : 1;
	/* 0x4:1 */ long unsigned int pad33 : 31;
};

struct sceGsDispEnv { // 0x28
	/* 0x00 */ tGS_PMODE pmode;
	/* 0x08 */ tGS_SMODE2 smode2;
	/* 0x10 */ tGS_DISPFB2 dispfb;
	/* 0x18 */ tGS_DISPLAY2 display;
	/* 0x20 */ tGS_BGCOLOR bgcolor;
};

struct sceGsDrawEnv1 { // 0x80
	/* 0x00 */ sceGsFrame frame1;
	/* 0x08 */ u_long frame1addr;
	/* 0x10 */ sceGsZbuf zbuf1;
	/* 0x18 */ long int zbuf1addr;
	/* 0x20 */ sceGsXyoffset xyoffset1;
	/* 0x28 */ long int xyoffset1addr;
	/* 0x30 */ sceGsScissor scissor1;
	/* 0x38 */ long int scissor1addr;
	/* 0x40 */ sceGsPrmodecont prmodecont;
	/* 0x48 */ long int prmodecontaddr;
	/* 0x50 */ sceGsColclamp colclamp;
	/* 0x58 */ long int colclampaddr;
	/* 0x60 */ sceGsDthe dthe;
	/* 0x68 */ long int dtheaddr;
	/* 0x70 */ sceGsTest test1;
	/* 0x78 */ long int test1addr;
} __attribute__((aligned(16)));

struct sceGsDrawEnv2 { // 0x80
	/* 0x00 */ sceGsFrame frame2;
	/* 0x08 */ u_long frame2addr;
	/* 0x10 */ sceGsZbuf zbuf2;
	/* 0x18 */ long int zbuf2addr;
	/* 0x20 */ sceGsXyoffset xyoffset2;
	/* 0x28 */ long int xyoffset2addr;
	/* 0x30 */ sceGsScissor scissor2;
	/* 0x38 */ long int scissor2addr;
	/* 0x40 */ sceGsPrmodecont prmodecont;
	/* 0x48 */ long int prmodecontaddr;
	/* 0x50 */ sceGsColclamp colclamp;
	/* 0x58 */ long int colclampaddr;
	/* 0x60 */ sceGsDthe dthe;
	/* 0x68 */ long int dtheaddr;
	/* 0x70 */ sceGsTest test2;
	/* 0x78 */ long int test2addr;
} __attribute__((aligned(16)));

struct sceGsClear { // 0x60
	/* 0x00 */ sceGsTest testa;
	/* 0x08 */ long int testaaddr;
	/* 0x10 */ sceGsPrim prim;
	/* 0x18 */ long int primaddr;
	/* 0x20 */ sceGsRgbaq rgbaq;
	/* 0x28 */ long int rgbaqaddr;
	/* 0x30 */ sceGsXyz xyz2a;
	/* 0x38 */ long int xyz2aaddr;
	/* 0x40 */ sceGsXyz xyz2b;
	/* 0x48 */ long int xyz2baddr;
	/* 0x50 */ sceGsTest testb;
	/* 0x58 */ long int testbaddr;
} __attribute__((aligned(16)));

struct sceGsDBuff { // 0x230
	/* 0x000 */ sceGsDispEnv disp[2];
	/* 0x050 */ sceGifTag giftag0;
	/* 0x060 */ sceGsDrawEnv1 draw0;
	/* 0x0e0 */ sceGsClear clear0;
	/* 0x140 */ sceGifTag giftag1;
	/* 0x150 */ sceGsDrawEnv1 draw1;
	/* 0x1d0 */ sceGsClear clear1;
};

struct sceGsDBuffDc { // 0x330
	/* 0x000 */ sceGsDispEnv disp[2];
	/* 0x050 */ sceGifTag giftag0;
	/* 0x060 */ sceGsDrawEnv1 draw01;
	/* 0x0e0 */ sceGsDrawEnv2 draw02;
	/* 0x160 */ sceGsClear clear0;
	/* 0x1c0 */ sceGifTag giftag1;
	/* 0x1d0 */ sceGsDrawEnv1 draw11;
	/* 0x250 */ sceGsDrawEnv2 draw12;
	/* 0x2d0 */ sceGsClear clear1;
};

struct sceGsTexEnv { // 0x40
	/* 0x00 */ sceGsTexflush texflush;
	/* 0x08 */ long int texflushaddr;
	/* 0x10 */ sceGsTex1 tex11;
	/* 0x18 */ long int tex11addr;
	/* 0x20 */ sceGsTex0 tex01;
	/* 0x28 */ long int tex01addr;
	/* 0x30 */ sceGsClamp clamp1;
	/* 0x38 */ long int clamp1addr;
} __attribute__((aligned(16)));

struct sceGsTexEnv2 { // 0x40
	/* 0x00 */ sceGsTexflush texflush;
	/* 0x08 */ long int texflushaddr;
	/* 0x10 */ sceGsTex1 tex12;
	/* 0x18 */ long int tex12addr;
	/* 0x20 */ sceGsTex0 tex02;
	/* 0x28 */ long int tex02addr;
	/* 0x30 */ sceGsClamp clamp2;
	/* 0x38 */ long int clamp2addr;
} __attribute__((aligned(16)));

struct sceGsAlphaEnv { // 0x40
	/* 0x00 */ sceGsAlpha alpha1;
	/* 0x08 */ long int alpha1addr;
	/* 0x10 */ sceGsPabe pabe;
	/* 0x18 */ long int pabeaddr;
	/* 0x20 */ sceGsTexa texa;
	/* 0x28 */ long int texaaddr;
	/* 0x30 */ sceGsFba fba1;
	/* 0x38 */ long int fba1addr;
} __attribute__((aligned(16)));

struct sceGsAlphaEnv2 { // 0x40
	/* 0x00 */ sceGsAlpha alpha2;
	/* 0x08 */ long int alpha2addr;
	/* 0x10 */ sceGsPabe pabe;
	/* 0x18 */ long int pabeaddr;
	/* 0x20 */ sceGsTexa texa;
	/* 0x28 */ long int texaaddr;
	/* 0x30 */ sceGsFba fba2;
	/* 0x38 */ long int fba2addr;
} __attribute__((aligned(16)));

struct sceGsLoadImage { // 0x60
	/* 0x00 */ sceGifTag giftag0;
	/* 0x10 */ sceGsBitbltbuf bitbltbuf;
	/* 0x18 */ long int bitbltbufaddr;
	/* 0x20 */ sceGsTrxpos trxpos;
	/* 0x28 */ long int trxposaddr;
	/* 0x30 */ sceGsTrxreg trxreg;
	/* 0x38 */ long int trxregaddr;
	/* 0x40 */ sceGsTrxdir trxdir;
	/* 0x48 */ long int trxdiraddr;
	/* 0x50 */ sceGifTag giftag1;
} __attribute__((aligned(16)));

struct sceGsStoreImage { // 0x70
	/* 0x00 */ u_int vifcode[4];
	/* 0x10 */ sceGifTag giftag;
	/* 0x20 */ sceGsBitbltbuf bitbltbuf;
	/* 0x28 */ long int bitbltbufaddr;
	/* 0x30 */ sceGsTrxpos trxpos;
	/* 0x38 */ long int trxposaddr;
	/* 0x40 */ sceGsTrxreg trxreg;
	/* 0x48 */ long int trxregaddr;
	/* 0x50 */ sceGsFinish finish;
	/* 0x58 */ long int finishaddr;
	/* 0x60 */ sceGsTrxdir trxdir;
	/* 0x68 */ long int trxdiraddr;
} __attribute__((aligned(16)));

struct sceGsGParam { // 0x10
	/* 0x0 */ short int sceGsInterMode;
	/* 0x2 */ short int sceGsOutMode;
	/* 0x4 */ short int sceGsFFMode;
	/* 0x6 */ short int sceGsVersion;
	/* 0x8 */ int (*sceGsVSCfunc)(/* parameters unknown */);
	/* 0xc */ int sceGsVSCid;
} __attribute__((aligned(16)));

struct __Event { // 0x8
	/* 0x0 */ int ID;
	/* 0x4 */ int Data;
};

typedef __Event Message;

struct __MessageQueue { // 0x88
	/* 0x00 */ int Head;
	/* 0x04 */ int Tail;
	/* 0x08 */ Message Queue[16];
};

typedef __MessageQueue MessageQueue;

typedef void (*StateHandler)(/* parameters unknown */);

typedef Message* (*messageHandler)(/* parameters unknown */);

struct __State { // 0x12c
	/* 0x000 */ void (*Process)(/* parameters unknown */);
	/* 0x004 */ messageHandler stateMessageHandler;
	/* 0x008 */ messageHandler sectionMessageHandler;
	/* 0x00c */ MessageQueue Event;
	/* 0x094 */ MessageQueue Defer;
	/* 0x11c */ int Data1;
	/* 0x120 */ int Data2;
	/* 0x124 */ int vanimIndex;
	/* 0x128 */ VAnim *vanim;
};

typedef __State State;

struct __CharacterState { // 0x38c
	/* 0x000 */ Instance *CharacterInstance;
	/* 0x004 */ int TotalSections;
	/* 0x008 */ State SectionList[3];
};

typedef __CharacterState CharacterState;

struct __EventAnimInfo { // 0x10
	/* 0x0 */ int newAnim;
	/* 0x4 */ int newFrame;
	/* 0x8 */ int frames;
	/* 0xc */ int mode;
};

typedef __EventAnimInfo EventAnimInfo;

struct __FatalityInterface { // 0x14
	/* 0x00 */ VAnim *anim;
	/* 0x04 */ int frame;
	/* 0x08 */ int action;
	/* 0x0c */ float distance;
	/* 0x10 */ int frames;
};

typedef __FatalityInterface FatalityInterface;

struct evMonsterHitData { // 0x38
	/* 0x00 */ Instance *sender;
	/* 0x04 */ Instance *weapon;
	/* 0x08 */ Instance *lastHit;
	/* 0x0c */ int32 knockBackDistance;
	/* 0x10 */ int32 knockBackDuration;
	/* 0x14 */ int32 power;
	/* 0x18 */ int32 segment;
	/* 0x1c */ int32 hitterType;
	/* 0x20 */ int32 hitteeType;
	/* 0x24 */ int32 anim;
	/* 0x28 */ int32 attackType;
	/* 0x2c */ int32 reactionType;
	/* 0x30 */ int32 elementType;
	/* 0x34 */ int32 breakoutTime;
};

struct evMonsterThrownData { // 0x20
	/* 0x00 */ Vector4f direction;
	/* 0x10 */ Instance *sender;
	/* 0x14 */ float power;
};

struct evMonsterAlarmData { // 0x10
	/* 0x0 */ Instance *sender;
	/* 0x4 */ Instance *about;
	/* 0x8 */ Position position;
	/* 0xe */ short int type;
};

struct evMonsterSoulSuckData { // 0x20
	/* 0x00 */ Vector4f Destination;
	/* 0x10 */ Instance *sender;
};

struct evMonsterHitTerrainData { // 0x30
	/* 0x00 */ TFace *tface;
	/* 0x10 */ Vector4f normal;
	/* 0x20 */ short int faceFlags;
	/* 0x22 */ short int bspFlags;
};

struct evMonsterHitObjectData { // 0x8
	/* 0x0 */ Instance *instance;
	/* 0x4 */ int32 hitType;
};

struct evObjectData { // 0x18
	/* 0x00 */ float x;
	/* 0x04 */ float y;
	/* 0x08 */ int32 PathNumber;
	/* 0x0c */ int32 LinkNode;
	/* 0x10 */ Instance *Force;
	/* 0x14 */ int32 rc;
};

struct evPositionData { // 0x10
	/* 0x0 */ float x;
	/* 0x4 */ float y;
	/* 0x8 */ float z;
	/* 0xc */ float w;
};

struct evPhysicsGravityData { // 0x18
	/* 0x00 */ float UpperOffset;
	/* 0x04 */ float LowerOffset;
	/* 0x08 */ float slipSlope;
	/* 0x0c */ float x;
	/* 0x10 */ float y;
	/* 0x14 */ float z;
};

struct evPhysicsDropOffData { // 0x14
	/* 0x00 */ float xOffset;
	/* 0x04 */ float yOffset;
	/* 0x08 */ float DropOffset;
	/* 0x0c */ float slipSlope;
	/* 0x10 */ float UpperOffset;
};

struct evPhysicsEdgeData { // 0x30
	/* 0x00 */ float UpperOffset;
	/* 0x04 */ float ForwardOffset;
	/* 0x08 */ float AboveOffset;
	/* 0x0c */ float XDistance;
	/* 0x10 */ float YDistance;
	/* 0x14 */ float ZDistance;
	/* 0x18 */ Vector4f *Normal1;
	/* 0x1c */ Vector4f *Normal2;
	/* 0x20 */ Vector4f *Delta;
	/* 0x24 */ Instance *instance;
	/* 0x28 */ float zRot;
	/* 0x2c */ int32 rc;
};

struct evPhysicsSlideData { // 0x50
	/* 0x00 */ Vector4f ForwardVector;
	/* 0x10 */ Vector4f ForwardNormal;
	/* 0x20 */ Vector4f DropNormal;
	/* 0x30 */ int32 Segment;
	/* 0x34 */ float DropOffset;
	/* 0x38 */ float UpperOffset;
	/* 0x3c */ float Height;
	/* 0x40 */ Instance *UpperInstance;
	/* 0x44 */ float Dot;
};

struct evPhysicsWallCrawlData { // 0x80
	/* 0x00 */ Vector4f DropNormal;
	/* 0x10 */ Vector4f DropPosition;
	/* 0x20 */ Vector4f ForwardNormal;
	/* 0x30 */ Vector4f ForwardPosition;
	/* 0x40 */ Vector4f NewPosition;
	/* 0x50 */ Vector4f DropRotation;
	/* 0x60 */ int32 Segment;
	/* 0x64 */ float Length;
	/* 0x68 */ float ForwardOffset;
	/* 0x6c */ float NormalDistance;
	/* 0x70 */ float ForwardXRotation;
	/* 0x74 */ int32 rc;
};

struct evPhysicsSwimData { // 0x30
	/* 0x00 */ short int CheckDepth;
	/* 0x02 */ short int SwimDepth;
	/* 0x04 */ short int WadeDepth;
	/* 0x06 */ short int TreadDepth;
	/* 0x10 */ Vector4f iVelocity;
	/* 0x20 */ short int Depth;
	/* 0x22 */ short int WaterDepth;
	/* 0x24 */ short int rc;
	/* 0x26 */ short int pad;
	/* 0x28 */ int WaterLevel;
};

struct evPhysicsLOSData { // 0x30
	/* 0x00 */ Vector4f destination;
	/* 0x10 */ Vector4f origin;
	/* 0x20 */ short int flags;
	/* 0x22 */ short int result;
};

struct evPhysicsDropHeightData { // 0x20
	/* 0x00 */ Vector4f origin;
	/* 0x10 */ float DropOffset;
	/* 0x14 */ short int mode;
	/* 0x16 */ short int result;
	/* 0x18 */ BSPTree *bsp;
	/* 0x1c */ TFace *tface;
};

struct evPhysicsLinkedMoveData { // 0x30
	/* 0x00 */ Vector4f posDelta;
	/* 0x10 */ Vector4f rotDelta;
	/* 0x20 */ Instance *instance;
	/* 0x24 */ int segment;
};

struct evFXHitData { // 0x30
	/* 0x00 */ Vector4f location;
	/* 0x10 */ Vector4f velocity;
	/* 0x20 */ short int amount;
	/* 0x22 */ short int type;
};

struct evAnimationControllerDoneData { // 0x10
	/* 0x0 */ Instance *instance;
	/* 0x4 */ int32 segment;
	/* 0x8 */ int32 type;
	/* 0xc */ int data;
};

struct evAnimationInstanceSwitchData { // 0x14
	/* 0x00 */ Instance *instance;
	/* 0x04 */ int anim;
	/* 0x08 */ int frame;
	/* 0x0c */ int frames;
	/* 0x10 */ int mode;
};

struct evMonsterImpaleData { // 0x30
	/* 0x00 */ Vector4f direction;
	/* 0x10 */ Vector4f position;
	/* 0x20 */ Instance *weapon;
	/* 0x24 */ float distance;
};

struct evMonsterDecapData { // 0x30
	/* 0x00 */ Vector4f direction;
	/* 0x10 */ Vector4f position;
	/* 0x20 */ Instance *weapon;
	/* 0x24 */ float distance;
};

struct evCollideInstanceStatsData { // 0x20
	/* 0x00 */ Vector4f relativePosition;
	/* 0x10 */ Instance *instance;
	/* 0x14 */ float distance;
	/* 0x18 */ float xyDistance;
	/* 0x1c */ float zDelta;
};

struct evObjectThrowData { // 0x40
	/* 0x00 */ union { // 0x10
		/* 0x00 */ Instance *target;
		/* 0x00 */ Vector4f position;
		/* 0x00 */ Vector4f direction;
		/* 0x00 */ Vector4f throwVector;
	} data;
	/* 0x10 */ Vector4f angularVel;
	/* 0x20 */ int16 type;
	/* 0x22 */ int16 spinType;
	/* 0x24 */ float speed;
	/* 0x28 */ float gravity;
	/* 0x2c */ float initialXRot;
	/* 0x30 */ int32 altLand;
	/* 0x34 */ float damageMult;
	/* 0x38 */ float zVel;
	/* 0x3c */ int32 trackingTime;
};

struct evObjectBreakOffData { // 0x14
	/* 0x00 */ Instance *force;
	/* 0x04 */ int32 aux;
	/* 0x08 */ uint16 node;
	/* 0x0a */ int16 distance;
	/* 0x0c */ uint16 animation;
	/* 0x0e */ uint16 frame;
	/* 0x10 */ uint16 type;
	/* 0x12 */ uint16 action;
};

struct evObjectDraftData { // 0x30
	/* 0x00 */ Vector4f direction;
	/* 0x10 */ float force;
	/* 0x14 */ float radius;
	/* 0x18 */ float radiusCoef;
	/* 0x1c */ float height;
	/* 0x20 */ float maxVelocity;
};

struct evObjectAbsorbData { // 0x8
	/* 0x0 */ Instance *force;
	/* 0x4 */ uint16 node;
	/* 0x6 */ uint16 steps;
};

struct evControlSaveDataData { // 0x8
	/* 0x0 */ int32 length;
	/* 0x4 */ void *data;
};

struct evObjectIdleData { // 0x8
	/* 0x0 */ int32 mode;
	/* 0x4 */ Instance *instance;
};

struct evControlInitHangData { // 0xc
	/* 0x0 */ Instance *instance;
	/* 0x4 */ int frame;
	/* 0x8 */ int frames;
};

struct evControlInitIdleData { // 0xc
	/* 0x0 */ int mode;
	/* 0x4 */ int frame;
	/* 0x8 */ int frames;
};

struct evActionLookAroundData { // 0x10
	/* 0x0 */ short int *rotx;
	/* 0x4 */ short int *rotz;
	/* 0x8 */ short int minx;
	/* 0xa */ short int maxx;
	/* 0xc */ short int minz;
	/* 0xe */ short int maxz;
};

struct evActionPlayHostAnimationData { // 0x18
	/* 0x00 */ Instance *instance;
	/* 0x04 */ Instance *host;
	/* 0x08 */ int newAnim;
	/* 0x0c */ int newFrame;
	/* 0x10 */ int frames;
	/* 0x14 */ int mode;
};

struct evObjectBirthProjectileData { // 0x10
	/* 0x0 */ Instance *instance;
	/* 0x4 */ int joint;
	/* 0x8 */ int type;
	/* 0xc */ Instance *birthInstance;
};

struct evShadowSegmentData { // 0xc
	/* 0x0 */ uint32 totalShadowSegments;
	/* 0x4 */ uint16 shadowSegments[4];
};

struct evMonsterAllyData { // 0x8
	/* 0x0 */ int32 type;
	/* 0x4 */ Instance *ally;
};

struct evMonsterFatalityInterfaceData { // 0x1c
	/* 0x00 */ uint32 fatality;
	/* 0x04 */ uint32 mode;
	/* 0x08 */ int32 fatalID;
	/* 0x0c */ FatalityInterface *defaultInterface;
	/* 0x10 */ Instance *weapon;
	/* 0x14 */ float rotation;
	/* 0x18 */ FatalityInterface *interface;
};

struct evActionBlockAttackData { // 0x10
	/* 0x0 */ Instance *sender;
	/* 0x4 */ uint32 direction;
	/* 0x8 */ float dist;
	/* 0xc */ int32 frame;
};

struct evObjectDoorData { // 0x10
	/* 0x0 */ int32 splineID;
	/* 0x4 */ int32 cameraSID;
	/* 0x8 */ int32 cameraTID;
	/* 0xc */ int32 rc;
};

struct evObjectSoundData { // 0x8
	/* 0x0 */ SoundInstance *sound;
	/* 0x4 */ int32 uniqueID;
};

struct evCollideForceData { // 0x10
	/* 0x0 */ Instance *sender;
	/* 0x4 */ float forwardVel;
	/* 0x8 */ float upwardVel;
	/* 0xc */ int32 type;
};

struct evMonsterCompleteAttackData { // 0xc
	/* 0x0 */ Instance *victim;
	/* 0x4 */ float angle;
	/* 0x8 */ int32 type;
};

struct _StreamUnit { // 0x44
	/* 0x00 */ int32 StreamUnitID;
	/* 0x04 */ int16 used;
	/* 0x06 */ int16 unitFlags;
	/* 0x08 */ Level *level;
	/* 0x0c */ char baseAreaName[16];
	/* 0x1c */ int32 fogNear;
	/* 0x20 */ int32 fogFar;
	/* 0x24 */ uint8 fogR;
	/* 0x25 */ uint8 fogG;
	/* 0x26 */ uint8 fogB;
	/* 0x27 */ uint8 fogOverrideFlag;
	/* 0x28 */ int16 toSignal;
	/* 0x2a */ int16 fromSignal;
	/* 0x2c */ int32 FrameCount;
	/* 0x30 */ int16 sfxFileHandle;
	/* 0x32 */ int16 unitHidden;
	/* 0x34 */ RECT_PSX cliprect;
	/* 0x3c */ int32 draw;
	/* 0x40 */ int32 drawtime;
};

typedef _StreamUnit StreamUnit;

struct STracker { // 0x2a8
	/* 0x000 */ StreamUnit StreamList[10];
};

struct StreamUnitPortal { // 0x90
	/* 0x00 */ char tolevelname[16];
	/* 0x10 */ int32 MSignalID;
	/* 0x14 */ int32 streamID;
	/* 0x18 */ float activeDistance;
	/* 0x1c */ StreamUnit *toStreamUnit;
	/* 0x20 */ Vector4f min;
	/* 0x30 */ Vector4f max;
	/* 0x40 */ Vector4f quad_t[4];
	/* 0x80 */ Vector4f normal;
};

struct _MONAPI_Regenerator { // 0x8
	/* 0x0 */ uint32 regenTime;
	/* 0x4 */ int16 introUniqueID;
	/* 0x6 */ int16 streamUnitID;
};

typedef _MONAPI_Regenerator MONAPI_Regenerator;

struct _GlobalSaveTracker { // 0x90
	/* 0x00 */ int16 flags;
	/* 0x02 */ short int saveVersion;
	/* 0x04 */ char saveUnit[16];
	/* 0x14 */ uint32 currentTime;
	/* 0x18 */ int language;
	/* 0x1c */ int16 humanOpinionOfRaziel;
	/* 0x1e */ int8 numRegens;
	/* 0x20 */ MONAPI_Regenerator regenEntries[10];
	/* 0x70 */ int32 mapVisited;
	/* 0x74 */ int32 mapGoal;
	/* 0x78 */ gSoundData sound;
	/* 0x8c */ short int sizeUsedInBlock;
	/* 0x8e */ short int CurrentBirthID;
};

typedef _GlobalSaveTracker GlobalSaveTracker;

typedef void RelocateInstObFunc(/* parameters unknown */);

struct ObjectFunc { // 0x24
	/* 0x00 */ char *scriptName;
	/* 0x04 */ InitFunc *initFunc;
	/* 0x08 */ ProcessFunc *processFunc;
	/* 0x0c */ CollideFunc *collideFunc;
	/* 0x10 */ QueryFunc *queryFunc;
	/* 0x14 */ MessageFunc *messageFunc;
	/* 0x18 */ CollideFunc *additionalCollideFunc;
	/* 0x1c */ RelocateTuneFunc *relocateTuneFunc;
	/* 0x20 */ RelocateInstObFunc *relocateInstObFunc;
};

struct ObjectAccess { // 0x8
	/* 0x0 */ char *objectName;
	/* 0x4 */ void *object;
};

struct _HFaceInfo { // 0x50
	/* 0x00 */ Vector4f normal;
	/* 0x10 */ Vector4f vertex0;
	/* 0x20 */ Vector4f vertex1;
	/* 0x30 */ Vector4f vertex2;
	/* 0x40 */ int32 flags;
	/* 0x44 */ int32 attr;
	/* 0x48 */ HFace *hface;
};

typedef _HFaceInfo HFaceInfo;

struct _CollideInfo { // 0x50
	/* 0x00 */ Vector4f point0f;
	/* 0x10 */ Vector4f point1f;
	/* 0x20 */ Vector4f offsetf;
	/* 0x30 */ void *level;
	/* 0x34 */ uint8 flags;
	/* 0x35 */ int8 segment;
	/* 0x36 */ int8 type0;
	/* 0x37 */ int8 type1;
	/* 0x38 */ void *prim0;
	/* 0x3c */ void *prim1;
	/* 0x40 */ void *inst0;
	/* 0x44 */ void *inst1;
	/* 0x48 */ int32 bspID;
};

typedef _CollideInfo CollideInfo;

struct _LCollideInfo { // 0xc
	/* 0x0 */ TFace *tface;
	/* 0x4 */ Terrain *terrain;
	/* 0x8 */ int curTree;
};

typedef _LCollideInfo LCollideInfo;

struct SCollideInfo { // 0x1c
	/* 0x00 */ Sphere *sphere;
	/* 0x04 */ Vector4f *oldPos;
	/* 0x08 */ CollideFunc *collideFunc;
	/* 0x0c */ int32 id;
	/* 0x10 */ int32 segment;
	/* 0x14 */ Instance *instance;
	/* 0x18 */ void *prim;
};

struct _LegIK { // 0x30
	/* 0x00 */ float offsetX;
	/* 0x04 */ float offsetY;
	/* 0x08 */ float offsetZ;
	/* 0x0c */ float offsetW;
	/* 0x10 */ Instance *instance;
	/* 0x14 */ int startJoint;
	/* 0x18 */ int midJoint;
	/* 0x1c */ int cachedTFace;
	/* 0x20 */ float length;
	/* 0x24 */ float upperOffset;
	/* 0x28 */ float lowerOffset;
	/* 0x2c */ float maxSlope;
};

typedef _LegIK LegIK;

struct _ArmIK { // 0x10
	/* 0x0 */ Instance *instance;
	/* 0x4 */ int startJoint;
	/* 0x8 */ int midJoint;
	/* 0xc */ Vector4f *handle;
};

typedef _ArmIK ArmIK;

struct _ClothNode { // 0x30
	/* 0x00 */ Instance *instance;
	/* 0x04 */ int type;
	/* 0x08 */ int index;
	/* 0x0c */ int influenceIndex;
	/* 0x10 */ int frames;
	/* 0x14 */ int collisionIndex;
	/* 0x18 */ float radius;
	/* 0x1c */ float weight;
	/* 0x20 */ float vecX;
	/* 0x24 */ float vecY;
	/* 0x28 */ float vecZ;
	/* 0x2c */ float vecW;
};

typedef _ClothNode ClothNode;

struct SavedInfoTracker { // 0x1c
	/* 0x00 */ char *MemoryCardBuffer;
	/* 0x04 */ char *eventVars;
	/* 0x08 */ char *deadBits;
	/* 0x0c */ char *globalSave;
	/* 0x10 */ char *InfoStart;
	/* 0x14 */ char *InfoEnd;
	/* 0x18 */ char *EndOfMemory;
};

struct SavedBasic { // 0x2
	/* 0x0 */ uint8 savedID;
	/* 0x1 */ uint8 shiftedSaveSize;
};

struct SavedIntroSmall { // 0x4
	/* 0x0 */ uint8 savedID;
	/* 0x1 */ uint8 shiftedSaveSize;
	/* 0x2 */ int16 introUniqueID;
};

struct SavedIntroSpline { // 0xc
	/* 0x0 */ uint8 savedID;
	/* 0x1 */ uint8 shiftedSaveSize;
	/* 0x2 */ int16 introUniqueID;
	/* 0x4 */ int16 splineFlags;
	/* 0x6 */ int16 splineKeyFrame;
	/* 0x8 */ int16 splineClipBeg;
	/* 0xa */ int16 splineClipEnd;
};

struct _SavedIntro { // 0x34
	/* 0x00 */ uint8 savedID;
	/* 0x01 */ uint8 shiftedSaveSize;
	/* 0x02 */ int16 streamUnitID;
	/* 0x04 */ char name[8];
	/* 0x0c */ int16 birthUnitID;
	/* 0x0e */ uint16 attachedUniqueID;
	/* 0x10 */ int16 introUniqueID;
	/* 0x12 */ uint8 lightGroup;
	/* 0x13 */ uint8 spectralLightGroup;
	/* 0x14 */ int32 flags;
	/* 0x18 */ int32 flags2;
	/* 0x1c */ Vector3f rotation;
	/* 0x28 */ Vector3f position;
};

typedef _SavedIntro SavedIntro;

struct _SavedIntroWithIntro { // 0x2c
	/* 0x00 */ uint8 savedID;
	/* 0x01 */ uint8 shiftedSaveSize;
	/* 0x02 */ int16 introOffset;
	/* 0x04 */ int16 birthUnitID;
	/* 0x06 */ uint16 attachedUniqueID;
	/* 0x08 */ int16 introUniqueID;
	/* 0x0a */ uint8 lightGroup;
	/* 0x0b */ uint8 spectralLightGroup;
	/* 0x0c */ int32 flags;
	/* 0x10 */ int32 flags2;
	/* 0x14 */ Vector3f rotation;
	/* 0x20 */ Vector3f position;
};

typedef _SavedIntroWithIntro SavedIntroWithIntro;

struct SavedEvent { // 0x10
	/* 0x0 */ uint8 savedID;
	/* 0x1 */ uint8 shiftedSaveSize;
	/* 0x2 */ int16 areaID;
	/* 0x4 */ int16 eventNumber;
	/* 0x6 */ int16 eventVariables[5];
};

struct SavedEventSmallVars { // 0xa
	/* 0x0 */ uint8 savedID;
	/* 0x1 */ uint8 shiftedSaveSize;
	/* 0x2 */ int16 areaID;
	/* 0x4 */ char eventNumber;
	/* 0x5 */ char eventVariables[5];
};

struct SavedLevel { // 0x8
	/* 0x0 */ uint8 savedID;
	/* 0x1 */ uint8 shiftedSaveSize;
	/* 0x2 */ int16 areaID;
	/* 0x4 */ int16 waterZ;
	/* 0x6 */ int16 numberBSPTreesSaved;
};

struct SavedBspTree { // 0x10
	/* 0x0 */ Vector3f localOffset;
	/* 0xc */ int32 bspIndex;
};

struct ActualSavedLevel { // 0x18
	/* 0x00 */ uint8 savedID;
	/* 0x01 */ uint8 shiftedSaveSize;
	/* 0x02 */ int16 areaID;
	/* 0x04 */ int16 waterZ;
	/* 0x06 */ int16 numberBSPTreesSaved;
	/* 0x08 */ SavedBspTree bspTreeArray[1];
};

typedef void *IMAGEHANDLE;

typedef int menu_fn_t(/* parameters unknown */);

typedef void (*CdlCB)(/* parameters unknown */);

struct sceCdRMode { // 0x4
	/* 0x0 */ u_char trycount;
	/* 0x1 */ u_char spindlctrl;
	/* 0x2 */ u_char datapattern;
	/* 0x3 */ u_char pad;
};

struct sceCdlLOCCD { // 0x4
	/* 0x0 */ u_char minute;
	/* 0x1 */ u_char second;
	/* 0x2 */ u_char sector;
	/* 0x3 */ u_char track;
};

struct sceCdlFILE { // 0x20
	/* 0x00 */ u_int lsn;
	/* 0x04 */ u_int size;
	/* 0x08 */ char name[16];
	/* 0x18 */ u_char date[8];
};

struct sceCdCLOCK { // 0x8
	/* 0x0 */ u_char stat;
	/* 0x1 */ u_char second;
	/* 0x2 */ u_char minute;
	/* 0x3 */ u_char hour;
	/* 0x4 */ u_char pad;
	/* 0x5 */ u_char day;
	/* 0x6 */ u_char month;
	/* 0x7 */ u_char year;
};

struct sceScfT10kConfig { // 0x8
	/* 0x0 */ short int TimeZone;
	/* 0x2 */ u_char Aspect;
	/* 0x3 */ u_char DateNotation;
	/* 0x4 */ u_char Language;
	/* 0x5 */ u_char Spdif;
	/* 0x6 */ u_char SummerTime;
	/* 0x7 */ u_char TimeNotation;
};

struct InterfaceItem { // 0x40
	/* 0x00 */ char name[48];
	/* 0x30 */ uint16 timeout;
	/* 0x32 */ uint16 buttonTimeout;
	/* 0x34 */ int16 itemType;
	/* 0x36 */ int16 nextItem;
	/* 0x38 */ float fadeUpSpeed;
	/* 0x3c */ float fadeDownSpeed;
};

struct INICommand { // 0x4
	/* 0x0 */ int16 command;
	/* 0x2 */ int16 numParameters;
	/* 0x4 */ int32 parameter[0];
};

struct GenericTune { // 0x8
	/* 0x0 */ int32 flags;
	/* 0x4 */ void *shatterData;
};

struct __Force { // 0x30
	/* 0x00 */ int Type;
	/* 0x10 */ Vector4f LinearForce;
	/* 0x20 */ float Friction;
};

typedef __Force Force;

struct WaterLevelProcess { // 0x1c
	/* 0x00 */ int32 flags;
	/* 0x04 */ BSPTree *bspTree;
	/* 0x08 */ _StreamUnit *streamUnit;
	/* 0x0c */ int16 oldWaterZ;
	/* 0x0e */ int16 oldGlobalOffset;
	/* 0x10 */ int16 zValueFrom;
	/* 0x12 */ int16 zValueTo;
	/* 0x14 */ float maxSteps;
	/* 0x18 */ float curStep;
};

struct HintSystemStruct { // 0x10
	/* 0x0 */ int16 flags;
	/* 0x2 */ int16 stringNumber;
	/* 0x4 */ int hintNumber;
	/* 0x8 */ float fadeTimer;
	/* 0xc */ int32 spawningUnitID;
};

struct _MonsterRadar { // 0x24
	/* 0x00 */ int32 radarCounter;
	/* 0x04 */ float radarDistance[8];
};

typedef _MonsterRadar MonsterRadar;

struct _MonsterIR { // 0x60
	/* 0x00 */ Vector4f bestAbsolutePosition;
	/* 0x10 */ Vector4f bestRelativePosition;
	/* 0x20 */ Vector4f trueRelativePosition;
	/* 0x30 */ Vector4f bestRotation;
	/* 0x40 */ Instance *instance;
	/* 0x44 */ int32 instanceID;
	/* 0x48 */ float bestDistance;
	/* 0x4c */ float trueDistance;
	/* 0x50 */ int32 bestStreamUnitID;
	/* 0x54 */ uint32 mirFlags;
	/* 0x58 */ uint32 forgetTimer;
	/* 0x5c */ uint32 idleTimer;
};

typedef _MonsterIR MonsterIR;

struct _MonsterBehavior { // 0x28
	/* 0x00 */ _MonsterBehaviorFuncs *funcs;
	/* 0x04 */ int16 behaviorID;
	/* 0x06 */ int8 sensesIdx;
	/* 0x07 */ int8 behaviorIdlesIdx;
	/* 0x08 */ int32 params[8];
};

typedef _MonsterBehavior MonsterBehavior;

struct _SkipData { // 0x4
	/* 0x0 */ int32 skipBytes;
};

typedef _SkipData SkipData;

struct _BehaviorPupateData { // 0x4
	/* 0x0 */ int32 range;
};

typedef _BehaviorPupateData BehaviorPupateData;

struct _BehaviorAmbushData { // 0x18
	/* 0x00 */ int32 ambushMarker;
	/* 0x04 */ int32 ambushJumpType;
	/* 0x08 */ int32 ambushArc;
	/* 0x0c */ int32 ambushElevation;
	/* 0x10 */ int32 ambushRange;
	/* 0x14 */ int32 ambushAttack;
};

typedef _BehaviorAmbushData BehaviorAmbushData;

struct _BehaviorDeadData { // 0x8
	/* 0x0 */ int32 causeOfDeath;
	/* 0x4 */ int32 fatalId;
};

typedef _BehaviorDeadData BehaviorDeadData;

typedef SkipData BehaviorRestoreData;

struct _BehaviorWanderData { // 0xc
	/* 0x0 */ int32 origin;
	/* 0x4 */ int32 range;
	/* 0x8 */ int32 idleTime;
};

typedef _BehaviorWanderData BehaviorWanderData;

struct _BehaviorPatrolData { // 0xc
	/* 0x0 */ int32 cycle;
	/* 0x4 */ int32 run;
	/* 0x8 */ int32 idleTime;
};

typedef _BehaviorPatrolData BehaviorPatrolData;

struct _BehaviorCombatData { // 0x10
	/* 0x0 */ int32 origin;
	/* 0x4 */ int32 range;
	/* 0x8 */ int32 startRange;
	/* 0xc */ int32 endRange;
};

typedef _BehaviorCombatData BehaviorCombatData;

struct _BehaviorProjectileData { // 0x8
	/* 0x0 */ int32 startRange;
	/* 0x4 */ int32 endRange;
};

typedef _BehaviorProjectileData BehaviorProjectileData;

struct _BehaviorSpawnData { // 0x8
	/* 0x0 */ int32 startRange;
	/* 0x4 */ int32 endRange;
};

typedef _BehaviorSpawnData BehaviorSpawnData;

struct _BehaviorFleeData { // 0x10
	/* 0x0 */ int32 origin;
	/* 0x4 */ int32 range;
	/* 0x8 */ int32 startRange;
	/* 0xc */ int32 endRange;
};

typedef _BehaviorFleeData BehaviorFleeData;

struct _BehaviorTrackData { // 0x18
	/* 0x00 */ int32 origin;
	/* 0x04 */ int32 range;
	/* 0x08 */ int32 run;
	/* 0x0c */ int32 target;
	/* 0x10 */ int32 startRange;
	/* 0x14 */ int32 endRange;
};

typedef _BehaviorTrackData BehaviorTrackData;

typedef SkipData BehaviorSkipIfNoEnemyData;

struct _MonsterSaveInfo { // 0x4
	/* 0x0 */ int16 saveFlags;
	/* 0x2 */ int16 saveAuxFlags;
};

typedef _MonsterSaveInfo MonsterSaveInfo;

struct _MonsterAnim { // 0xc
	/* 0x0 */ uint16 playSpeed;
	/* 0x2 */ uint8 interpFrames;
	/* 0x3 */ uint8 startFrame;
	/* 0x4 */ uint8 interpOut;
	/* 0x5 */ uint8 alphaTable;
	/* 0x6 */ uint8 alphaTableOut;
	/* 0x7 */ uint8 controllingSection;
	/* 0x8 */ int8 index[3];
	/* 0xb */ int8 pad;
};

typedef _MonsterAnim MonsterAnim;

struct _MonsterIdle { // 0x4
	/* 0x0 */ int8 anim;
	/* 0x1 */ int8 probability;
	/* 0x2 */ int16 pad;
};

typedef _MonsterIdle MonsterIdle;

struct _MonsterBehaviorIdles { // 0x8
	/* 0x0 */ int8 numIdles;
	/* 0x1 */ int8 idleList[6];
	/* 0x7 */ int8 pad;
};

typedef _MonsterBehaviorIdles MonsterBehaviorIdles;

struct _MonsterSenses { // 0x18
	/* 0x00 */ float sightArc;
	/* 0x04 */ float sightElevation;
	/* 0x08 */ float soundArc;
	/* 0x0c */ float soundElevation;
	/* 0x10 */ int16 sightRadius;
	/* 0x12 */ int16 soundRadius;
	/* 0x14 */ uint16 scentRadius;
	/* 0x16 */ int16 pad;
};

typedef _MonsterSenses MonsterSenses;

struct _MonsterAllegiances { // 0xc
	/* 0x0 */ int8 numEnemies;
	/* 0x1 */ int8 numAllies;
	/* 0x2 */ int8 numFood;
	/* 0x3 */ int8 numGods;
	/* 0x4 */ int8 numOther;
	/* 0x5 */ int8 pad[3];
	/* 0x8 */ uint32 id[1];
};

typedef _MonsterAllegiances MonsterAllegiances;

struct _MonsterAttackAttributes { // 0x44
	/* 0x00 */ int16 rangeFront;
	/* 0x02 */ int16 rangeBack;
	/* 0x04 */ int16 heightTop;
	/* 0x06 */ int16 heightBottom;
	/* 0x08 */ float arcStart;
	/* 0x0c */ float arcEnd;
	/* 0x10 */ float knockBackDistance;
	/* 0x14 */ float knockBackDuration;
	/* 0x18 */ int32 damage;
	/* 0x1c */ int8 continueProbability[8];
	/* 0x24 */ int8 name[8];
	/* 0x2c */ int32 stamina;
	/* 0x30 */ int16 playerHitBreakoutTime;
	/* 0x32 */ int8 turnFrames;
	/* 0x33 */ int8 attackType;
	/* 0x34 */ int8 reactionType;
	/* 0x35 */ int8 playerHitReactionAnim;
	/* 0x36 */ int8 playerHitReactionSegment;
	/* 0x37 */ int8 playerBackHitReactionAnim;
	/* 0x38 */ int8 playerBackHitReactionSegment;
	/* 0x39 */ int8 hitReactionAnim;
	/* 0x3a */ int8 backHitReactionAnim;
	/* 0x3b */ int8 anim;
	/* 0x3c */ int8 weaponAnim;
	/* 0x3d */ int8 cancelFramesIn;
	/* 0x3e */ int8 cancelFramesOut;
	/* 0x3f */ int8 noInterrupt;
	/* 0x40 */ int8 numSegments;
	/* 0x41 */ int8 numCollisionOnFrames;
	/* 0x42 */ int8 numCollisionOffFrames;
	/* 0x43 */ int8 segment[1];
};

typedef _MonsterAttackAttributes MonsterAttackAttributes;

struct _MonsterAttackStream { // 0x28
	/* 0x00 */ int16 rangeFront;
	/* 0x02 */ int16 rangeBack;
	/* 0x04 */ int16 heightTop;
	/* 0x06 */ int16 heightBottom;
	/* 0x08 */ float arcStart;
	/* 0x0c */ float arcEnd;
	/* 0x10 */ int8 name[8];
	/* 0x18 */ int8 initiateProbability[8];
	/* 0x20 */ int8 mark;
	/* 0x21 */ int8 chooseProbability;
	/* 0x22 */ int8 numAttacks;
	/* 0x23 */ int8 rangeDefined;
	/* 0x24 */ MonsterAttackAttributes *attackList[1];
};

typedef _MonsterAttackStream MonsterAttackStream;

struct _MonsterEvadeAttributes { // 0x2c
	/* 0x00 */ float dist;
	/* 0x04 */ int16 rangeFront;
	/* 0x06 */ int16 rangeBack;
	/* 0x08 */ int16 heightTop;
	/* 0x0a */ int16 heightBottom;
	/* 0x0c */ float arcStart;
	/* 0x10 */ float arcEnd;
	/* 0x14 */ int8 name[8];
	/* 0x1c */ int32 stamina;
	/* 0x20 */ int8 anim;
	/* 0x21 */ int8 endAnim;
	/* 0x22 */ int8 probability;
	/* 0x23 */ int8 initiateProbability[4];
	/* 0x27 */ int8 direction;
	/* 0x28 */ int8 mark;
	/* 0x29 */ int8 pad[3];
};

typedef _MonsterEvadeAttributes MonsterEvadeAttributes;

struct _MonsterReactionList { // 0x2
	/* 0x0 */ int8 numReactions;
	/* 0x1 */ int8 reaction[1];
};

typedef _MonsterReactionList MonsterReactionList;

struct _MonsterReaction { // 0x20
	/* 0x00 */ int8 attackType;
	/* 0x01 */ int8 reactionType;
	/* 0x02 */ int8 anim;
	/* 0x03 */ int8 loopAnim;
	/* 0x04 */ int8 trigger;
	/* 0x05 */ int8 triggerAnim;
	/* 0x06 */ int8 loopTriggerAnim;
	/* 0x07 */ int8 loseAccessory;
	/* 0x08 */ int16 length;
	/* 0x0a */ int16 triggerFrame;
	/* 0x0c */ float knockBackDistance;
	/* 0x10 */ float knockBackFrames;
	/* 0x14 */ float throwVel;
	/* 0x18 */ float throwZVel;
	/* 0x1c */ float throwLift;
};

typedef _MonsterReaction MonsterReaction;

struct _MonsterBlockAttributes { // 0x54
	/* 0x00 */ MonsterReactionList *reactionList;
	/* 0x04 */ int16 rangeFront;
	/* 0x06 */ int16 rangeBack;
	/* 0x08 */ int16 heightTop;
	/* 0x0a */ int16 heightBottom;
	/* 0x0c */ float arcStart;
	/* 0x10 */ float arcEnd;
	/* 0x14 */ int8 name[8];
	/* 0x1c */ int32 stamina;
	/* 0x20 */ int8 blockAnim[15];
	/* 0x2f */ int8 anim;
	/* 0x30 */ int8 endAnim;
	/* 0x31 */ int8 blockFrame;
	/* 0x32 */ int16 blockTime;
	/* 0x34 */ int8 initiateProbability[4];
	/* 0x38 */ int8 mark;
	/* 0x3c */ float blockArcStart;
	/* 0x40 */ float blockArcEnd;
	/* 0x44 */ int8 blockHitCancelFrame[15];
	/* 0x53 */ int8 pad;
};

typedef _MonsterBlockAttributes MonsterBlockAttributes;

struct _MonsterCombatMoveAttributes { // 0x10
	/* 0x0 */ float dist;
	/* 0x4 */ int8 name[8];
	/* 0xc */ int8 anim;
	/* 0xd */ int8 direction;
	/* 0xe */ int16 pad;
};

typedef _MonsterCombatMoveAttributes MonsterCombatMoveAttributes;

struct _MonsterMissile { // 0x20
	/* 0x00 */ int8 name[8];
	/* 0x08 */ uint16 speed;
	/* 0x0a */ uint8 frame;
	/* 0x0b */ uint8 anim;
	/* 0x0c */ uint8 segment;
	/* 0x0d */ uint8 type;
	/* 0x0e */ uint8 graphic;
	/* 0x0f */ int8 fireChance;
	/* 0x10 */ int8 probability;
	/* 0x11 */ uint8 numAnims;
	/* 0x12 */ int8 animList[4];
	/* 0x16 */ int8 mark;
	/* 0x18 */ int16 rangeFront;
	/* 0x1a */ int16 rangeBack;
	/* 0x1c */ int32 trackingTime;
};

typedef _MonsterMissile MonsterMissile;

struct _MonsterTaunt { // 0x4
	/* 0x0 */ int8 anim;
	/* 0x1 */ int8 probability;
	/* 0x2 */ int8 altProbability;
	/* 0x3 */ int8 pad;
};

typedef _MonsterTaunt MonsterTaunt;

struct _MonsterCombatAttributes { // 0x5c
	/* 0x00 */ MonsterReactionList *reactionList;
	/* 0x04 */ MonsterReactionList *zeroHPReactionList;
	/* 0x08 */ int16 stunTime;
	/* 0x0a */ int16 hpDamageTime;
	/* 0x0c */ int16 spDamageTime;
	/* 0x0e */ int16 dpDamageTime;
	/* 0x10 */ int32 hpRecovery;
	/* 0x14 */ int32 spRecovery;
	/* 0x18 */ int32 dpRecovery;
	/* 0x1c */ int16 surpriseTime;
	/* 0x1e */ int16 grabTime;
	/* 0x20 */ int16 surpriseRange;
	/* 0x22 */ int16 suckPower;
	/* 0x24 */ int16 suckRange;
	/* 0x26 */ int16 suckTime;
	/* 0x28 */ int32 hitPoints;
	/* 0x2c */ int32 staminaPoints;
	/* 0x30 */ int32 dizzyPoints;
	/* 0x34 */ int8 numAttackStreams;
	/* 0x35 */ int8 numBackAttackStreams;
	/* 0x36 */ int8 numSpecAttackStreams;
	/* 0x37 */ int8 numEvadeAttributes;
	/* 0x38 */ int8 numBlockAttributes;
	/* 0x39 */ int8 numCombatMoveAttributes;
	/* 0x3a */ int8 numRunAttackStreams;
	/* 0x3b */ int8 numMissileAttacks;
	/* 0x3c */ int8 numTaunts;
	/* 0x3d */ int8 numSpawnAttacks;
	/* 0x3e */ int8 hitCancelFrame[25];
	/* 0x57 */ int8 pad;
	/* 0x58 */ void *attackEvadeLists[1];
};

typedef _MonsterCombatAttributes MonsterCombatAttributes;

struct _MonsterBurnSegments { // 0x4
	/* 0x0 */ int8 startSeg;
	/* 0x1 */ int8 endSeg;
	/* 0x2 */ int16 pad;
};

typedef _MonsterBurnSegments MonsterBurnSegments;

struct _MonsterBehaviorSpec { // 0x20
	/* 0x00 */ int32 behavior;
	/* 0x04 */ int32 param[6];
	/* 0x1c */ int8 sensesIdx;
	/* 0x1d */ int8 behaviorIdleIdx;
	/* 0x1e */ int16 pad;
};

typedef _MonsterBehaviorSpec MonsterBehaviorSpec;

struct _MonsterBehaviorStack { // 0x2
	/* 0x0 */ int8 numBehaviors;
	/* 0x1 */ int8 behaviorStack[1];
};

typedef _MonsterBehaviorStack MonsterBehaviorStack;

struct _MonsterFatality { // 0x8
	/* 0x0 */ int8 razielFatality;
	/* 0x1 */ int8 anim;
	/* 0x2 */ int8 triggeredAnim;
	/* 0x3 */ int8 effectFrame;
	/* 0x4 */ int8 restoreAnim;
	/* 0x5 */ int8 type;
	/* 0x6 */ int8 id;
	/* 0x7 */ int8 mode;
};

typedef _MonsterFatality MonsterFatality;

struct _MonsterAccessory { // 0x1c
	/* 0x00 */ int8 name[8];
	/* 0x08 */ int8 hideDrawGroupOnInit[4];
	/* 0x0c */ int8 unhideDrawGroupOnInit[4];
	/* 0x10 */ int8 hideDrawGroupOnRemove[4];
	/* 0x14 */ int8 unhideDrawGroupOnRemove[4];
	/* 0x18 */ int8 type;
	/* 0x19 */ int8 id;
	/* 0x1a */ int8 segment;
	/* 0x1b */ int8 pad;
};

typedef _MonsterAccessory MonsterAccessory;

struct _MonsterFallDamage { // 0x14
	/* 0x00 */ float vel;
	/* 0x04 */ int32 damage;
	/* 0x08 */ int32 dizzy;
	/* 0x0c */ int32 stamina;
	/* 0x10 */ int8 anim;
	/* 0x11 */ int8 pad[3];
};

typedef _MonsterFallDamage MonsterFallDamage;

struct _MonsterSubAttributes { // 0xf4
	/* 0x00 */ int8 *animList;
	/* 0x04 */ MonsterCombatAttributes *combatAttributes;
	/* 0x08 */ MonsterAllegiances *allegiances;
	/* 0x0c */ int16 scale;
	/* 0x0e */ int16 fallDistance;
	/* 0x10 */ int16 speedPivotTurn;
	/* 0x12 */ int16 speedWalkTurn;
	/* 0x14 */ int16 speedRunTurn;
	/* 0x16 */ int16 speedFleeTurn;
	/* 0x18 */ int16 speedBlockTurn;
	/* 0x1a */ int16 forwardHop;
	/* 0x1c */ int16 forgetTime;
	/* 0x1e */ int16 forwardScanDist;
	/* 0x20 */ uint8 modelNum;
	/* 0x21 */ uint8 stunnable;
	/* 0x22 */ uint8 grabable;
	/* 0x23 */ uint8 alarm;
	/* 0x24 */ uint8 norecover;
	/* 0x25 */ uint8 norevive;
	/* 0x26 */ uint8 zeroHPDeath;
	/* 0x27 */ uint8 fadeoutDeath;
	/* 0x28 */ uint8 healthDrain;
	/* 0x29 */ uint8 numSections;
	/* 0x2a */ uint8 sectionEnd[3];
	/* 0x2d */ int8 throwable;
	/* 0x30 */ MonsterBehaviorStack *defTriggeredBehaviorStack;
	/* 0x34 */ MonsterBehaviorStack *defActiveBehaviorStack;
	/* 0x38 */ int8 defInitialBehavior;
	/* 0x39 */ uint8 defSpectral;
	/* 0x3a */ int16 normalMult;
	/* 0x3c */ int16 reaverMult;
	/* 0x3e */ int16 fireMult;
	/* 0x40 */ int16 sunMult;
	/* 0x42 */ int16 waterMult;
	/* 0x44 */ int16 airMult;
	/* 0x46 */ int16 earthMult;
	/* 0x48 */ int16 darkMult;
	/* 0x4a */ uint8 impaleVuln;
	/* 0x4b */ uint8 decapVuln;
	/* 0x4c */ uint8 fireVuln;
	/* 0x4d */ uint8 sunVuln;
	/* 0x4e */ uint8 waterVuln;
	/* 0x4f */ uint8 airVuln;
	/* 0x50 */ uint8 earthVuln;
	/* 0x51 */ uint8 darkVuln;
	/* 0x52 */ uint8 reaverVuln;
	/* 0x53 */ uint8 immolateVuln;
	/* 0x54 */ uint8 clawVuln;
	/* 0x55 */ uint8 bruiseRed;
	/* 0x56 */ uint8 bruiseGreen;
	/* 0x57 */ uint8 bruiseBlue;
	/* 0x58 */ uint8 hitBloodRed;
	/* 0x59 */ uint8 hitBloodGreen;
	/* 0x5a */ uint8 hitBloodBlue;
	/* 0x5b */ uint8 hitBloodAlpha;
	/* 0x5c */ uint8 impaleBloodRed;
	/* 0x5d */ uint8 impaleBloodGreen;
	/* 0x5e */ uint8 impaleBloodBlue;
	/* 0x5f */ uint8 impaleBloodAlpha;
	/* 0x60 */ uint8 jbtBruiseRed;
	/* 0x61 */ uint8 jbtBruiseGreen;
	/* 0x62 */ uint8 jbtBruiseBlue;
	/* 0x63 */ uint8 jbtHitBloodRed;
	/* 0x64 */ uint8 jbtHitBloodGreen;
	/* 0x65 */ uint8 jbtHitBloodBlue;
	/* 0x66 */ uint8 jbtHitBloodAlpha;
	/* 0x67 */ uint8 jbtImpaleBloodRed;
	/* 0x68 */ uint8 jbtImpaleBloodGreen;
	/* 0x69 */ uint8 jbtImpaleBloodBlue;
	/* 0x6a */ uint8 jbtImpaleBloodAlpha;
	/* 0x6b */ uint8 jbtBlood;
	/* 0x6c */ int16 soulJuice;
	/* 0x6e */ int16 depletedSoulJuice;
	/* 0x70 */ int16 minSpikeRange;
	/* 0x72 */ int16 maxSpikeRange;
	/* 0x74 */ int16 maxSpikeAngle;
	/* 0x76 */ int16 minSpikeHorzSpeed;
	/* 0x78 */ int16 maxSpikeHorzSpeed;
	/* 0x7a */ int16 maxSpikeVertSpeed;
	/* 0x7c */ int16 upOnGroundOffset;
	/* 0x7e */ int16 downOnGroundOffset;
	/* 0x80 */ float ikRightLength;
	/* 0x84 */ float ikRightUpperOffset;
	/* 0x88 */ float ikRightLowerOffset;
	/* 0x8c */ float ikLeftLength;
	/* 0x90 */ float ikLeftUpperOffset;
	/* 0x94 */ float ikLeftLowerOffset;
	/* 0x98 */ int8 defBehaviorIdles;
	/* 0x99 */ int8 defSenses;
	/* 0x9a */ int8 rightArmChopAnim;
	/* 0x9b */ int8 leftArmChopAnim;
	/* 0x9c */ int8 weapon[8];
	/* 0xa4 */ int8 soul[8];
	/* 0xac */ int8 pupateObject[8];
	/* 0xb4 */ float rightThrowDirectionDelta;
	/* 0xb8 */ float leftThrowDirectionDelta;
	/* 0xbc */ float centerThrowDirectionDelta;
	/* 0xc0 */ float rightThrowSpeed;
	/* 0xc4 */ float leftThrowSpeed;
	/* 0xc8 */ float centerThrowSpeed;
	/* 0xcc */ float rightThrowZSpeed;
	/* 0xd0 */ float leftThrowZSpeed;
	/* 0xd4 */ float centerThrowZSpeed;
	/* 0xd8 */ int16 defBlindTime;
	/* 0xda */ int8 weaponSegment;
	/* 0xdb */ int8 defCrossPlanes;
	/* 0xdc */ int32 wallHitPoints;
	/* 0xe0 */ int32 wallHitDizzyPoints;
	/* 0xe4 */ int32 wallHitStaminaPoints;
	/* 0xe8 */ float combatDamageMultiplier;
	/* 0xec */ int8 fxStart;
	/* 0xed */ int8 fxEnd;
	/* 0xee */ int8 numAccessories;
	/* 0xef */ int8 numFatalities;
	/* 0xf0 */ int8 numFallDamages;
	/* 0xf1 */ int8 numVOs;
	/* 0xf2 */ int8 accFatal[1];
};

typedef _MonsterSubAttributes MonsterSubAttributes;

struct _MonsterVO { // 0x10
	/* 0x0 */ int8 name[8];
	/* 0x8 */ int8 probability;
	/* 0x9 */ int8 trigger;
	/* 0xa */ int16 minVolumeDist;
	/* 0xc */ int16 maxVolume;
	/* 0xe */ int16 pad;
};

typedef _MonsterVO MonsterVO;

struct _MonsterSpawn { // 0x10
	/* 0x0 */ int8 name[8];
	/* 0x8 */ int8 anim;
	/* 0x9 */ int8 segment;
	/* 0xa */ int8 frame;
	/* 0xb */ int8 probability;
	/* 0xc */ int8 fireChance;
	/* 0xd */ int8 maxSpawn;
	/* 0xe */ int8 mark;
	/* 0xf */ int8 pad;
};

typedef _MonsterSpawn MonsterSpawn;

struct _MonsterAttributes { // 0xac
	/* 0x00 */ uint32 magicnum;
	/* 0x04 */ void *tunData;
	/* 0x08 */ int8 *auxAnimList;
	/* 0x0c */ int32 whatAmI;
	/* 0x10 */ MonsterSubAttributes **subAttributesList;
	/* 0x14 */ MonsterCombatAttributes **combatAttributesList;
	/* 0x18 */ MonsterAttackAttributes **attackAttributesList;
	/* 0x1c */ MonsterMissile *missileList;
	/* 0x20 */ MonsterAnim *animList;
	/* 0x24 */ MonsterIdle *idleList;
	/* 0x28 */ MonsterBehaviorIdles *behaviorIdlesList;
	/* 0x2c */ MonsterSenses *sensesList;
	/* 0x30 */ void *shatterList;
	/* 0x34 */ MonsterBehaviorSpec *behaviorList;
	/* 0x38 */ MonsterFatality *fatalityList;
	/* 0x3c */ VAnim *razielFatalAnimsList;
	/* 0x40 */ FatalityInterface *razielFatalList;
	/* 0x44 */ ClothNode *clothNodeList;
	/* 0x48 */ MonsterBurnSegments *burnSegmentsList;
	/* 0x4c */ MonsterAttackStream **attackStreamList;
	/* 0x50 */ MonsterEvadeAttributes *evadeAttributesList;
	/* 0x54 */ MonsterAccessory *accessoryList;
	/* 0x58 */ MonsterCombatMoveAttributes *combatMoveAttributesList;
	/* 0x5c */ MonsterBlockAttributes *blockAttributesList;
	/* 0x60 */ MonsterReaction *reactionList;
	/* 0x64 */ MonsterReactionList **reactionListList;
	/* 0x68 */ MonsterFallDamage *fallDamageList;
	/* 0x6c */ MonsterTaunt *tauntList;
	/* 0x70 */ MonsterVO *voList;
	/* 0x74 */ MonsterSpawn *spawnList;
	/* 0x78 */ int8 numSubAttributes;
	/* 0x79 */ int8 numCombatAttributes;
	/* 0x7a */ int8 numAttackAttributes;
	/* 0x7b */ int8 numMissiles;
	/* 0x7c */ int8 numAnims;
	/* 0x7d */ int8 numIdles;
	/* 0x7e */ int8 numBehaviorIdles;
	/* 0x7f */ int8 numSenses;
	/* 0x80 */ int8 numShatters;
	/* 0x81 */ int8 numBehaviors;
	/* 0x82 */ int8 numFatalities;
	/* 0x83 */ int8 numRazielFatalAnims;
	/* 0x84 */ int8 numRazielFatals;
	/* 0x85 */ int8 numClothNodes;
	/* 0x86 */ int8 numBurnSegments;
	/* 0x87 */ int8 numAttackStreams;
	/* 0x88 */ int8 numEvadeAttributes;
	/* 0x89 */ int8 numAuxAnims;
	/* 0x8a */ int8 numAccessories;
	/* 0x8b */ int8 numCombatMoveAttributes;
	/* 0x8c */ int8 numBlockAttributes;
	/* 0x8d */ int8 numReactions;
	/* 0x8e */ int8 numReactionLists;
	/* 0x8f */ int8 numFallDamages;
	/* 0x90 */ int8 numTaunts;
	/* 0x91 */ int8 numVOs;
	/* 0x92 */ int8 numSpawns;
	/* 0x93 */ uint8 defaultAge;
	/* 0x94 */ uint8 damageFXSegment;
	/* 0x95 */ uint8 headSegment;
	/* 0x96 */ uint8 neckSegment;
	/* 0x97 */ uint8 leftShoulderSegment;
	/* 0x98 */ uint8 rightShoulderSegment;
	/* 0x99 */ uint8 waistSegment;
	/* 0x9a */ uint8 leftKneeSegment;
	/* 0x9b */ uint8 rightKneeSegment;
	/* 0x9c */ uint8 leftFootSegment;
	/* 0x9d */ uint8 rightFootSegment;
	/* 0x9e */ uint8 spineSegment;
	/* 0x9f */ uint8 leftWeaponSegment;
	/* 0xa0 */ uint8 rightWeaponSegment;
	/* 0xa1 */ uint8 grabSegment;
	/* 0xa2 */ uint8 bloodImpaleFrame;
	/* 0xa3 */ uint8 bloodConeFrame;
	/* 0xa4 */ int8 ikRightHipSegment;
	/* 0xa5 */ int8 ikRightKneeSegment;
	/* 0xa6 */ int8 ikRightAnkleSegment;
	/* 0xa7 */ int8 ikLeftHipSegment;
	/* 0xa8 */ int8 ikLeftKneeSegment;
	/* 0xa9 */ int8 ikLeftAnkleSegment;
};

typedef _MonsterAttributes MonsterAttributes;

struct _MonsterSchedule { // 0xc
	/* 0x0 */ _MonsterSchedule *next;
	/* 0x4 */ _MonsterSchedule *prev;
	/* 0x8 */ Instance *instance;
};

typedef _MonsterSchedule MonsterSchedule;

struct _MonsterVars { // 0x400
	/* 0x000 */ Vector4f waypoint;
	/* 0x010 */ Vector4f monOngroundPos;
	/* 0x020 */ Vector4f lookAtPos;
	/* 0x030 */ Vector4f lastValidPos;
	/* 0x040 */ Vector4f throwInitialPos;
	/* 0x050 */ Vector4f destination;
	/* 0x060 */ Vector4f generalPos;
	/* 0x070 */ Vector4f generalRot;
	/* 0x080 */ Vector4f moveToPos;
	/* 0x090 */ G2AnimInterpInfo interpInfo[3];
	/* 0x0c0 */ MonsterAnim *anim;
	/* 0x0c4 */ float animPlaySpeed;
	/* 0x0c8 */ MonsterSchedule token;
	/* 0x0d4 */ MonsterSchedule streamToken;
	/* 0x0e0 */ MonsterSubAttributes *subAttr;
	/* 0x0e4 */ void *extraVars;
	/* 0x0e8 */ uint32 mvFlags;
	/* 0x0ec */ uint32 auxFlags;
	/* 0x0f0 */ uint16 saveFlags;
	/* 0x0f2 */ uint16 saveAuxFlags;
	/* 0x0f4 */ uint16 perBehaviorFlags;
	/* 0x0f6 */ uint16 perFrameFlags;
	/* 0x0f8 */ uint16 auxPerBehaviorFlags;
	/* 0x0fa */ uint16 auxPerFrameFlags;
	/* 0x0fc */ uint32 accessories;
	/* 0x100 */ uint32 mode;
	/* 0x104 */ float lookAngleX;
	/* 0x108 */ float lookAngleZ;
	/* 0x10c */ int8 calledAnimID;
	/* 0x10d */ int8 calledAnimMode;
	/* 0x10e */ int8 previousMainState;
	/* 0x10f */ int8 nextMainState;
	/* 0x110 */ _MonsterStateFuncs *stateFuncs;
	/* 0x114 */ int8 numIntroInitialBehaviors;
	/* 0x115 */ int8 numIntroActiveBehaviors;
	/* 0x116 */ int8 numIntroTriggeredBehaviors;
	/* 0x117 */ int8 pad;
	/* 0x118 */ MonsterBehavior *currentBehavior;
	/* 0x11c */ int32 *behaviorStack;
	/* 0x120 */ MonsterBehaviorIdles *currentBehaviorIdles;
	/* 0x124 */ MonsterSenses *currentSenses;
	/* 0x128 */ _MonsterIR *mirList;
	/* 0x12c */ _MonsterRadar radar;
	/* 0x150 */ MonsterIR *leader;
	/* 0x154 */ int32 leaderID;
	/* 0x158 */ MonsterIR *ally;
	/* 0x15c */ int32 allyID;
	/* 0x160 */ MonsterIR *enemy;
	/* 0x164 */ int32 enemyID;
	/* 0x168 */ MonsterIR *god;
	/* 0x16c */ int32 godID;
	/* 0x170 */ MonsterIR *food;
	/* 0x174 */ int32 foodID;
	/* 0x178 */ MonsterIR *sucker;
	/* 0x17c */ int32 suckerID;
	/* 0x180 */ int32 lastValidUnitID;
	/* 0x184 */ int16 validUnits[5];
	/* 0x18e */ int8 senseCount;
	/* 0x18f */ int8 age;
	/* 0x190 */ uint16 avoidMask;
	/* 0x192 */ int16 regenTime;
	/* 0x194 */ int16 patrolMarkerDists[12];
	/* 0x1ac */ int16 patrolMarkerHeights[12];
	/* 0x1c4 */ int8 patrolMarkers[12];
	/* 0x1d0 */ int8 currentMarker;
	/* 0x1d1 */ int8 numMarkers;
	/* 0x1d2 */ int8 numMarkerHeights;
	/* 0x1d3 */ int8 numMarkerDists;
	/* 0x1d4 */ int32 fatalType;
	/* 0x1d8 */ int32 fatalId;
	/* 0x1dc */ float fRotZ;
	/* 0x1e0 */ int32 impalerID;
	/* 0x1e4 */ int32 soulID;
	/* 0x1e8 */ int32 keyID;
	/* 0x1ec */ int32 fontID;
	/* 0x1f0 */ int32 leftLimbID;
	/* 0x1f4 */ int32 rightLimbID;
	/* 0x1f8 */ int32 mainLimbID;
	/* 0x1fc */ int32 totalDamageTaken;
	/* 0x200 */ int32 reaverDamageTaken;
	/* 0x204 */ int32 hitPoints;
	/* 0x208 */ int32 maxHitPoints;
	/* 0x20c */ int32 staminaPoints;
	/* 0x210 */ int32 maxStaminaPoints;
	/* 0x214 */ int32 dizzyPoints;
	/* 0x218 */ int32 maxDizzyPoints;
	/* 0x21c */ uint32 hpRecoveryTimer;
	/* 0x220 */ uint32 spRecoveryTimer;
	/* 0x224 */ uint32 dpRecoveryTimer;
	/* 0x228 */ uint32 notValidUnitTimer;
	/* 0x22c */ uint32 nextChanceTimer;
	/* 0x230 */ uint32 turnAnimTimer;
	/* 0x234 */ uint32 autofaceDrawTimer;
	/* 0x238 */ uint32 generalTimer;
	/* 0x23c */ uint32 generalTimer2;
	/* 0x240 */ uint32 generalTimer3;
	/* 0x244 */ uint32 generalTimer4;
	/* 0x248 */ float generalAngle;
	/* 0x24c */ int16 targetFade;
	/* 0x24e */ int16 fadeRate;
	/* 0x250 */ void *effect;
	/* 0x254 */ void *sfx[4];
	/* 0x264 */ float soundPitch[4];
	/* 0x274 */ int32 soundVol[4];
	/* 0x284 */ int32 soundDist[4];
	/* 0x294 */ int32 calledFatalType;
	/* 0x298 */ int32 calledFatalId;
	/* 0x29c */ int32 calledImpalerID;
	/* 0x2a0 */ int32 waitFrames;
	/* 0x2a4 */ int32 deathRestoreAnim;
	/* 0x2a8 */ float throwTimer;
	/* 0x2ac */ Instance *weapon;
	/* 0x2b0 */ MonsterEvadeAttributes *evadeType;
	/* 0x2b4 */ MonsterAttackStream *preferredAttackStream;
	/* 0x2b8 */ MonsterAttackStream *attackStream;
	/* 0x2bc */ MonsterAttackAttributes *attackType;
	/* 0x2c0 */ int8 attackSubType;
	/* 0x2c1 */ int8 repositionAnim;
	/* 0x2c2 */ int8 stateAfterState;
	/* 0x2c3 */ int8 trackAnim;
	/* 0x2c4 */ float trackRange;
	/* 0x2c8 */ int32 destinationUnitID;
	/* 0x2cc */ MonsterMissile *missile;
	/* 0x2d0 */ MonsterSpawn *spawn;
	/* 0x2d4 */ int8 evadeChance;
	/* 0x2d5 */ int8 fireChance;
	/* 0x2d6 */ int8 attackChance;
	/* 0x2d7 */ int8 lookCounter;
	/* 0x2d8 */ MonsterIR *calledNoticed;
	/* 0x2dc */ int32 calledNoticedID;
	/* 0x2e0 */ float hRotZ;
	/* 0x2e4 */ int16 knockBackDist;
	/* 0x2e6 */ int16 knockBackTime;
	/* 0x2e8 */ LegIK leftLeg;
	/* 0x318 */ LegIK rightLeg;
	/* 0x348 */ int16 blindTime;
	/* 0x34a */ int8 limb;
	/* 0x34b */ int8 limbsLost;
	/* 0x34c */ int32 vmoID;
	/* 0x350 */ ClothNode *cn;
	/* 0x360 */ Matrixf spatialMatrix;
	/* 0x3a0 */ float pmRotZ;
	/* 0x3a4 */ float pmThrowRotZ;
	/* 0x3a8 */ float pmPower;
	/* 0x3ac */ float pmLift;
	/* 0x3b0 */ float pmLoft;
	/* 0x3b4 */ MonsterIR *target;
	/* 0x3b8 */ int32 targetID;
	/* 0x3bc */ float maxSpeed;
	/* 0x3c0 */ Vector4f *lockPos;
	/* 0x3c4 */ int8 lockSegment;
	/* 0x3c8 */ MonsterBlockAttributes *blockType;
	/* 0x3cc */ MonsterTaunt *taunt;
	/* 0x3d0 */ int32 damageFXType;
	/* 0x3d4 */ int16 mainColorVertex;
	/* 0x3d6 */ int16 trackTurnRate;
	/* 0x3d8 */ int8 calledPhysMoveEnd;
	/* 0x3d9 */ int8 calledFallMove;
	/* 0x3da */ int8 calledThrownMove;
	/* 0x3db */ int8 thrownMove;
	/* 0x3dc */ int8 hitReactionType;
	/* 0x3dd */ int8 hitAttackType;
	/* 0x3de */ int8 blockedHitReactionType;
	/* 0x3df */ int8 blockedHitAttackType;
	/* 0x3e0 */ int8 keySegment;
	/* 0x3e1 */ int8 lastRandomIdleAnim;
	/* 0x3e2 */ int8 attackChoice;
	/* 0x3e3 */ int8 tauntChoice;
	/* 0x3e4 */ int16 tauntChance;
	/* 0x3e6 */ int8 attackFlags;
	/* 0x3e7 */ int8 primaryCmoveDirection;
	/* 0x3e8 */ int8 numBirthMarkers;
	/* 0x3e9 */ int8 birthMarkers[8];
};

typedef _MonsterVars MonsterVars;

struct Triangle2Dc { // 0x18
	/* 0x00 */ float x0;
	/* 0x04 */ float y0;
	/* 0x08 */ float x1;
	/* 0x0c */ float y1;
	/* 0x10 */ float x2;
	/* 0x14 */ float y2;
};

typedef int32 CollideBoundFunc(/* parameters unknown */);

struct __ReaverSaveDat { // 0x4
	/* 0x0 */ uint32 pad;
};

typedef __ReaverSaveDat ReaverSaveData;

struct __ReaverSegment { // 0x2
	/* 0x0 */ int16 theta;
};

typedef __ReaverSegment ReaverSegment;

struct __ReaverData { // 0x3c
	/* 0x00 */ float ReaverSize;
	/* 0x04 */ char ReaverPickedUp;
	/* 0x05 */ char ReaverOn;
	/* 0x06 */ short int CurrentReaver;
	/* 0x08 */ float ReaverDeg;
	/* 0x0c */ float ReaverChargeTime;
	/* 0x10 */ int32 ReaverShockAmount;
	/* 0x14 */ int32 ReaverGlowColor;
	/* 0x18 */ int32 ReaverBladeColor;
	/* 0x1c */ int32 ReaverBladeGlowColor;
	/* 0x20 */ float ReaverScale;
	/* 0x24 */ float ReaverTargetScale;
	/* 0x28 */ float health;
	/* 0x2c */ float maxHealth;
	/* 0x30 */ float maxHealthTimer;
	/* 0x34 */ float meterHealth;
	/* 0x38 */ ReaverSaveData saveData;
};

typedef __ReaverData ReaverData;

struct __ReaverWaveData { // 0x4
	/* 0x0 */ int16 amplitude;
	/* 0x2 */ int16 frequency;
};

typedef __ReaverWaveData ReaverWaveData;

struct __ReaverTuneData { // 0xe8
	/* 0x00 */ uint32 spectralGlowColor;
	/* 0x04 */ uint32 materialGlowColor;
	/* 0x08 */ uint32 darkGlowColor;
	/* 0x0c */ uint32 lightGlowColor;
	/* 0x10 */ uint32 airGlowColor;
	/* 0x14 */ uint32 fireGlowColor;
	/* 0x18 */ uint32 waterGlowColor;
	/* 0x1c */ uint32 earthGlowColor;
	/* 0x20 */ uint32 spiritGlowColor;
	/* 0x24 */ uint32 spectralInnerColor;
	/* 0x28 */ uint32 materialInnerColor;
	/* 0x2c */ uint32 darkInnerColor;
	/* 0x30 */ uint32 lightInnerColor;
	/* 0x34 */ uint32 airInnerColor;
	/* 0x38 */ uint32 fireInnerColor;
	/* 0x3c */ uint32 waterInnerColor;
	/* 0x40 */ uint32 earthInnerColor;
	/* 0x44 */ uint32 spiritInnerColor;
	/* 0x48 */ uint32 spectralInnerGlowColor;
	/* 0x4c */ uint32 materialInnerGlowColor;
	/* 0x50 */ uint32 darkInnerGlowColor;
	/* 0x54 */ uint32 lightInnerGlowColor;
	/* 0x58 */ uint32 airInnerGlowColor;
	/* 0x5c */ uint32 fireInnerGlowColor;
	/* 0x60 */ uint32 waterInnerGlowColor;
	/* 0x64 */ uint32 earthInnerGlowColor;
	/* 0x68 */ uint32 spiritInnerGlowColor;
	/* 0x6c */ uint32 spectralLightColor;
	/* 0x70 */ uint32 materialLightColor;
	/* 0x74 */ uint32 darkLightColor;
	/* 0x78 */ uint32 lightLightColor;
	/* 0x7c */ uint32 airLightColor;
	/* 0x80 */ uint32 fireLightColor;
	/* 0x84 */ uint32 waterLightColor;
	/* 0x88 */ uint32 earthLightColor;
	/* 0x8c */ uint32 spiritLightColor;
	/* 0x90 */ int32 spectralLightRadius;
	/* 0x94 */ int32 materialLightRadius;
	/* 0x98 */ int32 darkLightRadius;
	/* 0x9c */ int32 lightLightRadius;
	/* 0xa0 */ int32 airLightRadius;
	/* 0xa4 */ int32 fireLightRadius;
	/* 0xa8 */ int32 waterLightRadius;
	/* 0xac */ int32 earthLightRadius;
	/* 0xb0 */ int32 spiritLightRadius;
	/* 0xb4 */ float percentPowerGainWhenReaverSwung;
	/* 0xb8 */ float percentPowerGainWhenEnemyHit;
	/* 0xbc */ float percentPowerGainWhenEnemyKilled;
	/* 0xc0 */ float secondsToHoldMaximum;
	/* 0xc4 */ float secondsToDrainFullMeter;
	/* 0xc8 */ float percentDamageIncreaseWhenFullPower;
	/* 0xcc */ float playerHealthDrainAmountWhenFull;
	/* 0xd0 */ float meterUpdateSpeed;
	/* 0xd4 */ uint8 spectralImbueAnim;
	/* 0xd5 */ uint8 materialImbueAnim;
	/* 0xd6 */ uint8 darkImbueAnim;
	/* 0xd7 */ uint8 lightImbueAnim;
	/* 0xd8 */ uint8 airImbueAnim;
	/* 0xd9 */ uint8 fireImbueAnim;
	/* 0xda */ uint8 waterImbueAnim;
	/* 0xdb */ uint8 earthImbueAnim;
	/* 0xdc */ uint8 spiritImbueAnim;
	/* 0xdd */ uint8 pad;
	/* 0xde */ uint8 pad1;
	/* 0xdf */ uint8 pad2;
	/* 0xe0 */ uint8 reaverOnAnim;
	/* 0xe1 */ uint8 pad3;
	/* 0xe2 */ uint16 pad4;
	/* 0xe4 */ uint32 reaverDamage;
};

typedef __ReaverTuneData ReaverTuneData;

typedef void option_fn_t(/* parameters unknown */);

struct burntTuneType { // 0x8
	/* 0x0 */ int32 burntDist;
	/* 0x4 */ int32 fadeDelta;
};

struct burntMessType { // 0x10
	/* 0x0 */ int32 closestvert;
	/* 0x4 */ int32 closestdist;
	/* 0x8 */ int32 closestseg;
	/* 0xc */ burntTuneType *burntTune;
};

struct bloodyMessType { // 0x14
	/* 0x00 */ int32 closestvert;
	/* 0x04 */ int32 closestdist;
	/* 0x08 */ int32 closestseg;
	/* 0x0c */ int32 bloodiedAVert;
	/* 0x10 */ int32 bloodIntensity;
};

typedef void (*processVert_t)(/* parameters unknown */);

struct _sceDmaTag { // 0x10
	/* 0x0 */ u_short qwc;
	/* 0x2 */ u_char mark;
	/* 0x3 */ u_char id;
	/* 0x4 */ _sceDmaTag *next;
	/* 0x8 */ u_int p[2];
};

typedef _sceDmaTag sceDmaTag __attribute__((aligned(16)));

struct sceDmaEnv { // 0x14
	/* 0x00 */ u_char sts;
	/* 0x01 */ u_char std;
	/* 0x02 */ u_char mfd;
	/* 0x03 */ u_char rcycle;
	/* 0x04 */ u_short express;
	/* 0x06 */ u_short notify;
	/* 0x08 */ u_short sqwc;
	/* 0x0a */ u_short tqwc;
	/* 0x0c */ void *rbadr;
	/* 0x10 */ u_int rbmsk;
};

struct sceDmaChan { // 0x90
	/* 0x00 */ tD_CHCR chcr;
	/* 0x04 */ u_int p0[3];
	/* 0x10 */ void *madr;
	/* 0x14 */ u_int p1[3];
	/* 0x20 */ u_int qwc;
	/* 0x24 */ u_int p2[3];
	/* 0x30 */ sceDmaTag *tadr;
	/* 0x34 */ u_int p3[3];
	/* 0x40 */ void *as0;
	/* 0x44 */ u_int p4[3];
	/* 0x50 */ void *as1;
	/* 0x54 */ u_int p5[3];
	/* 0x60 */ u_int p6[4];
	/* 0x70 */ u_int p7[4];
	/* 0x80 */ void *sadr;
	/* 0x84 */ u_int p8[3];
};

struct sceDmaPacket { // 0x10
	/* 0x0 */ u_int *pCurrent;
	/* 0x4 */ u_long128 *pBase;
	/* 0x8 */ u_long128 *pDmaTag;
	/* 0xc */ u_int pad03;
};

struct sceVif0Packet { // 0x20
	/* 0x00 */ u_int *pCurrent;
	/* 0x04 */ u_long128 *pBase;
	/* 0x08 */ u_long128 *pDmaTag;
	/* 0x0c */ u_int *pVifCode;
	/* 0x10 */ u_int numlen;
	/* 0x14 */ u_int pad11;
	/* 0x18 */ u_int pad12;
	/* 0x1c */ u_int pad13;
};

struct sceVif1Packet { // 0x20
	/* 0x00 */ u_int *pCurrent;
	/* 0x04 */ u_long128 *pBase;
	/* 0x08 */ u_long128 *pDmaTag;
	/* 0x0c */ u_int *pVifCode;
	/* 0x10 */ u_int numlen;
	/* 0x14 */ u_long *pGifTag;
	/* 0x18 */ u_int pad12;
	/* 0x1c */ u_int pad13;
};

struct sceGifPacket { // 0x10
	/* 0x0 */ u_int *pCurrent;
	/* 0x4 */ u_long128 *pBase;
	/* 0x8 */ u_long128 *pDmaTag;
	/* 0xc */ u_long *pGifTag;
};

struct sceDevVu0Cnd { // 0x240
	/* 0x000 */ u_long128 vf[32];
	/* 0x200 */ u_int status;
	/* 0x204 */ u_int mac;
	/* 0x208 */ u_int clipping;
	/* 0x20c */ u_int r;
	/* 0x210 */ u_int i;
	/* 0x214 */ u_int q;
	/* 0x218 */ u_short vi[16];
};

struct sceDevVu1Cnd { // 0x240
	/* 0x000 */ u_long128 vf[32];
	/* 0x200 */ u_int status;
	/* 0x204 */ u_int mac;
	/* 0x208 */ u_int clipping;
	/* 0x20c */ u_int r;
	/* 0x210 */ u_int i;
	/* 0x214 */ u_int q;
	/* 0x218 */ u_int p;
	/* 0x21c */ u_short vi[16];
};

struct sceDevGifCnd { // 0x30
	/* 0x00 */ u_long128 tag;
	/* 0x10 */ u_int stat;
	/* 0x14 */ u_int count;
	/* 0x18 */ u_int p3count;
	/* 0x1c */ u_int p3tag;
	/* 0x20 */ u_int pad;
};

struct sceDevVif0Cnd { // 0x3c
	/* 0x00 */ u_int row[4];
	/* 0x10 */ u_int col[4];
	/* 0x20 */ u_int mask;
	/* 0x24 */ u_int code;
	/* 0x28 */ u_int stat;
	/* 0x2c */ u_short itop;
	/* 0x2e */ u_short itops;
	/* 0x30 */ u_short mark;
	/* 0x32 */ u_short num;
	/* 0x34 */ u_char error;
	/* 0x35 */ u_char cl;
	/* 0x36 */ u_char wl;
	/* 0x37 */ u_char cmod;
	/* 0x38 */ u_char pad;
};

struct sceDevVif1Cnd { // 0x44
	/* 0x00 */ u_int row[4];
	/* 0x10 */ u_int col[4];
	/* 0x20 */ u_int mask;
	/* 0x24 */ u_int code;
	/* 0x28 */ u_int stat;
	/* 0x2c */ u_short itop;
	/* 0x2e */ u_short itops;
	/* 0x30 */ u_short base;
	/* 0x32 */ u_short offset;
	/* 0x34 */ u_short top;
	/* 0x36 */ u_short tops;
	/* 0x38 */ u_short mark;
	/* 0x3a */ u_short num;
	/* 0x3c */ u_char error;
	/* 0x3d */ u_char cl;
	/* 0x3e */ u_char wl;
	/* 0x3f */ u_char cmod;
	/* 0x40 */ u_char pad;
};

union QWdata { // 0x10
	/* 0x0 */ uint128 ui128;
	/* 0x0 */ uint64 ui64[2];
	/* 0x0 */ uint32 ui32[4];
	/* 0x0 */ float fp[4];
	/* 0x0 */ uint16 ui16[8];
	/* 0x0 */ uint8 ui8[16];
};

struct GifPacket { // 0x8
	/* 0x0 */ QWdata *buf;
	/* 0x4 */ u_int size;
};

struct DmaTag { // 0x10
	/* 0x0:0 */ uint64 qwc : 16;
	/* 0x2:0 */ uint64 pad1 : 10;
	/* 0x3:2 */ uint64 pce : 2;
	/* 0x3:4 */ uint64 id : 3;
	/* 0x3:7 */ uint64 irq : 1;
	/* 0x4:0 */ uint64 addr : 31;
	/* 0x7:7 */ uint64 spr : 1;
	/* 0x8:0 */ uint64 VIF_command_1 : 32;
	/* 0xc:0 */ uint64 VIF_command_2 : 32;
};

struct _PS2Vertex { // 0x30
	/* 0x00 */ float s;
	/* 0x04 */ float t;
	/* 0x08 */ float q;
	/* 0x0c */ int32 pad;
	/* 0x10 */ int32 r;
	/* 0x14 */ int32 g;
	/* 0x18 */ int32 b;
	/* 0x1c */ int32 a;
	/* 0x20 */ int32 x;
	/* 0x24 */ int32 y;
	/* 0x28 */ int32 z;
	/* 0x2c */ int32 f;
};

typedef _PS2Vertex PS2Vertex;

struct _PS2VertexNoTex { // 0x20
	/* 0x00 */ int32 r;
	/* 0x04 */ int32 g;
	/* 0x08 */ int32 b;
	/* 0x0c */ int32 a;
	/* 0x10 */ int32 x;
	/* 0x14 */ int32 y;
	/* 0x18 */ int32 z;
	/* 0x1c */ int32 f;
};

typedef _PS2VertexNoTex PS2VertexNoTex;

struct _PS2DrawItem { // 0x20
	/* 0x00 */ DmaTag dmaTag;
	/* 0x10 */ sceGifTag gifTag;
};

typedef _PS2DrawItem PS2DrawItem;

struct _PS2TriStrip { // 0x40
	/* 0x00 */ DmaTag dmaTag;
	/* 0x10 */ sceGifTag gifTag;
	/* 0x20 */ DmaTag colorTag;
	/* 0x30 */ DmaTag stripTag;
	/* 0x40 */ DmaTag matrix[0];
};

typedef _PS2TriStrip PS2TriStrip;

struct _PS2PrelitTriStrip { // 0x60
	/* 0x00 */ DmaTag dmaTag;
	/* 0x10 */ sceGifTag gifTag;
	/* 0x20 */ Vector4fr clipOffset;
	/* 0x30 */ Vector4fr transformOffset;
	/* 0x40 */ DmaTag stripTag;
	/* 0x50 */ DmaTag retTag;
};

typedef _PS2PrelitTriStrip PS2PrelitTriStrip;

struct _PS2DynamicLight { // 0x20
	/* 0x00 */ float x;
	/* 0x04 */ float y;
	/* 0x08 */ float z;
	/* 0x0c */ float radius;
	/* 0x10 */ float r;
	/* 0x14 */ float g;
	/* 0x18 */ float b;
	/* 0x1c */ int32 terminator;
};

typedef _PS2DynamicLight PS2DynamicLight;

struct _PS2Triangle { // 0xb0
	/* 0x00 */ DmaTag dmaTag;
	/* 0x10 */ sceGifTag gifTag;
	/* 0x20 */ PS2Vertex vertex0;
	/* 0x50 */ PS2Vertex vertex1;
	/* 0x80 */ PS2Vertex vertex2;
};

typedef _PS2Triangle PS2Triangle;

struct _PS2Quad { // 0xe0
	/* 0x00 */ DmaTag dmaTag;
	/* 0x10 */ sceGifTag gifTag;
	/* 0x20 */ PS2Vertex vertex0;
	/* 0x50 */ PS2Vertex vertex1;
	/* 0x80 */ PS2Vertex vertex2;
	/* 0xb0 */ PS2Vertex vertex3;
};

typedef _PS2Quad PS2Quad;

struct _PS2QuadNoTex { // 0xa0
	/* 0x00 */ DmaTag dmaTag;
	/* 0x10 */ sceGifTag gifTag;
	/* 0x20 */ PS2VertexNoTex vertex0;
	/* 0x40 */ PS2VertexNoTex vertex1;
	/* 0x60 */ PS2VertexNoTex vertex2;
	/* 0x80 */ PS2VertexNoTex vertex3;
};

typedef _PS2QuadNoTex PS2QuadNoTex;

struct _PS2Sprite { // 0x70
	/* 0x00 */ DmaTag dmaTag;
	/* 0x10 */ sceGifTag gifTag;
	/* 0x20 */ PS2Vertex vertex0;
	/* 0x50 */ struct { // 0x20
		/* 0x50 */ float s;
		/* 0x54 */ float t;
		/* 0x58 */ float q;
		/* 0x5c */ int32 pad;
		/* 0x60 */ int32 x;
		/* 0x64 */ int32 y;
		/* 0x68 */ int32 z;
		/* 0x6c */ int32 f;
	} vertex1;
};

typedef _PS2Sprite PS2Sprite;

struct _PS2SpriteDMA { // 0x20
	/* 0x00 */ DmaTag dmaTag;
	/* 0x10 */ sceGifTag gifTag;
};

typedef _PS2SpriteDMA PS2SpriteDMA;

struct _PS2SpriteVertex { // 0x50
	/* 0x00 */ PS2Vertex vertex0;
	/* 0x30 */ struct { // 0x20
		/* 0x30 */ float s;
		/* 0x34 */ float t;
		/* 0x38 */ float q;
		/* 0x3c */ int32 pad;
		/* 0x40 */ int32 x;
		/* 0x44 */ int32 y;
		/* 0x48 */ int32 z;
		/* 0x4c */ int32 f;
	} vertex1;
};

typedef _PS2SpriteVertex PS2SpriteVertex;

struct _PS2Line { // 0x60
	/* 0x00 */ DmaTag dmaTag;
	/* 0x10 */ sceGifTag gifTag;
	/* 0x20 */ struct { // 0x20
		/* 0x20 */ int32 r;
		/* 0x24 */ int32 g;
		/* 0x28 */ int32 b;
		/* 0x2c */ int32 a;
		/* 0x30 */ int32 x;
		/* 0x34 */ int32 y;
		/* 0x38 */ int32 z;
		/* 0x3c */ int32 f;
	} vertex0;
	/* 0x40 */ struct { // 0x20
		/* 0x40 */ int32 r;
		/* 0x44 */ int32 g;
		/* 0x48 */ int32 b;
		/* 0x4c */ int32 a;
		/* 0x50 */ int32 x;
		/* 0x54 */ int32 y;
		/* 0x58 */ int32 z;
		/* 0x5c */ int32 f;
	} vertex1;
};

typedef _PS2Line PS2Line;

struct _PS2LineDMA { // 0x20
	/* 0x00 */ DmaTag dmaTag;
	/* 0x10 */ sceGifTag gifTag;
};

typedef _PS2LineDMA PS2LineDMA;

struct _PS2LineVertex { // 0x40
	/* 0x00 */ struct { // 0x20
		/* 0x00 */ int32 r;
		/* 0x04 */ int32 g;
		/* 0x08 */ int32 b;
		/* 0x0c */ int32 a;
		/* 0x10 */ int32 x;
		/* 0x14 */ int32 y;
		/* 0x18 */ int32 z;
		/* 0x1c */ int32 f;
	} vertex0;
	/* 0x20 */ struct { // 0x20
		/* 0x20 */ int32 r;
		/* 0x24 */ int32 g;
		/* 0x28 */ int32 b;
		/* 0x2c */ int32 a;
		/* 0x30 */ int32 x;
		/* 0x34 */ int32 y;
		/* 0x38 */ int32 z;
		/* 0x3c */ int32 f;
	} vertex1;
};

typedef _PS2LineVertex PS2LineVertex;

struct PS2_GeneralPrim { // 0x20
	/* 0x00 */ sceGifTag giftag;
	/* 0x10 */ QWdata data;
};

struct VisibleSphere { // 0x10
	/* 0x0 */ TerrainTextureStripInfo *strip;
	/* 0x4 */ int32 stripType;
	/* 0x8 */ DmaTag *light;
	/* 0xc */ float close_q;
};

struct _VramLink { // 0x4
	/* 0x0 */ int16 textureID;
	/* 0x2 */ int16 entry;
};

typedef _VramLink VramLink;

struct _VramTextureHeader { // 0x20
	/* 0x00 */ int16 textureID;
	/* 0x02 */ int16 attr;
	/* 0x04 */ int16 width;
	/* 0x06 */ int16 height;
	/* 0x08 */ int16 log2Width;
	/* 0x0a */ int16 log2Height;
	/* 0x0c */ int16 mipLevel;
	/* 0x0e */ int16 kValue;
	/* 0x10 */ int16 mipLen[7];
	/* 0x1e */ int16 pad;
};

typedef _VramTextureHeader VramTextureHeader;

struct _TexEnvOpaque { // 0x80
	/* 0x00 */ sceGifTag giftag;
	/* 0x10 */ sceGsTexflush texflush;
	/* 0x18 */ int64 texflushaddr;
	/* 0x20 */ sceGsTex1 tex11;
	/* 0x28 */ int64 tex11addr;
	/* 0x30 */ sceGsTex0 tex01;
	/* 0x38 */ int64 tex01addr;
	/* 0x40 */ sceGsClamp clamp1;
	/* 0x48 */ int64 clamp1addr;
	/* 0x50 */ sceGsMiptbp1 miptbp1;
	/* 0x58 */ int64 miptbp1addr;
	/* 0x60 */ sceGsMiptbp2 miptbp2;
	/* 0x68 */ int64 miptbp2addr;
	/* 0x70 */ sceGsFba fba;
	/* 0x78 */ int64 fbaaddr;
};

typedef _TexEnvOpaque TexEnvOpaque;

struct _TexEnvTranslucent { // 0x50
	/* 0x00 */ sceGifTag giftag;
	/* 0x10 */ sceGsTexflush texflush;
	/* 0x18 */ int64 texflushaddr;
	/* 0x20 */ sceGsTex1 tex11;
	/* 0x28 */ int64 tex11addr;
	/* 0x30 */ sceGsTex0 tex01;
	/* 0x38 */ int64 tex01addr;
	/* 0x40 */ sceGsClamp clamp1;
	/* 0x48 */ int64 clamp1addr;
};

typedef _TexEnvTranslucent TexEnvTranslucent;

struct _VramTracker { // 0x30
	/* 0x00 */ VramTextureHeader header;
	/* 0x20 */ int32 refCount;
	/* 0x24 */ int32 dramSize;
	/* 0x28 */ uint8 *pixels;
	/* 0x2c */ uint32 pad;
};

typedef _VramTracker VramTracker;

struct _PS2LoadImage { // 0x50
	/* 0x00 */ sceGifTag giftag0;
	/* 0x10 */ sceGsBitbltbuf bitbltbuf;
	/* 0x18 */ uint64 bitbltbufaddr;
	/* 0x20 */ sceGsTrxreg trxreg;
	/* 0x28 */ uint64 trxregaddr;
	/* 0x30 */ sceGsTrxdir trxdir;
	/* 0x38 */ uint64 trxdiraddr;
	/* 0x40 */ sceGifTag giftag1;
};

typedef _PS2LoadImage PS2LoadImage;

struct _VramPixelPacket { // 0x70
	/* 0x00 */ DmaTag loadTag;
	/* 0x10 */ PS2LoadImage pixelInfo;
	/* 0x60 */ DmaTag pixelTag;
};

typedef _VramPixelPacket VramPixelPacket;

struct _VramTexEnvOpaquePacket { // 0x90
	/* 0x00 */ DmaTag tag;
	/* 0x10 */ TexEnvOpaque texEnv;
};

typedef _VramTexEnvOpaquePacket VramTexEnvOpaquePacket;

struct _VramTexEnvTranslucentPacket { // 0x60
	/* 0x00 */ DmaTag tag;
	/* 0x10 */ TexEnvTranslucent texEnv;
};

typedef _VramTexEnvTranslucentPacket VramTexEnvTranslucentPacket;

struct _ImageBlock { // 0xc
	/* 0x0 */ float u;
	/* 0x4 */ float v;
	/* 0x8 */ int entry;
};

typedef _ImageBlock ImageBlock;

struct _ImageInfo { // 0x10
	/* 0x0 */ int numImages;
	/* 0x4 */ int w;
	/* 0x8 */ int h;
	/* 0xc */ void *data;
	/* 0x10 */ ImageBlock block[0];
};

typedef _ImageInfo ImageInfo;

typedef uint8 CheatKey;

struct GameCheat { // 0x10
	/* 0x0 */ CheatKey cheatKeys[12];
	/* 0xc */ int16 cheatLen;
	/* 0xe */ int16 cheatStage;
};

typedef void debug_dispatch_fn_t(/* parameters unknown */);

struct debug_dispatch_t { // 0x8
	/* 0x0 */ DEBUG_LINE_TYPE type;
	/* 0x4 */ debug_dispatch_fn_t *fn;
};

struct debug_format_t { // 0xc
	/* 0x0 */ int xpos;
	/* 0x4 */ int ypos;
	/* 0x8 */ int is_centered;
};

struct _ControllerRecord { // 0x10
	/* 0x0 */ uint32 buttonData;
	/* 0x4 */ uint32 analogueX;
	/* 0x8 */ uint32 analogueY;
	/* 0xc */ uint32 frames;
};

typedef _ControllerRecord ControllerRecord;

struct _RecordedDemo { // 0x14
	/* 0x00 */ char unitName[16];
	/* 0x10 */ int32 numFrames;
	/* 0x14 */ ControllerRecord record[0];
};

typedef _RecordedDemo RecordedDemo;

struct _TextureItem { // 0xc
	/* 0x0 */ void *drawItemList;
	/* 0x4 */ int16 zsort;
	/* 0x6 */ uint16 qwc;
	/* 0x8 */ float max_Q;
};

typedef _TextureItem TextureItem;

struct _ZBucket { // 0x8
	/* 0x0 */ void *dmaTag;
	/* 0x4 */ uint16 currentTexture;
	/* 0x6 */ uint16 lastTexture;
};

typedef _ZBucket ZBucket;

typedef int qword[4] __attribute__((aligned(16)));

typedef int sceVu0IVECTOR[4] __attribute__((aligned(16)));

typedef float sceVu0FVECTOR[4] __attribute__((aligned(16)));

typedef float sceVu0FMATRIX[4][4] __attribute__((aligned(16)));

struct StencilBufferPrim { // 0x3680
	/* 0x0000 */ int64 anDummyDmaTag[2];
	/* 0x0010 */ int64 anDummyGifTag[2];
	/* 0x0020 */ int64 anDummyReg[2];
	/* 0x0030 */ int64 anDmaTag1[2];
	/* 0x0040 */ int64 anGifTag1[2];
	/* 0x0050 */ int64 anFrame2[2];
	/* 0x0060 */ int64 anScissor2[2];
	/* 0x0070 */ int64 anZBuf2[2];
	/* 0x0080 */ int64 anXYOffset2[2];
	/* 0x0090 */ int64 anTest2[2];
	/* 0x00a0 */ int64 anTex1_2[2];
	/* 0x00b0 */ int64 anRGBAQ[2];
	/* 0x00c0 */ int64 anGifTag2[2];
	/* 0x00d0 */ int64 anPolys0[1120];
	/* 0x23d0 */ int64 anSBGifTag[2];
	/* 0x23e0 */ int64 anSBRGB[2];
	/* 0x23f0 */ int64 anSBTest[2];
	/* 0x2400 */ int64 anColClamp0[2];
	/* 0x2410 */ int64 anSBXYOffset2[2];
	/* 0x2420 */ int64 anDmaTag2[2];
	/* 0x2430 */ int64 anGifTag3[2];
	/* 0x2440 */ int64 anTest1[2];
	/* 0x2450 */ int64 anAlpha[2];
	/* 0x2460 */ int64 anTexA[2];
	/* 0x2470 */ int64 anColClamp1[2];
	/* 0x2480 */ int64 anXYOffset1[2];
	/* 0x2490 */ int64 anGifTag4[2];
	/* 0x24a0 */ int64 anPolys1[560];
	/* 0x3620 */ int64 anRestoreGifTag[2];
	/* 0x3630 */ int64 anRestoreTest[2];
	/* 0x3640 */ int64 anRestoreTexA[2];
	/* 0x3650 */ int64 anRestoreAlpha[2];
	/* 0x3660 */ int64 anRestoreXYOffset[2];
	/* 0x3670 */ int64 anDmaTag3[2];
};

struct VAnim { // 0xc
	/* 0x0 */ int16 anim0;
	/* 0x2 */ int16 anim1;
	/* 0x4 */ int16 anim2;
	/* 0x6 */ int16 frames;
	/* 0x8 */ uint8 mode;
	/* 0x9 */ uint8 alpha;
	/* 0xa */ uint16 frame;
};

typedef __SAnim SAnim;

struct __SAnim { // 0x10
	/* 0x0 */ VAnim *anim;
	/* 0x4 */ SAnim *nextAnim;
	/* 0x8 */ int16 mode;
	/* 0xa */ int16 data;
	/* 0xc */ int16 speedAdjust;
	/* 0xe */ int16 pad;
};

struct __AttackItem { // 0x30
	/* 0x00 */ int16 anim;
	/* 0x02 */ uint8 framesIn;
	/* 0x03 */ uint8 alphaIn;
	/* 0x04 */ uint8 framesOut;
	/* 0x06 */ uint16 force;
	/* 0x08 */ uint8 switchDelay;
	/* 0x09 */ uint8 ignoreDelay;
	/* 0x0a */ uint8 segmentToGlow;
	/* 0x0b */ uint8 startCollisionFrame;
	/* 0x0c */ uint8 handsToCollide;
	/* 0x0d */ uint8 endCollisionFrame;
	/* 0x0e */ uint8 ribbonStartFrame;
	/* 0x0f */ uint8 ribbonStartSegment;
	/* 0x10 */ uint8 ribbonEndSegment;
	/* 0x11 */ uint8 ribbonLifeTime;
	/* 0x12 */ uint8 ribbonFaceLifeTime;
	/* 0x13 */ uint8 knockBackFrames;
	/* 0x14 */ uint8 glowFadeInFrames;
	/* 0x15 */ uint8 glowFadeOutFrames;
	/* 0x16 */ uint16 ribbonStartOpacity;
	/* 0x18 */ uint32 ribbonStartColor;
	/* 0x1c */ uint32 ribbonEndColor;
	/* 0x20 */ uint32 glowColor;
	/* 0x24 */ uint16 knockBackDistance;
	/* 0x26 */ uint16 hitPowerScale;
	/* 0x28 */ uint32 attackType;
	/* 0x2c */ uint32 reactionType;
};

typedef __AttackItem AttackItem;

struct _ObjProp { // 0x8
	/* 0x0 */ uint16 version;
	/* 0x2 */ uint16 family;
	/* 0x4 */ uint16 id;
	/* 0x6 */ uint16 type;
};

typedef _ObjProp ObjProp;

typedef Message* (*objectMessageHandler)(/* parameters unknown */);

struct _ObjState { // 0xc
	/* 0x0 */ uint32 mode;
	/* 0x4 */ objectMessageHandler handler;
	/* 0x8 */ float fadeTimer;
};

typedef _ObjState ObjState;

struct _ObjSaveData { // 0x4
	/* 0x0 */ uint32 mode;
};

typedef _ObjSaveData ObjSaveData;

struct _ObjSplinter { // 0x8
	/* 0x0 */ int32 numSplintData;
	/* 0x4 */ void *splinterData;
};

typedef _ObjSplinter ObjSplinter;

struct _GravitateData { // 0x40
	/* 0x00 */ float steps;
	/* 0x04 */ float step;
	/* 0x08 */ Instance *force;
	/* 0x0c */ int32 linkNode;
	/* 0x10 */ Vector4f initRot;
	/* 0x20 */ Vector4f initPos;
	/* 0x30 */ int16 linkAnim;
	/* 0x32 */ int16 linkAnimMode;
};

typedef _GravitateData GravitateData;

struct _ThrowData { // 0x2c
	/* 0x00 */ Instance *force;
	/* 0x04 */ float physObTimer;
	/* 0x08 */ float trackingTimer;
	/* 0x0c */ float initialXRot;
	/* 0x10 */ float vel;
	/* 0x14 */ float xRotVel;
	/* 0x18 */ float yRotVel;
	/* 0x1c */ float zRotVel;
	/* 0x20 */ uint32 throwFlags;
	/* 0x24 */ Instance *throwingInstance;
	/* 0x28 */ float damageMult;
};

typedef _ThrowData ThrowData;

struct _BurningData { // 0x8
	/* 0x0 */ float amp;
	/* 0x4 */ float duration;
};

typedef _BurningData BurningData;

struct _RealignData { // 0x50
	/* 0x00 */ int upAxis;
	/* 0x04 */ int flatAxis;
	/* 0x08 */ int topNode;
	/* 0x0c */ float steps;
	/* 0x10 */ float step;
	/* 0x14 */ float length;
	/* 0x20 */ Vector4f startQuat;
	/* 0x30 */ Vector4f destQuat;
	/* 0x40 */ Vector4f norm;
};

typedef _RealignData RealignData;

struct _HoverData { // 0x40
	/* 0x00 */ float steps;
	/* 0x04 */ float waitSteps;
	/* 0x08 */ float step;
	/* 0x10 */ Vector4f startQuat;
	/* 0x20 */ Vector4f destQuat;
	/* 0x30 */ float startZ;
};

typedef _HoverData HoverData;

struct _CuttingPlaneData { // 0x10
	/* 0x0 */ float steps;
	/* 0x4 */ float step;
	/* 0x8 */ int32 startSeg;
	/* 0xc */ int32 endSeg;
};

typedef _CuttingPlaneData CuttingPlaneData;

struct _ObjCamera { // 0x10
	/* 0x0 */ Intro *cameraS;
	/* 0x4 */ int32 cameraSunit;
	/* 0x8 */ Intro *cameraT;
	/* 0xc */ int32 cameraTunit;
};

typedef _ObjCamera ObjCamera;

struct _ObjSound { // 0x8
	/* 0x0 */ int32 uniqueID;
	/* 0x4 */ SoundInstance *sound;
};

typedef _ObjSound ObjSound;

struct _DoorData { // 0x28
	/* 0x00 */ int32 mode;
	/* 0x04 */ int32 count;
	/* 0x08 */ Instance **list;
	/* 0x0c */ int32 cameraCount;
	/* 0x10 */ int32 cameraCurrent;
	/* 0x14 */ ObjCamera *camera;
	/* 0x18 */ int32 startCount;
	/* 0x1c */ ObjSound *start;
	/* 0x20 */ int32 stopCount;
	/* 0x24 */ ObjSound *stop;
};

typedef _DoorData DoorData;

struct _FadeData { // 0x4
	/* 0x0 */ float fadeTimer;
};

typedef _FadeData FadeData;

struct _CollisionData { // 0xc
	/* 0x0 */ uint32 action;
	/* 0x4 */ float distance;
	/* 0x8 */ int8 sphereAnim;
	/* 0x9 */ int8 terrainAnim;
	/* 0xa */ uint16 pad;
};

typedef _CollisionData CollisionData;

struct _MotionInterface { // 0xec
	/* 0x00 */ VAnim *runJump1;
	/* 0x04 */ VAnim *runJump2;
	/* 0x08 */ VAnim *runJump3;
	/* 0x0c */ VAnim *runJump4;
	/* 0x10 */ VAnim *standingJump1;
	/* 0x14 */ VAnim *standingJump2;
	/* 0x18 */ VAnim *standingJump3;
	/* 0x1c */ VAnim *standingJump4;
	/* 0x20 */ VAnim *highJump1;
	/* 0x24 */ VAnim *highJump2;
	/* 0x28 */ VAnim *highJump3;
	/* 0x2c */ VAnim *highJump4;
	/* 0x30 */ VAnim *startRun;
	/* 0x34 */ VAnim *walk;
	/* 0x38 */ VAnim *crawling;
	/* 0x3c */ VAnim *analogWalk;
	/* 0x40 */ VAnim *analogTrot;
	/* 0x44 */ VAnim *run;
	/* 0x48 */ VAnim *crouch;
	/* 0x4c */ VAnim *crouchIdle;
	/* 0x50 */ VAnim *drop;
	/* 0x54 */ VAnim *attackIdle;
	/* 0x58 */ VAnim *runToSlide;
	/* 0x5c */ VAnim *runToStand;
	/* 0x60 */ VAnim *stopA;
	/* 0x64 */ VAnim *stopB;
	/* 0x68 */ VAnim *stopC;
	/* 0x6c */ VAnim *idle;
	/* 0x70 */ VAnim *pickup;
	/* 0x74 */ VAnim *block;
	/* 0x78 */ VAnim *autofaceForward;
	/* 0x7c */ VAnim *autofaceBackward;
	/* 0x80 */ VAnim *autofaceDodgeBack;
	/* 0x84 */ VAnim *autofaceLeft;
	/* 0x88 */ VAnim *autofaceDodgeLeft;
	/* 0x8c */ VAnim *autofaceRight;
	/* 0x90 */ VAnim *autofaceDodgeRight;
	/* 0x94 */ VAnim *swampWalk;
	/* 0x98 */ VAnim *autofaceStepLeft;
	/* 0x9c */ VAnim *autofaceStepRight;
	/* 0xa0 */ VAnim *autofaceStepBack;
	/* 0xa4 */ VAnim *autofaceCrouchIdle;
	/* 0xa8 */ VAnim *autofaceStepForward;
	/* 0xac */ VAnim *blockLightLeft;
	/* 0xb0 */ VAnim *blockLightCenter;
	/* 0xb4 */ VAnim *blockLightRight;
	/* 0xb8 */ VAnim *blockHeavyLeft;
	/* 0xbc */ VAnim *blockHeavyCenter;
	/* 0xc0 */ VAnim *blockHeavyRight;
	/* 0xc4 */ VAnim *unblockLightLeft;
	/* 0xc8 */ VAnim *unblockLightCenter;
	/* 0xcc */ VAnim *unblockLightRight;
	/* 0xd0 */ VAnim *unblockLightLow;
	/* 0xd4 */ VAnim *unblockHeavyLeft;
	/* 0xd8 */ VAnim *unblockHeavyCenter;
	/* 0xdc */ VAnim *unblockHeavyRight;
	/* 0xe0 */ VAnim *unblockHeavyLow;
	/* 0xe4 */ VAnim *autofaceDodgeForward;
	/* 0xe8 */ VAnim *hitFromBehind;
};

typedef _MotionInterface MotionInterface;

struct _ObjWeaponAttributes { // 0x68
	/* 0x00 */ int32 damage;
	/* 0x04 */ int32 altDamage;
	/* 0x08 */ int16 knockBackDistance;
	/* 0x0a */ int8 knockBackFrames;
	/* 0x0b */ int8 dropSound;
	/* 0x0c */ int8 class;
	/* 0x0d */ int8 throwSphere;
	/* 0x0e */ int8 leftHandSphere;
	/* 0x0f */ int8 rightHandSphere;
	/* 0x10 */ int8 dropAnim;
	/* 0x11 */ int8 landAnim;
	/* 0x12 */ int8 unheldAnimLoop;
	/* 0x13 */ int8 heldAnimLoop;
	/* 0x14 */ int8 monsterHeldAnimLoop;
	/* 0x15 */ int8 altLandAnim;
	/* 0x16 */ int8 realignUp;
	/* 0x17 */ int8 realignFlat;
	/* 0x18 */ uint32 fatalClass;
	/* 0x1c */ uint32 fatalID;
	/* 0x20 */ uint32 fatalMask;
	/* 0x24 */ float fadeTime;
	/* 0x28 */ float flyFadeTime;
	/* 0x2c */ float length;
	/* 0x30 */ MotionInterface *mi;
	/* 0x34 */ AttackItem **attack;
	/* 0x38 */ AttackItem **lungeAttack;
	/* 0x3c */ AttackItem **runAttack;
	/* 0x40 */ AttackItem **lowAttack;
	/* 0x44 */ AttackItem **heavyAttack;
	/* 0x48 */ AttackItem **lowHeavyAttack;
	/* 0x4c */ AttackItem **lowLungeAttack;
	/* 0x50 */ AttackItem **airAttack;
	/* 0x54 */ LightTable *light;
	/* 0x58 */ CollisionData *collision;
	/* 0x5c */ int16 cpStart;
	/* 0x5e */ int16 cpEnd;
	/* 0x60 */ ObjSplinter splinter;
};

typedef _ObjWeaponAttributes ObjWeaponAttributes;

struct __Projectile { // 0x10
	/* 0x0 */ int8 model;
	/* 0x1 */ int8 startAnim;
	/* 0x2 */ int8 loopAnim;
	/* 0x3 */ int8 endAnim;
	/* 0x4 */ int32 flags;
	/* 0x8 */ int32 damage;
	/* 0xc */ ObjWeaponAttributes *weapon;
};

typedef __Projectile Projectile;

struct __ObjectEngagement { // 0x18
	/* 0x00 */ uint32 mode;
	/* 0x04 */ float xyDistance;
	/* 0x08 */ float zMinDelta;
	/* 0x0c */ float zMaxDelta;
	/* 0x10 */ float yCone;
	/* 0x14 */ float zCone;
};

typedef __ObjectEngagement ObjectEngagement;

struct _PhysicsProp { // 0x1c
	/* 0x00 */ ObjProp prop;
	/* 0x08 */ float force;
	/* 0x0c */ float radius;
	/* 0x10 */ float radiusCoef;
	/* 0x14 */ float maxVelocity;
	/* 0x18 */ float height;
};

typedef _PhysicsProp PhysicsProp;

struct EventTypeStructure { // 0x28
	/* 0x00 */ long int objectType;
	/* 0x08 */ char objectString[32];
};

struct AttributesReference { // 0x24
	/* 0x00 */ char string[32];
	/* 0x20 */ int value;
};

struct _GlobalData { // 0x300
	/* 0x000 */ Matrixf matrix0;
	/* 0x040 */ Matrixf matrix1;
	/* 0x080 */ Vector4f vector0;
	/* 0x090 */ Vector4f vector1;
	/* 0x0a0 */ Vector4f vector2;
	/* 0x0b0 */ Vector4f vector3;
	/* 0x0c0 */ uint32 versionNumber;
	/* 0x0c4 */ Camera *camera;
	/* 0x0c8 */ int16 *eventVars;
	/* 0x0cc */ int32 WaterInUse;
	/* 0x0d0 */ WaterLevelProcess WaterLevelArray[5];
	/* 0x15c */ uint32 (*INSTANCE_Query)(/* parameters unknown */);
	/* 0x160 */ void (*INSTANCE_Post)(/* parameters unknown */);
	/* 0x164 */ Instance* (*INSTANCE_IntroduceInstance)(/* parameters unknown */);
	/* 0x168 */ Intro* (*INSTANCE_FindIntro)(/* parameters unknown */);
	/* 0x16c */ Instance* (*INSTANCE_Find)(/* parameters unknown */);
	/* 0x170 */ Level* (*STREAM_GetLevelWithID)(/* parameters unknown */);
	/* 0x174 */ BSPTree* (*STREAM_GetBspTree)(/* parameters unknown */);
	/* 0x178 */ StreamUnit* (*STREAM_GetStreamUnitWithID)(/* parameters unknown */);
	/* 0x17c */ void (*VM_VMObjectSetTable)(/* parameters unknown */);
	/* 0x180 */ void (*VM_VMObjectSetColor)(/* parameters unknown */);
	/* 0x184 */ int (*EvtSetAnimationInstanceSwitchData)(/* parameters unknown */);
	/* 0x188 */ int (*EvtSetActionPlayHostAnimationData)(/* parameters unknown */);
	/* 0x18c */ int16 (*SCRIPT_CountFramesInSpline)(/* parameters unknown */);
	/* 0x190 */ void (*EVENT_InstanceSplineSet)(/* parameters unknown */);
	/* 0x194 */ MultiSpline* (*SCRIPT_GetMultiSpline)(/* parameters unknown */);
	/* 0x198 */ SplineDef* (*SCRIPT_GetPosSplineDef)(/* parameters unknown */);
	/* 0x19c */ int (*SCRIPT_GetSplineFrameNumber)(/* parameters unknown */);
	/* 0x1a0 */ int (*SOUND_IsInstanceSoundLoaded)(/* parameters unknown */);
	/* 0x1a4 */ void (*GXFilePrint)(/* parameters unknown */);
	/* 0x1a8 */ void (*SOUND_StartInstanceSound)(/* parameters unknown */);
	/* 0x1ac */ void (*SOUND_StopInstanceSound)(/* parameters unknown */);
	/* 0x1b0 */ void (*SOUND_SetInstanceSoundVolume)(/* parameters unknown */);
	/* 0x1b4 */ void (*SOUND_SetInstanceSoundPitch)(/* parameters unknown */);
	/* 0x1b8 */ void (*FX_StartInstanceEffect)(/* parameters unknown */);
	/* 0x1bc */ int (*SetPositionDataV4f)(/* parameters unknown */);
	/* 0x1c0 */ void (*ScriptKillInstance)(/* parameters unknown */);
	/* 0x1c4 */ void (*SAVE_UndestroyInstance)(/* parameters unknown */);
	/* 0x1c8 */ int (*SetObjectDataI)(/* parameters unknown */);
	/* 0x1cc */ void (*CAMERA_SetShake)(/* parameters unknown */);
	/* 0x1d0 */ void (*CAMERA_SetSmoothValue)(/* parameters unknown */);
	/* 0x1d4 */ void (*CAMERA_SetMode)(/* parameters unknown */);
	/* 0x1d8 */ void (*CAMERA_RestoreMode)(/* parameters unknown */);
	/* 0x1dc */ void (*CAMERA_Adjust_distance)(/* parameters unknown */);
	/* 0x1e0 */ void (*CAMERA_Adjust_tilt)(/* parameters unknown */);
	/* 0x1e4 */ void (*CAMERA_Adjust_roll)(/* parameters unknown */);
	/* 0x1e8 */ void (*CAMERA_Adjust_rotation)(/* parameters unknown */);
	/* 0x1ec */ void (*CAMERA_SetInstanceFocus)(/* parameters unknown */);
	/* 0x1f0 */ void (*INSTANCE_Broadcast)(/* parameters unknown */);
	/* 0x1f4 */ void (*GAMEPAD_Shock)(/* parameters unknown */);
	/* 0x1f8 */ void (*HINT_StartHint)(/* parameters unknown */);
	/* 0x1fc */ void (*HINT_KillSpecificHint)(/* parameters unknown */);
	/* 0x200 */ void (*FX_Start_Rain)(/* parameters unknown */);
	/* 0x204 */ void (*FX_Start_Snow)(/* parameters unknown */);
	/* 0x208 */ int (*MOVIE_PlayIngame)(/* parameters unknown */);
	/* 0x20c */ void (*TRANS_RotMatrixZYXf)(/* parameters unknown */);
	/* 0x210 */ float (*PHYSOBS_CheckObjectAxisAlignment)(/* parameters unknown */);
	/* 0x214 */ int (*HINT_GetCurrentHint)(/* parameters unknown */);
	/* 0x218 */ int (*STREAM_IsMorphInProgress)(/* parameters unknown */);
	/* 0x21c */ MultiSignal* (*SIGNAL_FindSignal)(/* parameters unknown */);
	/* 0x220 */ void (*FONT_Print)(/* parameters unknown */);
	/* 0x224 */ void (*SOUND_SetMusicVariable)(/* parameters unknown */);
	/* 0x228 */ int (*rcos)(/* parameters unknown */);
	/* 0x22c */ SavedIntro* (*SAVE_HasSavedIntro)(/* parameters unknown */);
	/* 0x230 */ void (*SAVE_DeleteBlock)(/* parameters unknown */);
	/* 0x234 */ void (*INSTANCE_RelativePositionInstance)(/* parameters unknown */);
	/* 0x238 */ void (*FX_EndInstanceEffects)(/* parameters unknown */);
	/* 0x23c */ void (*INSTANCE_StartFade)(/* parameters unknown */);
	/* 0x240 */ void (*GXFilePrintStr)(/* parameters unknown */);
	/* 0x244 */ int (*EVENT_FP_GreaterThan)(/* parameters unknown */);
	/* 0x248 */ int (*EVENT_FP_LessThan)(/* parameters unknown */);
	/* 0x24c */ int (*EVENT_FP_GreaterEqual)(/* parameters unknown */);
	/* 0x250 */ int (*EVENT_FP_LessEqual)(/* parameters unknown */);
	/* 0x254 */ int (*EVENT_FP_Equal)(/* parameters unknown */);
	/* 0x258 */ int (*EVENT_FP_NotEqual)(/* parameters unknown */);
	/* 0x25c */ void (*EVENT_DisplayString)(/* parameters unknown */);
	/* 0x260 */ int (*EVENT_CreateSoundStream)(/* parameters unknown */);
	/* 0x264 */ int (*EVENT_IsSoundStreamPlaying)(/* parameters unknown */);
	/* 0x268 */ void (*EVENT_PlaySoundStream)(/* parameters unknown */);
	/* 0x26c */ void (*EVENT_StopSoundStream)(/* parameters unknown */);
	/* 0x270 */ int (*EVENT_IsSoundStreamCueing)(/* parameters unknown */);
	/* 0x274 */ void (*FX_MotionBlur)(/* parameters unknown */);
	/* 0x278 */ void (*EVENT_TextureMorph)(/* parameters unknown */);
	/* 0x27c */ void (*SOUND_SetMicInstance)(/* parameters unknown */);
	/* 0x280 */ void (*INSTANCE_RelativePositionIntro)(/* parameters unknown */);
	/* 0x284 */ void (*MUSIC_SetVolumeReduction)(/* parameters unknown */);
	/* 0x288 */ int (*CAMERA_CinematicDone)(/* parameters unknown */);
	/* 0x28c */ void (*CAMERA_SetSpline0)(/* parameters unknown */);
	/* 0x290 */ void (*CAMERA_SetSpline1)(/* parameters unknown */);
	/* 0x294 */ void (*EVENT_ClearAlarm)(/* parameters unknown */);
	/* 0x298 */ void (*EVENT_SetAlarm)(/* parameters unknown */);
	/* 0x29c */ void (*LIGHT_SetInstanceLightGroupWithTime)(/* parameters unknown */);
	/* 0x2a0 */ void (*LIGHT_SetInstanceSpectralLightGroupWithTime)(/* parameters unknown */);
	/* 0x2a4 */ void (*EVENT_Trace)(/* parameters unknown */);
	/* 0x2a8 */ int (*EVENT_DoorInit)(/* parameters unknown */);
	/* 0x2ac */ int32 (*EVENT_Random)(/* parameters unknown */);
	/* 0x2b0 */ int (*EVENT_DoorAddSpline)(/* parameters unknown */);
	/* 0x2b4 */ void (*SOUND_LoadMusic)(/* parameters unknown */);
	/* 0x2b8 */ int (*EVENT_DoorAddCamera)(/* parameters unknown */);
	/* 0x2bc */ int (*G2EmulationInstanceQueryMode)(/* parameters unknown */);
	/* 0x2c0 */ int (*G2EmulationInstanceQueryFrame)(/* parameters unknown */);
	/* 0x2c4 */ int (*G2EmulationInstanceQueryAnimLength)(/* parameters unknown */);
	/* 0x2c8 */ void (*EVENT_SetBendMode)(/* parameters unknown */);
	/* 0x2cc */ void (*EVENT_StartWaterMove)(/* parameters unknown */);
	/* 0x2d0 */ void (*EVENT_PlayAmbient)(/* parameters unknown */);
	/* 0x2d4 */ void (*MAP_SetGoal)(/* parameters unknown */);
	/* 0x2d8 */ int (*G2EmulationInstanceQueryAnimation)(/* parameters unknown */);
	/* 0x2dc */ int (*EVENT_LinkToParent)(/* parameters unknown */);
	/* 0x2e0 */ int (*EVENT_DynamicLinkToParent)(/* parameters unknown */);
	/* 0x2e4 */ void (*INSTANCE_UnlinkFromParent)(/* parameters unknown */);
	/* 0x2e8 */ void (*EVENT_SetCameraProjDistance)(/* parameters unknown */);
	/* 0x2ec */ int (*EVENT_AttachStartSound)(/* parameters unknown */);
	/* 0x2f0 */ int (*EVENT_AttachEndSound)(/* parameters unknown */);
	/* 0x2f4 */ void (*GAMELOOP_SetScreenWipe)(/* parameters unknown */);
};

typedef _GlobalData GlobalData;

typedef void EventFunc(/* parameters unknown */);

typedef void (*EventRelocateFunc)(/* parameters unknown */);

struct EventSoundStream { // 0x8
	/* 0x0 */ void *soundstream;
	/* 0x4 */ int eventhandle;
};

struct FontColor { // 0x3
	/* 0x0 */ uint8 r;
	/* 0x1 */ uint8 g;
	/* 0x2 */ uint8 b;
};

struct __textEntry { // 0x18
	/* 0x00 */ float xpos;
	/* 0x04 */ float ypos;
	/* 0x08 */ int alpha;
	/* 0x0c */ int fontColor;
	/* 0x10 */ float yscale;
	/* 0x14 */ __textEntry *next;
	/* 0x18 */ char text[0];
};

typedef __textEntry TextEntry;

struct RAWHeader { // 0x70
	/* 0x00 */ int id;
	/* 0x04 */ int pixelDataStart;
	/* 0x08 */ int pixelDataLen;
	/* 0x0c */ int mode;
	/* 0x10 */ int attr;
	/* 0x14 */ int width;
	/* 0x18 */ int height;
	/* 0x1c */ int pitch;
	/* 0x20 */ int depth;
	/* 0x24 */ int adepth;
	/* 0x28 */ int rdepth;
	/* 0x2c */ int gdepth;
	/* 0x30 */ int bdepth;
	/* 0x34 */ int amask;
	/* 0x38 */ int rmask;
	/* 0x3c */ int gmask;
	/* 0x40 */ int bmask;
	/* 0x44 */ int mipLevel;
	/* 0x48 */ int kValue;
	/* 0x4c */ int log2Width;
	/* 0x50 */ int log2Height;
	/* 0x54 */ int mipLen[7];
};

struct timImage { // 0x10
	/* 0x0 */ int32 bnum;
	/* 0x4 */ int32 dx_dy;
	/* 0x8 */ short int tim_w;
	/* 0xa */ short int tim_h;
	/* 0xc */ char dataStart;
};

struct timFileHeader { // 0x18
	/* 0x00 */ int32 Id;
	/* 0x04 */ int32 Flags;
	/* 0x08 */ timImage image;
};

struct FontPos { // 0x10
	/* 0x0 */ float x;
	/* 0x4 */ float y;
	/* 0x8 */ float w;
	/* 0xc */ float h;
};

typedef void GlyphProcessFunction(/* parameters unknown */);

struct __GlyphData { // 0xa0
	/* 0x00 */ GlyphProcessFunction *process;
	/* 0x04 */ MessageQueue messages;
	/* 0x8c */ float glyph_time;
	/* 0x90 */ short int selectedGlyph;
	/* 0x92 */ short int glyph_open;
	/* 0x94 */ short int glyph_radius;
	/* 0x96 */ short int glyph_scale;
	/* 0x98 */ short int glyph_rotation;
	/* 0x9a */ short int target_glyph_rotation;
	/* 0x9c */ short int glyph_movement;
};

typedef __GlyphData GlyphData;

struct _GlyphTuneData { // 0x58
	/* 0x00 */ short int glyph_size;
	/* 0x02 */ short int glyph_darkness;
	/* 0x04 */ char glyph_costs[12];
	/* 0x10 */ short int glyph_range[12];
	/* 0x28 */ int32 color_array[12];
};

typedef _GlyphTuneData GlyphTuneData;

struct KeyCfgNameStruct { // 0xc
	/* 0x0 */ int specialChar;
	/* 0x4 */ int nameID;
	/* 0x8 */ char specialCharSpace[2];
};

typedef KeyCfgNameStruct KeyCfgName;

struct JoypadMappingStruct { // 0x4
	/* 0x0 */ short unsigned int psxData;
	/* 0x2 */ short unsigned int translation;
};

typedef JoypadMappingStruct JoypadMapping;

struct AnalogueData { // 0x6
	/* 0x0 */ short unsigned int pad;
	/* 0x2 */ unsigned char xR;
	/* 0x3 */ unsigned char yR;
	/* 0x4 */ unsigned char xL;
	/* 0x5 */ unsigned char yL;
};

struct ControllerPacket { // 0x22
	/* 0x00 */ unsigned char transStatus;
	/* 0x01 */ unsigned char dataFormat;
	/* 0x02 */ union { // 0x20
		/* 0x02 */ short unsigned int pad;
		/* 0x02 */ short unsigned int multitap[16];
		/* 0x02 */ short unsigned int mouse[2];
		/* 0x02 */ short unsigned int negcon[3];
		/* 0x02 */ AnalogueData analogue;
	} data;
};

struct checkable { // 0x8
	/* 0x0 */ uint32 whatAmI;
	/* 0x4 */ Instance *instance;
};

struct checker { // 0x8
	/* 0x0 */ Matrixf *lookMatrix;
	/* 0x4 */ Instance *instance;
};

struct MemTracker { // 0x14
	/* 0x00 */ MemHeader *rootNode;
	/* 0x04 */ uint32 totalMemory;
	/* 0x08 */ uint32 currentMemoryUsed;
	/* 0x0c */ int8 *lastMemoryAddress;
	/* 0x10 */ MemHeader *freeList;
};

struct VisibleInstance { // 0xc
	/* 0x0 */ Instance *instance;
	/* 0x4 */ uint16 clipInfo;
	/* 0x6 */ uint16 reflectClipInfo;
	/* 0x8 */ float close_q;
};

struct _RAZCNTRL_Key { // 0xc
	/* 0x0 */ int button;
	/* 0x4 */ int escSeq;
	/* 0x8 */ int count;
};

typedef _RAZCNTRL_Key RAZCNTRL_Key;

struct _RAZCNTRL_StringKey { // 0x10
	/* 0x0 */ int button;
	/* 0x4 */ float min;
	/* 0x8 */ float max;
	/* 0xc */ float count;
};

typedef _RAZCNTRL_StringKey RAZCNTRL_StringKey;

struct _RAZCNTRL_Command { // 0x8
	/* 0x0 */ RAZCNTRL_Key *key;
	/* 0x4 */ int type;
};

typedef _RAZCNTRL_Command RAZCNTRL_Command;

struct _RAZCNTRL_String { // 0xc
	/* 0x0 */ int32 length;
	/* 0x4 */ RAZCNTRL_StringKey *sequence;
	/* 0x8 */ int32 count;
};

typedef _RAZCNTRL_String RAZCNTRL_String;

struct _WeaponData { // 0xf0
	/* 0x00 */ ObjState state;
	/* 0x0c */ ThrowData throwData;
	/* 0x40 */ GravitateData gravData;
	/* 0x80 */ BurningData burnData;
	/* 0x90 */ RealignData realignData;
	/* 0xe0 */ CuttingPlaneData cpData;
};

typedef _WeaponData WeaponData;

struct _WeaponProp { // 0x70
	/* 0x00 */ ObjProp prop;
	/* 0x08 */ ObjWeaponAttributes attr;
};

typedef _WeaponProp WeaponProp;

struct BlockResolveList { // 0x4
	/* 0x0 */ int32 numOffsets;
	/* 0x4 */ int32 offsetList[0];
};

struct BlockInfo { // 0xc
	/* 0x0 */ int32 size;
	/* 0x4 */ int32 type;
	/* 0x8 */ int32 id;
};

struct BlockList { // 0x8
	/* 0x0 */ int32 versionNumber;
	/* 0x4 */ int32 numBlocks;
	/* 0x8 */ BlockInfo blockList[0];
};

struct _ResolveLoadCallbackInfo { // 0x28
	/* 0x00 */ int state;
	/* 0x04 */ int numBlocks;
	/* 0x08 */ BlockInfo *blockList;
	/* 0x0c */ uint8 **blockAddr;
	/* 0x10 */ int blockNum;
	/* 0x14 */ int bodyLen;
	/* 0x18 */ uint8 *bodyPtr;
	/* 0x1c */ int resolveLen;
	/* 0x20 */ uint8 *resolvePtr;
	/* 0x24 */ BlockResolveList *resolveList;
};

typedef _ResolveLoadCallbackInfo ResolveLoadCallbackInfo;

typedef int32 SignalHandleFunc(/* parameters unknown */);

typedef void RelocateSignalFunc(/* parameters unknown */);

struct SignalInfo { // 0xc
	/* 0x0 */ SignalHandleFunc *signalHandleFunc;
	/* 0x4 */ int16 length;
	/* 0x6 */ int16 onlyPlayer;
	/* 0x8 */ RelocateSignalFunc *signalRelocateFunc;
};

struct SignalResetStruct { // 0x8
	/* 0x0 */ MultiSignal *mSignal;
	/* 0x4 */ int32 timeLeft;
};

struct _VramLoader { // 0x30
	/* 0x00 */ int state;
	/* 0x04 */ int type;
	/* 0x08 */ VramTextureHeader header;
	/* 0x28 */ void *data;
	/* 0x2c */ void *returndata;
};

typedef _VramLoader VramLoader;

struct _VramLoadCallbackInfo { // 0x20
	/* 0x00 */ int state;
	/* 0x04 */ int numTextures;
	/* 0x08 */ int texlen;
	/* 0x0c */ int clutlen;
	/* 0x10 */ uint8 *texPtr;
	/* 0x14 */ uint8 *clutPtr;
	/* 0x18 */ int *entries;
	/* 0x1c */ int numEntries;
};

typedef _VramLoadCallbackInfo VramLoadCallbackInfo;

struct AnimName { // 0x20
	/* 0x00 */ char name[32];
};

typedef char CHAR;

typedef int32 INT;

typedef int32 LONG;

typedef int BOOL;

typedef uint16 WORD;

typedef uint32 UINT;

typedef uint32 DWORD;

typedef VOID *LPVOID;

typedef CHAR *LPCHAR;

typedef INT *LPINT;

typedef LONG *LPLONG;

typedef BOOL *LPBOOL;

typedef BYTE *LPBYTE;

typedef WORD *LPWORD;

typedef UINT *LPUINT;

typedef DWORD *LPDWORD;

typedef CHAR *LPSTR;

typedef DWORD HANDLE;

struct DOSHEADER { // 0x40
	/* 0x00 */ WORD wSignature;
	/* 0x02 */ WORD wLastPageBytes;
	/* 0x04 */ WORD wTotalPages;
	/* 0x06 */ WORD nRelocEntries;
	/* 0x08 */ WORD wHeaderSize;
	/* 0x0a */ WORD wMinHeapSize;
	/* 0x0c */ WORD wMaxHeapSize;
	/* 0x0e */ WORD wStackSegment;
	/* 0x10 */ WORD wStackOffset;
	/* 0x12 */ WORD wChecksum;
	/* 0x14 */ WORD wEntryOffset;
	/* 0x16 */ WORD wEntrySegment;
	/* 0x18 */ WORD wRelocationTable;
	/* 0x1a */ WORD wOverlay;
	/* 0x1c */ BYTE aReserved[32];
	/* 0x3c */ DWORD dwHeaderOffset;
};

struct LPDOSHEADER_s { // 0x40
	/* 0x00 */ WORD wSignature;
	/* 0x02 */ WORD wLastPageBytes;
	/* 0x04 */ WORD wTotalPages;
	/* 0x06 */ WORD nRelocEntries;
	/* 0x08 */ WORD wHeaderSize;
	/* 0x0a */ WORD wMinHeapSize;
	/* 0x0c */ WORD wMaxHeapSize;
	/* 0x0e */ WORD wStackSegment;
	/* 0x10 */ WORD wStackOffset;
	/* 0x12 */ WORD wChecksum;
	/* 0x14 */ WORD wEntryOffset;
	/* 0x16 */ WORD wEntrySegment;
	/* 0x18 */ WORD wRelocationTable;
	/* 0x1a */ WORD wOverlay;
	/* 0x1c */ BYTE aReserved[32];
	/* 0x3c */ DWORD dwHeaderOffset;
};
typedef struct LPDOSHEADER_s *LPDOSHEADER;

struct PEDIRECTORYENTRY { // 0x8
	/* 0x0 */ DWORD dwVirtualAddress;
	/* 0x4 */ DWORD dwSize;
};

struct LPPEDIRECTORYENTRY_s { // 0x8
	/* 0x0 */ DWORD dwVirtualAddress;
	/* 0x4 */ DWORD dwSize;
};
typedef struct LPPEDIRECTORYENTRY_s *LPPEDIRECTORYENTRY;

struct PEHEADER { // 0xc8
	/* 0x00 */ DWORD dwSignature;
	/* 0x04 */ WORD wMachine;
	/* 0x06 */ WORD nSections;
	/* 0x08 */ DWORD dwTimeStamp;
	/* 0x0c */ DWORD dwSymbolTable;
	/* 0x10 */ DWORD dwSymbolTableEntries;
	/* 0x14 */ WORD wOptHeaderSize;
	/* 0x16 */ WORD wFlags;
	/* 0x18 */ WORD wMagic;
	/* 0x1a */ WORD wLinkerVersion;
	/* 0x1c */ DWORD dwCodeSize;
	/* 0x20 */ DWORD dwDataSize;
	/* 0x24 */ DWORD dwBssSize;
	/* 0x28 */ DWORD dwEntryPoint;
	/* 0x2c */ DWORD dwCodeBase;
	/* 0x30 */ DWORD dwDataBase;
	/* 0x34 */ DWORD dwImageBase;
	/* 0x38 */ DWORD dwSectionAlign;
	/* 0x3c */ DWORD dwFileAlign;
	/* 0x40 */ DWORD dwOsVersion;
	/* 0x44 */ DWORD dwImageVersion;
	/* 0x48 */ DWORD dwSubSystemVersion;
	/* 0x4c */ DWORD dwReserved;
	/* 0x50 */ DWORD dwImageSize;
	/* 0x54 */ DWORD dwHeaderSize;
	/* 0x58 */ DWORD dwChecksum;
	/* 0x5c */ WORD wSubSystem;
	/* 0x5e */ WORD wDLLFlags;
	/* 0x60 */ DWORD dwStackSize;
	/* 0x64 */ DWORD dwStackCommitSize;
	/* 0x68 */ DWORD dwHeapSize;
	/* 0x6c */ DWORD dwHeapCommitSize;
	/* 0x70 */ DWORD dwReserved2;
	/* 0x74 */ DWORD nTotalEntries;
	/* 0x78 */ PEDIRECTORYENTRY ExportDirectory;
	/* 0x80 */ PEDIRECTORYENTRY ImportDirectory;
	/* 0x88 */ PEDIRECTORYENTRY ResourceDirectory;
	/* 0x90 */ PEDIRECTORYENTRY ExceptionDirectory;
	/* 0x98 */ PEDIRECTORYENTRY SecurityDirectory;
	/* 0xa0 */ PEDIRECTORYENTRY RelocationTable;
	/* 0xa8 */ PEDIRECTORYENTRY DebugDirectory;
	/* 0xb0 */ PEDIRECTORYENTRY DescriptionText;
	/* 0xb8 */ PEDIRECTORYENTRY MachineSpecs;
	/* 0xc0 */ PEDIRECTORYENTRY ThreadLocalStorage;
};

struct LPPEHEADER_s { // 0xc8
	/* 0x00 */ DWORD dwSignature;
	/* 0x04 */ WORD wMachine;
	/* 0x06 */ WORD nSections;
	/* 0x08 */ DWORD dwTimeStamp;
	/* 0x0c */ DWORD dwSymbolTable;
	/* 0x10 */ DWORD dwSymbolTableEntries;
	/* 0x14 */ WORD wOptHeaderSize;
	/* 0x16 */ WORD wFlags;
	/* 0x18 */ WORD wMagic;
	/* 0x1a */ WORD wLinkerVersion;
	/* 0x1c */ DWORD dwCodeSize;
	/* 0x20 */ DWORD dwDataSize;
	/* 0x24 */ DWORD dwBssSize;
	/* 0x28 */ DWORD dwEntryPoint;
	/* 0x2c */ DWORD dwCodeBase;
	/* 0x30 */ DWORD dwDataBase;
	/* 0x34 */ DWORD dwImageBase;
	/* 0x38 */ DWORD dwSectionAlign;
	/* 0x3c */ DWORD dwFileAlign;
	/* 0x40 */ DWORD dwOsVersion;
	/* 0x44 */ DWORD dwImageVersion;
	/* 0x48 */ DWORD dwSubSystemVersion;
	/* 0x4c */ DWORD dwReserved;
	/* 0x50 */ DWORD dwImageSize;
	/* 0x54 */ DWORD dwHeaderSize;
	/* 0x58 */ DWORD dwChecksum;
	/* 0x5c */ WORD wSubSystem;
	/* 0x5e */ WORD wDLLFlags;
	/* 0x60 */ DWORD dwStackSize;
	/* 0x64 */ DWORD dwStackCommitSize;
	/* 0x68 */ DWORD dwHeapSize;
	/* 0x6c */ DWORD dwHeapCommitSize;
	/* 0x70 */ DWORD dwReserved2;
	/* 0x74 */ DWORD nTotalEntries;
	/* 0x78 */ PEDIRECTORYENTRY ExportDirectory;
	/* 0x80 */ PEDIRECTORYENTRY ImportDirectory;
	/* 0x88 */ PEDIRECTORYENTRY ResourceDirectory;
	/* 0x90 */ PEDIRECTORYENTRY ExceptionDirectory;
	/* 0x98 */ PEDIRECTORYENTRY SecurityDirectory;
	/* 0xa0 */ PEDIRECTORYENTRY RelocationTable;
	/* 0xa8 */ PEDIRECTORYENTRY DebugDirectory;
	/* 0xb0 */ PEDIRECTORYENTRY DescriptionText;
	/* 0xb8 */ PEDIRECTORYENTRY MachineSpecs;
	/* 0xc0 */ PEDIRECTORYENTRY ThreadLocalStorage;
};
typedef struct LPPEHEADER_s *LPPEHEADER;

struct PESECTIONHEADER { // 0x28
	/* 0x00 */ BYTE aName[8];
	/* 0x08 */ DWORD dwVirtualSize;
	/* 0x0c */ DWORD dwVirtualAddress;
	/* 0x10 */ DWORD dwImageSize;
	/* 0x14 */ DWORD dwImageAddress;
	/* 0x18 */ DWORD dwRelocationTable;
	/* 0x1c */ DWORD dwLineNumTable;
	/* 0x20 */ WORD wRelocationTableEntries;
	/* 0x22 */ WORD wLineNumTableEntries;
	/* 0x24 */ DWORD dwFlags;
};

struct LPPESECTIONHEADER_s { // 0x28
	/* 0x00 */ BYTE aName[8];
	/* 0x08 */ DWORD dwVirtualSize;
	/* 0x0c */ DWORD dwVirtualAddress;
	/* 0x10 */ DWORD dwImageSize;
	/* 0x14 */ DWORD dwImageAddress;
	/* 0x18 */ DWORD dwRelocationTable;
	/* 0x1c */ DWORD dwLineNumTable;
	/* 0x20 */ WORD wRelocationTableEntries;
	/* 0x22 */ WORD wLineNumTableEntries;
	/* 0x24 */ DWORD dwFlags;
};
typedef struct LPPESECTIONHEADER_s *LPPESECTIONHEADER;

struct PEEXPORTTABLE { // 0x28
	/* 0x00 */ DWORD dwFlags;
	/* 0x04 */ DWORD dwTimeStamp;
	/* 0x08 */ DWORD dwVersion;
	/* 0x0c */ DWORD dwDLLName;
	/* 0x10 */ DWORD dwOrdinalBase;
	/* 0x14 */ DWORD dwTotalEntries;
	/* 0x18 */ DWORD dwEntries;
	/* 0x1c */ DWORD dwAddressTable;
	/* 0x20 */ DWORD dwNameTable;
	/* 0x24 */ DWORD dwOrdinalTable;
};

struct LPPEEXPORTTABLE_s { // 0x28
	/* 0x00 */ DWORD dwFlags;
	/* 0x04 */ DWORD dwTimeStamp;
	/* 0x08 */ DWORD dwVersion;
	/* 0x0c */ DWORD dwDLLName;
	/* 0x10 */ DWORD dwOrdinalBase;
	/* 0x14 */ DWORD dwTotalEntries;
	/* 0x18 */ DWORD dwEntries;
	/* 0x1c */ DWORD dwAddressTable;
	/* 0x20 */ DWORD dwNameTable;
	/* 0x24 */ DWORD dwOrdinalTable;
};
typedef struct LPPEEXPORTTABLE_s *LPPEEXPORTTABLE;

struct PEIMPORTTABLE { // 0x14
	/* 0x00 */ DWORD dwLookupTable;
	/* 0x04 */ DWORD dwTimeStamp;
	/* 0x08 */ DWORD dwForwarderChain;
	/* 0x0c */ DWORD dwDLLName;
	/* 0x10 */ DWORD dwAddressTable;
};

struct LPPEIMPORTTABLE_s { // 0x14
	/* 0x00 */ DWORD dwLookupTable;
	/* 0x04 */ DWORD dwTimeStamp;
	/* 0x08 */ DWORD dwForwarderChain;
	/* 0x0c */ DWORD dwDLLName;
	/* 0x10 */ DWORD dwAddressTable;
};
typedef struct LPPEIMPORTTABLE_s *LPPEIMPORTTABLE;

struct PERELOCHEADER { // 0x8
	/* 0x0 */ DWORD dwVirtualAddress;
	/* 0x4 */ DWORD dwSize;
};

struct LPPERELOCHEADER_s { // 0x8
	/* 0x0 */ DWORD dwVirtualAddress;
	/* 0x4 */ DWORD dwSize;
};
typedef struct LPPERELOCHEADER_s *LPPERELOCHEADER;

struct PEHANDLE { // 0x10
	/* 0x0 */ PEHEADER *lpHeader;
	/* 0x4 */ PESECTIONHEADER *lpSectionTable;
	/* 0x8 */ int firstReloc;
	/* 0xc */ DWORD lpImage;
};

struct LPPEHANDLE_s { // 0x10
	/* 0x0 */ PEHEADER *lpHeader;
	/* 0x4 */ PESECTIONHEADER *lpSectionTable;
	/* 0x8 */ int firstReloc;
	/* 0xc */ DWORD lpImage;
};
typedef struct LPPEHANDLE_s *LPPEHANDLE;

struct _LoadStatus { // 0xc
	/* 0x0 */ BigFile bigFile;
};

typedef _LoadStatus LoadStatus;

struct _MapInfo { // 0x18
	/* 0x00 */ localstr_t name;
	/* 0x04 */ uint16 goal;
	/* 0x06 */ uint16 border;
	/* 0x08 */ uint16 player;
	/* 0x0c */ int goalIndex;
	/* 0x10 */ int borderIndex;
	/* 0x14 */ int playerIndex;
};

typedef _MapInfo MapInfo;

typedef void (*MonsterFunc)(/* parameters unknown */);

typedef void (*MonsterDamageFunc)(/* parameters unknown */);

typedef void (*MonsterAutofaceDrawFunc)(/* parameters unknown */);

typedef void (*MonsterPerFrameDamageFunc)(/* parameters unknown */);

typedef int32 (*MonsterBehaviorStackFunc)(/* parameters unknown */);

typedef int32 (*MonsterHandlerFunc)(/* parameters unknown */);

typedef void (*MonsterSetPieceHandlerFunc)(/* parameters unknown */);

typedef int32 (*MonsterBehaviorShouldRunFunc)(/* parameters unknown */);

typedef int32 (*MonsterBehaviorEntryFunc)(/* parameters unknown */);

typedef void (*MonsterBehaviorExitFunc)(/* parameters unknown */);

struct _MonsterStateFuncs { // 0x10
	/* 0x0 */ MonsterFunc entryFunction;
	/* 0x4 */ MonsterFunc stateFunction;
	/* 0x8 */ MonsterFunc exitFunction;
	/* 0xc */ MonsterHandlerFunc handlerFunction;
};

typedef _MonsterStateFuncs MonsterStateFuncs;

struct _MonsterStateChoice { // 0x14
	/* 0x00 */ int state;
	/* 0x04 */ MonsterStateFuncs functions;
};

typedef _MonsterStateChoice MonsterStateChoice;

struct _MonsterBehaviorFuncs { // 0x14
	/* 0x00 */ MonsterBehaviorShouldRunFunc behaviorShouldRun;
	/* 0x04 */ MonsterBehaviorEntryFunc behaviorEntry;
	/* 0x08 */ MonsterBehaviorShouldRunFunc behaviorShouldContinue;
	/* 0x0c */ MonsterBehaviorExitFunc behaviorExit;
	/* 0x10 */ int32 numParameters;
};

typedef _MonsterBehaviorFuncs MonsterBehaviorFuncs;

struct _MonsterBehaviorChoice { // 0x18
	/* 0x00 */ int32 behavior;
	/* 0x04 */ MonsterBehaviorFuncs functions;
};

typedef _MonsterBehaviorChoice MonsterBehaviorChoice;

struct _MonsterFunctionTable { // 0x38
	/* 0x00 */ MonsterFunc initFunc;
	/* 0x04 */ MonsterFunc cleanUpFunc;
	/* 0x08 */ MonsterDamageFunc damageEffectFunc;
	/* 0x0c */ MonsterPerFrameDamageFunc perFrameDamageEffectFunc;
	/* 0x10 */ MonsterAutofaceDrawFunc autofaceDrawFunc;
	/* 0x14 */ MonsterHandlerFunc handlerFunc;
	/* 0x18 */ MonsterSetPieceHandlerFunc setPieceHandlerFunc;
	/* 0x1c */ MonsterBehaviorStackFunc behaviorStackFunc;
	/* 0x20 */ QueryFunc *queryFunc;
	/* 0x24 */ MessageFunc *messageFunc;
	/* 0x28 */ CollideFunc *collideFunc;
	/* 0x2c */ MonsterStateChoice *stateFuncs;
	/* 0x30 */ MonsterBehaviorChoice *behaviorFuncs;
	/* 0x34 */ char *versionID;
};

typedef _MonsterFunctionTable MonsterFunctionTable;

struct _BehaviorAmbientWanderData { // 0x8
	/* 0x0 */ int32 timeBetween;
	/* 0x4 */ int32 wanderTime;
};

typedef _BehaviorAmbientWanderData BehaviorAmbientWanderData;

struct _BehaviorAmbientFleeData { // 0x8
	/* 0x0 */ int32 startRange;
	/* 0x4 */ int32 endRange;
};

typedef _BehaviorAmbientFleeData BehaviorAmbientFleeData;

struct _BehaviorBirdFleeData { // 0xc
	/* 0x0 */ int32 startRange;
	/* 0x4 */ int32 endRange;
	/* 0x8 */ int32 fleeTime;
};

typedef _BehaviorBirdFleeData BehaviorBirdFleeData;

struct _ProjectileData { // 0x90
	/* 0x00 */ ObjState state;
	/* 0x0c */ int32 type;
	/* 0x10 */ float timer;
	/* 0x14 */ ThrowData throwData;
	/* 0x40 */ GravitateData gravData;
	/* 0x80 */ LightInstance *lightInst;
};

typedef _ProjectileData ProjectileData;

struct __ProjectileProp { // 0x10
	/* 0x0 */ ObjProp prop;
	/* 0x8 */ int32 totalProjectiles;
	/* 0xc */ Projectile *data;
};

typedef __ProjectileProp ProjectileProp;

struct _InteractData { // 0x10
	/* 0x0 */ ObjState state;
	/* 0xc */ int16 type;
	/* 0xe */ int16 class;
};

typedef _InteractData InteractData;

struct _FireData { // 0x4
	/* 0x0 */ int8 startMode;
	/* 0x1 */ uint8 unlitAnim;
	/* 0x2 */ uint8 litAnim;
	/* 0x3 */ uint8 smolderAnim;
};

typedef _FireData FireData;

struct _InteractProp { // 0x50
	/* 0x00 */ ObjProp prop;
	/* 0x08 */ uint32 conditions;
	/* 0x0c */ uint32 auxConditions;
	/* 0x10 */ uint32 action;
	/* 0x14 */ uint32 auxAction;
	/* 0x18 */ uint8 startAnim;
	/* 0x19 */ uint8 endAnim;
	/* 0x1a */ uint8 razielAnim;
	/* 0x1b */ uint8 razielAuxAnim;
	/* 0x1c */ uint8 endAuxAnim;
	/* 0x1d */ uint8 frame;
	/* 0x1e */ uint8 unusableAnim;
	/* 0x1f */ uint8 unusableMask;
	/* 0x20 */ uint16 startAnimMode;
	/* 0x22 */ uint16 distance;
	/* 0x24 */ uint16 newType;
	/* 0x26 */ uint16 newClass;
	/* 0x28 */ uint32 mode;
	/* 0x2c */ ObjectEngagement engage;
	/* 0x44 */ uint32 disableMask;
	/* 0x48 */ ObjWeaponAttributes *weapon;
	/* 0x4c */ FireData *fire;
};

typedef _InteractProp InteractProp;

struct _InteractWeaponData { // 0x100
	/* 0x00 */ WeaponData weaponData;
	/* 0xf0 */ InteractData interactData;
};

typedef _InteractWeaponData InteractWeaponData;

struct _InteractSaveData { // 0x10
	/* 0x0 */ ObjSaveData state;
	/* 0x4 */ int16 type;
	/* 0x6 */ int16 class;
	/* 0x8 */ int16 anim;
	/* 0xa */ int16 frame;
	/* 0xc */ int32 animMode;
};

typedef _InteractSaveData InteractSaveData;

struct _CollectibleData { // 0x14
	/* 0x00 */ ObjState state;
	/* 0x0c */ int32 lifeTime;
	/* 0x10 */ int32 distance;
};

typedef _CollectibleData CollectibleData;

struct _CollectibleProp { // 0x18
	/* 0x00 */ ObjProp prop;
	/* 0x08 */ int16 collectClass;
	/* 0x0a */ int16 collectValue;
	/* 0x0c */ uint32 distance;
	/* 0x10 */ uint8 idleAnim;
	/* 0x11 */ uint8 collectAnim;
	/* 0x12 */ uint8 idleAnimMode;
	/* 0x13 */ uint8 collectAnimMode;
	/* 0x14 */ uint8 collectedAnim;
	/* 0x15 */ uint8 collectedAnimMode;
	/* 0x16 */ uint16 spatialNode;
};

typedef _CollectibleProp CollectibleProp;

struct _CollectibleSaveData { // 0xc
	/* 0x0 */ ObjSaveData state;
	/* 0x4 */ int16 anim;
	/* 0x6 */ int16 frame;
	/* 0x8 */ int32 animMode;
};

typedef _CollectibleSaveData CollectibleSaveData;

struct _PuzzleData { // 0x120
	/* 0x000 */ ObjState state;
	/* 0x00c */ uint32 mode;
	/* 0x010 */ uint32 enable;
	/* 0x014 */ int32 idMask;
	/* 0x020 */ GravitateData gravData;
	/* 0x060 */ RealignData realignData;
	/* 0x0b0 */ HoverData hoverData;
	/* 0x0f0 */ DoorData doorData;
	/* 0x118 */ int16 pickedUp;
	/* 0x11a */ int16 anim;
	/* 0x11c */ int16 frame;
	/* 0x11e */ int16 animMode;
};

typedef _PuzzleData PuzzleData;

struct _PuzzleSaveData { // 0x10
	/* 0x0 */ ObjSaveData state;
	/* 0x4 */ int16 mode;
	/* 0x6 */ int16 enable;
	/* 0x8 */ int16 anim;
	/* 0xa */ int16 frame;
	/* 0xc */ int16 animMode;
	/* 0xe */ int16 idMask;
};

typedef _PuzzleSaveData PuzzleSaveData;

struct _PuzzleAnim { // 0x18
	/* 0x00 */ uint8 anim;
	/* 0x01 */ uint8 animMode;
	/* 0x02 */ uint8 keyAnim;
	/* 0x03 */ uint8 keyAnimMode;
	/* 0x04 */ uint8 playerAnim;
	/* 0x05 */ uint8 pad;
	/* 0x06 */ uint16 actionTime;
	/* 0x08 */ uint32 action;
	/* 0x0c */ uint32 actionData;
	/* 0x10 */ uint32 alignMode;
	/* 0x14 */ int32 distance;
};

typedef _PuzzleAnim PuzzleAnim;

struct _SourceInterface { // 0x24
	/* 0x00 */ uint32 sourceID;
	/* 0x04 */ ObjectEngagement engage;
	/* 0x1c */ PuzzleAnim *pickup;
	/* 0x20 */ PuzzleAnim *place;
};

typedef _SourceInterface SourceInterface;

struct _KeyInterface { // 0x24
	/* 0x00 */ uint32 sourceID;
	/* 0x04 */ uint32 lockID;
	/* 0x08 */ uint32 classID;
	/* 0x0c */ ObjectEngagement engage;
};

typedef _KeyInterface KeyInterface;

struct _LockInterface { // 0x30
	/* 0x00 */ uint32 lockID;
	/* 0x04 */ uint32 classID;
	/* 0x08 */ ObjectEngagement engage;
	/* 0x20 */ PuzzleAnim *place;
	/* 0x24 */ PuzzleAnim *classPlace;
	/* 0x28 */ PuzzleAnim *failedPlace;
	/* 0x2c */ PuzzleAnim *pickup;
};

typedef _LockInterface LockInterface;

struct _EnableInterface { // 0x4
	/* 0x0 */ uint8 enableAnim;
	/* 0x1 */ uint8 enabledAnim;
	/* 0x2 */ uint8 disableAnim;
	/* 0x3 */ uint8 disabledAnim;
};

typedef _EnableInterface EnableInterface;

struct _PuzzleProp { // 0x40
	/* 0x00 */ ObjProp prop;
	/* 0x08 */ MotionInterface *mi;
	/* 0x0c */ SourceInterface *si;
	/* 0x10 */ KeyInterface *ki;
	/* 0x14 */ LockInterface *li;
	/* 0x18 */ EnableInterface *ei;
	/* 0x1c */ int32 upAxis;
	/* 0x20 */ int32 flatAxis;
	/* 0x24 */ int32 collision;
	/* 0x28 */ float length;
	/* 0x2c */ float fadeTime;
	/* 0x30 */ int32 idMask;
	/* 0x34 */ uint8 startAnim;
	/* 0x35 */ uint8 startAnimMode;
	/* 0x36 */ uint8 pickupAnim;
	/* 0x37 */ uint8 pickupAnimMode;
	/* 0x38 */ uint8 dropAnim;
	/* 0x39 */ uint8 dropAnimMode;
	/* 0x3a */ uint8 hoverAnim;
	/* 0x3b */ uint8 hoverAnimMode;
	/* 0x3c */ uint8 monsterHeldAnim;
	/* 0x3d */ uint8 monsterHeldAnimMode;
};

typedef _PuzzleProp PuzzleProp;

struct RadarInfo { // 0x14
	/* 0x00 */ float angle;
	/* 0x04 */ float px;
	/* 0x08 */ float py;
	/* 0x0c */ float mx;
	/* 0x10 */ float my;
};

struct _MonsterWaypoint { // 0x30
	/* 0x00 */ PlanFace *face;
	/* 0x10 */ Vector4f point;
	/* 0x20 */ float dist;
	/* 0x24 */ float distLeft;
	/* 0x28 */ int32 expansionID;
	/* 0x2c */ _MonsterWaypoint *next;
};

typedef _MonsterWaypoint MonsterWaypoint;

typedef SkipData BehaviorSkipIfNotHungryData;

struct _BehaviorSoulFleeData { // 0x18
	/* 0x00 */ int32 origin;
	/* 0x04 */ int32 range;
	/* 0x08 */ int32 startRange;
	/* 0x0c */ int32 endRange;
	/* 0x10 */ int32 zTop;
	/* 0x14 */ int32 zBottom;
};

typedef _BehaviorSoulFleeData BehaviorSoulFleeData;

struct _BehaviorSentryiTrackData { // 0xc
	/* 0x0 */ int32 range;
	/* 0x4 */ int32 top;
	/* 0x8 */ int32 bottom;
};

typedef _BehaviorSentryiTrackData BehaviorSentryiTrackData;

struct _BehaviorSentryiWarnData { // 0xc
	/* 0x0 */ int32 range;
	/* 0x4 */ int32 top;
	/* 0x8 */ int32 bottom;
};

typedef _BehaviorSentryiWarnData BehaviorSentryiWarnData;

struct _BehaviorSentryiAttackData { // 0xc
	/* 0x0 */ int32 range;
	/* 0x4 */ int32 top;
	/* 0x8 */ int32 bottom;
};

typedef _BehaviorSentryiAttackData BehaviorSentryiAttackData;

struct _BehaviorSentryiSetTriggeredData { // 0x4
	/* 0x0 */ int32 range;
};

typedef _BehaviorSentryiSetTriggeredData BehaviorSentryiSetTriggeredData;

struct _G2PoolMemPool_Type { // 0x10
	/* 0x0 */ uint16 blockSize;
	/* 0x2 */ uint16 stackTop;
	/* 0x4 */ uint16 stackSize;
	/* 0x8 */ uint16 *stack;
	/* 0xc */ _G2PoolMem_Type *blockPool;
};

typedef _G2PoolMemPool_Type G2PoolMemPool;

struct _G2AnimSegKeyflagInfo_Type { // 0xc
	/* 0x0 */ uint32 *stream;
	/* 0x4 */ uint32 flags;
	/* 0x8 */ int bitCount;
};

typedef _G2AnimSegKeyflagInfo_Type G2AnimSegKeyflagInfo;

struct _G2AnimDecompressChannelInfo_Type { // 0x10
	/* 0x0 */ G2AnimKeylist *keylist;
	/* 0x4 */ float *chanData;
	/* 0x8 */ int storedKey;
	/* 0xc */ int targetKey;
};

typedef _G2AnimDecompressChannelInfo_Type G2AnimDecompressChannelInfo;

struct _G2AnimChanStatusBlockPool_Type { // 0x10
	/* 0x0 */ uint16 blockSize;
	/* 0x2 */ uint16 stackTop;
	/* 0x4 */ uint16 stackSize;
	/* 0x8 */ uint16 *stack;
	/* 0xc */ _G2AnimChanStatusBlock_Type *blockPool;
};

typedef _G2AnimChanStatusBlockPool_Type G2AnimChanStatusBlockPool;

typedef void (*G2AnimApplyControllerFn)(/* parameters unknown */);

struct _G2AnimControllerPool_Type { // 0x10
	/* 0x0 */ uint16 blockSize;
	/* 0x2 */ uint16 stackTop;
	/* 0x4 */ uint16 stackSize;
	/* 0x8 */ uint16 *stack;
	/* 0xc */ _G2AnimController_Type *blockPool;
};

typedef _G2AnimControllerPool_Type G2AnimControllerPool;

struct _G2AnimInterpStateBlockPool_Type { // 0x10
	/* 0x0 */ uint16 blockSize;
	/* 0x2 */ uint16 stackTop;
	/* 0x4 */ uint16 stackSize;
	/* 0x8 */ uint16 *stack;
	/* 0xc */ _G2AnimInterpStateBlock_Type *blockPool;
};

typedef _G2AnimInterpStateBlockPool_Type G2AnimInterpStateBlockPool;

struct _G2AppDataVM_Type { // 0x8
	/* 0x0 */ int argc;
	/* 0x4 */ char **argv;
};

typedef _G2AppDataVM_Type G2AppDataVM;

struct _PROFHDR { // 0x20
	/* 0x00 */ unsigned int interval;
	/* 0x04 */ unsigned int startpc;
	/* 0x08 */ unsigned int endpc;
	/* 0x0c */ unsigned int mask;
	/* 0x10 */ unsigned int flags;
	/* 0x14 */ unsigned int buffptr;
	/* 0x18 */ unsigned int bufflen;
	/* 0x1c */ unsigned int ptr;
};

typedef _PROFHDR PROFHDR;

struct _PROFSAMPLE { // 0x4
	/* 0x0 */ unsigned int pc;
};

typedef _PROFSAMPLE PROFSAMPLE;

struct DECI2_HDR { // 0x10
	/* 0x0 */ ushort length;
	/* 0x2 */ ushort reserved;
	/* 0x4 */ ushort protocol;
	/* 0x6 */ uchar source;
	/* 0x7 */ uchar destination;
	/* 0x8 */ uint code;
	/* 0xc */ uint seq;
};

struct ps2DrawEnv { // 0xf0
	/* 0x00 */ sceGifTag giftag;
	/* 0x10 */ sceGsDrawEnv1 draw;
	/* 0x90 */ sceGsClear clear;
};

struct ps2BlitEnv { // 0xa0
	/* 0x00 */ sceGifTag giftag;
	/* 0x10 */ uint64 alpha;
	/* 0x18 */ uint64 alphaaddr;
	/* 0x20 */ sceGsDrawEnv1 draw;
};

struct blitChunk { // 0x50
	/* 0x00 */ struct { // 0x50
		/* 0x00 */ PS2Vertex vertex0;
		/* 0x30 */ struct { // 0x20
			/* 0x30 */ float s;
			/* 0x34 */ float t;
			/* 0x38 */ float q;
			/* 0x3c */ int32 pad;
			/* 0x40 */ int32 x;
			/* 0x44 */ int32 y;
			/* 0x48 */ int32 z;
			/* 0x4c */ int32 f;
		} vertex1;
	} sprite;
};

struct BackBufferCopy { // 0x6f0
	/* 0x000 */ ps2BlitEnv draw_ps2_blit;
	/* 0x0a0 */ TexEnvTranslucent screenTex;
	/* 0x0f0 */ sceGifTag giftag;
	/* 0x100 */ blitChunk blitArray[16];
	/* 0x600 */ ps2DrawEnv draw_ps2;
};

typedef _MSwitchState MSwitchState;

struct _MSwitchTransition { // 0xc
	/* 0x0 */ VAnim *anim;
	/* 0x4 */ VAnim *razielAnim;
	/* 0x8 */ MSwitchState *next;
};

typedef _MSwitchTransition MSwitchTransition;

struct _MSwitchState { // 0x1c
	/* 0x00 */ uint32 id;
	/* 0x04 */ VAnim *idle;
	/* 0x08 */ VAnim *razielIdle;
	/* 0x0c */ MSwitchTransition *up;
	/* 0x10 */ MSwitchTransition *down;
	/* 0x14 */ MSwitchTransition *left;
	/* 0x18 */ MSwitchTransition *right;
};

struct _MSwitchData { // 0x24
	/* 0x00 */ ObjState state;
	/* 0x0c */ int32 mode;
	/* 0x10 */ MSwitchState *currentState;
	/* 0x14 */ G2AnimInterpInfo interpInfo;
};

typedef _MSwitchData MSwitchData;

struct _MSwitchSaveData { // 0x8
	/* 0x0 */ ObjSaveData state;
	/* 0x4 */ int32 mode;
};

typedef _MSwitchSaveData MSwitchSaveData;

struct _MSwitchProp { // 0x30
	/* 0x00 */ ObjProp prop;
	/* 0x08 */ uint8 startMode;
	/* 0x09 */ uint8 startAnim;
	/* 0x0a */ uint16 pad;
	/* 0x0c */ ObjectEngagement engage;
	/* 0x24 */ MSwitchState *state;
	/* 0x28 */ float distance;
	/* 0x2c */ uint32 facingMode;
};

typedef _MSwitchProp MSwitchProp;

struct __CannedSound { // 0x14
	/* 0x00 */ int16 bank;
	/* 0x02 */ int16 sound;
	/* 0x04 */ int16 startPitch;
	/* 0x06 */ int16 endPitch;
	/* 0x08 */ int16 startVolume;
	/* 0x0a */ int16 endVolume;
	/* 0x0c */ int32 time;
	/* 0x10 */ int32 distance;
};

typedef __CannedSound CannedSound;

struct __AlarmData { // 0x4
	/* 0x0 */ int16 command;
	/* 0x2 */ int16 data;
};

typedef __AlarmData AlarmData;

struct __Idle { // 0x1c
	/* 0x00 */ VAnim *anim;
	/* 0x04 */ float minTime;
	/* 0x08 */ float maxTime;
	/* 0x0c */ float delay;
	/* 0x10 */ int chance;
	/* 0x14 */ float loopTime;
	/* 0x18 */ int class;
};

typedef __Idle Idle;

struct __ThrowItem { // 0x2c
	/* 0x00 */ int16 prepAnim;
	/* 0x02 */ uint8 prepAnimFramesIn;
	/* 0x03 */ uint8 prepAnimAlphaIn;
	/* 0x04 */ int16 coilAnim;
	/* 0x06 */ uint8 coilAnimFramesIn;
	/* 0x07 */ uint8 coilAnimAlphaIn;
	/* 0x08 */ int16 throwAnim;
	/* 0x0a */ uint8 throwAnimFramesInFactor;
	/* 0x0b */ uint8 throwFrameToLaunch;
	/* 0x0c */ uint8 pad;
	/* 0x0d */ uint8 framesOut;
	/* 0x0e */ int16 launchPointX;
	/* 0x10 */ int16 launchPointY;
	/* 0x12 */ int16 launchPointZ;
	/* 0x14 */ int16 maxXRotation;
	/* 0x16 */ int16 minXRotation;
	/* 0x18 */ int16 maxZRotation;
	/* 0x1a */ int16 minZRotation;
	/* 0x1c */ int16 velocity;
	/* 0x1e */ int16 gravity;
	/* 0x20 */ int16 coilRot;
	/* 0x22 */ int16 selfAdjustingFlag;
	/* 0x24 */ SVector axis;
};

typedef __ThrowItem ThrowItem;

struct __EngagedInstance { // 0x8
	/* 0x0 */ Instance *instance;
	/* 0x4 */ uint32 distance;
};

typedef __EngagedInstance EngagedInstance;

struct __FitPoint { // 0x4
	/* 0x0 */ int16 x;
	/* 0x2 */ int16 y;
};

typedef __FitPoint FitPoint;

struct __SensoryData { // 0xf0
	/* 0x00 */ int Flags;
	/* 0x10 */ Vector4f ForwardNormal;
	/* 0x20 */ Vector4f AboveNormal;
	/* 0x30 */ Vector4f BelowNormal;
	/* 0x40 */ Vector4f BelowPoint;
	/* 0x50 */ Vector4f Delta;
	/* 0x60 */ int offenseSphere;
	/* 0x64 */ int defenseSphere;
	/* 0x68 */ int offenseSphereSegment;
	/* 0x6c */ Instance *HitMonster;
	/* 0x70 */ Instance *CurrentAutoFace;
	/* 0x74 */ Instance *LastAutoFace;
	/* 0x78 */ Instance *Portal;
	/* 0x7c */ EngagedInstance *EngagedList;
	/* 0x80 */ uint32 EngagedMask;
	/* 0x90 */ Vector4f lookAtPoint;
	/* 0xa0 */ uint32 heldClass;
	/* 0xa4 */ uint32 oldHeldClass;
	/* 0xb0 */ Matrixf marker;
};

typedef __SensoryData SensoryData;

struct _SoundRamp { // 0x1c
	/* 0x00 */ uint32 soundHandle;
	/* 0x04 */ int32 soundTimer;
	/* 0x08 */ int32 soundTotalTime;
	/* 0x0c */ uint32 soundDistance;
	/* 0x10 */ float soundStartPitch;
	/* 0x14 */ float soundEndPitch;
	/* 0x18 */ int16 soundStartVolume;
	/* 0x1a */ int16 soundEndVolume;
};

typedef _SoundRamp SoundRamp;

struct __Player { // 0xb10
	/* 0x000 */ int footPrint;
	/* 0x004 */ CharacterState State;
	/* 0x390 */ int frame;
	/* 0x394 */ int anim;
	/* 0x398 */ int vanim;
	/* 0x39c */ int Mode;
	/* 0x3a0 */ int RotationSegment;
	/* 0x3b0 */ Vector4f iVelocity;
	/* 0x3c0 */ Vector4f storedRot;
	/* 0x3d0 */ int Magnitude;
	/* 0x3d4 */ int input;
	/* 0x3d8 */ int lastInput;
	/* 0x3dc */ float ZDirection;
	/* 0x3e0 */ float Bearing;
	/* 0x3e4 */ float LastBearing;
	/* 0x3e8 */ int steeringMode;
	/* 0x3ec */ int16 steeringVelocity;
	/* 0x3ee */ int16 steeringAcceleration;
	/* 0x3f0 */ float steeringLockRotation;
	/* 0x3f4 */ int16 movementMinRate;
	/* 0x3f6 */ int16 movementMaxRate;
	/* 0x3f8 */ int16 movementMinAnalog;
	/* 0x3fa */ int16 movementMaxAnalog;
	/* 0x3fc */ int32 analogX;
	/* 0x400 */ int32 analogY;
	/* 0x410 */ SensoryData Senses;
	/* 0x500 */ Instance *attachedPlatform;
	/* 0x504 */ int16 dropOffHeight;
	/* 0x508 */ float fallZVelocity;
	/* 0x50c */ LegIK leftLeg;
	/* 0x53c */ LegIK rightLeg;
	/* 0x56c */ int32 smoothMode;
	/* 0x570 */ ArmIK rightArm;
	/* 0x580 */ Vector4f rightArmHandle;
	/* 0x590 */ int32 lockSegment;
	/* 0x5a0 */ Vector4f leftWing;
	/* 0x5b0 */ Vector4f rightWing;
	/* 0x5c0 */ int32 algoControlFlag;
	/* 0x5c4 */ int16 HealthScale;
	/* 0x5c6 */ int16 HealthBalls;
	/* 0x5c8 */ int HitPoints;
	/* 0x5cc */ int srHitPoints;
	/* 0x5d0 */ int DamageFrequency;
	/* 0x5d4 */ int invincibleTimer;
	/* 0x5d8 */ int Abilities;
	/* 0x5dc */ Instance *GlyphSystem;
	/* 0x5e0 */ uint16 GlyphManaBalls;
	/* 0x5e2 */ uint16 GlyphManaMax;
	/* 0x5e4 */ FitPoint *constrictData;
	/* 0x5e8 */ int16 constrictIndex;
	/* 0x5ea */ int16 constrictWaitIndex;
	/* 0x5ec */ SVector constrictCenter;
	/* 0x5f4 */ int16 constrictFlag;
	/* 0x5f6 */ int16 constrictGoodCircle;
	/* 0x5f8 */ uint32 constrictXTotal;
	/* 0x5fc */ uint32 constrictYTotal;
	/* 0x600 */ Instance *soulReaver;
	/* 0x604 */ uint32 currentSoulReaver;
	/* 0x608 */ float glideYScale;
	/* 0x60c */ float glideZScale;
	/* 0x610 */ int CurrentPlane;
	/* 0x614 */ int slipSlope;
	/* 0x618 */ char checkPoint[16];
	/* 0x628 */ float idleTime;
	/* 0x62c */ Idle *currentIdle;
	/* 0x630 */ Idle *lastIdle;
	/* 0x634 */ float lastIdleTime;
	/* 0x638 */ AttackItem *attack;
	/* 0x63c */ AttackItem **attackSequence;
	/* 0x640 */ int attackFlags;
	/* 0x644 */ int currentAttack;
	/* 0x648 */ Instance *attackCurrentHit;
	/* 0x64c */ Instance *attackLastHit;
	/* 0x650 */ FXGlowEffect *glowEffect;
	/* 0x654 */ Instance *attackedBy;
	/* 0x658 */ FatalityInterface *fatalityInterface;
	/* 0x65c */ int blockDirection;
	/* 0x660 */ Instance *blockInstance;
	/* 0x664 */ ThrowItem *throwData;
	/* 0x668 */ int throwMode;
	/* 0x670 */ Vector4f throwTarget;
	/* 0x680 */ float throwTargetDist;
	/* 0x684 */ Instance *throwInstance;
	/* 0x688 */ int16 throwXRot;
	/* 0x68a */ int16 throwZRot;
	/* 0x68c */ int throwReturnRot;
	/* 0x690 */ MessageQueue padCommands;
	/* 0x718 */ StateHandler returnState;
	/* 0x71c */ uint32 passedMask;
	/* 0x720 */ Vector4f extraRot;
	/* 0x730 */ int32 blankPad;
	/* 0x734 */ int effectsFlags;
	/* 0x738 */ int16 effectsFadeSource;
	/* 0x73a */ int16 effectsFadeDest;
	/* 0x73c */ int effectsFadeStep;
	/* 0x740 */ int effectsFadeSteps;
	/* 0x744 */ LightInstance *lightInst;
	/* 0x748 */ LightInstance *targetLightInst;
	/* 0x74c */ int16 autoFaceZone;
	/* 0x74e */ int16 autoFaceAngle;
	/* 0x750 */ float autoFaceLastRootAngle;
	/* 0x754 */ float autoFaceRootAngle;
	/* 0x758 */ float autoFaceTrueAngle;
	/* 0x75c */ int autoFaceAnim;
	/* 0x760 */ int autoFaceLastAnim;
	/* 0x764 */ int autoFaceToggle;
	/* 0x768 */ int autoFaceBlock;
	/* 0x76c */ int nothingCounter;
	/* 0x770 */ int timeAccumulator;
	/* 0x774 */ int32 stateControl0;
	/* 0x778 */ int32 stateControl1;
	/* 0x780 */ Vector4f puppetMoveToPoint;
	/* 0x790 */ Vector4f puppetRotToPoint;
	/* 0x7a0 */ int puppetHint;
	/* 0x7a4 */ int soundModifier;
	/* 0x7a8 */ G2TimerAtomicUnit alarmTable;
	/* 0x7ac */ G2TimerAtomicUnit terminator;
	/* 0x7b0 */ int16 swimSpeedAdjustment;
	/* 0x7b2 */ int16 swimTargetSpeed;
	/* 0x7b4 */ uint32 soundHandle;
	/* 0x7b8 */ int32 soundTimer;
	/* 0x7bc */ int32 soundTotalTime;
	/* 0x7c0 */ uint32 soundDistance;
	/* 0x7c4 */ int16 soundStartPitch;
	/* 0x7c6 */ int16 soundEndPitch;
	/* 0x7c8 */ int16 soundStartVolume;
	/* 0x7ca */ int16 soundEndVolume;
	/* 0x7cc */ uint32 soundHandle2;
	/* 0x7d0 */ int32 soundTimer2;
	/* 0x7d4 */ int32 soundTotalTime2;
	/* 0x7d8 */ uint32 soundDistance2;
	/* 0x7dc */ int16 soundStartPitch2;
	/* 0x7de */ int16 soundEndPitch2;
	/* 0x7e0 */ int16 soundStartVolume2;
	/* 0x7e2 */ int16 soundEndVolume2;
	/* 0x7e4 */ int32 soundTimerNext;
	/* 0x7e8 */ uint32 soundTimerData;
	/* 0x7ec */ int32 forcedGlideSpeed;
	/* 0x7f0 */ Vector4f collisionEdgeOffset;
	/* 0x800 */ SegmentBox segmentBox[5];
	/* 0xad0 */ SAnim *currentSAnim;
	/* 0xad4 */ VAnim *currentVAnim;
	/* 0xad8 */ int nextGroup;
	/* 0xadc */ int nextSingle;
	/* 0xae0 */ uint32 playerEvent;
	/* 0xae4 */ uint32 playerEventHistory;
	/* 0xae8 */ int currentHint;
	/* 0xaec */ uint32 playerEvent2;
	/* 0xaf0 */ uint32 playerEventHistory2;
	/* 0xaf4 */ uint32 puppetShowLine;
	/* 0xaf8 */ int puppetVoiceHandle;
	/* 0xafc */ Instance *spiritHookInstance;
	/* 0xb00 */ Position spiritHookPoint;
	/* 0xb08 */ int spiritHookFlag;
};

typedef __Player Player;

struct PlayerSaveData { // 0x1c
	/* 0x00 */ uint32 abilities;
	/* 0x04 */ uint32 currentPlane;
	/* 0x08 */ uint32 healthScale;
	/* 0x0c */ uint32 healthBalls;
	/* 0x10 */ uint16 manaBalls;
	/* 0x12 */ uint16 manaMax;
	/* 0x14 */ uint32 playerEventHistory;
	/* 0x18 */ uint32 currentReaver;
};

struct _TuneData { // 0x8
	/* 0x0 */ LightTable light;
};

typedef _TuneData TuneData;

struct RazielData { // 0x184
	/* 0x000 */ uint32 version;
	/* 0x004 */ TuneData *tuneData;
	/* 0x008 */ uint32 nonBurningRibbonStartColor;
	/* 0x00c */ uint32 nonBurningRibbonEndColor;
	/* 0x010 */ float analogWalkSpeed;
	/* 0x014 */ float analogTrotSpeed;
	/* 0x018 */ float runSpeed;
	/* 0x01c */ float analogRate;
	/* 0x020 */ float blockLightScale;
	/* 0x024 */ float blockHeavyScale;
	/* 0x028 */ float autoFaceJumpHeight;
	/* 0x02c */ Idle **idleList;
	/* 0x030 */ AttackItem ***attackList;
	/* 0x034 */ ThrowItem **throwList;
	/* 0x038 */ VAnim *virtualAnimations;
	/* 0x03c */ VAnim *virtualAnimSingle;
	/* 0x040 */ SAnim **stringAnimations;
	/* 0x044 */ VAnim **motionInterface;
	/* 0x048 */ FatalityInterface **fatalityInterface;
	/* 0x04c */ int numWingNodes;
	/* 0x050 */ ClothNode *wings;
	/* 0x054 */ float airReaverGlideYScale;
	/* 0x058 */ float airReaverGlideZScale;
	/* 0x05c */ int16 throwFadeValue;
	/* 0x05e */ int16 throwFadeInRate;
	/* 0x060 */ int throwFadeOutRate;
	/* 0x064 */ int throwManualDistance;
	/* 0x068 */ int16 healthMaterialRate;
	/* 0x06a */ int16 healthSpectralRate;
	/* 0x06c */ int16 healthInvinciblePostHit;
	/* 0x06e */ int16 healthInvinciblePostShunt;
	/* 0x070 */ float forceMinPitch;
	/* 0x074 */ float forceMaxPitch;
	/* 0x078 */ int16 forceMinVolume;
	/* 0x07a */ int16 forceMaxVolume;
	/* 0x07c */ uint32 forceRampTime;
	/* 0x080 */ float SwimPhysicsFallDamping;
	/* 0x084 */ float SwimPhysicsWaterFrequency;
	/* 0x088 */ float SwimPhysicsWaterAmplitude;
	/* 0x08c */ float SwimPhysicsUnderDeceleration;
	/* 0x090 */ float SwimPhysicsUnderKickVelocity;
	/* 0x094 */ float SwimPhysicsUnderKickAccel;
	/* 0x098 */ float SwimPhysicsUnderVelocity;
	/* 0x09c */ float SwimPhysicsUnderKickDecel;
	/* 0x0a0 */ float SwimPhysicsUnderStealthAdjust;
	/* 0x0a4 */ float SwimPhysicsCoilVelocity;
	/* 0x0a8 */ float SwimPhysicsCoilDecelerationIn;
	/* 0x0ac */ float SwimPhysicsCoilDecelerationOut;
	/* 0x0b0 */ float SwimPhysicsShotVelocity;
	/* 0x0b4 */ float SwimPhysicsShotAccelerationIn;
	/* 0x0b8 */ float SwimPhysicsShotAccelerationOut;
	/* 0x0bc */ float SwimPhysicsSurfVelocity;
	/* 0x0c0 */ float SwimPhysicsSurfAccelerationIn;
	/* 0x0c4 */ float SwimPhysicsSurfAccelerationOut;
	/* 0x0c8 */ float SwimPhysicsSurfKickVelocity;
	/* 0x0cc */ float SwimPhysicsSurfKickAccel;
	/* 0x0d0 */ float SwimPhysicsSurfMinRotation;
	/* 0x0d4 */ float SwimPhysicsSurfMaxRotation;
	/* 0x0d8 */ float SwimPhysicsSurfKickDecel;
	/* 0x0dc */ int LowerSectionStartSegment;
	/* 0x0e0 */ int LowerSectionEndSegment;
	/* 0x0e4 */ int UpperSectionStartSegment;
	/* 0x0e8 */ int UpperSectionEndSegment;
	/* 0x0ec */ int WingSectionStartSegment;
	/* 0x0f0 */ int WingSectionEndSegment;
	/* 0x0f4 */ int TransSegment;
	/* 0x0f8 */ int RootSegment;
	/* 0x0fc */ int WaistSegment;
	/* 0x100 */ int LeftHipSegment;
	/* 0x104 */ int LeftKneeSegment;
	/* 0x108 */ int LeftAnkleSegment;
	/* 0x10c */ int LeftToeSegment;
	/* 0x110 */ int RightHipSegment;
	/* 0x114 */ int RightKneeSegment;
	/* 0x118 */ int RightAnkleSegment;
	/* 0x11c */ int RightToeSegment;
	/* 0x120 */ int SpineSegment;
	/* 0x124 */ int ManuSegment;
	/* 0x128 */ int Neck1Segment;
	/* 0x12c */ int Neck2Segment;
	/* 0x130 */ int HeadSegment;
	/* 0x134 */ int LeftElbowSegment;
	/* 0x138 */ int LeftWristSegment;
	/* 0x13c */ int LeftIndexSegment;
	/* 0x140 */ int RightShoulderSegment;
	/* 0x144 */ int RightElbowSegment;
	/* 0x148 */ int RightWristSegment;
	/* 0x14c */ int RightIndexSegment;
	/* 0x150 */ int GrabPivotSegment;
	/* 0x154 */ int GrabJointSegment;
	/* 0x158 */ int LeftWingSegment1;
	/* 0x15c */ int LeftWingSegment2;
	/* 0x160 */ int LeftWingSegment3;
	/* 0x164 */ int LeftWingSegment4;
	/* 0x168 */ int LeftWingSegment5;
	/* 0x16c */ int RightWingSegment1;
	/* 0x170 */ int RightWingSegment2;
	/* 0x174 */ int RightWingSegment3;
	/* 0x178 */ int RightWingSegment4;
	/* 0x17c */ int RightWingSegment5;
	/* 0x180 */ int LastSegment;
};

struct _PuzzleInitData { // 0x10
	/* 0x0 */ uint32 mode;
	/* 0x4 */ PuzzleAnim *anim;
	/* 0x8 */ Instance *instance;
	/* 0xc */ Instance *key;
};

typedef _PuzzleInitData PuzzleInitData;

struct _SwitchData { // 0x30
	/* 0x00 */ ObjState state;
	/* 0x0c */ int32 mode;
	/* 0x10 */ float accumulator;
	/* 0x20 */ Vector4f axis;
};

typedef _SwitchData newSwitchData;

struct _SwitchSaveData { // 0x14
	/* 0x00 */ ObjSaveData state;
	/* 0x04 */ int32 mode;
	/* 0x08 */ float accumulator;
	/* 0x0c */ int16 anim;
	/* 0x0e */ int16 frame;
	/* 0x10 */ int32 animMode;
};

typedef _SwitchSaveData SwitchSaveData;

struct _SwitchProp { // 0x28
	/* 0x00 */ ObjProp prop;
	/* 0x08 */ int16 distance;
	/* 0x0a */ int16 class;
	/* 0x0c */ uint8 onAnim;
	/* 0x0d */ uint8 offAnim;
	/* 0x0e */ uint8 failedOnAnim;
	/* 0x0f */ uint8 failedOffAnim;
	/* 0x10 */ uint8 shutAnim;
	/* 0x11 */ uint8 onWalkTimer;
	/* 0x12 */ uint8 offWalkTimer;
	/* 0x13 */ uint8 walkMode;
	/* 0x14 */ uint8 leftAnim;
	/* 0x15 */ uint8 rightAnim;
	/* 0x16 */ uint8 razielLeftAnim;
	/* 0x17 */ uint8 razielRightAnim;
	/* 0x18 */ uint16 edgeDistance;
	/* 0x1a */ uint16 rotNode;
	/* 0x1c */ uint8 razielOnAnim;
	/* 0x1d */ uint8 razielOffAnim;
	/* 0x1e */ uint8 razielFailedOnAnim;
	/* 0x1f */ uint8 razielFailedOffAnim;
	/* 0x20 */ uint8 startMode;
	/* 0x21 */ uint8 startAnim;
	/* 0x22 */ uint16 engageXYDistance;
	/* 0x24 */ int8 engageZMinDelta;
	/* 0x25 */ int8 engageZMaxDelta;
	/* 0x26 */ uint8 engageYCone;
	/* 0x27 */ uint8 engageZCone;
};

typedef _SwitchProp SwitchProp;

struct _BlockData { // 0x30
	/* 0x00 */ ObjState state;
	/* 0x10 */ Vector4f pos;
	/* 0x20 */ Instance *force;
	/* 0x24 */ float xForce;
	/* 0x28 */ float yForce;
	/* 0x2c */ int32 pathNumber;
};

typedef _BlockData BlockData;

struct _BlockProp { // 0x10
	/* 0x0 */ ObjProp prop;
	/* 0x8 */ int32 damage;
	/* 0xc */ int32 dropSound;
};

typedef _BlockProp BlockProp;

struct __razController { // 0x4
	/* 0x0 */ uint16 segment;
	/* 0x2 */ uint16 type;
};

typedef __razController razController;

struct LocalizationHeader { // 0x8
	/* 0x0 */ language_t language;
	/* 0x4 */ int numStrings;
};

struct sceIpuRAW8 { // 0x180
	/* 0x000 */ u_char y[256];
	/* 0x100 */ u_char cb[64];
	/* 0x140 */ u_char cr[64];
};

struct sceIpuRAW16 { // 0x300
	/* 0x000 */ short int y[256];
	/* 0x200 */ short int cb[64];
	/* 0x280 */ short int cr[64];
};

struct sceIpuRGB32 { // 0x400
	/* 0x000 */ u_int pix[256];
};

struct sceIpuRGB16 { // 0x200
	/* 0x000 */ u_short pix[256];
};

struct sceIpuINDX4 { // 0x80
	/* 0x00 */ u_int pix[32];
};

struct sceIpuDmaEnv { // 0x24
	/* 0x00 */ u_int d4madr;
	/* 0x04 */ u_int d4tadr;
	/* 0x08 */ u_int d4qwc;
	/* 0x0c */ u_int d4chcr;
	/* 0x10 */ u_int d3madr;
	/* 0x14 */ u_int d3qwc;
	/* 0x18 */ u_int d3chcr;
	/* 0x1c */ u_int ipubp;
	/* 0x20 */ u_int ipuctrl;
};

struct sceMpegCbDataError { // 0x8
	/* 0x0 */ sceMpegCbType type;
	/* 0x4 */ char *errMessage;
};

struct sceMpegCbDataTimeStamp { // 0x18
	/* 0x00 */ sceMpegCbType type;
	/* 0x08 */ long int pts;
	/* 0x10 */ long int dts;
};

struct sceMpegCbDataStr { // 0x20
	/* 0x00 */ sceMpegCbType type;
	/* 0x04 */ u_char *header;
	/* 0x08 */ u_char *data;
	/* 0x0c */ u_int len;
	/* 0x10 */ long int pts;
	/* 0x18 */ long int dts;
};

union sceMpegCbData { // 0x20
	/* 0x00 */ sceMpegCbType type;
	/* 0x00 */ sceMpegCbDataError error;
	/* 0x00 */ sceMpegCbDataTimeStamp ts;
	/* 0x00 */ sceMpegCbDataStr str;
};

struct sceMpeg { // 0x48
	/* 0x00 */ int width;
	/* 0x04 */ int height;
	/* 0x08 */ int frameCount;
	/* 0x10 */ long int pts;
	/* 0x18 */ long int dts;
	/* 0x20 */ u_long flags;
	/* 0x28 */ long int pts2nd;
	/* 0x30 */ long int dts2nd;
	/* 0x38 */ u_long flags2nd;
	/* 0x40 */ void *sys;
};

typedef int (*sceMpegCallback)(/* parameters unknown */);

struct TimeStamp { // 0x18
	/* 0x00 */ long int pts;
	/* 0x08 */ long int dts;
	/* 0x10 */ int pos;
	/* 0x14 */ int len;
};

struct ViBuf { // 0x60
	/* 0x00 */ u_long128 *data;
	/* 0x04 */ u_long128 *tag;
	/* 0x08 */ int n;
	/* 0x0c */ int dmaStart;
	/* 0x10 */ int dmaN;
	/* 0x14 */ int readBytes;
	/* 0x18 */ int buffSize;
	/* 0x1c */ sceIpuDmaEnv env;
	/* 0x40 */ int sema;
	/* 0x44 */ int isActive;
	/* 0x48 */ long int totalBytes;
	/* 0x50 */ TimeStamp *ts;
	/* 0x54 */ int n_ts;
	/* 0x58 */ int count_ts;
	/* 0x5c */ int wt_ts;
};

struct VideoDec { // 0xb8
	/* 0x00 */ sceMpeg mpeg;
	/* 0x48 */ ViBuf vibuf;
	/* 0xa8 */ u_int state;
	/* 0xac */ int sema;
	/* 0xb0 */ int hid_endimage;
	/* 0xb4 */ int hid_vblank;
};

struct ReadBuf { // 0x5000c
	/* 0x00000 */ u_char data[327680];
	/* 0x50000 */ int put;
	/* 0x50004 */ int count;
	/* 0x50008 */ int size;
};

struct VoData { // 0x195000
	/* 0x000000 */ u_char v[1658880];
};

struct VoTag { // 0x4ce40
	/* 0x00000 */ int status;
	/* 0x00004 */ int dummy[15];
	/* 0x00040 */ u_int v[2][39360];
};

struct VoBuf { // 0x14
	/* 0x00 */ VoData *data;
	/* 0x04 */ VoTag *tag;
	/* 0x08 */ int write;
	/* 0x0c */ int count;
	/* 0x10 */ int size;
};

struct SpuStreamHeader { // 0x20
	/* 0x00 */ char id[4];
	/* 0x04 */ int size;
	/* 0x08 */ int type;
	/* 0x0c */ int rate;
	/* 0x10 */ int ch;
	/* 0x14 */ int interSize;
	/* 0x18 */ int loopStart;
	/* 0x1c */ int loopEnd;
};

struct SpuStreamBody { // 0x8
	/* 0x0 */ char id[4];
	/* 0x4 */ int size;
};

struct AudioDec { // 0x5c
	/* 0x00 */ int state;
	/* 0x04 */ SpuStreamHeader sshd;
	/* 0x24 */ SpuStreamBody ssbd;
	/* 0x2c */ int hdrCount;
	/* 0x30 */ u_char *data;
	/* 0x34 */ int put;
	/* 0x38 */ int count;
	/* 0x3c */ int size;
	/* 0x40 */ int totalBytes;
	/* 0x44 */ int iopBuff;
	/* 0x48 */ int iopBuffSize;
	/* 0x4c */ int iopLastPos;
	/* 0x50 */ int iopPausePos;
	/* 0x54 */ int totalBytesSent;
	/* 0x58 */ int iopZero;
};

struct Rect { // 0x10
	/* 0x0 */ int x;
	/* 0x4 */ int y;
	/* 0x8 */ int w;
	/* 0xc */ int h;
};

union QWORD { // 0x10
	/* 0x0 */ u_long128 q;
	/* 0x0 */ u_long l[2];
	/* 0x0 */ u_int i[4];
	/* 0x0 */ u_short s[8];
	/* 0x0 */ u_char c[16];
};

typedef int menu_item_fn_t(/* parameters unknown */);

typedef int menu_item_wait_fn_t(/* parameters unknown */);

typedef void menu_draw_fn_t(/* parameters unknown */);

struct menu_format_t { // 0x1c
	/* 0x00 */ int xpos;
	/* 0x04 */ int ypos;
	/* 0x08 */ int lineskip;
	/* 0x0c */ int itemskip;
	/* 0x10 */ int width;
	/* 0x14 */ int center;
	/* 0x18 */ int border;
};

struct menu_stack_t { // 0x24
	/* 0x00 */ menu_fn_t *fn;
	/* 0x04 */ int index;
	/* 0x08 */ menu_format_t format;
};

struct menu_item_t { // 0x14
	/* 0x00 */ char *text;
	/* 0x04 */ menu_item_fn_t *fn;
	/* 0x08 */ menu_item_wait_fn_t *waitFunction;
	/* 0x0c */ int32 parameter;
	/* 0x10 */ int32 flags;
};

struct menu_t { // 0x3c0
	/* 0x000 */ int nmenus;
	/* 0x004 */ int nitems;
	/* 0x008 */ int nbytes;
	/* 0x00c */ menu_stack_t stack[5];
	/* 0x0c0 */ menu_item_t items[12];
	/* 0x1b0 */ char bytes[512];
	/* 0x3b0 */ menu_draw_fn_t *drawfn;
	/* 0x3b4 */ menu_item_wait_fn_t *waitFunction;
	/* 0x3b8 */ int push;
	/* 0x3bc */ int pop;
};

struct Extents2d { // 0x10
	/* 0x0 */ int xmin;
	/* 0x4 */ int xmax;
	/* 0x8 */ int ymin;
	/* 0xc */ int ymax;
};

struct menu_sound_entry_t { // 0x8
	/* 0x0 */ menu_sound_t sound;
	/* 0x4 */ int sfx;
};

typedef int _iconVu0IVECTOR[4];

typedef float _iconVu0FVECTOR[4];

struct sceMcIconSys { // 0x3c4
	/* 0x000 */ unsigned char Head[4];
	/* 0x004 */ short unsigned int Reserv1;
	/* 0x006 */ short unsigned int OffsLF;
	/* 0x008 */ unsigned int Reserv2;
	/* 0x00c */ unsigned int TransRate;
	/* 0x010 */ _iconVu0IVECTOR BgColor[4];
	/* 0x050 */ _iconVu0FVECTOR LightDir[3];
	/* 0x080 */ _iconVu0FVECTOR LightColor[3];
	/* 0x0b0 */ _iconVu0FVECTOR Ambient;
	/* 0x0c0 */ unsigned char TitleName[68];
	/* 0x104 */ unsigned char FnameView[64];
	/* 0x144 */ unsigned char FnameCopy[64];
	/* 0x184 */ unsigned char FnameDel[64];
	/* 0x1c4 */ unsigned char Reserve3[512];
};

struct sceMcTblGetDir { // 0x40
	/* 0x00 */ struct { // 0x8
		/* 0x00 */ unsigned char Resv2;
		/* 0x01 */ unsigned char Sec;
		/* 0x02 */ unsigned char Min;
		/* 0x03 */ unsigned char Hour;
		/* 0x04 */ unsigned char Day;
		/* 0x05 */ unsigned char Month;
		/* 0x06 */ short unsigned int Year;
	} _Create;
	/* 0x08 */ struct { // 0x8
		/* 0x08 */ unsigned char Resv2;
		/* 0x09 */ unsigned char Sec;
		/* 0x0a */ unsigned char Min;
		/* 0x0b */ unsigned char Hour;
		/* 0x0c */ unsigned char Day;
		/* 0x0d */ unsigned char Month;
		/* 0x0e */ short unsigned int Year;
	} _Modify;
	/* 0x10 */ unsigned int FileSizeByte;
	/* 0x14 */ short unsigned int AttrFile;
	/* 0x16 */ short unsigned int Reserve1;
	/* 0x18 */ unsigned int Reserve2;
	/* 0x1c */ unsigned int PdaAplNo;
	/* 0x20 */ unsigned char EntryName[32];
} __attribute__((aligned(64)));

struct _MemCardFile { // 0x50
	/* 0x00 */ char fname[64];
	/* 0x40 */ int fd;
	/* 0x44 */ uint8 *data;
	/* 0x48 */ int size;
	/* 0x4c */ int fptr;
};

typedef _MemCardFile MemCardFile;

struct _MemCardInfo { // 0x580
	/* 0x000 */ sceMcTblGetDir table[4];
	/* 0x100 */ sceMcIconSys icon;
	/* 0x4c4 */ int format;
	/* 0x4c8 */ int type;
	/* 0x4cc */ int free;
	/* 0x4d0 */ int state;
	/* 0x4d4 */ int substate;
	/* 0x4d8 */ int attributes;
	/* 0x4dc */ int command;
	/* 0x4e0 */ int line;
	/* 0x4e4 */ MemCardFile openFile;
	/* 0x534 */ void *saveData;
	/* 0x538 */ int saveSize;
	/* 0x53c */ int filestatus[4];
	/* 0x54c */ int fileentry[4];
};

typedef _MemCardInfo MemCardInfo;

struct _AnimatedData { // 0x10
	/* 0x0 */ ObjState state;
	/* 0xc */ uint8 waterState;
	/* 0xd */ uint8 restoreAnim;
	/* 0xe */ uint8 restoreFrame;
	/* 0xf */ uint8 restoreAnimMode;
};

typedef _AnimatedData AnimatedData;

struct _AnimatedProp { // 0x10
	/* 0x0 */ ObjProp prop;
	/* 0x8 */ uint32 startAnimMode;
	/* 0xc */ uint8 startAnim;
	/* 0xd */ uint8 underwaterAnim;
	/* 0xe */ uint8 underwaterAnimMode;
	/* 0xf */ uint8 pad;
};

typedef _AnimatedProp AnimatedProp;

struct _AnimatedSaveData { // 0xc
	/* 0x0 */ ObjSaveData state;
	/* 0x4 */ int16 anim;
	/* 0x6 */ int16 frame;
	/* 0x8 */ int32 animMode;
};

typedef _AnimatedSaveData AnimatedSaveData;

struct SoftSegment { // 0x30
	/* 0x00 */ uint32 index;
	/* 0x10 */ Vector4f min;
	/* 0x20 */ Vector4f max;
};

struct SoftBody { // 0x8
	/* 0x0 */ uint32 numSegments;
	/* 0x4 */ SoftSegment *segments;
};

struct _ArmorData { // 0x50
	/* 0x00 */ ObjState state;
	/* 0x10 */ GravitateData gravData;
};

typedef _ArmorData ArmorData;

struct _ArmorProp { // 0x18
	/* 0x00 */ ObjProp prop;
	/* 0x08 */ int32 linkMarker;
	/* 0x0c */ uint8 blockAnim;
	/* 0x0d */ uint8 unblockAnim;
	/* 0x0e */ uint8 pickupAnim;
	/* 0x0f */ uint8 pickupAnimMode;
	/* 0x10 */ ObjSplinter attr;
};

typedef _ArmorProp ArmorProp;

struct IOPFileInfo { // 0x58
	/* 0x00 */ char name[80];
	/* 0x50 */ int iophandle;
	/* 0x54 */ int loadSize;
};

struct _IOPStream { // 0x64
	/* 0x00 */ int handle;
	/* 0x04 */ int stream;
	/* 0x08 */ int curOffset;
	/* 0x0c */ int size;
	/* 0x10 */ int compressed;
	/* 0x14 */ char name[80];
};

typedef _IOPStream IOPStream;

struct PS2ShadowModel { // 0x10
	/* 0x0 */ int32 nNumFaces;
	/* 0x4 */ int32 nNumEdges;
	/* 0x8 */ int32 nNumVerts;
	/* 0xc */ int32 nPad;
};

typedef long int _off_t;

typedef long int _ssize_t;

struct mips_frame_info { // 0x70
	/* 0x00 */ long int total_size;
	/* 0x08 */ long int var_size;
	/* 0x10 */ long int args_size;
	/* 0x18 */ long int extra_size;
	/* 0x20 */ int gp_reg_size;
	/* 0x24 */ int fp_reg_size;
	/* 0x28 */ long int mask;
	/* 0x30 */ long int fmask;
	/* 0x38 */ long int gp_save_offset;
	/* 0x40 */ long int fp_save_offset;
	/* 0x48 */ long int gp_sp_offset;
	/* 0x50 */ long int fp_sp_offset;
	/* 0x58 */ int initialized;
	/* 0x5c */ int num_gp;
	/* 0x60 */ int num_fp;
	/* 0x68 */ long int insns_len;
};

struct mips_args { // 0x3c
	/* 0x00 */ int gp_reg_found;
	/* 0x04 */ int arg_number;
	/* 0x08 */ int arg_words;
	/* 0x0c */ int fp_arg_words;
	/* 0x10 */ int last_arg_fp;
	/* 0x14 */ int fp_code;
	/* 0x18 */ int num_adjusts;
	/* 0x1c */ rtx_def *adjust[8];
};

typedef mips_args CUMULATIVE_ARGS;

typedef unsigned char UQItype;

typedef int SItype;

typedef unsigned int USItype;

typedef long int DItype;

typedef long unsigned int UDItype;

typedef float SFtype;

typedef double DFtype;

typedef long int word_type;

struct DIstruct { // 0x8
	/* 0x0 */ SItype low;
	/* 0x4 */ SItype high;
};

union DIunion { // 0x8
	/* 0x0 */ DIstruct s;
	/* 0x0 */ DItype ll;
};

typedef short int HItype;

typedef short unsigned int UHItype;

typedef UDItype fractype;

typedef USItype halffractype;

typedef DFtype FLO_type;

typedef DItype intfrac;

struct fp_number_type { // 0x18
	/* 0x00 */ fp_class_type class;
	/* 0x04 */ unsigned int sign;
	/* 0x08 */ int normal_exp;
	/* 0x10 */ union { // 0x8
		/* 0x10 */ fractype ll;
		/* 0x10 */ halffractype l[2];
	} fraction;
};

union FLO_union_type { // 0x8
	/* 0x0 */ FLO_type value;
	/* 0x0 */ fractype value_raw;
	/* 0x0 */ halffractype words[2];
	/* 0x0 */ struct { // 0x8
		/* 0x0:0 */ fractype fraction : 52;
		/* 0x6:4 */ unsigned int exp : 11;
		/* 0x7:7 */ unsigned int sign : 1;
	} bits;
};

union ieee_double_shape_type { // 0x8
	/* 0x0 */ double value;
	/* 0x0 */ struct { // 0x8
		/* 0x0 */ __uint32_t lsw;
		/* 0x4 */ __uint32_t msw;
	} parts;
};

union ieee_float_shape_type { // 0x4
	/* 0x0 */ float value;
	/* 0x0 */ __uint32_t word;
};

typedef void (*func_ptr)(/* parameters unknown */);

struct __siov { // 0x8
	/* 0x0 */ void *iov_base;
	/* 0x4 */ size_t iov_len;
};

struct __suio { // 0xc
	/* 0x0 */ __siov *uio_iov;
	/* 0x4 */ int uio_iovcnt;
	/* 0x8 */ int uio_resid;
};

union __ieee_double_shape_type { // 0x10
	/* 0x0 */ double value;
	/* 0x0 */ struct { // 0x8
		/* 0x0 */ unsigned int fraction1;
		/* 0x4:0 */ unsigned int fraction0 : 20;
		/* 0x6:4 */ unsigned int exponent : 11;
		/* 0x7:7 */ unsigned int sign : 1;
	} number;
	/* 0x0 */ struct { // 0x8
		/* 0x0 */ unsigned int function1;
		/* 0x4:0 */ unsigned int function0 : 19;
		/* 0x6:3 */ unsigned int quiet : 1;
		/* 0x6:4 */ unsigned int exponent : 11;
		/* 0x7:7 */ unsigned int sign : 1;
	} nan;
	/* 0x0 */ struct { // 0x10
		/* 0x0 */ long unsigned int lsw;
		/* 0x8 */ long unsigned int msw;
	} parts;
	/* 0x0 */ long int aslong[2];
};

union __ieee_float_shape_type { // 0x8
	/* 0x0 */ float value;
	/* 0x0 */ struct { // 0x4
		/* 0x0:0 */ unsigned int fraction0 : 7;
		/* 0x0:7 */ unsigned int fraction1 : 16;
		/* 0x2:7 */ unsigned int exponent : 8;
		/* 0x3:7 */ unsigned int sign : 1;
	} number;
	/* 0x0 */ struct { // 0x4
		/* 0x0:0 */ unsigned int function1 : 16;
		/* 0x2:0 */ unsigned int function0 : 6;
		/* 0x2:6 */ unsigned int quiet : 1;
		/* 0x2:7 */ unsigned int exponent : 8;
		/* 0x3:7 */ unsigned int sign : 1;
	} nan;
	/* 0x0 */ long int p1;
};

typedef int fp_rnd;

typedef int fp_except;

typedef int fp_rdi;

union double_union { // 0x8
	/* 0x0 */ double d;
	/* 0x0 */ __uint32_t i[2];
};

struct lconv { // 0x30
	/* 0x00 */ char *decimal_point;
	/* 0x04 */ char *thousands_sep;
	/* 0x08 */ char *grouping;
	/* 0x0c */ char *int_curr_symbol;
	/* 0x10 */ char *currency_symbol;
	/* 0x14 */ char *mon_decimal_point;
	/* 0x18 */ char *mon_thousands_sep;
	/* 0x1c */ char *mon_grouping;
	/* 0x20 */ char *positive_sign;
	/* 0x24 */ char *negative_sign;
	/* 0x28 */ char int_frac_digits;
	/* 0x29 */ char frac_digits;
	/* 0x2a */ char p_cs_precedes;
	/* 0x2b */ char p_sep_by_space;
	/* 0x2c */ char n_cs_precedes;
	/* 0x2d */ char n_sep_by_space;
	/* 0x2e */ char p_sign_posn;
	/* 0x2f */ char n_sign_posn;
};

struct flock { // 0x20
	/* 0x00 */ short int l_type;
	/* 0x02 */ short int l_whence;
	/* 0x08 */ long int l_start;
	/* 0x10 */ long int l_len;
	/* 0x18 */ short int l_pid;
	/* 0x1a */ short int l_xxx;
};

struct eflock { // 0x30
	/* 0x00 */ short int l_type;
	/* 0x02 */ short int l_whence;
	/* 0x08 */ long int l_start;
	/* 0x10 */ long int l_len;
	/* 0x18 */ short int l_pid;
	/* 0x1a */ short int l_xxx;
	/* 0x20 */ long int l_rpid;
	/* 0x28 */ long int l_rsys;
};

struct stat { // 0x68
	/* 0x00 */ dev_t st_dev;
	/* 0x02 */ ino_t st_ino;
	/* 0x04 */ mode_t st_mode;
	/* 0x08 */ nlink_t st_nlink;
	/* 0x0a */ uid_t st_uid;
	/* 0x0c */ gid_t st_gid;
	/* 0x0e */ dev_t st_rdev;
	/* 0x10 */ off_t st_size;
	/* 0x18 */ time_t st_atime;
	/* 0x20 */ long int st_spare1;
	/* 0x28 */ time_t st_mtime;
	/* 0x30 */ long int st_spare2;
	/* 0x38 */ time_t st_ctime;
	/* 0x40 */ long int st_spare3;
	/* 0x48 */ long int st_blksize;
	/* 0x50 */ long int st_blocks;
	/* 0x58 */ long int st_spare4[2];
};

struct malloc_chunk { // 0x10
	/* 0x0 */ size_t prev_size;
	/* 0x4 */ size_t size;
	/* 0x8 */ malloc_chunk *fd;
	/* 0xc */ malloc_chunk *bk;
};

typedef malloc_chunk *mchunkptr;

typedef malloc_chunk *mbinptr;

/* Other variants of types that the dump defines more than once. The variant above is the
 * one most source files were compiled with; these are kept for reference only. */
#if 0
/* ULong */
typedef long unsigned int ULong;

/* ULong */
typedef unsigned int ULong;

/* _Bigint (used by 1 file(s); kept variant used by 182) */
struct _Bigint { // 0x20
	/* 0x00 */ _Bigint *_next;
	/* 0x04 */ int _k;
	/* 0x08 */ int _maxwds;
	/* 0x0c */ int _sign;
	/* 0x10 */ int _wds;
	/* 0x18 */ ULong _x[1];
};

/* _SKUVertex (used by 1 file(s); kept variant used by 98) */
struct _SKUVertex { // 0xc
	/* 0x0 */ float x;
	/* 0x4 */ float y;
	/* 0x8 */ float z;
};

/* _MVertex (used by 1 file(s); kept variant used by 98) */
struct _MVertex { // 0x10
	/* 0x0 */ SKUVertex vertex;
	/* 0xc */ int16 normal;
	/* 0xe */ int16 segment;
};

/* _MFace (used by 1 file(s); kept variant used by 98) */
struct _MFace { // 0xc
	/* 0x0 */ Face face;
	/* 0x6 */ uint8 normal;
	/* 0x7 */ uint8 flags;
	/* 0x8 */ int32 color;
};

/* Signal (used by 99 file(s); kept variant used by 99) */
typedef struct { // 0x1c
	/* 0x00 */ int32 id;
	/* 0x04 */ union { // 0x18
		/* 0x04 */ struct { // 0x4
			/* 0x04 */ union { // 0x4
				/* 0x04 */ int32 l;
				/* 0x04 */ int16 s[2];
				/* 0x04 */ char c[4];
			} size;
		} misc[3];
		/* 0x04 */ CameraKey *cameraKey;
		/* 0x04 */ struct { // 0x10
			/* 0x04 */ int16 x;
			/* 0x06 */ int16 y;
			/* 0x08 */ int16 z;
			/* 0x0a */ int16 zrot;
			/* 0x0c */ SVector offset;
		} teleport;
		/* 0x04 */ struct { // 0x8
			/* 0x04 */ int32 index;
			/* 0x08 */ int32 value;
		} cameraValue;
		/* 0x04 */ struct { // 0x8
			/* 0x04 */ int32 index;
			/* 0x08 */ int32 value;
		} miscValue;
		/* 0x04 */ struct { // 0x8
			/* 0x04 */ int32 index;
			/* 0x08 */ int32 value;
		} logicValue;
		/* 0x04 */ int32 timer;
		/* 0x04 */ int32 times;
		/* 0x04 */ int32 lightGroup;
		/* 0x04 */ int32 farPlane;
		/* 0x04 */ int32 cameraAdjust;
		/* 0x04 */ int32 cameraMode;
		/* 0x04 */ int32 cameraLock;
		/* 0x04 */ int32 cameraUnlock;
		/* 0x04 */ int32 cameraSmooth;
		/* 0x04 */ int32 cameraTimer;
		/* 0x04 */ struct { // 0x8
			/* 0x04 */ int32 time;
			/* 0x08 */ int32 scale;
		} cameraShake;
		/* 0x04 */ int32 cameraSave;
		/* 0x04 */ int32 cameraRestore;
		/* 0x04 */ int32 value[2];
		/* 0x04 */ struct { // 0xc
			/* 0x04 */ int32 action;
			/* 0x08 */ int32 value[2];
		} sound;
		/* 0x04 */ void *intro;
		/* 0x04 */ int32 deathZ;
		/* 0x04 */ struct { // 0x8
			/* 0x04 */ void *intro;
			/* 0x08 */ void *data;
		} dsignal;
		/* 0x04 */ void *mirror;
		/* 0x04 */ int32 fogNear;
		/* 0x04 */ int32 fogFar;
		/* 0x04 */ struct { // 0x8
			/* 0x04 */ void *intro;
			/* 0x08 */ int32 frame;
		} gotoFrame;
		/* 0x04 */ struct { // 0x8
			/* 0x04 */ void *intro;
			/* 0x08 */ int32 model;
		} changeModel;
		/* 0x04 */ void *vmObject;
		/* 0x04 */ struct { // 0x8
			/* 0x04 */ uint8 target;
			/* 0x05 */ uint8 source1;
			/* 0x06 */ uint8 source2;
			/* 0x07 */ uint8 pad;
			/* 0x08 */ Signal *gotoLabel;
		} logic;
		/* 0x04 */ void *callSignal;
		/* 0x04 */ SVector offset;
		/* 0x04 */ Signal *gotoLabel;
		/* 0x04 */ Signal *gosubLabel;
		/* 0x04 */ struct { // 0x8
			/* 0x04 */ int32 timer;
			/* 0x08 */ int32 action;
		} control;
		/* 0x04 */ struct { // 0xc
			/* 0x04 */ int16 index;
			/* 0x06 */ int16 z;
			/* 0x08 */ _MultiSignal *upSignal;
			/* 0x0c */ _MultiSignal *downSignal;
		} zSignal;
		/* 0x04 */ struct { // 0x18
			/* 0x04 */ int32 currentnum;
			/* 0x08 */ int32 streamID;
			/* 0x0c */ char toname[16];
		} StreamLevel;
		/* 0x04 */ struct { // 0xc
			/* 0x04 */ char num;
			/* 0x05 */ char vel;
			/* 0x06 */ int16 misc;
			/* 0x08 */ char flags;
			/* 0x09 */ char timeToLive;
			/* 0x0a */ int16 dummy2;
			/* 0x0c */ Object *object;
		} shards;
		/* 0x04 */ struct { // 0x8
			/* 0x04 */ int32 index;
			/* 0x08 */ void *intro;
		} cameraSpline;
		/* 0x04 */ struct { // 0x4
			/* 0x04 */ int16 type;
			/* 0x06 */ int16 time;
		} screenWipe;
		/* 0x04 */ int32 voiceSitId;
		/* 0x04 */ struct { // 0x8
			/* 0x04 */ int32 time;
			/* 0x08 */ void *intro;
		} introFX;
		/* 0x04 */ struct { // 0x8
			/* 0x04 */ void *intro;
			/* 0x08 */ Signal *gotoLabel;
		} introActive;
		/* 0x04 */ struct { // 0x12
			/* 0x04 */ char world[9];
			/* 0x0d */ char level[9];
		} levelChange;
		/* 0x04 */ int32 blendStart;
		/* 0x04 */ struct { // 0x8
			/* 0x04 */ Signal *signal;
			/* 0x08 */ int32 times;
		} setTimes;
		/* 0x04 */ struct { // 0x4
			/* 0x04 */ uint8 r;
			/* 0x05 */ uint8 g;
			/* 0x06 */ uint8 b;
			/* 0x07 */ uint8 pad;
		} color;
		/* 0x04 */ struct { // 0xc
			/* 0x04 */ int16 x;
			/* 0x06 */ int16 y;
			/* 0x08 */ int16 time;
			/* 0x0a */ int16 index;
			/* 0x0c */ char *text;
		} print;
		/* 0x04 */ int32 slideAngle;
	} data;
} Signal;

/* _HFace (used by 1 file(s); kept variant used by 98) */
struct _HFace { // 0x14
	/* 0x00 */ int32 v0;
	/* 0x04 */ int32 v1;
	/* 0x08 */ int32 v2;
	/* 0x0c */ uint16 normal;
	/* 0x0e */ uint16 pad2;
	/* 0x10 */ uint16 attr;
	/* 0x12 */ uint16 ni0;
};

/* _Segment (used by 1 file(s); kept variant used by 98) */
struct _Segment { // 0x18
	/* 0x00 */ int32 flags;
	/* 0x04 */ int16 firstTri;
	/* 0x06 */ int16 lastTri;
	/* 0x08 */ int16 firstVertex;
	/* 0x0a */ int16 lastVertex;
	/* 0x0c */ int16 px;
	/* 0x0e */ int16 py;
	/* 0x10 */ int16 pz;
	/* 0x12 */ int16 parent;
	/* 0x14 */ HInfo *hInfo;
};

/* _VirtSegment (used by 1 file(s); kept variant used by 98) */
struct _VirtSegment { // 0x18
	/* 0x00 */ int32 flags;
	/* 0x04 */ int16 index;
	/* 0x06 */ int16 weightIndex;
	/* 0x08 */ int16 firstVertex;
	/* 0x0a */ int16 lastVertex;
	/* 0x0c */ int16 px;
	/* 0x0e */ int16 py;
	/* 0x10 */ int16 pz;
	/* 0x12 */ int16 pad;
	/* 0x14 */ float weight;
};

/* _Model (used by 1 file(s); kept variant used by 98) */
struct _Model { // 0x5c
	/* 0x00 */ int32 numVertices;
	/* 0x04 */ MVertex *vertexList;
	/* 0x08 */ int32 numNormals;
	/* 0x0c */ Vector4f *normalList;
	/* 0x10 */ int32 numFaces;
	/* 0x14 */ MFace *faceList;
	/* 0x18 */ int32 numSegments;
	/* 0x1c */ int32 numVirtSegments;
	/* 0x20 */ Segment *segmentList;
	/* 0x24 */ void *aniTextures;
	/* 0x28 */ float maxRad;
	/* 0x2c */ float maxRadSq;
	/* 0x30 */ TextureMT3 *startTextures;
	/* 0x34 */ TextureMT3 *endTextures;
	/* 0x38 */ AnimatedListInfo *animatedListInfo;
	/* 0x3c */ AnimatedInfo *animatedInfo;
	/* 0x40 */ ScrollInfo *scrollInfo;
	/* 0x44 */ TextureStripInfo *textureStripInfo;
	/* 0x48 */ int32 *envMappedVertices;
	/* 0x4c */ uint32 *materialVertexColors;
	/* 0x50 */ uint32 *spectralVertexColors;
	/* 0x54 */ int16 *pnShadowFaces;
	/* 0x58 */ int16 *pnShadowVolumes;
};

/* Object (used by 1 file(s); kept variant used by 98) */
typedef struct { // 0x54
	/* 0x00 */ int32 oflags;
	/* 0x04 */ int16 id;
	/* 0x06 */ int16 sfxFileHandle;
	/* 0x08 */ int16 numModels;
	/* 0x0a */ int16 numAnims;
	/* 0x0c */ Model **modelList;
	/* 0x10 */ _G2AnimKeylist_Type **animList;
	/* 0x14 */ _G2AnimFxHeader_Type **animFXList;
	/* 0x18 */ int16 introDist;
	/* 0x1a */ int16 vvIntroDist;
	/* 0x1c */ uint16 removeDist;
	/* 0x1e */ uint16 vvRemoveDist;
	/* 0x20 */ void *data;
	/* 0x24 */ char *script;
	/* 0x28 */ char *name;
	/* 0x2c */ uint8 *soundData;
	/* 0x30 */ int32 oflags2;
	/* 0x34 */ int16 sectionA;
	/* 0x36 */ int16 sectionB;
	/* 0x38 */ int16 sectionC;
	/* 0x3a */ int16 numberOfEffects;
	/* 0x3c */ ObjectEffect *effectList;
	/* 0x40 */ _GenericFXObject *effectData;
	/* 0x44 */ uint32 *relocList;
	/* 0x48 */ void *relocModule;
	/* 0x4c */ _VramLink *textureLoadList;
	/* 0x50 */ char *childObjectList;
} Object;

/* _TFace (used by 1 file(s); kept variant used by 98) */
struct _TFace { // 0x14
	/* 0x00 */ Face32 face;
	/* 0x0c */ uint16 normal;
	/* 0x0e */ uint16 pad;
	/* 0x10 */ uint8 attr;
	/* 0x11 */ int8 sortPush;
	/* 0x12 */ uint16 texattr;
};

/* _TVertex (used by 1 file(s); kept variant used by 98) */
struct _TVertex { // 0x10
	/* 0x0 */ SKUVertex vertex;
	/* 0xc */ uint8 r0;
	/* 0xd */ uint8 g0;
	/* 0xe */ uint8 b0;
	/* 0xf */ uint8 a0;
};

/* _Instance (used by 99 file(s); kept variant used by 99) */
struct _Instance { // 0x360
	/* 0x000 */ NodeType node;
	/* 0x008 */ _Instance *next;
	/* 0x00c */ _Instance *prev;
	/* 0x010 */ Vector4f position;
	/* 0x020 */ Vector4f oldPos;
	/* 0x030 */ Vector4f initialPos;
	/* 0x040 */ Vector4f rotation;
	/* 0x050 */ Vector4f oldRotation;
	/* 0x060 */ Vector4f scale;
	/* 0x070 */ Vector4f shadowPosition;
	/* 0x080 */ Matrixf relativeMatrix;
	/* 0x0c0 */ Vector4f wNormal;
	/* 0x0d0 */ Vector4f offset;
	/* 0x0e0 */ Vector4f splitPoint;
	/* 0x0f0 */ Vector4f vel;
	/* 0x100 */ Vector4f accl;
	/* 0x110 */ Vector4f maxVel;
	/* 0x120 */ int32 instanceID;
	/* 0x124 */ int32 iflags;
	/* 0x128 */ int32 iflags2;
	/* 0x12c */ Object *object;
	/* 0x130 */ Intro *intro;
	/* 0x134 */ void *data;
	/* 0x138 */ void *introData;
	/* 0x13c */ _Instance *parent;
	/* 0x140 */ int32 introNum;
	/* 0x144 */ int32 birthStreamUnitID;
	/* 0x148 */ int32 currentStreamUnitID;
	/* 0x14c */ int32 introUniqueID;
	/* 0x150 */ Matrixf *matrix;
	/* 0x154 */ Matrixf *oldMatrix;
	/* 0x158 */ Matrixf *matrixPool[2];
	/* 0x160 */ int curMatrixPool;
	/* 0x164 */ uint32 maxCheckDistance;
	/* 0x168 */ uint32 checkMask;
	/* 0x16c */ float lightGroupInterpValue;
	/* 0x170 */ float lightGroupInterpSpeed;
	/* 0x174 */ uint32 lightGroupStreamId;
	/* 0x178 */ uint32 spectralLightGroupStreamId;
	/* 0x17c */ uint32 oldLightGroupStreamId;
	/* 0x180 */ uint32 oldSpectralLightGroupStreamId;
	/* 0x184 */ uint8 oldLightGroup;
	/* 0x185 */ uint8 oldSpectralLightGroup;
	/* 0x186 */ uint8 lightGroup;
	/* 0x187 */ uint8 spectralLightGroup;
	/* 0x188 */ uint16 currentTextureAnimFrame;
	/* 0x18a */ uint16 pad;
	/* 0x18c */ uint16 vvRemoveDist;
	/* 0x18e */ uint16 removeDist;
	/* 0x190 */ int32 attachedID;
	/* 0x194 */ int32 attachedSegment;
	/* 0x198 */ SoundInstance soundInstanceTbl[4];
	/* 0x1a4 */ TFace *tface;
	/* 0x1a8 */ TFace *oldTFace;
	/* 0x1ac */ void *tfaceLevel;
	/* 0x1b0 */ void *collideInfo;
	/* 0x1b4 */ int32 bspTree;
	/* 0x1b8 */ int32 cachedTFace;
	/* 0x1bc */ int32 cachedBSPTree;
	/* 0x1c0 */ void *cachedTFaceLevel;
	/* 0x1c4 */ HModel *hModelList;
	/* 0x1c8 */ int16 fadeValue;
	/* 0x1ca */ int16 lightMatrix;
	/* 0x1cc */ ProcessFunc *processFunc;
	/* 0x1d0 */ CollideFunc *collideFunc;
	/* 0x1d4 */ CollideFunc *additionalCollideFunc;
	/* 0x1d8 */ QueryFunc *queryFunc;
	/* 0x1dc */ MessageFunc *messageFunc;
	/* 0x1e0 */ int32 currentModel;
	/* 0x1e4 */ TFace *waterFace;
	/* 0x1e8 */ TFace *oldWaterFace;
	/* 0x1ec */ _Terrain *waterFaceTerrain;
	/* 0x1f0 */ PlaneConstants halvePlane;
	/* 0x1fc */ _Instance *LinkParent;
	/* 0x200 */ _Instance *LinkChild;
	/* 0x204 */ _Instance *LinkSibling;
	/* 0x208 */ int32 ParentLinkNode;
	/* 0x20c */ int32 linkMarkerIndex;
	/* 0x210 */ void *InstanceState;
	/* 0x214 */ char introName[12];
	/* 0x220 */ void *extraData;
	/* 0x224 */ int16 constrictAngle;
	/* 0x226 */ int16 petrifyValue;
	/* 0x228 */ int32 currentMainState;
	/* 0x22c */ int32 work0;
	/* 0x230 */ int32 work1;
	/* 0x234 */ int32 work2;
	/* 0x238 */ int32 work3;
	/* 0x23c */ int32 work4;
	/* 0x240 */ int32 work5;
	/* 0x244 */ G2InstanceRebuildCallback rebuildCallback;
	/* 0x248 */ int16 splineFlags;
	/* 0x24a */ int16 targetFrame;
	/* 0x24c */ int16 clipBeg;
	/* 0x24e */ int16 clipEnd;
	/* 0x250 */ int32 light_color;
	/* 0x254 */ CVECTOR *perVertexColor;
	/* 0x258 */ uint32 noDrawGroups;
	/* 0x25c */ uint32 fxNoDrawGroups;
	/* 0x260 */ int32 startFadeTime;
	/* 0x264 */ int16 fadeFrames;
	/* 0x266 */ int16 fadeDuration;
	/* 0x268 */ int16 startFade;
	/* 0x26a */ int16 targetFade;
	/* 0x26c */ int16 diffFade;
	/* 0x270 */ G2Anim anim;
	/* 0x350 */ _Instance *noCollideInstance;
	/* 0x354 */ int32 distance_to_camera_sq;
	/* 0x358 */ uint8 shadowRed;
	/* 0x359 */ uint8 shadowGreen;
	/* 0x35a */ uint8 shadowBlue;
};

/* _ObjectTracker (used by 1 file(s); kept variant used by 98) */
struct _ObjectTracker { // 0x20
	/* 0x00 */ char name[12];
	/* 0x0c */ Object *object;
	/* 0x10 */ int16 objectStatus;
	/* 0x12 */ int16 numInUse;
	/* 0x14 */ void *vramBlock;
	/* 0x18 */ int8 numObjectsUsing;
	/* 0x19 */ int8 objectsUsing[7];
};

/* _Terrain (used by 99 file(s); kept variant used by 99) */
struct _Terrain { // 0x50
	/* 0x00 */ int16 UnitChangeFlags;
	/* 0x02 */ int16 spad;
	/* 0x04 */ int32 lpad2;
	/* 0x08 */ int32 numIntros;
	/* 0x0c */ Intro *introList;
	/* 0x10 */ int32 numVertices;
	/* 0x14 */ int32 numFaces;
	/* 0x18 */ int32 numNormals;
	/* 0x1c */ TVertex *vertexList;
	/* 0x20 */ TFace *faceList;
	/* 0x24 */ Vector4f *normalList;
	/* 0x28 */ int numStreamUnitPortals;
	/* 0x2c */ void *streamUnitPortals;
	/* 0x30 */ MorphVertex *MorphDiffList;
	/* 0x34 */ MorphColor *MorphColorList;
	/* 0x38 */ int32 numBSPTrees;
	/* 0x3c */ BSPTree *BSPTreeArray;
	/* 0x40 */ int16 *morphNormalIdx;
	/* 0x44 */ MultiSignal *signals;
	/* 0x48 */ TerrainAnimTexture *terrainAnimTextures;
	/* 0x4c */ void *Occluders;
};

/* Level (used by 1 file(s); kept variant used by 98) */
typedef struct { // 0xa0
	/* 0x00 */ Terrain *terrain;
	/* 0x04 */ LightList *lightList;
	/* 0x08 */ int32 numVMObjects;
	/* 0x0c */ VMObject *vmobjectList;
	/* 0x10 */ float waterZLevel;
	/* 0x14 */ uint8 backColorR;
	/* 0x15 */ uint8 backColorG;
	/* 0x16 */ uint8 backColorB;
	/* 0x17 */ uint8 cpad1;
	/* 0x18 */ uint8 spectralColorR;
	/* 0x19 */ uint8 spectralColorG;
	/* 0x1a */ uint8 spectralColorB;
	/* 0x1b */ uint8 cpad2;
	/* 0x1c */ uint8 waterColorR;
	/* 0x1d */ uint8 waterColorG;
	/* 0x1e */ uint8 waterColorB;
	/* 0x1f */ uint8 cpad3;
	/* 0x20 */ uint16 fogFar;
	/* 0x22 */ uint16 fogNear;
	/* 0x24 */ uint16 spectralFogFar;
	/* 0x26 */ uint16 spectralFogNear;
	/* 0x28 */ uint16 waterFogFar;
	/* 0x2a */ uint16 waterFogNear;
	/* 0x2c */ int32 reverbType;
	/* 0x30 */ int32 reverbVolume;
	/* 0x34 */ LightList *spectrallightList;
	/* 0x38 */ int32 numCameras;
	/* 0x3c */ void *cameraList;
	/* 0x40 */ int32 flags;
	/* 0x44 */ int32 numIntros;
	/* 0x48 */ Intro *introList;
	/* 0x4c */ void *objectNameList;
	/* 0x50 */ char *worldName;
	/* 0x54 */ MultiSignal *startGoingIntoWaterSignal;
	/* 0x58 */ MultiSignal *startGoingOutOfWaterSignal;
	/* 0x5c */ int32 unitFlags;
	/* 0x60 */ MultiSignal *SignalListStart;
	/* 0x64 */ MultiSignal *SignalListEnd;
	/* 0x68 */ uint32 *relocList;
	/* 0x6c */ void *relocModule;
	/* 0x70 */ int32 NumberOfPlanMarkers;
	/* 0x74 */ PlanMkr *PlanMarkerList;
	/* 0x78 */ int32 NumberOfSFXMarkers;
	/* 0x7c */ SFXMkr *SFXMarkerList;
	/* 0x80 */ uint32 versionNumber;
	/* 0x84 */ char *dynamicMusicName;
	/* 0x88 */ int32 streamUnitID;
	/* 0x8c */ LightGroup *razielLightGroup;
	/* 0x90 */ LightGroup *razielSpectralLightGroup;
	/* 0x94 */ _VramLink *textureLoadList;
	/* 0x98 */ PlanData *planData;
	/* 0x9c */ uint32 mapRegion;
} Level;

/* _CameraCore_Type (used by 89 file(s); kept variant used by 89) */
struct _CameraCore_Type { // 0x310
	/* 0x000 */ Vector4f position;
	/* 0x010 */ Matrixf vvNormalWorVecMatf[2];
	/* 0x090 */ Matrixf defaultvvNormalWorVecMatf[2];
	/* 0x110 */ Matrixf wcTransformf;
	/* 0x150 */ Matrixf wcTransform2f;
	/* 0x190 */ Matrixf cwTransform2f;
	/* 0x1d0 */ Vector4f viewVolumeNormal[5];
	/* 0x220 */ Vector4f viewVolumeNormalPS2[4];
	/* 0x260 */ Matrixf vvNormalWorVecMatfPS2;
	/* 0x2a0 */ Vector4f rotation;
	/* 0x2b0 */ Vector4f debugPos;
	/* 0x2c0 */ Vector4f nondebugPos;
	/* 0x2d0 */ float leftX;
	/* 0x2d4 */ float rightX;
	/* 0x2d8 */ float topY;
	/* 0x2dc */ float bottomY;
	/* 0x2e0 */ int32 farPlane;
	/* 0x2e4 */ float projDistance;
	/* 0x2e8 */ float oldProjDistance;
	/* 0x2ec */ int32 aspectRatio;
	/* 0x2f0 */ int32 oldAspectRatio;
	/* 0x2f4 */ int32 nearPlane;
	/* 0x2f8 */ int32 pad1;
	/* 0x2fc */ Rotation debugRot;
	/* 0x304 */ TFace *tiltTface;
	/* 0x308 */ Terrain *tiltTfaceTerrain;
};

/* GameTracker (used by 1 file(s); kept variant used by 87) */
typedef struct { // 0x220
	/* 0x000 */ _GameData_Type gameData;
	/* 0x004 */ menu_t *menu;
	/* 0x008 */ void *memcard;
	/* 0x00c */ Level *level;
	/* 0x010 */ Instance *playerInstance;
	/* 0x014 */ InstanceList *instanceList;
	/* 0x018 */ InstancePool *instancePool;
	/* 0x01c */ VertexPool *vertexPool;
	/* 0x020 */ Matrixf *matrixPool[2];
	/* 0x028 */ int32 matrixToggle;
	/* 0x02c */ int32 numMatrices;
	/* 0x030 */ ObjectTracker *GlobalObjects;
	/* 0x034 */ int32 controlCommand[2][7];
	/* 0x06c */ int32 controlData[2][7];
	/* 0x0a4 */ int32 overrideData[2][7];
	/* 0x0dc */ int32 debugFlags;
	/* 0x0e0 */ int32 debugFlags2;
	/* 0x0e4 */ int32 debugFlags3;
	/* 0x0e8 */ CVECTOR wipeColor;
	/* 0x0ec */ int16 wipeTime;
	/* 0x0ee */ int16 maxWipeTime;
	/* 0x0f0 */ int16 wipeType;
	/* 0x0f4 */ void *reqDisp;
	/* 0x0f8 */ int32 *drawTimerReturn;
	/* 0x0fc */ int32 usecsStartDraw;
	/* 0x100 */ uint32 displayFrameCount;
	/* 0x104 */ uint32 frameCount;
	/* 0x108 */ uint32 fpsFast;
	/* 0x10c */ int32 gameFlags;
	/* 0x110 */ int32 streamFlags;
	/* 0x114 */ Level *mainDrawUnit;
	/* 0x118 */ int8 baseAreaName[16];
	/* 0x128 */ int8 timezone;
	/* 0x12a */ int16 levelDone;
	/* 0x12c */ int16 levelChange;
	/* 0x12e */ int16 gameMode;
	/* 0x130 */ int32 StreamUnitID;
	/* 0x134 */ int8 SwitchToNewStreamUnit;
	/* 0x135 */ int8 DoLightingBlend;
	/* 0x136 */ int16 SwitchToNewWarpIndex;
	/* 0x138 */ int8 S_baseAreaName[16];
	/* 0x148 */ int16 toSignal;
	/* 0x14a */ int16 fromSignal;
	/* 0x14c */ int8 LastSignal;
	/* 0x14e */ int16 StreamNormalA;
	/* 0x150 */ int16 StreamNormalB;
	/* 0x152 */ int16 StreamNormalC;
	/* 0x154 */ int32 StreamNormalD;
	/* 0x158 */ int32 moveRazielToStreamID;
	/* 0x15c */ gSoundData sound;
	/* 0x170 */ int16 controllerMode;
	/* 0x172 */ uint8 plan_collide_override;
	/* 0x173 */ uint8 cheatMode;
	/* 0x174 */ int8 currentLvl;
	/* 0x175 */ int8 lastLvl;
	/* 0x178 */ int32 defRemoveDist;
	/* 0x17c */ int32 playerCheatFlags;
	/* 0x180 */ int32 debugDrawFlags;
	/* 0x184 */ void *planningPool;
	/* 0x188 */ void *enemyPlanPool;
	/* 0x18c */ uint8 block_collide_override;
	/* 0x18d */ uint8 raziel_collide_override;
	/* 0x18e */ int16 timeOfDay;
	/* 0x190 */ int32 decoupleGame;
	/* 0x194 */ int32 multGameTime;
	/* 0x198 */ int16 spectral_fadeValue;
	/* 0x19a */ int16 material_fadeValue;
	/* 0x19c */ uint32 drawTime;
	/* 0x1a0 */ uint32 currentTime;
	/* 0x1a4 */ uint32 currentMaterialTime;
	/* 0x1a8 */ uint32 currentSpectralTime;
	/* 0x1ac */ uint32 lastLoopTime;
	/* 0x1b0 */ uint32 oldtimeMult;
	/* 0x1b4 */ uint32 currentTicks;
	/* 0x1b8 */ uint32 totalTime;
	/* 0x1bc */ uint32 idleTime;
	/* 0x1c0 */ int32 visibleInstances;
	/* 0x1c4 */ int gameFramePassed;
	/* 0x1c8 */ uint32 timeSinceLastGameFrame;
	/* 0x1cc */ float timeMult;
	/* 0x1d0 */ float globalTimeMult;
	/* 0x1d4 */ float spectralTimeMult;
	/* 0x1d8 */ float materialTimeMult;
	/* 0x1dc */ int32 debugTimeMult;
	/* 0x1e0 */ int32 frameRateLock;
	/* 0x1e4 */ int32 monster_collide_override;
	/* 0x1f0 */ Vector4f skydomeOffset;
	/* 0x200 */ char playerName[16];
	/* 0x210 */ char playerNamePadded[16];
} GameTracker;

/* fractype */
typedef USItype fractype;

/* halffractype */
typedef UHItype halffractype;

/* FLO_type */
typedef SFtype FLO_type;

/* intfrac */
typedef SItype intfrac;

/* fp_number_type */
typedef struct { // 0x10
	/* 0x0 */ fp_class_type class;
	/* 0x4 */ unsigned int sign;
	/* 0x8 */ int normal_exp;
	/* 0xc */ union { // 0x4
		/* 0xc */ fractype ll;
		/* 0xc */ halffractype l[2];
	} fraction;
} fp_number_type;

/* FLO_union_type */
typedef union { // 0x4
	/* 0x0 */ FLO_type value;
	/* 0x0 */ fractype value_raw;
	/* 0x0 */ struct { // 0x4
		/* 0x0:0 */ fractype fraction : 23;
		/* 0x2:7 */ unsigned int exp : 8;
		/* 0x3:7 */ unsigned int sign : 1;
	} bits;
} FLO_union_type;

#endif

#endif /* TYPES_H */
