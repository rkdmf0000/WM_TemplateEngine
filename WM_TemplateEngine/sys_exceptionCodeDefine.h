#pragma once
namespace WMB {
#define WMB_SYS_EXCEPTION_ERROR_TYPE_FAILED 0x00 //not good
#define WMB_SYS_EXCEPTION_ERROR_TYPE_SUCCESS 0x01 //ok good
#define WMB_SYS_EXCEPTION_ERROR_TYPE_UNKNOWN 0x02 //what?
#define WMB_SYS_EXCEPTION_ERROR_TYPE_FILEISUNREADABLE 0x500 //unreadable file
#define WMB_SYS_EXCEPTION_ERROR_TYPE_FILEISKEEPOPENED 0x501 //file is opened. please shut up
#define WMB_SYS_EXCEPTION_ERROR_TYPE_FILEISREADONLY 0x502 //readonly? ok..


	//unsigned char* for error string
#define WMB_SYS_EXCEPTION_ERROR_LOG_FORM(code, txt) std::cout << "- " << (unsigned char*)#txt << "(" << (unsigned char*)#code << ")" << '\n';
}