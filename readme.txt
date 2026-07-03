Title: extNagano plugin (吉里吉里Z 復元版)
Author: ヤマモト / Shun / chiyoclone.net / シノハラ (tp_stub 等は W.Dee)

●これはなに？

吉里吉里に追加のトランジション（画面切り替え効果）を提供するプラグインです。
元は吉里吉里2 用の extNagano.dll (ver 1.2.4.726, 2006) で、以下の 12 種類の
トランジションを登録します。

  3duniversal  : ルール画像の RGB/HSB 値で画素を移動させて切り替える万能効果
  blurfade     : ぼかしながらのクロスフェード
  scanline     : スキャンラインごとに左右交互にスライドさせて切り替え
  zoomfade     : 元画像を拡大しながら次画像へ切り替え
  rgbfade      : RGB 成分ごとにタイミングを変えたクロスフェード
  spin         : 二枚のラインを回転させて切り替え
  flutter      : 紙をめくり上げるようなトランジション
  book         : 本のページをめくるようなトランジション
  imagewipe    : 任意のルール画像を使うワイプ
  honeyturn    : turn を六角形に拡張しためくり (元 DLL でも未完)
  morphing     : 三角形パッチを変形させながらフェード
  multiripple  : 複数の波紋が広がって切り替え

●復元について

元 DLL のソースは失われていたため、残存する extNagano.dll (x86) を Ghidra で
デコンパイルし、吉里吉里Z の extrans プラグインの構造をベースに再構築しました。
一部の効果はアルゴリズムを近似・簡略化しています（各ソース冒頭のコメント参照）。
吉里吉里2 用の 32bit 専用コード（インラインアセンブラ等）は C 等価実装に置換し、
全ビルドバリアント（WIN / SDL / LIB）でビルドできるようにしています。

●使い方

manual.tjs 参照。
Layer.beginTransition（または KAG の trans タグ）でトランジション名とオプションを
指定して使用します。共通オプション time（所要時間・ミリ秒）は必須です。

●ライセンス

元の extNagano.dll は吉里吉里独自ライセンスと GNU GPL のデュアルライセンスで
提供されていました。吉里吉里本体もデュアルライセンスであり、本復元版は
吉里吉里本体のライセンスに準拠して扱います。
著作権: ヤマモト / Shun / chiyoclone.net / シノハラ、および
tp_stub.h / tp_stub.cpp / common.h について W.Dee。
