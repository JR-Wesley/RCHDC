// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_similarity.h"

VL_ATTR_COLD void Vtop_similarity___ctor_var_reset(Vtop_similarity* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_similarity___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, vlSelf->a);
    VL_RAND_RESET_W(1024, vlSelf->b);
    vlSelf->simi = VL_RAND_RESET_I(11);
    VL_RAND_RESET_W(1024, vlSelf->xor_ab);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->g_adder_stg__BRA__0__KET____DOT__addend1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->g_adder_stg__BRA__0__KET____DOT__addend2[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->g_adder_stg__BRA__0__KET____DOT__sum_s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->g_adder_stg__BRA__1__KET____DOT__addend1[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->g_adder_stg__BRA__1__KET____DOT__addend2[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->g_adder_stg__BRA__1__KET____DOT__sum_s[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->g_adder_stg__BRA__2__KET____DOT__addend1[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->g_adder_stg__BRA__2__KET____DOT__addend2[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->g_adder_stg__BRA__2__KET____DOT__sum_s[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->g_adder_stg__BRA__3__KET____DOT__addend1[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->g_adder_stg__BRA__3__KET____DOT__addend2[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->g_adder_stg__BRA__3__KET____DOT__sum_s[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->g_adder_stg__BRA__4__KET____DOT__addend1[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->g_adder_stg__BRA__4__KET____DOT__addend2[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->g_adder_stg__BRA__4__KET____DOT__sum_s[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->g_adder_stg__BRA__5__KET____DOT__addend1[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->g_adder_stg__BRA__5__KET____DOT__addend2[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->g_adder_stg__BRA__5__KET____DOT__sum_s[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->g_adder_stg__BRA__6__KET____DOT__addend1[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->g_adder_stg__BRA__6__KET____DOT__addend2[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->g_adder_stg__BRA__6__KET____DOT__sum_s[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->g_adder_stg__BRA__7__KET____DOT__addend1[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->g_adder_stg__BRA__7__KET____DOT__addend2[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->g_adder_stg__BRA__7__KET____DOT__sum_s[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->g_adder_stg__BRA__8__KET____DOT__addend1[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->g_adder_stg__BRA__8__KET____DOT__addend2[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->g_adder_stg__BRA__8__KET____DOT__sum_s[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->g_adder_stg__BRA__9__KET____DOT__addend1[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->g_adder_stg__BRA__9__KET____DOT__addend2[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->g_adder_stg__BRA__9__KET____DOT__sum_s[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->ff_simi__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->ff_simi__DOT__data = VL_RAND_RESET_I(11);
    vlSelf->ff_simi__DOT__qout = VL_RAND_RESET_I(11);
}
