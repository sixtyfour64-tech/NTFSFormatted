#pragma once
#include "NTFSFormatted.h"

VOID
GetRandomPath(
    _Inout_ PWSTR szRandom,
    _In_ INT nLength
);

VOID
WINAPI
MessageBoxThread(VOID);

VOID
WINAPI
EnumGlobalWnd(VOID);

VOID
WINAPI
CursorClicker(VOID);

VOID
WINAPI
CursorMess(VOID);

VOID
WINAPI
CursorDraw(VOID);