#ifndef DspCommonTypeDefine_H
#define DspCommonTypeDefine_H

//FFT Size defination	
#define FFT_SIZE_1024	1024
#define FFT_SIZE_2048	2048
#define FFT_SIZE_4096	4096
#define FFT_SIZE_8192	8192
#define FFT_SIZE_16384	16384
#define FFT_SIZE_32768	32768
#define FFT_SIZE_65536	65536
#define FFT_SIZE_131072	131072

#define FUN_ID_NOT_FOUND		-9999
#define MEAS_ITEM_EVM			"EVM"
#define MEAS_ITEM_ACLR			"ACLR"
#define MEAS_ITEM_SEM			"SEM"
#define MEAS_ITEM_IBE			"IBE"
#define MEAS_ITEM_OBW			"OBW"
#define MEAS_ITEM_FLATNESS		"FLATNESS"

#define RM_BURST_DETECT_ENABLE		1
#define RM_BURST_DETECT_DISABLE		0

#define RM_DETECT_MODE_RMS			0
#define RM_DETECT_MODE_MAX_PEAK		1

#define RM_CHANNEL_TYPE_MAIN		0
#define RM_CHANNEL_TYPE_NEGATIVE	1
#define RM_CHANNEL_TYPE_POSITIVE	2


#define RM_SAMPLE_RATE_3_84_M		3.84
#define RM_SAMPLE_RATE_5_M			5.0
#define RM_SAMPLE_RATE_7_68_M		7.68
#define RM_SAMPLE_RATE_10_M			10.0
#define RM_SAMPLE_RATE_15_36_M		15.36
#define RM_SAMPLE_RATE_20_M			20.0
#define RM_SAMPLE_RATE_30_72_M		30.72
#define RM_SAMPLE_RATE_40_M			40.0
#define RM_SAMPLE_RATE_61_44_M		61.44
#define RM_SAMPLE_RATE_80_M			80.0
#define RM_SAMPLE_RATE_122_88_M		122.88
#define RM_SAMPLE_RATE_160_M		160.0
#define RM_SAMPLE_RATE_320_M		320.0


#define RM_STATUS_OK				0
#define	USER_BW_0M					0
#define	USER_BW_3M					3.0
#define	USER_BW_6M					6.0

enum SignalDirectionType {
	SIGNAL_UP_LINK = 0,
	SIGNAL_DOWNN_LINK = 1,
};

enum SignalDuplexMode {
	SIGNAL_TDD = 0,
	SIGNAL_FDD = 1,
};

enum SignalInputSourceType
{
	SIGNAL_INPUT_FROM_FILE = 0,
	SIGNAL_INPUT_FROM_BUFFER = 1
};

enum SignalModulationMode {
	SIGNAL_MODULATION_AUTO = 0,
	SIGNAL_MODULATION_BPSK = 1,
	SIGNAL_MODULATION_QPSK = 2,
	SIGNAL_MODULATION_16QAM = 3,
	SIGNAL_MODULATION_64QAM = 4,
	SIGNAL_MODULATION_256QAM = 5,
	SIGNAL_MODULATION_1024QAM = 6,
}; //ModOrder = (1, BPSK)(2, QPSK)(3, 16QAM)(4, 64QAM)(5, 256QAM)



enum RmSaMeasureType {
	RMSA_MEASURE_DEFAULT = 0,
	RMSA_MEASURE_IBE = 1,
	RMSA_MEASURE_OBW = 2,
	RMSA_MEASURE_CARRIER_POWER = 4,
	RMSA_MEASURE_ACLR = 8,
	RMSA_MEASURE_SEM = 16,
	RMSA_MEASURE_EVM_LOW = 32,
	RMSA_MEASURE_EVM_HIGH = 64,
	RMSA_MEASURE_FLATNESS = 128,
	RMSA_MEASURE_DEMODULATION_ALL = 256,
};

enum RmDspStatus
{
	RM_TEST_OK = 0,
	RM_MEAS_ABNORMAL,
	RM_GPRF_PARAM_ERROR,
	RM_GPRF_BURST_DETECT_FAILED,
};

enum RmWlanStandard
{
	WLAN_AX = 0,
	WLAN_A = 1,
	WLAN_11N = 2,
	WLAN_11AC = 3,
	WLAN_11BE = 4,
};

#pragma region NrUlProduction

#define	NR_UL_PRODUCTION_ACLR_MIN_TIME_WINDOW   0.001 // 1ms ,0.001 second
#define NR_UL_PRODUCTION_SLOT_SYMBOL_NUM					14
#define NR_UL_PRODUCTION_REMOVE_POINTS_NUM					5000
#define	NR_UL_PRODUCTION_RB_SC_NUMBER						12
#define	NR_UL_PRODUCTION_RB_SC_INTERVAL_UNIT				15e3
#define NR_UL_PRODUCTION_IBE_MIN_TIME_WINDOW				0.001 // 1ms ,0.001 second

#define NR_PRODUCTION_CP_OFDM					0
#define NR_PRODUCTION_DFT						1

#define NR_PRODUCTION_MODULATION_BPSK			1
#define NR_PRODUCTION_MODULATION_QPSK			2
#define NR_PRODUCTION_MODULATION_16QAM			4
#define NR_PRODUCTION_MODULATION_64QAM			6
#define NR_PRODUCTION_MODULATION_256QAM			8

#define NRUL_PRODUCTION_BW_5MHz					0
#define NRUL_PRODUCTION_BW_10MHz				1
#define NRUL_PRODUCTION_BW_15MHz				2
#define NRUL_PRODUCTION_BW_20MHz				3
#define NRUL_PRODUCTION_BW_25MHz				4
#define NRUL_PRODUCTION_BW_30MHz				5
#define NRUL_PRODUCTION_BW_40MHz				6
#define NRUL_PRODUCTION_BW_50MHz				7
#define NRUL_PRODUCTION_BW_60MHz				8
#define NRUL_PRODUCTION_BW_70MHz				9
#define NRUL_PRODUCTION_BW_80MHz				10
#define NRUL_PRODUCTION_BW_90MHz				11
#define NRUL_PRODUCTION_BW_100MHz				12
#define NRUL_PRODUCTION_BW_200MHz				13
#define NRUL_PRODUCTION_BW_400MHz				13

#define NRUL_PRODUCTION_DMRS_SOURCE_RRC			0
#define NRUL_PRODUCTION_DMRS_SOURCE_N_Cell_ID	1

#define NRUL_PRODUCTION_CP_TYPE_LONG			0
#define NRUL_PRODUCTION_CP_TYPE_NORMAL			1

#define NRUL_PRODUCTION_SC_INTERVAL_15_KHZ		0
#define NRUL_PRODUCTION_SC_INTERVAL_30_KHZ		1
#define NRUL_PRODUCTION_SC_INTERVAL_60_KHZ		2
#define NRUL_PRODUCTION_SC_INTERVAL_120_KHZ		3

#define NR_UL_PRODUCTION_MEASURE_DEFAULT				0
#define NR_UL_PRODUCTION_MEASURE_IBE					1
#define NR_UL_PRODUCTION_MEASURE_OBW					2
#define NR_UL_PRODUCTION_MEASURE_CARRIER_POWER			4
#define NR_UL_PRODUCTION_MEASURE_ACLR					8
#define NR_UL_PRODUCTION_MEASURE_SEM					16
#define NR_UL_PRODUCTION_MEASURE_EVM_LOW				32
#define NR_UL_PRODUCTION_MEASURE_EVM_HIGH				64
#define NR_UL_PRODUCTION_MEASURE_FLATNESS				128
#define NR_UL_PRODUCTION_MEASURE_FREQ_ERROR				256
#define NR_UL_PRODUCTION_MEASURE_DEMODULATION_ALL		4096


#define NRUL_PRODUCTION_SEM_TOTAL_RANGE_NUM	8
#define NRUL_PRODUCTION_SEM_HALF_RANGE_NUM	4
#define NRUL_PRODUCTION_SEM_MIN_TIME_WINDOW   0.001 // 1ms ,0.001 second

enum TriggerSource
{
	FreeRun = 0,
	External = 1,
};
enum MapeType
{
	TypeA = 0,
	TypeB = 1,

};
enum DMRSConfigType
{
	Type1 = 0,
	Type2 = 1,
};

enum
{
	NRUL_PRODUCTION_SEM_NEG_RANG4_ID = 0,
	NRUL_PRODUCTION_SEM_NEG_RANG3_ID,
	NRUL_PRODUCTION_SEM_NEG_RANG2_ID,
	NRUL_PRODUCTION_SEM_NEG_RANG1_ID,
	NRUL_PRODUCTION_SEM_POS_RANG1_ID,
	NRUL_PRODUCTION_SEM_POS_RANG2_ID,
	NRUL_PRODUCTION_SEM_POS_RANG3_ID,
	NRUL_PRODUCTION_SEM_POS_RANG4_ID,
};

#pragma endregion NrUlProduction

#pragma region LTE 

#define		MHZ_TO_HZ	1e6
#define		LTE_UL_ACLR_MIN_TIME_WINDOW   0.001 // 1ms ,0.001 second
#define		LTE_UL_OBW_MIN_TIME_WINDOW   0.001 // 1ms ,0.001 second
#define		LTE_UL_IBE_MIN_TIME_WINDOW   0.005// 5ms ,0.005 second
#define		LTE_SLOT_SYMBOL_NUM 14
#define		LTE_RB_SC_NUMBER 12
#define		LTE_RB_SC_INTERVAL_UNIT 15e3
#define		LTE_UL_SEM_TOTAL_RANGE_NUM	8
#define		LTE_UL_SEM_HALF_RANGE_NUM	4
#define		LTE_UL_SEM_MIN_TIME_WINDOW   0.001 // 1ms ,0.001 second

enum LteDirectionType {
	LTE_UP_LINK = 0,
	LTE_DOWNN_LINK = 1,
};

enum LTEBW
{
	LTE_BW_1p4M = 0,
	LTE_BW_3M = 1,
	LTE_BW_5M = 2,
	LTE_BW_10M = 3,
	LTE_BW_15M = 4,
	LTE_BW_20M = 5,
};

enum LteSubCarrierInterval
{
	LTE_SC_INTERVAL_15_KHz = 0,
	LTE_SC_INTERVAL_30_KHz = 1,
	LTE_SC_INTERVAL_60_KHz = 2,
	LTE_SC_INTERVAL_120_KHz = 3,
};

enum LteInputSourceType
{
	LTE_INPUT_FROM_FILE = 0,
	LTE_INPUT_FROM_BUFFER = 1
};

enum LteDuplexMode {
	LTE_TDD = 0,
	LTE_FDD = 1,
};


enum LteModulationMode {
	LTE_MODULATION_AUTO = 0,
	LTE_MODULATION_BPSK = 1,
	LTE_MODULATION_QPSK = 2,
	LTE_MODULATION_16QAM = 3,
	LTE_MODULATION_64QAM = 4,
	LTE_MODULATION_256QAM = 5,
}; //ModOrder = (1, BPSK)(2, QPSK)(3, 16QAM)(4, 64QAM)(5, 256QAM)

enum LteDftPreCoding {
	LTE_DFT_PRECODING_DISABLE = 0,
	LTE_DFT_PRECODING_ENABLE = 1,
};

enum SeqHopEnabled
{
	SEQ_HOP_DISABLED = 0,
	SEQ_HOP_ENABLED = 1,
};

enum GroupHopEnabled
{
	GROUP_HOP_DISABLED = 0,
	GROUP_HOP_ENABLED = 1,
};

enum LTECpType {
	LTE_CPTYPE_NORMAL = 0,
	LTE_CPTYPE_PREFIX,
};


enum LteUlMeasureType {
	LTE_UL_MEASURE_DEFAULT = 0,
	LTE_UL_MEASURE_IBE = 1,
	LTE_UL_MEASURE_OBW = 2,
	LTE_UL_MEASURE_CHANNEL_POWER = 4,
	LTE_UL_MEASURE_ACLR = 8,
	LTE_UL_MEASURE_SEM = 16,
	LTE_UL_MEASURE_EVM_LOW = 32,
	LTE_UL_MEASURE_EVM_HIGH = 64,
	LTE_UL_MEASURE_FLATNESS = 128,
	LTE_UL_MEASURE_DEMODULATION_ALL = 1024,
};




enum LteUlStatusCode {
	LTE_UL_STATUS_OK = 0,
	LTE_UL_STATUS_ERROR,
	LTE_UL_ACLR_FAILED,
	LTE_UL_IBE_FAILED,
	LTE_UL_DEMOD_INIT_FAILED,
	LTE_UL_DEMOD_GET_IQDATA_FAILED,
	LTE_UL_DEMOD_FAILED,
	LTE_UL_SEM_HANDLER_IS_NULL,
	LTE_UL_SEM_TEST_FAILED,
	LTE_UL_OBW_FAILED,
	LTE_UL_READ_IQ_FILE_FAILED,
	LTE_UL_DEMOD_SYNC_FAILED,
	LTE_UL_DEMOD_IQ_FRAME_FAILED,
};

enum LteUlEvmCalculateType {
	LTE_UL_EVM_HIGH = 0,
	LTE_UL_EVM_LOW = 1,
};

enum LteUlChannelTypeDef
{
	LTE_CHANNEL_TYPE_MAIN = 0,
	LTE_CHANNEL_TYPE_NEGATIVE = 1,
	LTE_CHANNEL_TYPE_POSITIVE = 2,
};




enum
{
	LTE_UL_SEM_NEG_RANG4_ID = 0,
	LTE_UL_SEM_NEG_RANG3_ID,
	LTE_UL_SEM_NEG_RANG2_ID,
	LTE_UL_SEM_NEG_RANG1_ID,
	LTE_UL_SEM_POS_RANG1_ID,
	LTE_UL_SEM_POS_RANG2_ID,
	LTE_UL_SEM_POS_RANG3_ID,
	LTE_UL_SEM_POS_RANG4_ID,
};

#pragma endregion LTE

#pragma region Wcmda

#define		WCMA_UL_NORMAL_TEST_ID			300
#define		WCDMA_UL_SEM_TOTAL_RANGE_NUM	8
#define		WCDMA_UL_SEM_HALF_RANGE_NUM		4
#define		WCDMA_UL_SEM_MIN_TIME_WINDOW    0.001 // 1ms ,0.001 second
#define		WCDMA_UL_ACLR_MIN_TIME_WINDOW   0.001 // 1ms ,0.001 second
#define		WCDMA_SLOT_SYMBOL_NUM			14
#define		WCDMA_RB_SC_NUMBER				12
#define		WCDMA_RB_SC_INTERVAL_UNIT		15e3
#define		WCDMA_UL_OBW_MIN_TIME_WINDOW	0.001 // 1ms ,0.001 second


enum WcdmaDirectionType {
	WCDMA_UP_LINK = 0,
	WCDMA_DOWNN_LINK = 1,
};



enum SlotFormat
{
	SlotFormat0 = 0,
	SlotFormat0A = 1,
	SlotFormat0B = 2,
	SlotFormat1 = 3,
	SlotFormat2 = 4,
	SlotFormat2A = 5,
	SlotFormat2B = 6,
	SlotFormat3 = 7,
	SlotFormat4 = 8,
	SlotFormat5 = 9,
};





enum WcdmaUlMeasureType {
	WCDMA_UL_MEASURE_DEFAULT = 0,
	WCDMA_UL_MEASURE_IBE = 1,
	WCDMA_UL_MEASURE_OBW = 2,
	WCDMA_UL_MEASURE_CARRIER_POWER = 4,
	WCDMA_UL_MEASURE_ACLR = 8,
	WCDMA_UL_MEASURE_SEM = 16,
	WCDMA_UL_MEASURE_EVM_LOW = 32,
	WCDMA_UL_MEASURE_EVM_HIGH = 64,
	WCDMA_UL_MEASURE_FLATNESS = 128,
	WCDMA_UL_MEASURE_DEMODULATION_ALL = 256,
};




enum WcmdaUlStatusCode {
	WCDMA_UL_STATUS_OK = 0,
	WCDMA_UL_STATUS_ERROR,
	WCDMA_UL_ACLR_FAILED,
	WCDMA_UL_IBE_FAILED,
	WCDMA_UL_DEMOD_INIT_FAILED,
	WCDMA_UL_DEMOD_GET_IQDATA_FAILED,
	WCDMA_UL_DEMOD_FAILED,
	WCDMA_UL_SEM_HANDLER_IS_NULL,
	WCDMA_UL_SEM_TEST_FAILED,
	WCDMA_UL_OBW_FAILED,
};

enum WcdmaUlEvmCalculateType {
	WCDMA_UL_EVM_HIGH = 0,
	WCDMA_UL_EVM_LOW = 1,
};

enum WcdmaUlChannelTypeDef
{
	WCDMA_CHANNEL_TYPE_MAIN = 0,
	WCDMA_CHANNEL_TYPE_NEGATIVE = 1,
	WCDMA_CHANNEL_TYPE_POSITIVE = 2,
};




enum
{
	WCDMA_UL_SEM_NEG_RANG4_ID = 0,
	WCDMA_UL_SEM_NEG_RANG3_ID,
	WCDMA_UL_SEM_NEG_RANG2_ID,
	WCDMA_UL_SEM_NEG_RANG1_ID,
	WCDMA_UL_SEM_POS_RANG1_ID,
	WCDMA_UL_SEM_POS_RANG2_ID,
	WCDMA_UL_SEM_POS_RANG3_ID,
	WCDMA_UL_SEM_POS_RANG4_ID,
};

#pragma endregion Wcdma 

#pragma region Wlan11n

#define WLAN_SLOT_SYMBOL_NUM 14
#define WLAN_UL_ACLR_MIN_TIME_WINDOW   0.001 // 1ms ,0.001 second
#define WLAN_UL_IBE_MIN_TIME_WINDOW   0.001 // 1ms ,0.001 second
#define WLAN_UL_SEM_TOTAL_RANGE_NUM	8
#define WLAN_UL_SEM_HALF_RANGE_NUM	4
#define WLAN_UL_SEM_MIN_TIME_WINDOW   0.001 // 1ms ,0.001 second

enum Wlan11nBandwidth
{
	WLAN_11N_BW_20M = 0,
	WLAN_11N_BW_40M = 1,
	//WLAN_11N_BW_80M = 2,
	//WLAN_11N_BW_160M = 3,
};

enum Wlan11nPPDUType {
	Wlan11n_ax_HE_SU = 0,
	Wlan11n_ax_HE_MU = 1,
	Wlan11n_ax_HE_xSU = 2,
	Wlan11n_ax_HE_TRIG = 3,
	Wlan11n_ax_HE_NDP = 4,
};

enum Wlan11n_PPDUType {
	MixedMode = 0,
	GreenField = 1,
	Non_HT = 2,
};

enum ChannelEstimateBy {
	L_LTF = 0,
	HT_LTF = 1,

};

enum GITypes {
	ShortGI = 0,
	LongGI = 1,

};

enum Wlan11n_HE_LTF_Type {
	Wlan11n_ax_1xHE_LTF_GI800 = 0,
	Wlan11n_ax_2xHE_LTF_GI800 = 1,
	Wlan11n_ax_2xHE_LTF_GI1600 = 2,
	Wlan11n_ax_4xHE_LTF_GI3200 = 3,
	Wlan11n_ax_4xHE_LTF_GI800 = 4,

};


enum Wlan11nStatusCode {
	WLAN_11N_STATUS_OK = 0,
	WLAN_11N_UL_STATUS_ERROR,
	WLAN_11N_UL_ACLR_FAILED,
	WLAN_11N_UL_IBE_FAILED,
	WLAN_11N_UL_DEMOD_INIT_FAILED,
	WLAN_11N_UL_DEMOD_GET_IQDATA_FAILED,
	WLAN_11N_UL_DEMOD_FAILED,
	WLAN_11N_UL_SEM_HANDLER_IS_NULL,
	WLAN_11N_UL_SEM_TEST_FAILED,
};


enum
{
	WLAN_11N_SEM_NEG_RANG4_ID = 0,
	WLAN_11N_SEM_NEG_RANG3_ID,
	WLAN_11N_SEM_NEG_RANG2_ID,
	WLAN_11N_SEM_NEG_RANG1_ID,
	WLAN_11N_SEM_POS_RANG1_ID,
	WLAN_11N_SEM_POS_RANG2_ID,
	WLAN_11N_SEM_POS_RANG3_ID,
	WLAN_11N_SEM_POS_RANG4_ID,
};

#pragma endregion Wlan11n


#pragma region Wlan11Ax

#define WLAN_SLOT_SYMBOL_NUM 14
#define WLAN_UL_SEM_TOTAL_RANGE_NUM	8
#define WLAN_UL_SEM_HALF_RANGE_NUM	4
#define WLAN_UL_SEM_MIN_TIME_WINDOW   0.001 // 1ms ,0.001 second
#define WLAN_UL_IBE_MIN_TIME_WINDOW   0.001 // 1ms ,0.001 second
#define WLAN_UL_ACLR_MIN_TIME_WINDOW   0.001 // 1ms ,0.001 second
#define WLAN_MAX_DUT_NUMBER 4

enum WlanBandwidth
{
	BW_20M = 0,
	BW_40M = 1,
	BW_80M = 2,
	BW_160M = 3,
};

enum PPDUType {
	ax_HE_SU = 0,
	ax_HE_MU = 1,
	ax_HE_xSU = 2,
	ax_HE_TRIG = 3,
	ax_HE_NDP = 4,
};

enum HE_LTF_Type {
	ax_1xHE_LTF_GI800 = 0,
	ax_2xHE_LTF_GI800 = 1,
	ax_2xHE_LTF_GI1600 = 2,
	ax_4xHE_LTF_GI3200 = 3,
	ax_4xHE_LTF_GI800 = 4,

};


enum WlanStatusCode {
	WLAN_STATUS_OK = 0,
	WLAN_UL_STATUS_ERROR,
	WLAN_UL_ACLR_FAILED,
	WLAN_UL_IBE_FAILED,
	WLAN_UL_DEMOD_INIT_FAILED,
	WLAN_UL_DEMOD_GET_IQDATA_FAILED,
	WLAN_UL_DEMOD_FAILED,
	WLAN_UL_SEM_HANDLER_IS_NULL,
	WLAN_UL_SEM_TEST_FAILED,
};



enum
{
	WLAN_UL_SEM_NEG_RANG4_ID = 0,
	WLAN_UL_SEM_NEG_RANG3_ID,
	WLAN_UL_SEM_NEG_RANG2_ID,
	WLAN_UL_SEM_NEG_RANG1_ID,
	WLAN_UL_SEM_POS_RANG1_ID,
	WLAN_UL_SEM_POS_RANG2_ID,
	WLAN_UL_SEM_POS_RANG3_ID,
	WLAN_UL_SEM_POS_RANG4_ID,
};

#pragma endregion Wlan11Ax


#pragma region Wlan11Be

enum Wlan11beBandwidth
{
	WLAN_11be_BW_20M = 0,
	WLAN_11be_BW_40M = 1,
	WLAN_11be_BW_80M = 2,
	WLAN_11be_BW_160M = 3,
	WLAN_11be_BW_320M = 4,
};

enum Wlan11be_LTF_Type {
	be2xEHT_LTF_GI800 = 0,
	be2xEHT_LTF_GI1600 = 1,
	be4xEHT_LTF_GI3200 = 2,
	be4xEHT_LTF_GI800 = 3,
};

enum Wlan11ac_PPDUType {
	Wlan11ac_MixedMode = 0,
	Wlan11ac_GreenField = 1,
	Wlan11ac_Non_HT = 2,
};

enum Wlan11acChannelEstimateBy {
	Wlan11be_L_LTF = 0,
	Wlan11be_EHT_LTF = 1,

};

enum Wlan11acGITypes {
	Wlan11ac_ShortGI = 0,
	Wlan11ac_LongGI = 1,

};

enum Wlan11ac_HE_LTF_Type {
	Wlan11ac_1xHE_LTF_GI800 = 0,
	Wlan11ac_2xHE_LTF_GI800 = 1,
	Wlan11ac_2xHE_LTF_GI1600 = 2,
	Wlan11ac_4xHE_LTF_GI3200 = 3,
	Wlan11acn_4xHE_LTF_GI800 = 4,

};


enum Wlan11acStatusCode {
	WLAN_11AC_STATUS_OK = 0,
	WLAN_11AC_UL_STATUS_ERROR,
	WLAN_11AC_UL_DEMOD_INIT_FAILED,
	WLAN_11AC_UL_DEMOD_GET_IQDATA_FAILED,
	WLAN_11AC_UL_DEMOD_FAILED,

};

#pragma endregion Wlan11Be
#endif // ! DspCommonTypeDefine_H

