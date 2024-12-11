// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rchdc__DOT__im_value = vlSelfRef.im_value;
    vlSelfRef.rchdc__DOT__im_pos = vlSelfRef.im_pos;
    vlSelfRef.rchdc__DOT__state = vlSelfRef.state;
    vlSelfRef.rchdc__DOT__label = vlSelfRef.label;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc) 
                 >> 3U));
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc) 
                 >> 3U));
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc) 
                 >> 3U));
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc) 
                 >> 3U));
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc) 
                 >> 3U));
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc) 
                 >> 3U));
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc) 
                 >> 3U));
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc) 
                 >> 3U));
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc) 
                 >> 3U));
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc) 
                 >> 3U));
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc) 
                 >> 3U));
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc) 
                 >> 3U));
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc) 
                 >> 3U));
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc) 
                 >> 3U));
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc) 
                 >> 3U));
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc) 
                 >> 3U));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__a 
        = vlSelfRef.rchdc__DOT__AM[0U];
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__a 
        = vlSelfRef.rchdc__DOT__AM[1U];
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__15__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__14__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__13__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__12__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__11__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__10__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__9__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__8__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__7__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__6__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__5__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__4__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__3__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__2__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__1__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__0__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__15__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__14__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__13__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__12__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__11__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__10__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__9__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__8__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__7__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__6__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__5__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__4__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__3__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__2__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__1__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__0__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__simi 
        = vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__ff_simi__DOT__qout;
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__simi 
        = vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__ff_simi__DOT__qout;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__cnt = vlSelfRef.rchdc__DOT__smp_cnt;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__cnt = vlSelfRef.rchdc__DOT__set_cnt;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__elemCnt__DOT__cnt_max 
        = (((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__elemCnt__DOT__cnt) 
            < (IData)(vlSelfRef.rchdc__DOT__smp_cnt))
            ? (0xfU & ((IData)(1U) + (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__elemCnt__DOT__cnt)))
            : 0U);
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__elemCnt__DOT__cnt_max 
        = (((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__elemCnt__DOT__cnt) 
            < (IData)(vlSelfRef.rchdc__DOT__set_cnt))
            ? (0xfU & ((IData)(1U) + (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__elemCnt__DOT__cnt)))
            : 0U);
    vlSelfRef.rchdc__DOT__smp_done = ((IData)(vlSelfRef.smp_en) 
                                      & ((IData)(vlSelfRef.rchdc__DOT__smp_cnt) 
                                         == (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__elemCnt__DOT__cnt)));
    vlSelfRef.rchdc__DOT__set_done = ((IData)(vlSelfRef.rchdc__DOT__set_en) 
                                      & ((IData)(vlSelfRef.rchdc__DOT__set_cnt) 
                                         == (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__elemCnt__DOT__cnt)));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__cls_simi 
        = vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__ff_simi__DOT__qout;
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__cls_simi 
        = vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__ff_simi__DOT__qout;
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 = (((8U 
                                                  & (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc)) 
                                                 | (4U 
                                                    & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc) 
                                                       >> 1U))) 
                                                | ((2U 
                                                    & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc) 
                                                       >> 2U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc) 
                                                         >> 3U))));
    if (vlSelfRef.set_clr) {
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__smp_clr = vlSelfRef.smp_clr;
        vlSelfRef.rchdc__DOT__set_clr = 1U;
    } else {
        if (vlSelfRef.rchdc__DOT__set_en) {
            vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc_next 
                = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc) 
                           + VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc), 3U)));
            vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc_next 
                = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc) 
                           + VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc), 3U)));
            vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc_next 
                = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc) 
                           + VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc), 3U)));
            vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc_next 
                = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc) 
                           + VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc), 3U)));
            vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc_next 
                = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc) 
                           + VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc), 3U)));
            vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc_next 
                = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc) 
                           + VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc), 3U)));
            vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc_next 
                = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc) 
                           + VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc), 3U)));
            vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc_next 
                = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc) 
                           + VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc), 3U)));
            vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc_next 
                = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc) 
                           + VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc), 3U)));
            vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc_next 
                = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc) 
                           + VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc), 3U)));
            vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc_next 
                = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc) 
                           + VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc), 3U)));
            vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc_next 
                = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc) 
                           + VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc), 3U)));
            vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc_next 
                = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc) 
                           + VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc), 3U)));
            vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc_next 
                = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc) 
                           + VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc), 3U)));
            vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc_next 
                = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc) 
                           + VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc), 3U)));
            vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc_next 
                = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc) 
                           + VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_0), 3U)));
        } else {
            vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc_next 
                = (0xfU & (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc));
            vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc_next 
                = (0xfU & (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc));
            vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc_next 
                = (0xfU & (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc));
            vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc_next 
                = (0xfU & (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc));
            vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc_next 
                = (0xfU & (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc));
            vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc_next 
                = (0xfU & (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc));
            vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc_next 
                = (0xfU & (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc));
            vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc_next 
                = (0xfU & (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc));
            vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc_next 
                = (0xfU & (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc));
            vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc_next 
                = (0xfU & (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc));
            vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc_next 
                = (0xfU & (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc));
            vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc_next 
                = (0xfU & (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc));
            vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc_next 
                = (0xfU & (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc));
            vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc_next 
                = (0xfU & (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc));
            vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc_next 
                = (0xfU & (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc));
            vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc_next 
                = (0xfU & (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc));
        }
        vlSelfRef.rchdc__DOT__smp_clr = vlSelfRef.smp_clr;
        vlSelfRef.rchdc__DOT__set_clr = 0U;
    }
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__en = vlSelfRef.rchdc__DOT__set_en;
    vlSelfRef.rchdc__DOT__smp_en = vlSelfRef.smp_en;
    vlSelfRef.rchdc__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.rchdc__DOT__clk = vlSelfRef.clk;
    vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data 
        = ((IData)(vlSelfRef.im_pos) ^ (IData)(vlSelfRef.im_value));
    vlSelfRef.rchdc__DOT__set_enc = (((((0x8000U & 
                                         ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc) 
                                          << 0xcU)) 
                                        | (0x4000U 
                                           & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc) 
                                              << 0xbU))) 
                                       | ((0x2000U 
                                           & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc) 
                                              << 0xaU)) 
                                          | (0x1000U 
                                             & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc) 
                                                << 9U)))) 
                                      | (((0x800U & 
                                           ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc) 
                                            << 8U)) 
                                          | (0x400U 
                                             & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc) 
                                                << 7U))) 
                                         | ((0x200U 
                                             & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc) 
                                                << 6U)) 
                                            | (0x100U 
                                               & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc) 
                                                  << 5U))))) 
                                     | ((((0x80U & 
                                           ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc) 
                                            << 4U)) 
                                          | (0x40U 
                                             & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc) 
                                                << 3U))) 
                                         | ((0x20U 
                                             & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc) 
                                                << 2U)) 
                                            | (0x10U 
                                               & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc) 
                                                  << 1U)))) 
                                        | (((8U & (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc)) 
                                            | (4U & 
                                               ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc) 
                                                >> 1U))) 
                                           | ((2U & 
                                               ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc) 
                                                >> 2U)) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc) 
                                                    >> 3U))))));
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__elemCnt__DOT__max 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__cnt;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__elemCnt__DOT__max 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__cnt;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__elemCnt__DOT__cnt_next 
        = ((IData)(vlSelfRef.smp_en) ? (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__elemCnt__DOT__cnt_max)
            : (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__elemCnt__DOT__cnt));
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__elemCnt__DOT__cnt_next 
        = ((IData)(vlSelfRef.rchdc__DOT__set_en) ? (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__elemCnt__DOT__cnt_max)
            : (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__elemCnt__DOT__cnt));
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__done = vlSelfRef.rchdc__DOT__smp_done;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__elemCnt__DOT__co 
        = vlSelfRef.rchdc__DOT__smp_done;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__done = vlSelfRef.rchdc__DOT__set_done;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__elemCnt__DOT__co 
        = vlSelfRef.rchdc__DOT__set_done;
    vlSelfRef.rchdc__DOT__cls_mimi = ((IData)(vlSelfRef.state)
                                       ? (((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__cls_simi) 
                                           > (IData)(vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__cls_simi))
                                           ? 0U : 1U)
                                       : 0U);
    vlSelfRef.rchdc__DOT__smp_enc = (((((0x8000U & 
                                         ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc) 
                                          << 0xcU)) 
                                        | (0x4000U 
                                           & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc) 
                                              << 0xbU))) 
                                       | ((0x2000U 
                                           & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc) 
                                              << 0xaU)) 
                                          | (0x1000U 
                                             & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc) 
                                                << 9U)))) 
                                      | (((0x800U & 
                                           ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc) 
                                            << 8U)) 
                                          | (0x400U 
                                             & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc) 
                                                << 7U))) 
                                         | ((0x200U 
                                             & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc) 
                                                << 6U)) 
                                            | (0x100U 
                                               & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc) 
                                                  << 5U))))) 
                                     | (((0x80U & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc) 
                                                   << 4U)) 
                                         | (0x40U & 
                                            ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc) 
                                             << 3U))) 
                                        | ((0x20U & 
                                            ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc) 
                                             << 2U)) 
                                           | ((0x10U 
                                               & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc) 
                                                  << 1U)) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__clear = vlSelfRef.rchdc__DOT__smp_clr;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__clear = vlSelfRef.rchdc__DOT__set_clr;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__elemCnt__DOT__en 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__en;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__en;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__en;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__en;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__en;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__en;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__en;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__en;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__en;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__en;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__en;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__en;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__en;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__en;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__en;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__en;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__en;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__en = vlSelfRef.rchdc__DOT__smp_en;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__rst_n = vlSelfRef.rchdc__DOT__rst_n;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__rst_n = vlSelfRef.rchdc__DOT__rst_n;
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__clk 
        = vlSelfRef.rchdc__DOT__clk;
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__clk 
        = vlSelfRef.rchdc__DOT__clk;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__clk = vlSelfRef.rchdc__DOT__clk;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__clk = vlSelfRef.rchdc__DOT__clk;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__data = vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                 >> 0U));
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                 >> 1U));
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                 >> 2U));
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                 >> 3U));
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                 >> 4U));
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                 >> 5U));
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                 >> 6U));
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                 >> 7U));
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                 >> 8U));
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                 >> 9U));
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                 >> 0xaU));
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                 >> 0xbU));
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                 >> 0xcU));
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                 >> 0xdU));
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                 >> 0xeU));
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                 >> 0xfU));
    if (vlSelfRef.smp_clr) {
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc_next = 0U;
    } else if (vlSelfRef.smp_en) {
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc) 
                       + (1U & (IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data))));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc) 
                       + (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                                >> 1U))));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc) 
                       + (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                                >> 2U))));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc) 
                       + (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                                >> 3U))));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc) 
                       + (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                                >> 4U))));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc) 
                       + (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                                >> 5U))));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc) 
                       + (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                                >> 6U))));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc) 
                       + (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                                >> 7U))));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc) 
                       + (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                                >> 8U))));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc) 
                       + (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                                >> 9U))));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc) 
                       + (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                                >> 0xaU))));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc) 
                       + (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                                >> 0xbU))));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc) 
                       + (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                                >> 0xcU))));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc) 
                       + (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                                >> 0xdU))));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc) 
                       + (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                                >> 0xeU))));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc) 
                       + (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                                >> 0xfU))));
    } else {
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc));
    }
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__b 
        = vlSelfRef.rchdc__DOT__set_enc;
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__b 
        = vlSelfRef.rchdc__DOT__set_enc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__enc = vlSelfRef.rchdc__DOT__set_enc;
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__xor_ab 
        = (vlSelfRef.rchdc__DOT__AM[0U] ^ (IData)(vlSelfRef.rchdc__DOT__set_enc));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__xor_ab 
        = (vlSelfRef.rchdc__DOT__AM[1U] ^ (IData)(vlSelfRef.rchdc__DOT__set_enc));
    vlSelfRef.predict = vlSelfRef.rchdc__DOT__cls_mimi;
    vlSelfRef.rchdc__DOT__predict = vlSelfRef.rchdc__DOT__cls_mimi;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__data = vlSelfRef.rchdc__DOT__smp_enc;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__enc = vlSelfRef.rchdc__DOT__smp_enc;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__clr 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__clear;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__clr 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__clear;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__clr 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__clear;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__clr 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__clear;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__clr 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__clear;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__clr 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__clear;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__clr 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__clear;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__clr 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__clear;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__clr 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__clear;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__clr 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__clear;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__clr 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__clear;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__clr 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__clear;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__clr 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__clear;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__clr 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__clear;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__clr 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__clear;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__clr 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__clear;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__clr 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__clear;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__clr 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__clear;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__clr 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__clear;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__clr 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__clear;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__clr 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__clear;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__clr 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__clear;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__clr 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__clear;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__clr 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__clear;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__clr 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__clear;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__clr 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__clear;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__clr 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__clear;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__clr 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__clear;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__clr 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__clear;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__clr 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__clear;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__clr 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__clear;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__clr 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__clear;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__elemCnt__DOT__en 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__en;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__en;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__en;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__en;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__en;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__en;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__en;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__en;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__en;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__en;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__en;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__en;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__en;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__en;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__en;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__en;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__en;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__elemCnt__DOT__rst_n 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__rst_n;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__rst_n 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__rst_n;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__rst_n 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__rst_n;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__rst_n 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__rst_n;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__rst_n 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__rst_n;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__rst_n 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__rst_n;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__rst_n 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__rst_n;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__rst_n 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__rst_n;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__rst_n 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__rst_n;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__rst_n 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__rst_n;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__rst_n 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__rst_n;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__rst_n 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__rst_n;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__rst_n 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__rst_n;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__rst_n 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__rst_n;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__rst_n 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__rst_n;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__rst_n 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__rst_n;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__rst_n 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__rst_n;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__elemCnt__DOT__rst_n 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__rst_n;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__rst_n 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__rst_n;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__rst_n 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__rst_n;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__rst_n 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__rst_n;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__rst_n 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__rst_n;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__rst_n 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__rst_n;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__rst_n 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__rst_n;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__rst_n 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__rst_n;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__rst_n 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__rst_n;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__rst_n 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__rst_n;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__rst_n 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__rst_n;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__rst_n 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__rst_n;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__rst_n 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__rst_n;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__rst_n 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__rst_n;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__rst_n 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__rst_n;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__rst_n 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__rst_n;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__rst_n 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__rst_n;
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__ff_simi__DOT__clk 
        = vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__clk;
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__ff_simi__DOT__clk 
        = vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__clk;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__elemCnt__DOT__clk 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__clk;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__clk 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__clk;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__clk 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__clk;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__clk 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__clk;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__clk 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__clk;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__clk 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__clk;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__clk 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__clk;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__clk 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__clk;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__clk 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__clk;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__clk 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__clk;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__clk 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__clk;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__clk 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__clk;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__clk 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__clk;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__clk 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__clk;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__clk 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__clk;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__clk 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__clk;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__clk 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__clk;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__elemCnt__DOT__clk 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__clk;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__clk 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__clk;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__clk 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__clk;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__clk 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__clk;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__clk 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__clk;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__clk 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__clk;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__clk 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__clk;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__clk 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__clk;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__clk 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__clk;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__clk 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__clk;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__clk 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__clk;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__clk 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__clk;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__clk 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__clk;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__clk 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__clk;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__clk 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__clk;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__clk 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__clk;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__clk 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__clk;
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1[0U] 
        = (1U & (IData)(vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__xor_ab));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2[0U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__xor_ab) 
                 >> 1U));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1[1U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__xor_ab) 
                 >> 2U));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2[1U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__xor_ab) 
                 >> 3U));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1[2U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__xor_ab) 
                 >> 4U));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2[2U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__xor_ab) 
                 >> 5U));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1[3U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__xor_ab) 
                 >> 6U));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2[3U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__xor_ab) 
                 >> 7U));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1[4U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__xor_ab) 
                 >> 8U));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2[4U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__xor_ab) 
                 >> 9U));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1[5U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__xor_ab) 
                 >> 0xaU));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2[5U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__xor_ab) 
                 >> 0xbU));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1[6U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__xor_ab) 
                 >> 0xcU));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2[6U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__xor_ab) 
                 >> 0xdU));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1[7U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__xor_ab) 
                 >> 0xeU));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2[7U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__xor_ab) 
                 >> 0xfU));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1[0U] 
        = (1U & (IData)(vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__xor_ab));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2[0U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__xor_ab) 
                 >> 1U));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1[1U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__xor_ab) 
                 >> 2U));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2[1U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__xor_ab) 
                 >> 3U));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1[2U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__xor_ab) 
                 >> 4U));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2[2U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__xor_ab) 
                 >> 5U));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1[3U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__xor_ab) 
                 >> 6U));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2[3U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__xor_ab) 
                 >> 7U));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1[4U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__xor_ab) 
                 >> 8U));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2[4U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__xor_ab) 
                 >> 9U));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1[5U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__xor_ab) 
                 >> 0xaU));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2[5U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__xor_ab) 
                 >> 0xbU));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1[6U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__xor_ab) 
                 >> 0xcU));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2[6U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__xor_ab) 
                 >> 0xdU));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1[7U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__xor_ab) 
                 >> 0xeU));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2[7U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__xor_ab) 
                 >> 0xfU));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s[0U] 
        = (3U & (vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1
                 [0U] + vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2
                 [0U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s[1U] 
        = (3U & (vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1
                 [1U] + vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2
                 [1U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s[2U] 
        = (3U & (vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1
                 [2U] + vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2
                 [2U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s[3U] 
        = (3U & (vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1
                 [3U] + vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2
                 [3U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s[4U] 
        = (3U & (vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1
                 [4U] + vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2
                 [4U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s[5U] 
        = (3U & (vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1
                 [5U] + vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2
                 [5U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s[6U] 
        = (3U & (vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1
                 [6U] + vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2
                 [6U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s[7U] 
        = (3U & (vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1
                 [7U] + vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2
                 [7U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s[0U] 
        = (3U & (vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1
                 [0U] + vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2
                 [0U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s[1U] 
        = (3U & (vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1
                 [1U] + vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2
                 [1U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s[2U] 
        = (3U & (vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1
                 [2U] + vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2
                 [2U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s[3U] 
        = (3U & (vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1
                 [3U] + vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2
                 [3U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s[4U] 
        = (3U & (vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1
                 [4U] + vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2
                 [4U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s[5U] 
        = (3U & (vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1
                 [5U] + vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2
                 [5U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s[6U] 
        = (3U & (vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1
                 [6U] + vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2
                 [6U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s[7U] 
        = (3U & (vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1
                 [7U] + vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2
                 [7U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend1[0U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s
        [0U];
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend2[0U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s
        [0U];
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend1[1U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s
        [1U];
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend2[1U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s
        [1U];
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend1[2U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s
        [2U];
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend2[2U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s
        [2U];
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend1[3U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s
        [3U];
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend2[3U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s
        [3U];
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend1[0U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s
        [0U];
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend2[0U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s
        [0U];
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend1[1U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s
        [1U];
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend2[1U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s
        [1U];
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend1[2U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s
        [2U];
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend2[2U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s
        [2U];
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend1[3U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s
        [3U];
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend2[3U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s
        [3U];
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__sum_s[0U] 
        = (7U & (vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend1
                 [0U] + vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend2
                 [0U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__sum_s[1U] 
        = (7U & (vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend1
                 [1U] + vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend2
                 [1U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__sum_s[2U] 
        = (7U & (vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend1
                 [2U] + vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend2
                 [2U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__sum_s[3U] 
        = (7U & (vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend1
                 [3U] + vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend2
                 [3U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__sum_s[0U] 
        = (7U & (vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend1
                 [0U] + vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend2
                 [0U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__sum_s[1U] 
        = (7U & (vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend1
                 [1U] + vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend2
                 [1U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__sum_s[2U] 
        = (7U & (vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend1
                 [2U] + vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend2
                 [2U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__sum_s[3U] 
        = (7U & (vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend1
                 [3U] + vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend2
                 [3U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__addend1[0U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__sum_s
        [0U];
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__addend2[0U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__sum_s
        [0U];
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__addend1[1U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__sum_s
        [1U];
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__addend2[1U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__sum_s
        [1U];
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__addend1[0U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__sum_s
        [0U];
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__addend2[0U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__sum_s
        [0U];
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__addend1[1U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__sum_s
        [1U];
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__addend2[1U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__sum_s
        [1U];
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__sum_s[0U] 
        = (0xfU & (vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__addend1
                   [0U] + vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__addend2
                   [0U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__sum_s[1U] 
        = (0xfU & (vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__addend1
                   [1U] + vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__addend2
                   [1U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__sum_s[0U] 
        = (0xfU & (vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__addend1
                   [0U] + vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__addend2
                   [0U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__sum_s[1U] 
        = (0xfU & (vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__addend1
                   [1U] + vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__addend2
                   [1U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__3__KET____DOT__addend1[0U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__sum_s
        [0U];
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__3__KET____DOT__addend2[0U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__sum_s
        [0U];
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__3__KET____DOT__addend1[0U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__sum_s
        [0U];
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__3__KET____DOT__addend2[0U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__sum_s
        [0U];
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__3__KET____DOT__sum_s[0U] 
        = (0x1fU & (vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__3__KET____DOT__addend1
                    [0U] + vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__3__KET____DOT__addend2
                    [0U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__3__KET____DOT__sum_s[0U] 
        = (0x1fU & (vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__3__KET____DOT__addend1
                    [0U] + vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__3__KET____DOT__addend2
                    [0U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__ff_simi__DOT__data 
        = vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__3__KET____DOT__sum_s
        [0U];
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__ff_simi__DOT__data 
        = vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__3__KET____DOT__sum_s
        [0U];
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ __VdlyVal__rchdc__DOT__AM__v0;
    __VdlyVal__rchdc__DOT__AM__v0 = 0;
    CData/*3:0*/ __VdlyDim0__rchdc__DOT__AM__v0;
    __VdlyDim0__rchdc__DOT__AM__v0 = 0;
    CData/*0:0*/ __VdlySet__rchdc__DOT__AM__v0;
    __VdlySet__rchdc__DOT__AM__v0 = 0;
    // Body
    __VdlySet__rchdc__DOT__AM__v0 = 0U;
    if (vlSelfRef.rchdc__DOT__am_wr) {
        vlSelfRef.rchdc__DOT____Vlvbound_h633f0857__0 
            = vlSelfRef.rchdc__DOT__set_enc;
        if ((9U >= (IData)(vlSelfRef.label))) {
            __VdlyVal__rchdc__DOT__AM__v0 = vlSelfRef.rchdc__DOT____Vlvbound_h633f0857__0;
            __VdlyDim0__rchdc__DOT__AM__v0 = vlSelfRef.label;
            __VdlySet__rchdc__DOT__AM__v0 = 1U;
        }
    }
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__ff_simi__DOT__qout 
        = vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__3__KET____DOT__sum_s
        [0U];
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__ff_simi__DOT__qout 
        = vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__3__KET____DOT__sum_s
        [0U];
    vlSelfRef.rchdc__DOT__set_en = vlSelfRef.rchdc__DOT__smp_done;
    if (__VdlySet__rchdc__DOT__AM__v0) {
        vlSelfRef.rchdc__DOT__AM[__VdlyDim0__rchdc__DOT__AM__v0] 
            = __VdlyVal__rchdc__DOT__AM__v0;
    }
    vlSelfRef.rchdc__DOT__am_wr = vlSelfRef.rchdc__DOT__set_done;
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__a 
        = vlSelfRef.rchdc__DOT__AM[0U];
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__a 
        = vlSelfRef.rchdc__DOT__AM[1U];
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__simi 
        = vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__ff_simi__DOT__qout;
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__cls_simi 
        = vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__ff_simi__DOT__qout;
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__simi 
        = vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__ff_simi__DOT__qout;
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__cls_simi 
        = vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__ff_simi__DOT__qout;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__en = vlSelfRef.rchdc__DOT__set_en;
    vlSelfRef.rchdc__DOT__cls_mimi = ((IData)(vlSelfRef.state)
                                       ? (((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__cls_simi) 
                                           > (IData)(vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__cls_simi))
                                           ? 0U : 1U)
                                       : 0U);
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__elemCnt__DOT__en 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__en;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__en;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__en;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__en;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__en;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__en;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__en;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__en;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__en;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__en;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__en;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__en;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__en;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__en;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__en;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__en;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__en 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__en;
    vlSelfRef.predict = vlSelfRef.rchdc__DOT__cls_mimi;
    vlSelfRef.rchdc__DOT__predict = vlSelfRef.rchdc__DOT__cls_mimi;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_n) {
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__elemCnt__DOT__cnt 
            = vlSelfRef.rchdc__DOT__spatio_enc__DOT__elemCnt__DOT__cnt_next;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__elemCnt__DOT__cnt 
            = vlSelfRef.rchdc__DOT__tempo_enc__DOT__elemCnt__DOT__cnt_next;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc 
            = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc_next;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc 
            = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc_next;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc 
            = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc_next;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc 
            = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc_next;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc 
            = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc_next;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc 
            = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc_next;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc 
            = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc_next;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc 
            = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc_next;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc 
            = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc_next;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc 
            = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc_next;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc 
            = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc_next;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc 
            = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc_next;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc 
            = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc_next;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc 
            = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc_next;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc 
            = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc_next;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc 
            = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc_next;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc 
            = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc_next;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc 
            = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc_next;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc 
            = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc_next;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc 
            = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc_next;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc 
            = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc_next;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc 
            = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc_next;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc 
            = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc_next;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc 
            = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc_next;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc 
            = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc_next;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc 
            = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc_next;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc 
            = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc_next;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc 
            = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc_next;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc 
            = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc_next;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc 
            = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc_next;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc 
            = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc_next;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc 
            = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc_next;
    } else {
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__elemCnt__DOT__cnt = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__elemCnt__DOT__cnt = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc = 0U;
    }
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__elemCnt__DOT__cnt_max 
        = (((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__elemCnt__DOT__cnt) 
            < (IData)(vlSelfRef.rchdc__DOT__smp_cnt))
            ? (0xfU & ((IData)(1U) + (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__elemCnt__DOT__cnt)))
            : 0U);
    vlSelfRef.rchdc__DOT__smp_done = ((IData)(vlSelfRef.smp_en) 
                                      & ((IData)(vlSelfRef.rchdc__DOT__smp_cnt) 
                                         == (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__elemCnt__DOT__cnt)));
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__elemCnt__DOT__cnt_max 
        = (((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__elemCnt__DOT__cnt) 
            < (IData)(vlSelfRef.rchdc__DOT__set_cnt))
            ? (0xfU & ((IData)(1U) + (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__elemCnt__DOT__cnt)))
            : 0U);
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc) 
                 >> 3U));
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__4__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc;
    if (vlSelfRef.smp_clr) {
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc_next = 0U;
    } else if (vlSelfRef.smp_en) {
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc) 
                       + (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                                >> 4U))));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc) 
                       + (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                                >> 5U))));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc) 
                       + (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                                >> 6U))));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc) 
                       + (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                                >> 7U))));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc) 
                       + (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                                >> 8U))));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc) 
                       + (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                                >> 9U))));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc) 
                       + (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                                >> 0xaU))));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc) 
                       + (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                                >> 0xbU))));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc) 
                       + (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                                >> 0xcU))));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc) 
                       + (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                                >> 0xdU))));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc) 
                       + (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                                >> 0xeU))));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc) 
                       + (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                                >> 0xfU))));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc) 
                       + (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                                >> 3U))));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc) 
                       + (1U & (IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data))));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc) 
                       + (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                                >> 1U))));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc) 
                       + (1U & ((IData)(vlSelfRef.rchdc__DOT____Vcellinp__spatio_enc__data) 
                                >> 2U))));
    } else {
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc));
    }
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc) 
                 >> 3U));
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__5__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc) 
                 >> 3U));
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__6__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc) 
                 >> 3U));
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__7__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc) 
                 >> 3U));
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__8__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc) 
                 >> 3U));
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__9__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc) 
                 >> 3U));
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__10__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc) 
                 >> 3U));
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__11__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc) 
                 >> 3U));
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__12__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc) 
                 >> 3U));
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__13__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc) 
                 >> 3U));
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__14__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc) 
                 >> 3U));
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__15__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc) 
                 >> 3U));
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__3__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc) 
                 >> 3U));
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__0__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc) 
                 >> 3U));
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__1__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__one_bit 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc) 
                 >> 3U));
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__2__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 = (((8U 
                                                  & (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc)) 
                                                 | (4U 
                                                    & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc) 
                                                       >> 1U))) 
                                                | ((2U 
                                                    & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc) 
                                                       >> 2U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc) 
                                                         >> 3U))));
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__0__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__1__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__2__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__3__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__4__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__5__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__6__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__7__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__8__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__9__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__10__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__11__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__12__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__13__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__14__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__15__KET____DOT__im_bit_nb 
        = vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc;
    vlSelfRef.rchdc__DOT__set_enc = (((((0x8000U & 
                                         ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc) 
                                          << 0xcU)) 
                                        | (0x4000U 
                                           & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc) 
                                              << 0xbU))) 
                                       | ((0x2000U 
                                           & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc) 
                                              << 0xaU)) 
                                          | (0x1000U 
                                             & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc) 
                                                << 9U)))) 
                                      | (((0x800U & 
                                           ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc) 
                                            << 8U)) 
                                          | (0x400U 
                                             & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc) 
                                                << 7U))) 
                                         | ((0x200U 
                                             & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc) 
                                                << 6U)) 
                                            | (0x100U 
                                               & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc) 
                                                  << 5U))))) 
                                     | ((((0x80U & 
                                           ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc) 
                                            << 4U)) 
                                          | (0x40U 
                                             & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc) 
                                                << 3U))) 
                                         | ((0x20U 
                                             & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc) 
                                                << 2U)) 
                                            | (0x10U 
                                               & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc) 
                                                  << 1U)))) 
                                        | (((8U & (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc)) 
                                            | (4U & 
                                               ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc) 
                                                >> 1U))) 
                                           | ((2U & 
                                               ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc) 
                                                >> 2U)) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc) 
                                                    >> 3U))))));
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__elemCnt__DOT__cnt_next 
        = ((IData)(vlSelfRef.smp_en) ? (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__elemCnt__DOT__cnt_max)
            : (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__elemCnt__DOT__cnt));
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__done = vlSelfRef.rchdc__DOT__smp_done;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__elemCnt__DOT__co 
        = vlSelfRef.rchdc__DOT__smp_done;
    vlSelfRef.rchdc__DOT__smp_enc = (((((0x8000U & 
                                         ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc) 
                                          << 0xcU)) 
                                        | (0x4000U 
                                           & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc) 
                                              << 0xbU))) 
                                       | ((0x2000U 
                                           & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc) 
                                              << 0xaU)) 
                                          | (0x1000U 
                                             & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc) 
                                                << 9U)))) 
                                      | (((0x800U & 
                                           ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc) 
                                            << 8U)) 
                                          | (0x400U 
                                             & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc) 
                                                << 7U))) 
                                         | ((0x200U 
                                             & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc) 
                                                << 6U)) 
                                            | (0x100U 
                                               & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc) 
                                                  << 5U))))) 
                                     | (((0x80U & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc) 
                                                   << 4U)) 
                                         | (0x40U & 
                                            ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc) 
                                             << 3U))) 
                                        | ((0x20U & 
                                            ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc) 
                                             << 2U)) 
                                           | ((0x10U 
                                               & ((IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc) 
                                                  << 1U)) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__b 
        = vlSelfRef.rchdc__DOT__set_enc;
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__b 
        = vlSelfRef.rchdc__DOT__set_enc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__enc = vlSelfRef.rchdc__DOT__set_enc;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__data = vlSelfRef.rchdc__DOT__smp_enc;
    vlSelfRef.rchdc__DOT__spatio_enc__DOT__enc = vlSelfRef.rchdc__DOT__smp_enc;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rchdc__DOT__set_done = ((IData)(vlSelfRef.rchdc__DOT__set_en) 
                                      & ((IData)(vlSelfRef.rchdc__DOT__set_cnt) 
                                         == (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__elemCnt__DOT__cnt)));
    if (vlSelfRef.set_clr) {
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc_next = 0U;
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc_next = 0U;
    } else if (vlSelfRef.rchdc__DOT__set_en) {
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc) 
                       + VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc), 3U)));
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc) 
                       + VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc), 3U)));
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc) 
                       + VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc), 3U)));
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc) 
                       + VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc), 3U)));
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc) 
                       + VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc), 3U)));
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc) 
                       + VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc), 3U)));
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc) 
                       + VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc), 3U)));
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc) 
                       + VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc), 3U)));
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc) 
                       + VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc), 3U)));
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc) 
                       + VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc), 3U)));
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc) 
                       + VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc), 3U)));
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc) 
                       + VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc), 3U)));
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc) 
                       + VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc), 3U)));
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc) 
                       + VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc), 3U)));
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc) 
                       + VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.rchdc__DOT__spatio_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc), 3U)));
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & ((IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc) 
                       + VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_0), 3U)));
    } else {
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc));
        vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc_next 
            = (0xfU & (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc));
    }
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__elemCnt__DOT__cnt_next 
        = ((IData)(vlSelfRef.rchdc__DOT__set_en) ? (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__elemCnt__DOT__cnt_max)
            : (IData)(vlSelfRef.rchdc__DOT__tempo_enc__DOT__elemCnt__DOT__cnt));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__xor_ab 
        = (vlSelfRef.rchdc__DOT__AM[0U] ^ (IData)(vlSelfRef.rchdc__DOT__set_enc));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__xor_ab 
        = (vlSelfRef.rchdc__DOT__AM[1U] ^ (IData)(vlSelfRef.rchdc__DOT__set_enc));
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__done = vlSelfRef.rchdc__DOT__set_done;
    vlSelfRef.rchdc__DOT__tempo_enc__DOT__elemCnt__DOT__co 
        = vlSelfRef.rchdc__DOT__set_done;
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1[0U] 
        = (1U & (IData)(vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__xor_ab));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2[0U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__xor_ab) 
                 >> 1U));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1[1U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__xor_ab) 
                 >> 2U));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2[1U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__xor_ab) 
                 >> 3U));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1[2U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__xor_ab) 
                 >> 4U));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2[2U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__xor_ab) 
                 >> 5U));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1[3U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__xor_ab) 
                 >> 6U));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2[3U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__xor_ab) 
                 >> 7U));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1[4U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__xor_ab) 
                 >> 8U));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2[4U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__xor_ab) 
                 >> 9U));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1[5U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__xor_ab) 
                 >> 0xaU));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2[5U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__xor_ab) 
                 >> 0xbU));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1[6U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__xor_ab) 
                 >> 0xcU));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2[6U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__xor_ab) 
                 >> 0xdU));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1[7U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__xor_ab) 
                 >> 0xeU));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2[7U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__xor_ab) 
                 >> 0xfU));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1[0U] 
        = (1U & (IData)(vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__xor_ab));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2[0U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__xor_ab) 
                 >> 1U));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1[1U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__xor_ab) 
                 >> 2U));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2[1U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__xor_ab) 
                 >> 3U));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1[2U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__xor_ab) 
                 >> 4U));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2[2U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__xor_ab) 
                 >> 5U));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1[3U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__xor_ab) 
                 >> 6U));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2[3U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__xor_ab) 
                 >> 7U));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1[4U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__xor_ab) 
                 >> 8U));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2[4U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__xor_ab) 
                 >> 9U));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1[5U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__xor_ab) 
                 >> 0xaU));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2[5U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__xor_ab) 
                 >> 0xbU));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1[6U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__xor_ab) 
                 >> 0xcU));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2[6U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__xor_ab) 
                 >> 0xdU));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1[7U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__xor_ab) 
                 >> 0xeU));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2[7U] 
        = (1U & ((IData)(vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__xor_ab) 
                 >> 0xfU));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s[0U] 
        = (3U & (vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1
                 [0U] + vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2
                 [0U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s[1U] 
        = (3U & (vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1
                 [1U] + vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2
                 [1U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s[2U] 
        = (3U & (vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1
                 [2U] + vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2
                 [2U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s[3U] 
        = (3U & (vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1
                 [3U] + vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2
                 [3U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s[4U] 
        = (3U & (vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1
                 [4U] + vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2
                 [4U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s[5U] 
        = (3U & (vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1
                 [5U] + vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2
                 [5U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s[6U] 
        = (3U & (vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1
                 [6U] + vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2
                 [6U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s[7U] 
        = (3U & (vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1
                 [7U] + vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2
                 [7U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s[0U] 
        = (3U & (vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1
                 [0U] + vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2
                 [0U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s[1U] 
        = (3U & (vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1
                 [1U] + vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2
                 [1U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s[2U] 
        = (3U & (vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1
                 [2U] + vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2
                 [2U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s[3U] 
        = (3U & (vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1
                 [3U] + vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2
                 [3U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s[4U] 
        = (3U & (vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1
                 [4U] + vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2
                 [4U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s[5U] 
        = (3U & (vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1
                 [5U] + vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2
                 [5U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s[6U] 
        = (3U & (vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1
                 [6U] + vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2
                 [6U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s[7U] 
        = (3U & (vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1
                 [7U] + vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2
                 [7U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend1[0U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s
        [0U];
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend2[0U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s
        [0U];
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend1[1U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s
        [1U];
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend2[1U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s
        [1U];
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend1[2U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s
        [2U];
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend2[2U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s
        [2U];
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend1[3U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s
        [3U];
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend2[3U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s
        [3U];
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend1[0U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s
        [0U];
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend2[0U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s
        [0U];
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend1[1U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s
        [1U];
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend2[1U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s
        [1U];
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend1[2U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s
        [2U];
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend2[2U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s
        [2U];
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend1[3U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s
        [3U];
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend2[3U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s
        [3U];
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__sum_s[0U] 
        = (7U & (vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend1
                 [0U] + vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend2
                 [0U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__sum_s[1U] 
        = (7U & (vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend1
                 [1U] + vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend2
                 [1U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__sum_s[2U] 
        = (7U & (vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend1
                 [2U] + vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend2
                 [2U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__sum_s[3U] 
        = (7U & (vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend1
                 [3U] + vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend2
                 [3U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__sum_s[0U] 
        = (7U & (vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend1
                 [0U] + vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend2
                 [0U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__sum_s[1U] 
        = (7U & (vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend1
                 [1U] + vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend2
                 [1U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__sum_s[2U] 
        = (7U & (vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend1
                 [2U] + vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend2
                 [2U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__sum_s[3U] 
        = (7U & (vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend1
                 [3U] + vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend2
                 [3U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__addend1[0U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__sum_s
        [0U];
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__addend2[0U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__sum_s
        [0U];
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__addend1[1U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__sum_s
        [1U];
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__addend2[1U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__sum_s
        [1U];
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__addend1[0U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__sum_s
        [0U];
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__addend2[0U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__sum_s
        [0U];
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__addend1[1U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__sum_s
        [1U];
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__addend2[1U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__sum_s
        [1U];
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__sum_s[0U] 
        = (0xfU & (vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__addend1
                   [0U] + vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__addend2
                   [0U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__sum_s[1U] 
        = (0xfU & (vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__addend1
                   [1U] + vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__addend2
                   [1U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__sum_s[0U] 
        = (0xfU & (vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__addend1
                   [0U] + vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__addend2
                   [0U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__sum_s[1U] 
        = (0xfU & (vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__addend1
                   [1U] + vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__addend2
                   [1U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__3__KET____DOT__addend1[0U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__sum_s
        [0U];
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__3__KET____DOT__addend2[0U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__sum_s
        [0U];
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__3__KET____DOT__addend1[0U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__sum_s
        [0U];
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__3__KET____DOT__addend2[0U] 
        = vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__sum_s
        [0U];
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__3__KET____DOT__sum_s[0U] 
        = (0x1fU & (vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__3__KET____DOT__addend1
                    [0U] + vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__3__KET____DOT__addend2
                    [0U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__3__KET____DOT__sum_s[0U] 
        = (0x1fU & (vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__3__KET____DOT__addend1
                    [0U] + vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__3__KET____DOT__addend2
                    [0U]));
    vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__ff_simi__DOT__data 
        = vlSelfRef.rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__3__KET____DOT__sum_s
        [0U];
    vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__ff_simi__DOT__data 
        = vlSelfRef.rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__3__KET____DOT__sum_s
        [0U];
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/maria/v/hdc/rtl/rchdc.sv", 25, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/maria/v/hdc/rtl/rchdc.sv", 25, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/maria/v/hdc/rtl/rchdc.sv", 25, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelfRef.smp_clr & 0xfeU))) {
        Verilated::overWidthError("smp_clr");}
    if (VL_UNLIKELY((vlSelfRef.set_clr & 0xfeU))) {
        Verilated::overWidthError("set_clr");}
    if (VL_UNLIKELY((vlSelfRef.smp_en & 0xfeU))) {
        Verilated::overWidthError("smp_en");}
    if (VL_UNLIKELY((vlSelfRef.state & 0xfeU))) {
        Verilated::overWidthError("state");}
    if (VL_UNLIKELY((vlSelfRef.label & 0xf0U))) {
        Verilated::overWidthError("label");}
}
#endif  // VL_DEBUG
