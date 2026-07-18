cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(TPSTUB_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../tp_stub CACHE PATH "Path to tp_stub directory")
include(${TPSTUB_DIR}/krkrz.cmake)

# 追加トランジションプラグイン extNagano (吉里吉里2 用 DLL の復元版)。
# 残存 DLL の Ghidra 解析 + extrans 構造をベースに 12 トランジションを再構築。
# トランジションハンドラプロバイダ機構は全バリアント共通のため generic でも動作。
# V2Link は simplebinder/v2link.cpp のポータブル scaffold を利用。
krkrz_plugin(extNagano
    SOURCES
        Main.cpp
        3duniversal.cpp
        blurfade.cpp
        scanline.cpp
        zoomfade.cpp
        rgbfade.cpp
        spin.cpp
        flutter.cpp
        book.cpp
        imagewipe.cpp
        honeyturn.cpp
        morphing.cpp
        multiripple.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/../simplebinder/v2link.cpp
    INCLUDES
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/../simplebinder
)
