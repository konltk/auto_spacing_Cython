// 한글 자동 띄어쓰기에 필요한 데이터 파일
#define UNIGRAM_FILE	"unigram.dic"
#define BIGRAM_FILE		"bigram.dic"
#define TRIGRAM_FILE	"trigram.dic"
#define ERROR_FILE		"error.dic"

#define PREFIX
#ifndef PREFIX
#define PREFIX	_declspec(dllimport)
//#define PREFIX "C" _declspec(dllimport)
#endif

// 한글 자동 띄어쓰기 라이브러리 함수 API
extern PREFIX int KLT_wordspace_initialize_dicpath(char *dicpath);
extern PREFIX int KLT_wordspace_initialize(char *filename_unigram, char *filename_bigram,
	 char *filename_trigram, char *filename_error);
extern PREFIX void KLT_wordspace_run(char *str, char *res_str);
extern PREFIX void KLT_wordspace_option(char *str, char *res_str, int minfreq, int spmark_min, int flag);
extern PREFIX int KLT_wordspace_finalize(void);

extern PREFIX void KLT_dic_reference(char *str, char *detail);	// ngram 데이터를 MFC GUI로 보여주기 위한 것임.

//============================================================
// 영어 자동 띄어쓰기 라이브러리 함수 API
#define ENGLISH_DIC_FILE	"English.dic"
#define ENGLISH_IDX_FILE	"English.ndx"
#define ENGLISH_ERROR_FILE	"E-error.dic"

extern PREFIX int KLT_wordspace_initialize_dicpath_English(char *dicpath);
extern PREFIX void KLT_wordspace_run_English(char *str, char *res_str);
extern PREFIX int KLT_wordspace_finalize_English(void);
//============================================================
