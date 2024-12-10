// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rchdc__DOT__smp_cnt = 6U;
    vlSelfRef.rchdc__DOT__set_cnt = 6U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/maria/v/hdc/rtl/rchdc.sv", 25, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->smp_clr = VL_RAND_RESET_I(1);
    vlSelf->set_clr = VL_RAND_RESET_I(1);
    vlSelf->im_value = VL_RAND_RESET_I(16);
    vlSelf->im_pos = VL_RAND_RESET_I(16);
    vlSelf->smp_en = VL_RAND_RESET_I(1);
    vlSelf->state = VL_RAND_RESET_I(1);
    vlSelf->label = VL_RAND_RESET_I(4);
    vlSelf->predict = VL_RAND_RESET_I(4);
    vlSelf->rchdc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__smp_clr = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__set_clr = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__im_value = VL_RAND_RESET_I(16);
    vlSelf->rchdc__DOT__im_pos = VL_RAND_RESET_I(16);
    vlSelf->rchdc__DOT__smp_en = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__label = VL_RAND_RESET_I(4);
    vlSelf->rchdc__DOT__predict = VL_RAND_RESET_I(4);
    vlSelf->rchdc__DOT__smp_cnt = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__smp_enc = VL_RAND_RESET_I(16);
    vlSelf->rchdc__DOT__smp_done = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT____Vcellinp__spatio_enc__data = VL_RAND_RESET_I(16);
    vlSelf->rchdc__DOT__set_en = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__set_done = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__set_cnt = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__set_enc = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->rchdc__DOT__AM[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->rchdc__DOT__am_wr = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__cls_mimi = VL_RAND_RESET_I(4);
    vlSelf->rchdc__DOT__g_class__BRA__0__KET____DOT__cls_simi = VL_RAND_RESET_I(5);
    vlSelf->rchdc__DOT__g_class__BRA__1__KET____DOT__cls_simi = VL_RAND_RESET_I(5);
    vlSelf->rchdc__DOT____Vlvbound_h633f0857__0 = VL_RAND_RESET_I(16);
    vlSelf->rchdc__DOT__spatio_enc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__clear = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__cnt = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__data = VL_RAND_RESET_I(16);
    vlSelf->rchdc__DOT__spatio_enc__DOT__enc = VL_RAND_RESET_I(16);
    vlSelf->rchdc__DOT__spatio_enc__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__0__KET____DOT__im_bit_nb = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__1__KET____DOT__im_bit_nb = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__2__KET____DOT__im_bit_nb = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__3__KET____DOT__im_bit_nb = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__4__KET____DOT__im_bit_nb = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__5__KET____DOT__im_bit_nb = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__6__KET____DOT__im_bit_nb = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__7__KET____DOT__im_bit_nb = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__8__KET____DOT__im_bit_nb = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__9__KET____DOT__im_bit_nb = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__10__KET____DOT__im_bit_nb = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__11__KET____DOT__im_bit_nb = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__12__KET____DOT__im_bit_nb = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__13__KET____DOT__im_bit_nb = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__14__KET____DOT__im_bit_nb = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__15__KET____DOT__im_bit_nb = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__elemCnt__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__elemCnt__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__elemCnt__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__elemCnt__DOT__max = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__elemCnt__DOT__cnt = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__elemCnt__DOT__co = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__elemCnt__DOT__cnt_max = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__elemCnt__DOT__cnt_next = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__one_bit = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc_next = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__one_bit = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc_next = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__one_bit = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc_next = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__one_bit = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc_next = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__one_bit = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc_next = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__one_bit = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc_next = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__one_bit = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc_next = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__one_bit = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc_next = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__one_bit = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc_next = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__one_bit = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc_next = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__one_bit = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc_next = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__one_bit = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc_next = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__one_bit = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc_next = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__one_bit = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc_next = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__one_bit = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc_next = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__one_bit = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__spatio_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc_next = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__clear = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__cnt = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__data = VL_RAND_RESET_I(16);
    vlSelf->rchdc__DOT__tempo_enc__DOT__enc = VL_RAND_RESET_I(16);
    vlSelf->rchdc__DOT__tempo_enc__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__0__KET____DOT__im_bit_nb = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__1__KET____DOT__im_bit_nb = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__2__KET____DOT__im_bit_nb = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__3__KET____DOT__im_bit_nb = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__4__KET____DOT__im_bit_nb = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__5__KET____DOT__im_bit_nb = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__6__KET____DOT__im_bit_nb = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__7__KET____DOT__im_bit_nb = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__8__KET____DOT__im_bit_nb = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__9__KET____DOT__im_bit_nb = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__10__KET____DOT__im_bit_nb = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__11__KET____DOT__im_bit_nb = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__12__KET____DOT__im_bit_nb = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__13__KET____DOT__im_bit_nb = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__14__KET____DOT__im_bit_nb = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__15__KET____DOT__im_bit_nb = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__elemCnt__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__elemCnt__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__elemCnt__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__elemCnt__DOT__max = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__elemCnt__DOT__cnt = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__elemCnt__DOT__co = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__elemCnt__DOT__cnt_max = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__elemCnt__DOT__cnt_next = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__one_bit = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__0__KET____DOT__bitAcc__DOT__acc_next = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__one_bit = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__1__KET____DOT__bitAcc__DOT__acc_next = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__one_bit = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__2__KET____DOT__bitAcc__DOT__acc_next = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__one_bit = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__3__KET____DOT__bitAcc__DOT__acc_next = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__one_bit = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__4__KET____DOT__bitAcc__DOT__acc_next = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__one_bit = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__5__KET____DOT__bitAcc__DOT__acc_next = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__one_bit = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__6__KET____DOT__bitAcc__DOT__acc_next = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__one_bit = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__7__KET____DOT__bitAcc__DOT__acc_next = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__one_bit = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__8__KET____DOT__bitAcc__DOT__acc_next = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__one_bit = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__9__KET____DOT__bitAcc__DOT__acc_next = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__one_bit = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__10__KET____DOT__bitAcc__DOT__acc_next = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__one_bit = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__11__KET____DOT__bitAcc__DOT__acc_next = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__one_bit = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__12__KET____DOT__bitAcc__DOT__acc_next = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__one_bit = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__13__KET____DOT__bitAcc__DOT__acc_next = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__one_bit = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__14__KET____DOT__bitAcc__DOT__acc_next = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__clr = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__one_bit = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__tempo_enc__DOT__g_sample__BRA__15__KET____DOT__bitAcc__DOT__acc_next = VL_RAND_RESET_I(3);
    vlSelf->rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__a = VL_RAND_RESET_I(16);
    vlSelf->rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__b = VL_RAND_RESET_I(16);
    vlSelf->rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__simi = VL_RAND_RESET_I(5);
    vlSelf->rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__xor_ab = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend1[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend2[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__sum_s[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__addend1[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__addend2[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__sum_s[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__3__KET____DOT__addend1[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__3__KET____DOT__addend2[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__g_adder_stg__BRA__3__KET____DOT__sum_s[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__ff_simi__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__ff_simi__DOT__data = VL_RAND_RESET_I(5);
    vlSelf->rchdc__DOT__g_class__BRA__0__KET____DOT__simi__DOT__ff_simi__DOT__qout = VL_RAND_RESET_I(5);
    vlSelf->rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__a = VL_RAND_RESET_I(16);
    vlSelf->rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__b = VL_RAND_RESET_I(16);
    vlSelf->rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__simi = VL_RAND_RESET_I(5);
    vlSelf->rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__xor_ab = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__addend2[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__0__KET____DOT__sum_s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend1[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__addend2[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__1__KET____DOT__sum_s[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__addend1[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__addend2[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__2__KET____DOT__sum_s[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__3__KET____DOT__addend1[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__3__KET____DOT__addend2[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__g_adder_stg__BRA__3__KET____DOT__sum_s[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__ff_simi__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__ff_simi__DOT__data = VL_RAND_RESET_I(5);
    vlSelf->rchdc__DOT__g_class__BRA__1__KET____DOT__simi__DOT__ff_simi__DOT__qout = VL_RAND_RESET_I(5);
    vlSelf->__VdfgRegularize_hd87f99a1_0_0 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
}
