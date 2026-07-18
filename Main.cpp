//---------------------------------------------------------------------------
// extNagano : 追加トランジションプラグイン (吉里吉里Z 向け復元版)
//
// 元は吉里吉里2 用の extNagano.dll (作者: ヤマモト / Shun / chiyoclone.net /
// シノハラ、tp_stub等は W.Dee)。ソースが失われていたため、残存 DLL の Ghidra
// による解析 + extrans の構造をベースに再構築したもの。V2Link は
// simplebinder/v2link.cpp のポータブル scaffold を利用し、全バリアント
// (WIN/SDL/LIB) でビルドできる。
//---------------------------------------------------------------------------
#include "tp_stub.h"
// ONV2LINK/ONV2UNLINK マクロ (静的リンク時に onV2Link_<プラグイン名> へ
// リネームし、複数プラグイン同居時のシンボル衝突を避ける) のため include
#include "simplebinder.hpp"

#include "3duniversal.h"
#include "blurfade.h"
#include "scanline.h"
#include "zoomfade.h"
#include "rgbfade.h"
#include "spin.h"
#include "flutter.h"
#include "book.h"
#include "imagewipe.h"
#include "honeyturn.h"
#include "morphing.h"
#include "multiripple.h"

//---------------------------------------------------------------------------
bool ONV2LINK()
{
	// トランジションハンドラプロバイダの登録
	Register3duniversalTransHandlerProvider();
	RegisterBlurFadeTransHandlerProvider();
	RegisterScanLineTransHandlerProvider();
	RegisterZoomFadeTransHandlerProvider();
	RegisterRGBFadeTransHandlerProvider();
	RegisterSpinFadeTransHandlerProvider();
	RegisterFlutterTransHandlerProvider();
	RegisterBookTransHandlerProvider();
	RegisterImageWipeTransHandlerProvider();
	RegisterHoneyTurnTransHandlerProvider();
	RegisterMorphingTransHandlerProvider();
	RegisterMultiRippleTransHandlerProvider();
	return true;
}
//---------------------------------------------------------------------------
bool ONV2UNLINK()
{
	// トランジションハンドラプロバイダの登録削除
	Unregister3duniversalTransHandlerProvider();
	UnregisterBlurFadeTransHandlerProvider();
	UnregisterScanLineTransHandlerProvider();
	UnregisterZoomFadeTransHandlerProvider();
	UnregisterRGBFadeTransHandlerProvider();
	UnregisterSpinFadeTransHandlerProvider();
	UnregisterFlutterTransHandlerProvider();
	UnregisterBookTransHandlerProvider();
	UnregisterImageWipeTransHandlerProvider();
	UnregisterHoneyTurnTransHandlerProvider();
	UnregisterMorphingTransHandlerProvider();
	UnregisterMultiRippleTransHandlerProvider();
	return true;
}
//---------------------------------------------------------------------------
