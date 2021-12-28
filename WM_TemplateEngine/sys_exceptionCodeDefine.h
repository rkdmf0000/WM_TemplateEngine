#pragma once
namespace WMB {
#define WMB_SYS_EXCEPTION_ERROR_TYPE_FAILED 0x00 //failure
#define WMB_SYS_EXCEPTION_ERROR_TYPE_SUCCESS 0x01 //successusus
#define WMB_SYS_EXCEPTION_ERROR_TYPE_UNKNOWN 0x02 //what?
#define WMB_SYS_EXCEPTION_ERROR_TYPE_FILEISUNREADABLE 0x500 //blinded thing or your eyes
#define WMB_SYS_EXCEPTION_ERROR_TYPE_FILEISKEEPOPENED 0x501 //please? close up? bout your opens one?
#define WMB_SYS_EXCEPTION_ERROR_TYPE_FILEISREADONLY 0x502 //ME FILE IS STRONG. YOU CANT TOUCH ME FOR-EVER.
#define WMB_SYS_EXCEPTION_ERROR_TYPE_FILEWRITEFAILED 0x503 //body.. for what?
#define WMB_SYS_EXCEPTION_ERROR_TYPE_FILEISBROKEN 0x504 //broke block bruh

	//unsigned char* for error string
#define WMB_SYS_EXCEPTION_ERROR_LOG_FORM(code, txt) (unsigned char*)"-10g : "#txt "("#code")";
}