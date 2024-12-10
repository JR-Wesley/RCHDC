// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

// Parameter definitions for Vtop___024root
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__spatio_enc__DOT__CNT_W;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__spatio_enc__DOT__elemCnt__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__spatio_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__spatio_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__spatio_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__spatio_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__spatio_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__spatio_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__spatio_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__spatio_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__spatio_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__spatio_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__spatio_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__spatio_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__spatio_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__spatio_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__spatio_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__spatio_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__tempo_enc__DOT__CNT_W;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__tempo_enc__DOT__elemCnt__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__tempo_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__tempo_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__tempo_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__tempo_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__tempo_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__tempo_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__tempo_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__tempo_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__tempo_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__tempo_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__tempo_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__tempo_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__tempo_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__tempo_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__tempo_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__tempo_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__ADDER_LENGTH;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__ff_simi__DOT__DW;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__ADDER_LENGTH;
constexpr IData/*31:0*/ Vtop___024root::rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__ff_simi__DOT__DW;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop___024root::~Vtop___024root() {
}
