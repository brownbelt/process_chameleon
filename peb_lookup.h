#pragma once

#include <Windows.h>
#include "ntddk.h"

typedef struct _LDR_MODULE { 
    LIST_ENTRY  InLoadOrderModuleList;//   +0x00 
    LIST_ENTRY  InMemoryOrderModuleList;// +0x08   
    LIST_ENTRY  InInitializationOrderModuleList;// +0x10 
    void*   BaseAddress; // +0x18 
    void*   EntryPoint;  // +0x1c 
    ULONG   SizeOfImage; 
    LPWSTR  FullDllName; 
    LPWSTR  BaseDllName; 
    ULONG   Flags; 
    SHORT   LoadCount; 
    SHORT   TlsIndex; 
    HANDLE  SectionHandle; 
    ULONG   CheckSum; 
    ULONG   TimeDateStamp; 
} LDR_MODULE, *PLDR_MODULE;

LPVOID set_module_name(LPWSTR module_name);
