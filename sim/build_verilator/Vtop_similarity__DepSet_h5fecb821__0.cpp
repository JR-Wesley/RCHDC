// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_similarity.h"

VL_INLINE_OPT void Vtop_similarity___ico_sequent__TOP__rchdc__DOT__g_class__BRA__0__KET____DOT__simi__0(Vtop_similarity* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_similarity___ico_sequent__TOP__rchdc__DOT__g_class__BRA__0__KET____DOT__simi__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.simi = vlSelfRef.ff_simi__DOT__qout;
    vlSelfRef.ff_simi__DOT__clk = vlSelfRef.clk;
}

VL_INLINE_OPT void Vtop_similarity___ico_sequent__TOP__rchdc__DOT__g_class__BRA__0__KET____DOT__simi__1(Vtop_similarity* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_similarity___ico_sequent__TOP__rchdc__DOT__g_class__BRA__0__KET____DOT__simi__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.xor_ab[0U] = (vlSelfRef.a[0U] ^ vlSelfRef.b[0U]);
    vlSelfRef.xor_ab[1U] = (vlSelfRef.a[1U] ^ vlSelfRef.b[1U]);
    vlSelfRef.xor_ab[2U] = (vlSelfRef.a[2U] ^ vlSelfRef.b[2U]);
    vlSelfRef.xor_ab[3U] = (vlSelfRef.a[3U] ^ vlSelfRef.b[3U]);
    vlSelfRef.xor_ab[4U] = (vlSelfRef.a[4U] ^ vlSelfRef.b[4U]);
    vlSelfRef.xor_ab[5U] = (vlSelfRef.a[5U] ^ vlSelfRef.b[5U]);
    vlSelfRef.xor_ab[6U] = (vlSelfRef.a[6U] ^ vlSelfRef.b[6U]);
    vlSelfRef.xor_ab[7U] = (vlSelfRef.a[7U] ^ vlSelfRef.b[7U]);
    vlSelfRef.xor_ab[8U] = (vlSelfRef.a[8U] ^ vlSelfRef.b[8U]);
    vlSelfRef.xor_ab[9U] = (vlSelfRef.a[9U] ^ vlSelfRef.b[9U]);
    vlSelfRef.xor_ab[0xaU] = (vlSelfRef.a[0xaU] ^ vlSelfRef.b[0xaU]);
    vlSelfRef.xor_ab[0xbU] = (vlSelfRef.a[0xbU] ^ vlSelfRef.b[0xbU]);
    vlSelfRef.xor_ab[0xcU] = (vlSelfRef.a[0xcU] ^ vlSelfRef.b[0xcU]);
    vlSelfRef.xor_ab[0xdU] = (vlSelfRef.a[0xdU] ^ vlSelfRef.b[0xdU]);
    vlSelfRef.xor_ab[0xeU] = (vlSelfRef.a[0xeU] ^ vlSelfRef.b[0xeU]);
    vlSelfRef.xor_ab[0xfU] = (vlSelfRef.a[0xfU] ^ vlSelfRef.b[0xfU]);
    vlSelfRef.xor_ab[0x10U] = (vlSelfRef.a[0x10U] ^ 
                               vlSelfRef.b[0x10U]);
    vlSelfRef.xor_ab[0x11U] = (vlSelfRef.a[0x11U] ^ 
                               vlSelfRef.b[0x11U]);
    vlSelfRef.xor_ab[0x12U] = (vlSelfRef.a[0x12U] ^ 
                               vlSelfRef.b[0x12U]);
    vlSelfRef.xor_ab[0x13U] = (vlSelfRef.a[0x13U] ^ 
                               vlSelfRef.b[0x13U]);
    vlSelfRef.xor_ab[0x14U] = (vlSelfRef.a[0x14U] ^ 
                               vlSelfRef.b[0x14U]);
    vlSelfRef.xor_ab[0x15U] = (vlSelfRef.a[0x15U] ^ 
                               vlSelfRef.b[0x15U]);
    vlSelfRef.xor_ab[0x16U] = (vlSelfRef.a[0x16U] ^ 
                               vlSelfRef.b[0x16U]);
    vlSelfRef.xor_ab[0x17U] = (vlSelfRef.a[0x17U] ^ 
                               vlSelfRef.b[0x17U]);
    vlSelfRef.xor_ab[0x18U] = (vlSelfRef.a[0x18U] ^ 
                               vlSelfRef.b[0x18U]);
    vlSelfRef.xor_ab[0x19U] = (vlSelfRef.a[0x19U] ^ 
                               vlSelfRef.b[0x19U]);
    vlSelfRef.xor_ab[0x1aU] = (vlSelfRef.a[0x1aU] ^ 
                               vlSelfRef.b[0x1aU]);
    vlSelfRef.xor_ab[0x1bU] = (vlSelfRef.a[0x1bU] ^ 
                               vlSelfRef.b[0x1bU]);
    vlSelfRef.xor_ab[0x1cU] = (vlSelfRef.a[0x1cU] ^ 
                               vlSelfRef.b[0x1cU]);
    vlSelfRef.xor_ab[0x1dU] = (vlSelfRef.a[0x1dU] ^ 
                               vlSelfRef.b[0x1dU]);
    vlSelfRef.xor_ab[0x1eU] = (vlSelfRef.a[0x1eU] ^ 
                               vlSelfRef.b[0x1eU]);
    vlSelfRef.xor_ab[0x1fU] = (vlSelfRef.a[0x1fU] ^ 
                               vlSelfRef.b[0x1fU]);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0U] 
        = (1U & vlSelfRef.xor_ab[0U]);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0U] 
        = (1U & (vlSelfRef.xor_ab[0U] >> 1U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[1U] 
        = (1U & (vlSelfRef.xor_ab[0U] >> 2U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[1U] 
        = (1U & (vlSelfRef.xor_ab[0U] >> 3U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[2U] 
        = (1U & (vlSelfRef.xor_ab[0U] >> 4U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[2U] 
        = (1U & (vlSelfRef.xor_ab[0U] >> 5U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[3U] 
        = (1U & (vlSelfRef.xor_ab[0U] >> 6U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[3U] 
        = (1U & (vlSelfRef.xor_ab[0U] >> 7U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[4U] 
        = (1U & (vlSelfRef.xor_ab[0U] >> 8U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[4U] 
        = (1U & (vlSelfRef.xor_ab[0U] >> 9U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[5U] 
        = (1U & (vlSelfRef.xor_ab[0U] >> 0xaU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[5U] 
        = (1U & (vlSelfRef.xor_ab[0U] >> 0xbU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[6U] 
        = (1U & (vlSelfRef.xor_ab[0U] >> 0xcU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[6U] 
        = (1U & (vlSelfRef.xor_ab[0U] >> 0xdU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[7U] 
        = (1U & (vlSelfRef.xor_ab[0U] >> 0xeU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[7U] 
        = (1U & (vlSelfRef.xor_ab[0U] >> 0xfU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[8U] 
        = (1U & (vlSelfRef.xor_ab[0U] >> 0x10U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[8U] 
        = (1U & (vlSelfRef.xor_ab[0U] >> 0x11U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[9U] 
        = (1U & (vlSelfRef.xor_ab[0U] >> 0x12U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[9U] 
        = (1U & (vlSelfRef.xor_ab[0U] >> 0x13U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xaU] 
        = (1U & (vlSelfRef.xor_ab[0U] >> 0x14U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xaU] 
        = (1U & (vlSelfRef.xor_ab[0U] >> 0x15U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xbU] 
        = (1U & (vlSelfRef.xor_ab[0U] >> 0x16U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xbU] 
        = (1U & (vlSelfRef.xor_ab[0U] >> 0x17U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xcU] 
        = (1U & (vlSelfRef.xor_ab[0U] >> 0x18U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xcU] 
        = (1U & (vlSelfRef.xor_ab[0U] >> 0x19U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xdU] 
        = (1U & (vlSelfRef.xor_ab[0U] >> 0x1aU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xdU] 
        = (1U & (vlSelfRef.xor_ab[0U] >> 0x1bU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xeU] 
        = (1U & (vlSelfRef.xor_ab[0U] >> 0x1cU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xeU] 
        = (1U & (vlSelfRef.xor_ab[0U] >> 0x1dU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xfU] 
        = (1U & (vlSelfRef.xor_ab[0U] >> 0x1eU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xfU] 
        = (vlSelfRef.xor_ab[0U] >> 0x1fU);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x10U] 
        = (1U & vlSelfRef.xor_ab[1U]);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x10U] 
        = (1U & (vlSelfRef.xor_ab[1U] >> 1U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x11U] 
        = (1U & (vlSelfRef.xor_ab[1U] >> 2U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x11U] 
        = (1U & (vlSelfRef.xor_ab[1U] >> 3U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x12U] 
        = (1U & (vlSelfRef.xor_ab[1U] >> 4U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x12U] 
        = (1U & (vlSelfRef.xor_ab[1U] >> 5U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x13U] 
        = (1U & (vlSelfRef.xor_ab[1U] >> 6U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x13U] 
        = (1U & (vlSelfRef.xor_ab[1U] >> 7U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x14U] 
        = (1U & (vlSelfRef.xor_ab[1U] >> 8U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x14U] 
        = (1U & (vlSelfRef.xor_ab[1U] >> 9U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x15U] 
        = (1U & (vlSelfRef.xor_ab[1U] >> 0xaU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x15U] 
        = (1U & (vlSelfRef.xor_ab[1U] >> 0xbU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x16U] 
        = (1U & (vlSelfRef.xor_ab[1U] >> 0xcU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x16U] 
        = (1U & (vlSelfRef.xor_ab[1U] >> 0xdU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x17U] 
        = (1U & (vlSelfRef.xor_ab[1U] >> 0xeU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x17U] 
        = (1U & (vlSelfRef.xor_ab[1U] >> 0xfU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x18U] 
        = (1U & (vlSelfRef.xor_ab[1U] >> 0x10U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x18U] 
        = (1U & (vlSelfRef.xor_ab[1U] >> 0x11U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x19U] 
        = (1U & (vlSelfRef.xor_ab[1U] >> 0x12U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x19U] 
        = (1U & (vlSelfRef.xor_ab[1U] >> 0x13U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1aU] 
        = (1U & (vlSelfRef.xor_ab[1U] >> 0x14U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1aU] 
        = (1U & (vlSelfRef.xor_ab[1U] >> 0x15U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1bU] 
        = (1U & (vlSelfRef.xor_ab[1U] >> 0x16U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1bU] 
        = (1U & (vlSelfRef.xor_ab[1U] >> 0x17U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1cU] 
        = (1U & (vlSelfRef.xor_ab[1U] >> 0x18U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1cU] 
        = (1U & (vlSelfRef.xor_ab[1U] >> 0x19U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1dU] 
        = (1U & (vlSelfRef.xor_ab[1U] >> 0x1aU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1dU] 
        = (1U & (vlSelfRef.xor_ab[1U] >> 0x1bU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1eU] 
        = (1U & (vlSelfRef.xor_ab[1U] >> 0x1cU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1eU] 
        = (1U & (vlSelfRef.xor_ab[1U] >> 0x1dU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1fU] 
        = (1U & (vlSelfRef.xor_ab[1U] >> 0x1eU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1fU] 
        = (vlSelfRef.xor_ab[1U] >> 0x1fU);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x20U] 
        = (1U & vlSelfRef.xor_ab[2U]);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x20U] 
        = (1U & (vlSelfRef.xor_ab[2U] >> 1U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x21U] 
        = (1U & (vlSelfRef.xor_ab[2U] >> 2U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x21U] 
        = (1U & (vlSelfRef.xor_ab[2U] >> 3U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x22U] 
        = (1U & (vlSelfRef.xor_ab[2U] >> 4U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x22U] 
        = (1U & (vlSelfRef.xor_ab[2U] >> 5U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x23U] 
        = (1U & (vlSelfRef.xor_ab[2U] >> 6U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x23U] 
        = (1U & (vlSelfRef.xor_ab[2U] >> 7U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x24U] 
        = (1U & (vlSelfRef.xor_ab[2U] >> 8U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x24U] 
        = (1U & (vlSelfRef.xor_ab[2U] >> 9U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x25U] 
        = (1U & (vlSelfRef.xor_ab[2U] >> 0xaU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x25U] 
        = (1U & (vlSelfRef.xor_ab[2U] >> 0xbU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x26U] 
        = (1U & (vlSelfRef.xor_ab[2U] >> 0xcU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x26U] 
        = (1U & (vlSelfRef.xor_ab[2U] >> 0xdU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x27U] 
        = (1U & (vlSelfRef.xor_ab[2U] >> 0xeU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x27U] 
        = (1U & (vlSelfRef.xor_ab[2U] >> 0xfU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x28U] 
        = (1U & (vlSelfRef.xor_ab[2U] >> 0x10U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x28U] 
        = (1U & (vlSelfRef.xor_ab[2U] >> 0x11U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x29U] 
        = (1U & (vlSelfRef.xor_ab[2U] >> 0x12U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x29U] 
        = (1U & (vlSelfRef.xor_ab[2U] >> 0x13U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x2aU] 
        = (1U & (vlSelfRef.xor_ab[2U] >> 0x14U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x2aU] 
        = (1U & (vlSelfRef.xor_ab[2U] >> 0x15U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x2bU] 
        = (1U & (vlSelfRef.xor_ab[2U] >> 0x16U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x2bU] 
        = (1U & (vlSelfRef.xor_ab[2U] >> 0x17U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x2cU] 
        = (1U & (vlSelfRef.xor_ab[2U] >> 0x18U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x2cU] 
        = (1U & (vlSelfRef.xor_ab[2U] >> 0x19U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x2dU] 
        = (1U & (vlSelfRef.xor_ab[2U] >> 0x1aU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x2dU] 
        = (1U & (vlSelfRef.xor_ab[2U] >> 0x1bU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x2eU] 
        = (1U & (vlSelfRef.xor_ab[2U] >> 0x1cU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x2eU] 
        = (1U & (vlSelfRef.xor_ab[2U] >> 0x1dU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x2fU] 
        = (1U & (vlSelfRef.xor_ab[2U] >> 0x1eU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x2fU] 
        = (vlSelfRef.xor_ab[2U] >> 0x1fU);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x30U] 
        = (1U & vlSelfRef.xor_ab[3U]);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x30U] 
        = (1U & (vlSelfRef.xor_ab[3U] >> 1U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x31U] 
        = (1U & (vlSelfRef.xor_ab[3U] >> 2U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x31U] 
        = (1U & (vlSelfRef.xor_ab[3U] >> 3U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x32U] 
        = (1U & (vlSelfRef.xor_ab[3U] >> 4U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x32U] 
        = (1U & (vlSelfRef.xor_ab[3U] >> 5U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x33U] 
        = (1U & (vlSelfRef.xor_ab[3U] >> 6U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x33U] 
        = (1U & (vlSelfRef.xor_ab[3U] >> 7U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x34U] 
        = (1U & (vlSelfRef.xor_ab[3U] >> 8U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x34U] 
        = (1U & (vlSelfRef.xor_ab[3U] >> 9U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x35U] 
        = (1U & (vlSelfRef.xor_ab[3U] >> 0xaU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x35U] 
        = (1U & (vlSelfRef.xor_ab[3U] >> 0xbU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x36U] 
        = (1U & (vlSelfRef.xor_ab[3U] >> 0xcU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x36U] 
        = (1U & (vlSelfRef.xor_ab[3U] >> 0xdU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x37U] 
        = (1U & (vlSelfRef.xor_ab[3U] >> 0xeU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x37U] 
        = (1U & (vlSelfRef.xor_ab[3U] >> 0xfU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x38U] 
        = (1U & (vlSelfRef.xor_ab[3U] >> 0x10U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x38U] 
        = (1U & (vlSelfRef.xor_ab[3U] >> 0x11U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x39U] 
        = (1U & (vlSelfRef.xor_ab[3U] >> 0x12U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x39U] 
        = (1U & (vlSelfRef.xor_ab[3U] >> 0x13U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x3aU] 
        = (1U & (vlSelfRef.xor_ab[3U] >> 0x14U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x3aU] 
        = (1U & (vlSelfRef.xor_ab[3U] >> 0x15U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x3bU] 
        = (1U & (vlSelfRef.xor_ab[3U] >> 0x16U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x3bU] 
        = (1U & (vlSelfRef.xor_ab[3U] >> 0x17U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x3cU] 
        = (1U & (vlSelfRef.xor_ab[3U] >> 0x18U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x3cU] 
        = (1U & (vlSelfRef.xor_ab[3U] >> 0x19U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x3dU] 
        = (1U & (vlSelfRef.xor_ab[3U] >> 0x1aU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x3dU] 
        = (1U & (vlSelfRef.xor_ab[3U] >> 0x1bU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x3eU] 
        = (1U & (vlSelfRef.xor_ab[3U] >> 0x1cU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x3eU] 
        = (1U & (vlSelfRef.xor_ab[3U] >> 0x1dU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x3fU] 
        = (1U & (vlSelfRef.xor_ab[3U] >> 0x1eU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x3fU] 
        = (vlSelfRef.xor_ab[3U] >> 0x1fU);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x40U] 
        = (1U & vlSelfRef.xor_ab[4U]);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x40U] 
        = (1U & (vlSelfRef.xor_ab[4U] >> 1U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x41U] 
        = (1U & (vlSelfRef.xor_ab[4U] >> 2U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x41U] 
        = (1U & (vlSelfRef.xor_ab[4U] >> 3U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x42U] 
        = (1U & (vlSelfRef.xor_ab[4U] >> 4U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x42U] 
        = (1U & (vlSelfRef.xor_ab[4U] >> 5U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x43U] 
        = (1U & (vlSelfRef.xor_ab[4U] >> 6U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x43U] 
        = (1U & (vlSelfRef.xor_ab[4U] >> 7U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x44U] 
        = (1U & (vlSelfRef.xor_ab[4U] >> 8U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x44U] 
        = (1U & (vlSelfRef.xor_ab[4U] >> 9U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x45U] 
        = (1U & (vlSelfRef.xor_ab[4U] >> 0xaU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x45U] 
        = (1U & (vlSelfRef.xor_ab[4U] >> 0xbU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x46U] 
        = (1U & (vlSelfRef.xor_ab[4U] >> 0xcU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x46U] 
        = (1U & (vlSelfRef.xor_ab[4U] >> 0xdU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x47U] 
        = (1U & (vlSelfRef.xor_ab[4U] >> 0xeU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x47U] 
        = (1U & (vlSelfRef.xor_ab[4U] >> 0xfU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x48U] 
        = (1U & (vlSelfRef.xor_ab[4U] >> 0x10U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x48U] 
        = (1U & (vlSelfRef.xor_ab[4U] >> 0x11U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x49U] 
        = (1U & (vlSelfRef.xor_ab[4U] >> 0x12U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x49U] 
        = (1U & (vlSelfRef.xor_ab[4U] >> 0x13U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x4aU] 
        = (1U & (vlSelfRef.xor_ab[4U] >> 0x14U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x4aU] 
        = (1U & (vlSelfRef.xor_ab[4U] >> 0x15U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x4bU] 
        = (1U & (vlSelfRef.xor_ab[4U] >> 0x16U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x4bU] 
        = (1U & (vlSelfRef.xor_ab[4U] >> 0x17U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x4cU] 
        = (1U & (vlSelfRef.xor_ab[4U] >> 0x18U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x4cU] 
        = (1U & (vlSelfRef.xor_ab[4U] >> 0x19U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x4dU] 
        = (1U & (vlSelfRef.xor_ab[4U] >> 0x1aU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x4dU] 
        = (1U & (vlSelfRef.xor_ab[4U] >> 0x1bU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x4eU] 
        = (1U & (vlSelfRef.xor_ab[4U] >> 0x1cU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x4eU] 
        = (1U & (vlSelfRef.xor_ab[4U] >> 0x1dU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x4fU] 
        = (1U & (vlSelfRef.xor_ab[4U] >> 0x1eU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x4fU] 
        = (vlSelfRef.xor_ab[4U] >> 0x1fU);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x50U] 
        = (1U & vlSelfRef.xor_ab[5U]);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x50U] 
        = (1U & (vlSelfRef.xor_ab[5U] >> 1U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x51U] 
        = (1U & (vlSelfRef.xor_ab[5U] >> 2U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x51U] 
        = (1U & (vlSelfRef.xor_ab[5U] >> 3U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x52U] 
        = (1U & (vlSelfRef.xor_ab[5U] >> 4U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x52U] 
        = (1U & (vlSelfRef.xor_ab[5U] >> 5U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x53U] 
        = (1U & (vlSelfRef.xor_ab[5U] >> 6U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x53U] 
        = (1U & (vlSelfRef.xor_ab[5U] >> 7U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x54U] 
        = (1U & (vlSelfRef.xor_ab[5U] >> 8U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x54U] 
        = (1U & (vlSelfRef.xor_ab[5U] >> 9U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x55U] 
        = (1U & (vlSelfRef.xor_ab[5U] >> 0xaU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x55U] 
        = (1U & (vlSelfRef.xor_ab[5U] >> 0xbU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x56U] 
        = (1U & (vlSelfRef.xor_ab[5U] >> 0xcU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x56U] 
        = (1U & (vlSelfRef.xor_ab[5U] >> 0xdU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x57U] 
        = (1U & (vlSelfRef.xor_ab[5U] >> 0xeU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x57U] 
        = (1U & (vlSelfRef.xor_ab[5U] >> 0xfU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x58U] 
        = (1U & (vlSelfRef.xor_ab[5U] >> 0x10U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x58U] 
        = (1U & (vlSelfRef.xor_ab[5U] >> 0x11U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x59U] 
        = (1U & (vlSelfRef.xor_ab[5U] >> 0x12U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x59U] 
        = (1U & (vlSelfRef.xor_ab[5U] >> 0x13U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x5aU] 
        = (1U & (vlSelfRef.xor_ab[5U] >> 0x14U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x5aU] 
        = (1U & (vlSelfRef.xor_ab[5U] >> 0x15U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x5bU] 
        = (1U & (vlSelfRef.xor_ab[5U] >> 0x16U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x5bU] 
        = (1U & (vlSelfRef.xor_ab[5U] >> 0x17U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x5cU] 
        = (1U & (vlSelfRef.xor_ab[5U] >> 0x18U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x5cU] 
        = (1U & (vlSelfRef.xor_ab[5U] >> 0x19U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x5dU] 
        = (1U & (vlSelfRef.xor_ab[5U] >> 0x1aU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x5dU] 
        = (1U & (vlSelfRef.xor_ab[5U] >> 0x1bU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x5eU] 
        = (1U & (vlSelfRef.xor_ab[5U] >> 0x1cU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x5eU] 
        = (1U & (vlSelfRef.xor_ab[5U] >> 0x1dU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x5fU] 
        = (1U & (vlSelfRef.xor_ab[5U] >> 0x1eU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x5fU] 
        = (vlSelfRef.xor_ab[5U] >> 0x1fU);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x60U] 
        = (1U & vlSelfRef.xor_ab[6U]);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x60U] 
        = (1U & (vlSelfRef.xor_ab[6U] >> 1U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x61U] 
        = (1U & (vlSelfRef.xor_ab[6U] >> 2U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x61U] 
        = (1U & (vlSelfRef.xor_ab[6U] >> 3U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x62U] 
        = (1U & (vlSelfRef.xor_ab[6U] >> 4U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x62U] 
        = (1U & (vlSelfRef.xor_ab[6U] >> 5U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x63U] 
        = (1U & (vlSelfRef.xor_ab[6U] >> 6U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x63U] 
        = (1U & (vlSelfRef.xor_ab[6U] >> 7U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x64U] 
        = (1U & (vlSelfRef.xor_ab[6U] >> 8U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x64U] 
        = (1U & (vlSelfRef.xor_ab[6U] >> 9U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x65U] 
        = (1U & (vlSelfRef.xor_ab[6U] >> 0xaU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x65U] 
        = (1U & (vlSelfRef.xor_ab[6U] >> 0xbU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x66U] 
        = (1U & (vlSelfRef.xor_ab[6U] >> 0xcU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x66U] 
        = (1U & (vlSelfRef.xor_ab[6U] >> 0xdU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x67U] 
        = (1U & (vlSelfRef.xor_ab[6U] >> 0xeU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x67U] 
        = (1U & (vlSelfRef.xor_ab[6U] >> 0xfU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x68U] 
        = (1U & (vlSelfRef.xor_ab[6U] >> 0x10U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x68U] 
        = (1U & (vlSelfRef.xor_ab[6U] >> 0x11U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x69U] 
        = (1U & (vlSelfRef.xor_ab[6U] >> 0x12U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x69U] 
        = (1U & (vlSelfRef.xor_ab[6U] >> 0x13U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x6aU] 
        = (1U & (vlSelfRef.xor_ab[6U] >> 0x14U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x6aU] 
        = (1U & (vlSelfRef.xor_ab[6U] >> 0x15U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x6bU] 
        = (1U & (vlSelfRef.xor_ab[6U] >> 0x16U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x6bU] 
        = (1U & (vlSelfRef.xor_ab[6U] >> 0x17U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x6cU] 
        = (1U & (vlSelfRef.xor_ab[6U] >> 0x18U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x6cU] 
        = (1U & (vlSelfRef.xor_ab[6U] >> 0x19U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x6dU] 
        = (1U & (vlSelfRef.xor_ab[6U] >> 0x1aU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x6dU] 
        = (1U & (vlSelfRef.xor_ab[6U] >> 0x1bU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x6eU] 
        = (1U & (vlSelfRef.xor_ab[6U] >> 0x1cU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x6eU] 
        = (1U & (vlSelfRef.xor_ab[6U] >> 0x1dU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x6fU] 
        = (1U & (vlSelfRef.xor_ab[6U] >> 0x1eU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x6fU] 
        = (vlSelfRef.xor_ab[6U] >> 0x1fU);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x70U] 
        = (1U & vlSelfRef.xor_ab[7U]);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x70U] 
        = (1U & (vlSelfRef.xor_ab[7U] >> 1U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x71U] 
        = (1U & (vlSelfRef.xor_ab[7U] >> 2U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x71U] 
        = (1U & (vlSelfRef.xor_ab[7U] >> 3U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x72U] 
        = (1U & (vlSelfRef.xor_ab[7U] >> 4U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x72U] 
        = (1U & (vlSelfRef.xor_ab[7U] >> 5U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x73U] 
        = (1U & (vlSelfRef.xor_ab[7U] >> 6U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x73U] 
        = (1U & (vlSelfRef.xor_ab[7U] >> 7U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x74U] 
        = (1U & (vlSelfRef.xor_ab[7U] >> 8U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x74U] 
        = (1U & (vlSelfRef.xor_ab[7U] >> 9U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x75U] 
        = (1U & (vlSelfRef.xor_ab[7U] >> 0xaU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x75U] 
        = (1U & (vlSelfRef.xor_ab[7U] >> 0xbU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x76U] 
        = (1U & (vlSelfRef.xor_ab[7U] >> 0xcU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x76U] 
        = (1U & (vlSelfRef.xor_ab[7U] >> 0xdU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x77U] 
        = (1U & (vlSelfRef.xor_ab[7U] >> 0xeU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x77U] 
        = (1U & (vlSelfRef.xor_ab[7U] >> 0xfU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x78U] 
        = (1U & (vlSelfRef.xor_ab[7U] >> 0x10U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x78U] 
        = (1U & (vlSelfRef.xor_ab[7U] >> 0x11U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x79U] 
        = (1U & (vlSelfRef.xor_ab[7U] >> 0x12U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x79U] 
        = (1U & (vlSelfRef.xor_ab[7U] >> 0x13U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x7aU] 
        = (1U & (vlSelfRef.xor_ab[7U] >> 0x14U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x7aU] 
        = (1U & (vlSelfRef.xor_ab[7U] >> 0x15U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x7bU] 
        = (1U & (vlSelfRef.xor_ab[7U] >> 0x16U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x7bU] 
        = (1U & (vlSelfRef.xor_ab[7U] >> 0x17U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x7cU] 
        = (1U & (vlSelfRef.xor_ab[7U] >> 0x18U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x7cU] 
        = (1U & (vlSelfRef.xor_ab[7U] >> 0x19U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x7dU] 
        = (1U & (vlSelfRef.xor_ab[7U] >> 0x1aU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x7dU] 
        = (1U & (vlSelfRef.xor_ab[7U] >> 0x1bU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x7eU] 
        = (1U & (vlSelfRef.xor_ab[7U] >> 0x1cU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x7eU] 
        = (1U & (vlSelfRef.xor_ab[7U] >> 0x1dU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x7fU] 
        = (1U & (vlSelfRef.xor_ab[7U] >> 0x1eU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x7fU] 
        = (vlSelfRef.xor_ab[7U] >> 0x1fU);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x80U] 
        = (1U & vlSelfRef.xor_ab[8U]);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x80U] 
        = (1U & (vlSelfRef.xor_ab[8U] >> 1U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x81U] 
        = (1U & (vlSelfRef.xor_ab[8U] >> 2U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x81U] 
        = (1U & (vlSelfRef.xor_ab[8U] >> 3U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x82U] 
        = (1U & (vlSelfRef.xor_ab[8U] >> 4U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x82U] 
        = (1U & (vlSelfRef.xor_ab[8U] >> 5U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x83U] 
        = (1U & (vlSelfRef.xor_ab[8U] >> 6U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x83U] 
        = (1U & (vlSelfRef.xor_ab[8U] >> 7U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x84U] 
        = (1U & (vlSelfRef.xor_ab[8U] >> 8U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x84U] 
        = (1U & (vlSelfRef.xor_ab[8U] >> 9U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x85U] 
        = (1U & (vlSelfRef.xor_ab[8U] >> 0xaU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x85U] 
        = (1U & (vlSelfRef.xor_ab[8U] >> 0xbU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x86U] 
        = (1U & (vlSelfRef.xor_ab[8U] >> 0xcU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x86U] 
        = (1U & (vlSelfRef.xor_ab[8U] >> 0xdU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x87U] 
        = (1U & (vlSelfRef.xor_ab[8U] >> 0xeU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x87U] 
        = (1U & (vlSelfRef.xor_ab[8U] >> 0xfU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x88U] 
        = (1U & (vlSelfRef.xor_ab[8U] >> 0x10U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x88U] 
        = (1U & (vlSelfRef.xor_ab[8U] >> 0x11U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x89U] 
        = (1U & (vlSelfRef.xor_ab[8U] >> 0x12U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x89U] 
        = (1U & (vlSelfRef.xor_ab[8U] >> 0x13U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x8aU] 
        = (1U & (vlSelfRef.xor_ab[8U] >> 0x14U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x8aU] 
        = (1U & (vlSelfRef.xor_ab[8U] >> 0x15U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x8bU] 
        = (1U & (vlSelfRef.xor_ab[8U] >> 0x16U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x8bU] 
        = (1U & (vlSelfRef.xor_ab[8U] >> 0x17U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x8cU] 
        = (1U & (vlSelfRef.xor_ab[8U] >> 0x18U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x8cU] 
        = (1U & (vlSelfRef.xor_ab[8U] >> 0x19U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x8dU] 
        = (1U & (vlSelfRef.xor_ab[8U] >> 0x1aU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x8dU] 
        = (1U & (vlSelfRef.xor_ab[8U] >> 0x1bU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x8eU] 
        = (1U & (vlSelfRef.xor_ab[8U] >> 0x1cU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x8eU] 
        = (1U & (vlSelfRef.xor_ab[8U] >> 0x1dU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x8fU] 
        = (1U & (vlSelfRef.xor_ab[8U] >> 0x1eU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x8fU] 
        = (vlSelfRef.xor_ab[8U] >> 0x1fU);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x90U] 
        = (1U & vlSelfRef.xor_ab[9U]);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x90U] 
        = (1U & (vlSelfRef.xor_ab[9U] >> 1U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x91U] 
        = (1U & (vlSelfRef.xor_ab[9U] >> 2U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x91U] 
        = (1U & (vlSelfRef.xor_ab[9U] >> 3U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x92U] 
        = (1U & (vlSelfRef.xor_ab[9U] >> 4U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x92U] 
        = (1U & (vlSelfRef.xor_ab[9U] >> 5U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x93U] 
        = (1U & (vlSelfRef.xor_ab[9U] >> 6U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x93U] 
        = (1U & (vlSelfRef.xor_ab[9U] >> 7U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x94U] 
        = (1U & (vlSelfRef.xor_ab[9U] >> 8U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x94U] 
        = (1U & (vlSelfRef.xor_ab[9U] >> 9U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x95U] 
        = (1U & (vlSelfRef.xor_ab[9U] >> 0xaU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x95U] 
        = (1U & (vlSelfRef.xor_ab[9U] >> 0xbU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x96U] 
        = (1U & (vlSelfRef.xor_ab[9U] >> 0xcU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x96U] 
        = (1U & (vlSelfRef.xor_ab[9U] >> 0xdU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x97U] 
        = (1U & (vlSelfRef.xor_ab[9U] >> 0xeU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x97U] 
        = (1U & (vlSelfRef.xor_ab[9U] >> 0xfU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x98U] 
        = (1U & (vlSelfRef.xor_ab[9U] >> 0x10U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x98U] 
        = (1U & (vlSelfRef.xor_ab[9U] >> 0x11U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x99U] 
        = (1U & (vlSelfRef.xor_ab[9U] >> 0x12U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x99U] 
        = (1U & (vlSelfRef.xor_ab[9U] >> 0x13U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x9aU] 
        = (1U & (vlSelfRef.xor_ab[9U] >> 0x14U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x9aU] 
        = (1U & (vlSelfRef.xor_ab[9U] >> 0x15U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x9bU] 
        = (1U & (vlSelfRef.xor_ab[9U] >> 0x16U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x9bU] 
        = (1U & (vlSelfRef.xor_ab[9U] >> 0x17U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x9cU] 
        = (1U & (vlSelfRef.xor_ab[9U] >> 0x18U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x9cU] 
        = (1U & (vlSelfRef.xor_ab[9U] >> 0x19U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x9dU] 
        = (1U & (vlSelfRef.xor_ab[9U] >> 0x1aU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x9dU] 
        = (1U & (vlSelfRef.xor_ab[9U] >> 0x1bU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x9eU] 
        = (1U & (vlSelfRef.xor_ab[9U] >> 0x1cU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x9eU] 
        = (1U & (vlSelfRef.xor_ab[9U] >> 0x1dU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x9fU] 
        = (1U & (vlSelfRef.xor_ab[9U] >> 0x1eU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x9fU] 
        = (vlSelfRef.xor_ab[9U] >> 0x1fU);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xa0U] 
        = (1U & vlSelfRef.xor_ab[0xaU]);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xa0U] 
        = (1U & (vlSelfRef.xor_ab[0xaU] >> 1U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xa1U] 
        = (1U & (vlSelfRef.xor_ab[0xaU] >> 2U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xa1U] 
        = (1U & (vlSelfRef.xor_ab[0xaU] >> 3U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xa2U] 
        = (1U & (vlSelfRef.xor_ab[0xaU] >> 4U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xa2U] 
        = (1U & (vlSelfRef.xor_ab[0xaU] >> 5U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xa3U] 
        = (1U & (vlSelfRef.xor_ab[0xaU] >> 6U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xa3U] 
        = (1U & (vlSelfRef.xor_ab[0xaU] >> 7U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xa4U] 
        = (1U & (vlSelfRef.xor_ab[0xaU] >> 8U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xa4U] 
        = (1U & (vlSelfRef.xor_ab[0xaU] >> 9U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xa5U] 
        = (1U & (vlSelfRef.xor_ab[0xaU] >> 0xaU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xa5U] 
        = (1U & (vlSelfRef.xor_ab[0xaU] >> 0xbU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xa6U] 
        = (1U & (vlSelfRef.xor_ab[0xaU] >> 0xcU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xa6U] 
        = (1U & (vlSelfRef.xor_ab[0xaU] >> 0xdU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xa7U] 
        = (1U & (vlSelfRef.xor_ab[0xaU] >> 0xeU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xa7U] 
        = (1U & (vlSelfRef.xor_ab[0xaU] >> 0xfU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xa8U] 
        = (1U & (vlSelfRef.xor_ab[0xaU] >> 0x10U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xa8U] 
        = (1U & (vlSelfRef.xor_ab[0xaU] >> 0x11U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xa9U] 
        = (1U & (vlSelfRef.xor_ab[0xaU] >> 0x12U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xa9U] 
        = (1U & (vlSelfRef.xor_ab[0xaU] >> 0x13U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xaaU] 
        = (1U & (vlSelfRef.xor_ab[0xaU] >> 0x14U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xaaU] 
        = (1U & (vlSelfRef.xor_ab[0xaU] >> 0x15U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xabU] 
        = (1U & (vlSelfRef.xor_ab[0xaU] >> 0x16U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xabU] 
        = (1U & (vlSelfRef.xor_ab[0xaU] >> 0x17U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xacU] 
        = (1U & (vlSelfRef.xor_ab[0xaU] >> 0x18U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xacU] 
        = (1U & (vlSelfRef.xor_ab[0xaU] >> 0x19U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xadU] 
        = (1U & (vlSelfRef.xor_ab[0xaU] >> 0x1aU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xadU] 
        = (1U & (vlSelfRef.xor_ab[0xaU] >> 0x1bU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xaeU] 
        = (1U & (vlSelfRef.xor_ab[0xaU] >> 0x1cU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xaeU] 
        = (1U & (vlSelfRef.xor_ab[0xaU] >> 0x1dU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xafU] 
        = (1U & (vlSelfRef.xor_ab[0xaU] >> 0x1eU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xafU] 
        = (vlSelfRef.xor_ab[0xaU] >> 0x1fU);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xb0U] 
        = (1U & vlSelfRef.xor_ab[0xbU]);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xb0U] 
        = (1U & (vlSelfRef.xor_ab[0xbU] >> 1U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xb1U] 
        = (1U & (vlSelfRef.xor_ab[0xbU] >> 2U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xb1U] 
        = (1U & (vlSelfRef.xor_ab[0xbU] >> 3U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xb2U] 
        = (1U & (vlSelfRef.xor_ab[0xbU] >> 4U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xb2U] 
        = (1U & (vlSelfRef.xor_ab[0xbU] >> 5U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xb3U] 
        = (1U & (vlSelfRef.xor_ab[0xbU] >> 6U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xb3U] 
        = (1U & (vlSelfRef.xor_ab[0xbU] >> 7U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xb4U] 
        = (1U & (vlSelfRef.xor_ab[0xbU] >> 8U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xb4U] 
        = (1U & (vlSelfRef.xor_ab[0xbU] >> 9U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xb5U] 
        = (1U & (vlSelfRef.xor_ab[0xbU] >> 0xaU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xb5U] 
        = (1U & (vlSelfRef.xor_ab[0xbU] >> 0xbU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xb6U] 
        = (1U & (vlSelfRef.xor_ab[0xbU] >> 0xcU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xb6U] 
        = (1U & (vlSelfRef.xor_ab[0xbU] >> 0xdU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xb7U] 
        = (1U & (vlSelfRef.xor_ab[0xbU] >> 0xeU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xb7U] 
        = (1U & (vlSelfRef.xor_ab[0xbU] >> 0xfU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xb8U] 
        = (1U & (vlSelfRef.xor_ab[0xbU] >> 0x10U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xb8U] 
        = (1U & (vlSelfRef.xor_ab[0xbU] >> 0x11U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xb9U] 
        = (1U & (vlSelfRef.xor_ab[0xbU] >> 0x12U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xb9U] 
        = (1U & (vlSelfRef.xor_ab[0xbU] >> 0x13U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xbaU] 
        = (1U & (vlSelfRef.xor_ab[0xbU] >> 0x14U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xbaU] 
        = (1U & (vlSelfRef.xor_ab[0xbU] >> 0x15U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xbbU] 
        = (1U & (vlSelfRef.xor_ab[0xbU] >> 0x16U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xbbU] 
        = (1U & (vlSelfRef.xor_ab[0xbU] >> 0x17U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xbcU] 
        = (1U & (vlSelfRef.xor_ab[0xbU] >> 0x18U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xbcU] 
        = (1U & (vlSelfRef.xor_ab[0xbU] >> 0x19U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xbdU] 
        = (1U & (vlSelfRef.xor_ab[0xbU] >> 0x1aU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xbdU] 
        = (1U & (vlSelfRef.xor_ab[0xbU] >> 0x1bU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xbeU] 
        = (1U & (vlSelfRef.xor_ab[0xbU] >> 0x1cU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xbeU] 
        = (1U & (vlSelfRef.xor_ab[0xbU] >> 0x1dU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xbfU] 
        = (1U & (vlSelfRef.xor_ab[0xbU] >> 0x1eU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xbfU] 
        = (vlSelfRef.xor_ab[0xbU] >> 0x1fU);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xc0U] 
        = (1U & vlSelfRef.xor_ab[0xcU]);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xc0U] 
        = (1U & (vlSelfRef.xor_ab[0xcU] >> 1U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xc1U] 
        = (1U & (vlSelfRef.xor_ab[0xcU] >> 2U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xc1U] 
        = (1U & (vlSelfRef.xor_ab[0xcU] >> 3U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xc2U] 
        = (1U & (vlSelfRef.xor_ab[0xcU] >> 4U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xc2U] 
        = (1U & (vlSelfRef.xor_ab[0xcU] >> 5U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xc3U] 
        = (1U & (vlSelfRef.xor_ab[0xcU] >> 6U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xc3U] 
        = (1U & (vlSelfRef.xor_ab[0xcU] >> 7U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xc4U] 
        = (1U & (vlSelfRef.xor_ab[0xcU] >> 8U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xc4U] 
        = (1U & (vlSelfRef.xor_ab[0xcU] >> 9U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xc5U] 
        = (1U & (vlSelfRef.xor_ab[0xcU] >> 0xaU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xc5U] 
        = (1U & (vlSelfRef.xor_ab[0xcU] >> 0xbU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xc6U] 
        = (1U & (vlSelfRef.xor_ab[0xcU] >> 0xcU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xc6U] 
        = (1U & (vlSelfRef.xor_ab[0xcU] >> 0xdU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xc7U] 
        = (1U & (vlSelfRef.xor_ab[0xcU] >> 0xeU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xc7U] 
        = (1U & (vlSelfRef.xor_ab[0xcU] >> 0xfU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xc8U] 
        = (1U & (vlSelfRef.xor_ab[0xcU] >> 0x10U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xc8U] 
        = (1U & (vlSelfRef.xor_ab[0xcU] >> 0x11U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xc9U] 
        = (1U & (vlSelfRef.xor_ab[0xcU] >> 0x12U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xc9U] 
        = (1U & (vlSelfRef.xor_ab[0xcU] >> 0x13U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xcaU] 
        = (1U & (vlSelfRef.xor_ab[0xcU] >> 0x14U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xcaU] 
        = (1U & (vlSelfRef.xor_ab[0xcU] >> 0x15U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xcbU] 
        = (1U & (vlSelfRef.xor_ab[0xcU] >> 0x16U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xcbU] 
        = (1U & (vlSelfRef.xor_ab[0xcU] >> 0x17U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xccU] 
        = (1U & (vlSelfRef.xor_ab[0xcU] >> 0x18U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xccU] 
        = (1U & (vlSelfRef.xor_ab[0xcU] >> 0x19U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xcdU] 
        = (1U & (vlSelfRef.xor_ab[0xcU] >> 0x1aU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xcdU] 
        = (1U & (vlSelfRef.xor_ab[0xcU] >> 0x1bU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xceU] 
        = (1U & (vlSelfRef.xor_ab[0xcU] >> 0x1cU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xceU] 
        = (1U & (vlSelfRef.xor_ab[0xcU] >> 0x1dU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xcfU] 
        = (1U & (vlSelfRef.xor_ab[0xcU] >> 0x1eU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xcfU] 
        = (vlSelfRef.xor_ab[0xcU] >> 0x1fU);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xd0U] 
        = (1U & vlSelfRef.xor_ab[0xdU]);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xd0U] 
        = (1U & (vlSelfRef.xor_ab[0xdU] >> 1U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xd1U] 
        = (1U & (vlSelfRef.xor_ab[0xdU] >> 2U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xd1U] 
        = (1U & (vlSelfRef.xor_ab[0xdU] >> 3U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xd2U] 
        = (1U & (vlSelfRef.xor_ab[0xdU] >> 4U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xd2U] 
        = (1U & (vlSelfRef.xor_ab[0xdU] >> 5U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xd3U] 
        = (1U & (vlSelfRef.xor_ab[0xdU] >> 6U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xd3U] 
        = (1U & (vlSelfRef.xor_ab[0xdU] >> 7U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xd4U] 
        = (1U & (vlSelfRef.xor_ab[0xdU] >> 8U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xd4U] 
        = (1U & (vlSelfRef.xor_ab[0xdU] >> 9U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xd5U] 
        = (1U & (vlSelfRef.xor_ab[0xdU] >> 0xaU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xd5U] 
        = (1U & (vlSelfRef.xor_ab[0xdU] >> 0xbU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xd6U] 
        = (1U & (vlSelfRef.xor_ab[0xdU] >> 0xcU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xd6U] 
        = (1U & (vlSelfRef.xor_ab[0xdU] >> 0xdU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xd7U] 
        = (1U & (vlSelfRef.xor_ab[0xdU] >> 0xeU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xd7U] 
        = (1U & (vlSelfRef.xor_ab[0xdU] >> 0xfU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xd8U] 
        = (1U & (vlSelfRef.xor_ab[0xdU] >> 0x10U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xd8U] 
        = (1U & (vlSelfRef.xor_ab[0xdU] >> 0x11U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xd9U] 
        = (1U & (vlSelfRef.xor_ab[0xdU] >> 0x12U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xd9U] 
        = (1U & (vlSelfRef.xor_ab[0xdU] >> 0x13U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xdaU] 
        = (1U & (vlSelfRef.xor_ab[0xdU] >> 0x14U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xdaU] 
        = (1U & (vlSelfRef.xor_ab[0xdU] >> 0x15U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xdbU] 
        = (1U & (vlSelfRef.xor_ab[0xdU] >> 0x16U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xdbU] 
        = (1U & (vlSelfRef.xor_ab[0xdU] >> 0x17U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xdcU] 
        = (1U & (vlSelfRef.xor_ab[0xdU] >> 0x18U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xdcU] 
        = (1U & (vlSelfRef.xor_ab[0xdU] >> 0x19U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xddU] 
        = (1U & (vlSelfRef.xor_ab[0xdU] >> 0x1aU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xddU] 
        = (1U & (vlSelfRef.xor_ab[0xdU] >> 0x1bU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xdeU] 
        = (1U & (vlSelfRef.xor_ab[0xdU] >> 0x1cU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xdeU] 
        = (1U & (vlSelfRef.xor_ab[0xdU] >> 0x1dU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xdfU] 
        = (1U & (vlSelfRef.xor_ab[0xdU] >> 0x1eU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xdfU] 
        = (vlSelfRef.xor_ab[0xdU] >> 0x1fU);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xe0U] 
        = (1U & vlSelfRef.xor_ab[0xeU]);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xe0U] 
        = (1U & (vlSelfRef.xor_ab[0xeU] >> 1U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xe1U] 
        = (1U & (vlSelfRef.xor_ab[0xeU] >> 2U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xe1U] 
        = (1U & (vlSelfRef.xor_ab[0xeU] >> 3U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xe2U] 
        = (1U & (vlSelfRef.xor_ab[0xeU] >> 4U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xe2U] 
        = (1U & (vlSelfRef.xor_ab[0xeU] >> 5U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xe3U] 
        = (1U & (vlSelfRef.xor_ab[0xeU] >> 6U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xe3U] 
        = (1U & (vlSelfRef.xor_ab[0xeU] >> 7U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xe4U] 
        = (1U & (vlSelfRef.xor_ab[0xeU] >> 8U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xe4U] 
        = (1U & (vlSelfRef.xor_ab[0xeU] >> 9U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xe5U] 
        = (1U & (vlSelfRef.xor_ab[0xeU] >> 0xaU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xe5U] 
        = (1U & (vlSelfRef.xor_ab[0xeU] >> 0xbU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xe6U] 
        = (1U & (vlSelfRef.xor_ab[0xeU] >> 0xcU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xe6U] 
        = (1U & (vlSelfRef.xor_ab[0xeU] >> 0xdU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xe7U] 
        = (1U & (vlSelfRef.xor_ab[0xeU] >> 0xeU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xe7U] 
        = (1U & (vlSelfRef.xor_ab[0xeU] >> 0xfU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xe8U] 
        = (1U & (vlSelfRef.xor_ab[0xeU] >> 0x10U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xe8U] 
        = (1U & (vlSelfRef.xor_ab[0xeU] >> 0x11U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xe9U] 
        = (1U & (vlSelfRef.xor_ab[0xeU] >> 0x12U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xe9U] 
        = (1U & (vlSelfRef.xor_ab[0xeU] >> 0x13U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xeaU] 
        = (1U & (vlSelfRef.xor_ab[0xeU] >> 0x14U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xeaU] 
        = (1U & (vlSelfRef.xor_ab[0xeU] >> 0x15U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xebU] 
        = (1U & (vlSelfRef.xor_ab[0xeU] >> 0x16U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xebU] 
        = (1U & (vlSelfRef.xor_ab[0xeU] >> 0x17U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xecU] 
        = (1U & (vlSelfRef.xor_ab[0xeU] >> 0x18U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xecU] 
        = (1U & (vlSelfRef.xor_ab[0xeU] >> 0x19U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xedU] 
        = (1U & (vlSelfRef.xor_ab[0xeU] >> 0x1aU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xedU] 
        = (1U & (vlSelfRef.xor_ab[0xeU] >> 0x1bU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xeeU] 
        = (1U & (vlSelfRef.xor_ab[0xeU] >> 0x1cU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xeeU] 
        = (1U & (vlSelfRef.xor_ab[0xeU] >> 0x1dU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xefU] 
        = (1U & (vlSelfRef.xor_ab[0xeU] >> 0x1eU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xefU] 
        = (vlSelfRef.xor_ab[0xeU] >> 0x1fU);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xf0U] 
        = (1U & vlSelfRef.xor_ab[0xfU]);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xf0U] 
        = (1U & (vlSelfRef.xor_ab[0xfU] >> 1U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xf1U] 
        = (1U & (vlSelfRef.xor_ab[0xfU] >> 2U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xf1U] 
        = (1U & (vlSelfRef.xor_ab[0xfU] >> 3U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xf2U] 
        = (1U & (vlSelfRef.xor_ab[0xfU] >> 4U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xf2U] 
        = (1U & (vlSelfRef.xor_ab[0xfU] >> 5U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xf3U] 
        = (1U & (vlSelfRef.xor_ab[0xfU] >> 6U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xf3U] 
        = (1U & (vlSelfRef.xor_ab[0xfU] >> 7U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xf4U] 
        = (1U & (vlSelfRef.xor_ab[0xfU] >> 8U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xf4U] 
        = (1U & (vlSelfRef.xor_ab[0xfU] >> 9U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xf5U] 
        = (1U & (vlSelfRef.xor_ab[0xfU] >> 0xaU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xf5U] 
        = (1U & (vlSelfRef.xor_ab[0xfU] >> 0xbU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xf6U] 
        = (1U & (vlSelfRef.xor_ab[0xfU] >> 0xcU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xf6U] 
        = (1U & (vlSelfRef.xor_ab[0xfU] >> 0xdU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xf7U] 
        = (1U & (vlSelfRef.xor_ab[0xfU] >> 0xeU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xf7U] 
        = (1U & (vlSelfRef.xor_ab[0xfU] >> 0xfU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xf8U] 
        = (1U & (vlSelfRef.xor_ab[0xfU] >> 0x10U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xf8U] 
        = (1U & (vlSelfRef.xor_ab[0xfU] >> 0x11U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xf9U] 
        = (1U & (vlSelfRef.xor_ab[0xfU] >> 0x12U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xf9U] 
        = (1U & (vlSelfRef.xor_ab[0xfU] >> 0x13U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xfaU] 
        = (1U & (vlSelfRef.xor_ab[0xfU] >> 0x14U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xfaU] 
        = (1U & (vlSelfRef.xor_ab[0xfU] >> 0x15U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xfbU] 
        = (1U & (vlSelfRef.xor_ab[0xfU] >> 0x16U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xfbU] 
        = (1U & (vlSelfRef.xor_ab[0xfU] >> 0x17U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xfcU] 
        = (1U & (vlSelfRef.xor_ab[0xfU] >> 0x18U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xfcU] 
        = (1U & (vlSelfRef.xor_ab[0xfU] >> 0x19U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xfdU] 
        = (1U & (vlSelfRef.xor_ab[0xfU] >> 0x1aU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xfdU] 
        = (1U & (vlSelfRef.xor_ab[0xfU] >> 0x1bU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xfeU] 
        = (1U & (vlSelfRef.xor_ab[0xfU] >> 0x1cU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xfeU] 
        = (1U & (vlSelfRef.xor_ab[0xfU] >> 0x1dU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0xffU] 
        = (1U & (vlSelfRef.xor_ab[0xfU] >> 0x1eU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0xffU] 
        = (vlSelfRef.xor_ab[0xfU] >> 0x1fU);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x100U] 
        = (1U & vlSelfRef.xor_ab[0x10U]);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x100U] 
        = (1U & (vlSelfRef.xor_ab[0x10U] >> 1U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x101U] 
        = (1U & (vlSelfRef.xor_ab[0x10U] >> 2U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x101U] 
        = (1U & (vlSelfRef.xor_ab[0x10U] >> 3U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x102U] 
        = (1U & (vlSelfRef.xor_ab[0x10U] >> 4U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x102U] 
        = (1U & (vlSelfRef.xor_ab[0x10U] >> 5U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x103U] 
        = (1U & (vlSelfRef.xor_ab[0x10U] >> 6U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x103U] 
        = (1U & (vlSelfRef.xor_ab[0x10U] >> 7U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x104U] 
        = (1U & (vlSelfRef.xor_ab[0x10U] >> 8U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x104U] 
        = (1U & (vlSelfRef.xor_ab[0x10U] >> 9U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x105U] 
        = (1U & (vlSelfRef.xor_ab[0x10U] >> 0xaU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x105U] 
        = (1U & (vlSelfRef.xor_ab[0x10U] >> 0xbU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x106U] 
        = (1U & (vlSelfRef.xor_ab[0x10U] >> 0xcU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x106U] 
        = (1U & (vlSelfRef.xor_ab[0x10U] >> 0xdU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x107U] 
        = (1U & (vlSelfRef.xor_ab[0x10U] >> 0xeU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x107U] 
        = (1U & (vlSelfRef.xor_ab[0x10U] >> 0xfU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x108U] 
        = (1U & (vlSelfRef.xor_ab[0x10U] >> 0x10U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x108U] 
        = (1U & (vlSelfRef.xor_ab[0x10U] >> 0x11U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x109U] 
        = (1U & (vlSelfRef.xor_ab[0x10U] >> 0x12U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x109U] 
        = (1U & (vlSelfRef.xor_ab[0x10U] >> 0x13U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x10aU] 
        = (1U & (vlSelfRef.xor_ab[0x10U] >> 0x14U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x10aU] 
        = (1U & (vlSelfRef.xor_ab[0x10U] >> 0x15U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x10bU] 
        = (1U & (vlSelfRef.xor_ab[0x10U] >> 0x16U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x10bU] 
        = (1U & (vlSelfRef.xor_ab[0x10U] >> 0x17U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x10cU] 
        = (1U & (vlSelfRef.xor_ab[0x10U] >> 0x18U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x10cU] 
        = (1U & (vlSelfRef.xor_ab[0x10U] >> 0x19U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x10dU] 
        = (1U & (vlSelfRef.xor_ab[0x10U] >> 0x1aU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x10dU] 
        = (1U & (vlSelfRef.xor_ab[0x10U] >> 0x1bU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x10eU] 
        = (1U & (vlSelfRef.xor_ab[0x10U] >> 0x1cU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x10eU] 
        = (1U & (vlSelfRef.xor_ab[0x10U] >> 0x1dU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x10fU] 
        = (1U & (vlSelfRef.xor_ab[0x10U] >> 0x1eU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x10fU] 
        = (vlSelfRef.xor_ab[0x10U] >> 0x1fU);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x110U] 
        = (1U & vlSelfRef.xor_ab[0x11U]);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x110U] 
        = (1U & (vlSelfRef.xor_ab[0x11U] >> 1U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x111U] 
        = (1U & (vlSelfRef.xor_ab[0x11U] >> 2U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x111U] 
        = (1U & (vlSelfRef.xor_ab[0x11U] >> 3U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x112U] 
        = (1U & (vlSelfRef.xor_ab[0x11U] >> 4U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x112U] 
        = (1U & (vlSelfRef.xor_ab[0x11U] >> 5U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x113U] 
        = (1U & (vlSelfRef.xor_ab[0x11U] >> 6U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x113U] 
        = (1U & (vlSelfRef.xor_ab[0x11U] >> 7U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x114U] 
        = (1U & (vlSelfRef.xor_ab[0x11U] >> 8U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x114U] 
        = (1U & (vlSelfRef.xor_ab[0x11U] >> 9U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x115U] 
        = (1U & (vlSelfRef.xor_ab[0x11U] >> 0xaU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x115U] 
        = (1U & (vlSelfRef.xor_ab[0x11U] >> 0xbU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x116U] 
        = (1U & (vlSelfRef.xor_ab[0x11U] >> 0xcU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x116U] 
        = (1U & (vlSelfRef.xor_ab[0x11U] >> 0xdU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x117U] 
        = (1U & (vlSelfRef.xor_ab[0x11U] >> 0xeU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x117U] 
        = (1U & (vlSelfRef.xor_ab[0x11U] >> 0xfU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x118U] 
        = (1U & (vlSelfRef.xor_ab[0x11U] >> 0x10U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x118U] 
        = (1U & (vlSelfRef.xor_ab[0x11U] >> 0x11U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x119U] 
        = (1U & (vlSelfRef.xor_ab[0x11U] >> 0x12U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x119U] 
        = (1U & (vlSelfRef.xor_ab[0x11U] >> 0x13U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x11aU] 
        = (1U & (vlSelfRef.xor_ab[0x11U] >> 0x14U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x11aU] 
        = (1U & (vlSelfRef.xor_ab[0x11U] >> 0x15U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x11bU] 
        = (1U & (vlSelfRef.xor_ab[0x11U] >> 0x16U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x11bU] 
        = (1U & (vlSelfRef.xor_ab[0x11U] >> 0x17U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x11cU] 
        = (1U & (vlSelfRef.xor_ab[0x11U] >> 0x18U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x11cU] 
        = (1U & (vlSelfRef.xor_ab[0x11U] >> 0x19U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x11dU] 
        = (1U & (vlSelfRef.xor_ab[0x11U] >> 0x1aU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x11dU] 
        = (1U & (vlSelfRef.xor_ab[0x11U] >> 0x1bU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x11eU] 
        = (1U & (vlSelfRef.xor_ab[0x11U] >> 0x1cU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x11eU] 
        = (1U & (vlSelfRef.xor_ab[0x11U] >> 0x1dU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x11fU] 
        = (1U & (vlSelfRef.xor_ab[0x11U] >> 0x1eU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x11fU] 
        = (vlSelfRef.xor_ab[0x11U] >> 0x1fU);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x120U] 
        = (1U & vlSelfRef.xor_ab[0x12U]);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x120U] 
        = (1U & (vlSelfRef.xor_ab[0x12U] >> 1U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x121U] 
        = (1U & (vlSelfRef.xor_ab[0x12U] >> 2U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x121U] 
        = (1U & (vlSelfRef.xor_ab[0x12U] >> 3U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x122U] 
        = (1U & (vlSelfRef.xor_ab[0x12U] >> 4U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x122U] 
        = (1U & (vlSelfRef.xor_ab[0x12U] >> 5U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x123U] 
        = (1U & (vlSelfRef.xor_ab[0x12U] >> 6U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x123U] 
        = (1U & (vlSelfRef.xor_ab[0x12U] >> 7U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x124U] 
        = (1U & (vlSelfRef.xor_ab[0x12U] >> 8U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x124U] 
        = (1U & (vlSelfRef.xor_ab[0x12U] >> 9U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x125U] 
        = (1U & (vlSelfRef.xor_ab[0x12U] >> 0xaU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x125U] 
        = (1U & (vlSelfRef.xor_ab[0x12U] >> 0xbU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x126U] 
        = (1U & (vlSelfRef.xor_ab[0x12U] >> 0xcU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x126U] 
        = (1U & (vlSelfRef.xor_ab[0x12U] >> 0xdU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x127U] 
        = (1U & (vlSelfRef.xor_ab[0x12U] >> 0xeU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x127U] 
        = (1U & (vlSelfRef.xor_ab[0x12U] >> 0xfU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x128U] 
        = (1U & (vlSelfRef.xor_ab[0x12U] >> 0x10U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x128U] 
        = (1U & (vlSelfRef.xor_ab[0x12U] >> 0x11U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x129U] 
        = (1U & (vlSelfRef.xor_ab[0x12U] >> 0x12U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x129U] 
        = (1U & (vlSelfRef.xor_ab[0x12U] >> 0x13U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x12aU] 
        = (1U & (vlSelfRef.xor_ab[0x12U] >> 0x14U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x12aU] 
        = (1U & (vlSelfRef.xor_ab[0x12U] >> 0x15U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x12bU] 
        = (1U & (vlSelfRef.xor_ab[0x12U] >> 0x16U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x12bU] 
        = (1U & (vlSelfRef.xor_ab[0x12U] >> 0x17U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x12cU] 
        = (1U & (vlSelfRef.xor_ab[0x12U] >> 0x18U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x12cU] 
        = (1U & (vlSelfRef.xor_ab[0x12U] >> 0x19U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x12dU] 
        = (1U & (vlSelfRef.xor_ab[0x12U] >> 0x1aU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x12dU] 
        = (1U & (vlSelfRef.xor_ab[0x12U] >> 0x1bU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x12eU] 
        = (1U & (vlSelfRef.xor_ab[0x12U] >> 0x1cU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x12eU] 
        = (1U & (vlSelfRef.xor_ab[0x12U] >> 0x1dU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x12fU] 
        = (1U & (vlSelfRef.xor_ab[0x12U] >> 0x1eU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x12fU] 
        = (vlSelfRef.xor_ab[0x12U] >> 0x1fU);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x130U] 
        = (1U & vlSelfRef.xor_ab[0x13U]);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x130U] 
        = (1U & (vlSelfRef.xor_ab[0x13U] >> 1U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x131U] 
        = (1U & (vlSelfRef.xor_ab[0x13U] >> 2U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x131U] 
        = (1U & (vlSelfRef.xor_ab[0x13U] >> 3U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x132U] 
        = (1U & (vlSelfRef.xor_ab[0x13U] >> 4U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x132U] 
        = (1U & (vlSelfRef.xor_ab[0x13U] >> 5U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x133U] 
        = (1U & (vlSelfRef.xor_ab[0x13U] >> 6U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x133U] 
        = (1U & (vlSelfRef.xor_ab[0x13U] >> 7U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x134U] 
        = (1U & (vlSelfRef.xor_ab[0x13U] >> 8U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x134U] 
        = (1U & (vlSelfRef.xor_ab[0x13U] >> 9U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x135U] 
        = (1U & (vlSelfRef.xor_ab[0x13U] >> 0xaU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x135U] 
        = (1U & (vlSelfRef.xor_ab[0x13U] >> 0xbU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x136U] 
        = (1U & (vlSelfRef.xor_ab[0x13U] >> 0xcU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x136U] 
        = (1U & (vlSelfRef.xor_ab[0x13U] >> 0xdU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x137U] 
        = (1U & (vlSelfRef.xor_ab[0x13U] >> 0xeU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x137U] 
        = (1U & (vlSelfRef.xor_ab[0x13U] >> 0xfU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x138U] 
        = (1U & (vlSelfRef.xor_ab[0x13U] >> 0x10U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x138U] 
        = (1U & (vlSelfRef.xor_ab[0x13U] >> 0x11U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x139U] 
        = (1U & (vlSelfRef.xor_ab[0x13U] >> 0x12U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x139U] 
        = (1U & (vlSelfRef.xor_ab[0x13U] >> 0x13U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x13aU] 
        = (1U & (vlSelfRef.xor_ab[0x13U] >> 0x14U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x13aU] 
        = (1U & (vlSelfRef.xor_ab[0x13U] >> 0x15U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x13bU] 
        = (1U & (vlSelfRef.xor_ab[0x13U] >> 0x16U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x13bU] 
        = (1U & (vlSelfRef.xor_ab[0x13U] >> 0x17U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x13cU] 
        = (1U & (vlSelfRef.xor_ab[0x13U] >> 0x18U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x13cU] 
        = (1U & (vlSelfRef.xor_ab[0x13U] >> 0x19U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x13dU] 
        = (1U & (vlSelfRef.xor_ab[0x13U] >> 0x1aU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x13dU] 
        = (1U & (vlSelfRef.xor_ab[0x13U] >> 0x1bU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x13eU] 
        = (1U & (vlSelfRef.xor_ab[0x13U] >> 0x1cU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x13eU] 
        = (1U & (vlSelfRef.xor_ab[0x13U] >> 0x1dU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x13fU] 
        = (1U & (vlSelfRef.xor_ab[0x13U] >> 0x1eU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x13fU] 
        = (vlSelfRef.xor_ab[0x13U] >> 0x1fU);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x140U] 
        = (1U & vlSelfRef.xor_ab[0x14U]);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x140U] 
        = (1U & (vlSelfRef.xor_ab[0x14U] >> 1U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x141U] 
        = (1U & (vlSelfRef.xor_ab[0x14U] >> 2U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x141U] 
        = (1U & (vlSelfRef.xor_ab[0x14U] >> 3U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x142U] 
        = (1U & (vlSelfRef.xor_ab[0x14U] >> 4U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x142U] 
        = (1U & (vlSelfRef.xor_ab[0x14U] >> 5U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x143U] 
        = (1U & (vlSelfRef.xor_ab[0x14U] >> 6U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x143U] 
        = (1U & (vlSelfRef.xor_ab[0x14U] >> 7U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x144U] 
        = (1U & (vlSelfRef.xor_ab[0x14U] >> 8U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x144U] 
        = (1U & (vlSelfRef.xor_ab[0x14U] >> 9U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x145U] 
        = (1U & (vlSelfRef.xor_ab[0x14U] >> 0xaU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x145U] 
        = (1U & (vlSelfRef.xor_ab[0x14U] >> 0xbU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x146U] 
        = (1U & (vlSelfRef.xor_ab[0x14U] >> 0xcU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x146U] 
        = (1U & (vlSelfRef.xor_ab[0x14U] >> 0xdU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x147U] 
        = (1U & (vlSelfRef.xor_ab[0x14U] >> 0xeU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x147U] 
        = (1U & (vlSelfRef.xor_ab[0x14U] >> 0xfU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x148U] 
        = (1U & (vlSelfRef.xor_ab[0x14U] >> 0x10U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x148U] 
        = (1U & (vlSelfRef.xor_ab[0x14U] >> 0x11U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x149U] 
        = (1U & (vlSelfRef.xor_ab[0x14U] >> 0x12U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x149U] 
        = (1U & (vlSelfRef.xor_ab[0x14U] >> 0x13U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x14aU] 
        = (1U & (vlSelfRef.xor_ab[0x14U] >> 0x14U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x14aU] 
        = (1U & (vlSelfRef.xor_ab[0x14U] >> 0x15U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x14bU] 
        = (1U & (vlSelfRef.xor_ab[0x14U] >> 0x16U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x14bU] 
        = (1U & (vlSelfRef.xor_ab[0x14U] >> 0x17U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x14cU] 
        = (1U & (vlSelfRef.xor_ab[0x14U] >> 0x18U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x14cU] 
        = (1U & (vlSelfRef.xor_ab[0x14U] >> 0x19U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x14dU] 
        = (1U & (vlSelfRef.xor_ab[0x14U] >> 0x1aU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x14dU] 
        = (1U & (vlSelfRef.xor_ab[0x14U] >> 0x1bU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x14eU] 
        = (1U & (vlSelfRef.xor_ab[0x14U] >> 0x1cU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x14eU] 
        = (1U & (vlSelfRef.xor_ab[0x14U] >> 0x1dU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x14fU] 
        = (1U & (vlSelfRef.xor_ab[0x14U] >> 0x1eU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x14fU] 
        = (vlSelfRef.xor_ab[0x14U] >> 0x1fU);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x150U] 
        = (1U & vlSelfRef.xor_ab[0x15U]);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x150U] 
        = (1U & (vlSelfRef.xor_ab[0x15U] >> 1U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x151U] 
        = (1U & (vlSelfRef.xor_ab[0x15U] >> 2U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x151U] 
        = (1U & (vlSelfRef.xor_ab[0x15U] >> 3U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x152U] 
        = (1U & (vlSelfRef.xor_ab[0x15U] >> 4U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x152U] 
        = (1U & (vlSelfRef.xor_ab[0x15U] >> 5U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x153U] 
        = (1U & (vlSelfRef.xor_ab[0x15U] >> 6U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x153U] 
        = (1U & (vlSelfRef.xor_ab[0x15U] >> 7U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x154U] 
        = (1U & (vlSelfRef.xor_ab[0x15U] >> 8U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x154U] 
        = (1U & (vlSelfRef.xor_ab[0x15U] >> 9U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x155U] 
        = (1U & (vlSelfRef.xor_ab[0x15U] >> 0xaU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x155U] 
        = (1U & (vlSelfRef.xor_ab[0x15U] >> 0xbU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x156U] 
        = (1U & (vlSelfRef.xor_ab[0x15U] >> 0xcU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x156U] 
        = (1U & (vlSelfRef.xor_ab[0x15U] >> 0xdU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x157U] 
        = (1U & (vlSelfRef.xor_ab[0x15U] >> 0xeU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x157U] 
        = (1U & (vlSelfRef.xor_ab[0x15U] >> 0xfU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x158U] 
        = (1U & (vlSelfRef.xor_ab[0x15U] >> 0x10U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x158U] 
        = (1U & (vlSelfRef.xor_ab[0x15U] >> 0x11U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x159U] 
        = (1U & (vlSelfRef.xor_ab[0x15U] >> 0x12U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x159U] 
        = (1U & (vlSelfRef.xor_ab[0x15U] >> 0x13U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x15aU] 
        = (1U & (vlSelfRef.xor_ab[0x15U] >> 0x14U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x15aU] 
        = (1U & (vlSelfRef.xor_ab[0x15U] >> 0x15U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x15bU] 
        = (1U & (vlSelfRef.xor_ab[0x15U] >> 0x16U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x15bU] 
        = (1U & (vlSelfRef.xor_ab[0x15U] >> 0x17U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x15cU] 
        = (1U & (vlSelfRef.xor_ab[0x15U] >> 0x18U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x15cU] 
        = (1U & (vlSelfRef.xor_ab[0x15U] >> 0x19U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x15dU] 
        = (1U & (vlSelfRef.xor_ab[0x15U] >> 0x1aU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x15dU] 
        = (1U & (vlSelfRef.xor_ab[0x15U] >> 0x1bU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x15eU] 
        = (1U & (vlSelfRef.xor_ab[0x15U] >> 0x1cU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x15eU] 
        = (1U & (vlSelfRef.xor_ab[0x15U] >> 0x1dU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x15fU] 
        = (1U & (vlSelfRef.xor_ab[0x15U] >> 0x1eU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x15fU] 
        = (vlSelfRef.xor_ab[0x15U] >> 0x1fU);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x160U] 
        = (1U & vlSelfRef.xor_ab[0x16U]);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x160U] 
        = (1U & (vlSelfRef.xor_ab[0x16U] >> 1U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x161U] 
        = (1U & (vlSelfRef.xor_ab[0x16U] >> 2U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x161U] 
        = (1U & (vlSelfRef.xor_ab[0x16U] >> 3U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x162U] 
        = (1U & (vlSelfRef.xor_ab[0x16U] >> 4U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x162U] 
        = (1U & (vlSelfRef.xor_ab[0x16U] >> 5U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x163U] 
        = (1U & (vlSelfRef.xor_ab[0x16U] >> 6U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x163U] 
        = (1U & (vlSelfRef.xor_ab[0x16U] >> 7U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x164U] 
        = (1U & (vlSelfRef.xor_ab[0x16U] >> 8U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x164U] 
        = (1U & (vlSelfRef.xor_ab[0x16U] >> 9U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x165U] 
        = (1U & (vlSelfRef.xor_ab[0x16U] >> 0xaU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x165U] 
        = (1U & (vlSelfRef.xor_ab[0x16U] >> 0xbU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x166U] 
        = (1U & (vlSelfRef.xor_ab[0x16U] >> 0xcU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x166U] 
        = (1U & (vlSelfRef.xor_ab[0x16U] >> 0xdU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x167U] 
        = (1U & (vlSelfRef.xor_ab[0x16U] >> 0xeU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x167U] 
        = (1U & (vlSelfRef.xor_ab[0x16U] >> 0xfU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x168U] 
        = (1U & (vlSelfRef.xor_ab[0x16U] >> 0x10U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x168U] 
        = (1U & (vlSelfRef.xor_ab[0x16U] >> 0x11U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x169U] 
        = (1U & (vlSelfRef.xor_ab[0x16U] >> 0x12U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x169U] 
        = (1U & (vlSelfRef.xor_ab[0x16U] >> 0x13U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x16aU] 
        = (1U & (vlSelfRef.xor_ab[0x16U] >> 0x14U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x16aU] 
        = (1U & (vlSelfRef.xor_ab[0x16U] >> 0x15U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x16bU] 
        = (1U & (vlSelfRef.xor_ab[0x16U] >> 0x16U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x16bU] 
        = (1U & (vlSelfRef.xor_ab[0x16U] >> 0x17U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x16cU] 
        = (1U & (vlSelfRef.xor_ab[0x16U] >> 0x18U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x16cU] 
        = (1U & (vlSelfRef.xor_ab[0x16U] >> 0x19U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x16dU] 
        = (1U & (vlSelfRef.xor_ab[0x16U] >> 0x1aU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x16dU] 
        = (1U & (vlSelfRef.xor_ab[0x16U] >> 0x1bU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x16eU] 
        = (1U & (vlSelfRef.xor_ab[0x16U] >> 0x1cU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x16eU] 
        = (1U & (vlSelfRef.xor_ab[0x16U] >> 0x1dU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x16fU] 
        = (1U & (vlSelfRef.xor_ab[0x16U] >> 0x1eU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x16fU] 
        = (vlSelfRef.xor_ab[0x16U] >> 0x1fU);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x170U] 
        = (1U & vlSelfRef.xor_ab[0x17U]);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x170U] 
        = (1U & (vlSelfRef.xor_ab[0x17U] >> 1U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x171U] 
        = (1U & (vlSelfRef.xor_ab[0x17U] >> 2U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x171U] 
        = (1U & (vlSelfRef.xor_ab[0x17U] >> 3U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x172U] 
        = (1U & (vlSelfRef.xor_ab[0x17U] >> 4U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x172U] 
        = (1U & (vlSelfRef.xor_ab[0x17U] >> 5U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x173U] 
        = (1U & (vlSelfRef.xor_ab[0x17U] >> 6U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x173U] 
        = (1U & (vlSelfRef.xor_ab[0x17U] >> 7U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x174U] 
        = (1U & (vlSelfRef.xor_ab[0x17U] >> 8U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x174U] 
        = (1U & (vlSelfRef.xor_ab[0x17U] >> 9U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x175U] 
        = (1U & (vlSelfRef.xor_ab[0x17U] >> 0xaU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x175U] 
        = (1U & (vlSelfRef.xor_ab[0x17U] >> 0xbU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x176U] 
        = (1U & (vlSelfRef.xor_ab[0x17U] >> 0xcU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x176U] 
        = (1U & (vlSelfRef.xor_ab[0x17U] >> 0xdU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x177U] 
        = (1U & (vlSelfRef.xor_ab[0x17U] >> 0xeU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x177U] 
        = (1U & (vlSelfRef.xor_ab[0x17U] >> 0xfU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x178U] 
        = (1U & (vlSelfRef.xor_ab[0x17U] >> 0x10U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x178U] 
        = (1U & (vlSelfRef.xor_ab[0x17U] >> 0x11U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x179U] 
        = (1U & (vlSelfRef.xor_ab[0x17U] >> 0x12U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x179U] 
        = (1U & (vlSelfRef.xor_ab[0x17U] >> 0x13U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x17aU] 
        = (1U & (vlSelfRef.xor_ab[0x17U] >> 0x14U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x17aU] 
        = (1U & (vlSelfRef.xor_ab[0x17U] >> 0x15U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x17bU] 
        = (1U & (vlSelfRef.xor_ab[0x17U] >> 0x16U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x17bU] 
        = (1U & (vlSelfRef.xor_ab[0x17U] >> 0x17U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x17cU] 
        = (1U & (vlSelfRef.xor_ab[0x17U] >> 0x18U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x17cU] 
        = (1U & (vlSelfRef.xor_ab[0x17U] >> 0x19U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x17dU] 
        = (1U & (vlSelfRef.xor_ab[0x17U] >> 0x1aU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x17dU] 
        = (1U & (vlSelfRef.xor_ab[0x17U] >> 0x1bU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x17eU] 
        = (1U & (vlSelfRef.xor_ab[0x17U] >> 0x1cU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x17eU] 
        = (1U & (vlSelfRef.xor_ab[0x17U] >> 0x1dU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x17fU] 
        = (1U & (vlSelfRef.xor_ab[0x17U] >> 0x1eU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x17fU] 
        = (vlSelfRef.xor_ab[0x17U] >> 0x1fU);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x180U] 
        = (1U & vlSelfRef.xor_ab[0x18U]);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x180U] 
        = (1U & (vlSelfRef.xor_ab[0x18U] >> 1U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x181U] 
        = (1U & (vlSelfRef.xor_ab[0x18U] >> 2U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x181U] 
        = (1U & (vlSelfRef.xor_ab[0x18U] >> 3U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x182U] 
        = (1U & (vlSelfRef.xor_ab[0x18U] >> 4U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x182U] 
        = (1U & (vlSelfRef.xor_ab[0x18U] >> 5U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x183U] 
        = (1U & (vlSelfRef.xor_ab[0x18U] >> 6U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x183U] 
        = (1U & (vlSelfRef.xor_ab[0x18U] >> 7U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x184U] 
        = (1U & (vlSelfRef.xor_ab[0x18U] >> 8U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x184U] 
        = (1U & (vlSelfRef.xor_ab[0x18U] >> 9U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x185U] 
        = (1U & (vlSelfRef.xor_ab[0x18U] >> 0xaU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x185U] 
        = (1U & (vlSelfRef.xor_ab[0x18U] >> 0xbU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x186U] 
        = (1U & (vlSelfRef.xor_ab[0x18U] >> 0xcU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x186U] 
        = (1U & (vlSelfRef.xor_ab[0x18U] >> 0xdU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x187U] 
        = (1U & (vlSelfRef.xor_ab[0x18U] >> 0xeU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x187U] 
        = (1U & (vlSelfRef.xor_ab[0x18U] >> 0xfU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x188U] 
        = (1U & (vlSelfRef.xor_ab[0x18U] >> 0x10U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x188U] 
        = (1U & (vlSelfRef.xor_ab[0x18U] >> 0x11U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x189U] 
        = (1U & (vlSelfRef.xor_ab[0x18U] >> 0x12U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x189U] 
        = (1U & (vlSelfRef.xor_ab[0x18U] >> 0x13U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x18aU] 
        = (1U & (vlSelfRef.xor_ab[0x18U] >> 0x14U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x18aU] 
        = (1U & (vlSelfRef.xor_ab[0x18U] >> 0x15U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x18bU] 
        = (1U & (vlSelfRef.xor_ab[0x18U] >> 0x16U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x18bU] 
        = (1U & (vlSelfRef.xor_ab[0x18U] >> 0x17U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x18cU] 
        = (1U & (vlSelfRef.xor_ab[0x18U] >> 0x18U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x18cU] 
        = (1U & (vlSelfRef.xor_ab[0x18U] >> 0x19U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x18dU] 
        = (1U & (vlSelfRef.xor_ab[0x18U] >> 0x1aU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x18dU] 
        = (1U & (vlSelfRef.xor_ab[0x18U] >> 0x1bU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x18eU] 
        = (1U & (vlSelfRef.xor_ab[0x18U] >> 0x1cU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x18eU] 
        = (1U & (vlSelfRef.xor_ab[0x18U] >> 0x1dU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x18fU] 
        = (1U & (vlSelfRef.xor_ab[0x18U] >> 0x1eU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x18fU] 
        = (vlSelfRef.xor_ab[0x18U] >> 0x1fU);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x190U] 
        = (1U & vlSelfRef.xor_ab[0x19U]);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x190U] 
        = (1U & (vlSelfRef.xor_ab[0x19U] >> 1U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x191U] 
        = (1U & (vlSelfRef.xor_ab[0x19U] >> 2U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x191U] 
        = (1U & (vlSelfRef.xor_ab[0x19U] >> 3U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x192U] 
        = (1U & (vlSelfRef.xor_ab[0x19U] >> 4U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x192U] 
        = (1U & (vlSelfRef.xor_ab[0x19U] >> 5U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x193U] 
        = (1U & (vlSelfRef.xor_ab[0x19U] >> 6U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x193U] 
        = (1U & (vlSelfRef.xor_ab[0x19U] >> 7U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x194U] 
        = (1U & (vlSelfRef.xor_ab[0x19U] >> 8U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x194U] 
        = (1U & (vlSelfRef.xor_ab[0x19U] >> 9U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x195U] 
        = (1U & (vlSelfRef.xor_ab[0x19U] >> 0xaU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x195U] 
        = (1U & (vlSelfRef.xor_ab[0x19U] >> 0xbU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x196U] 
        = (1U & (vlSelfRef.xor_ab[0x19U] >> 0xcU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x196U] 
        = (1U & (vlSelfRef.xor_ab[0x19U] >> 0xdU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x197U] 
        = (1U & (vlSelfRef.xor_ab[0x19U] >> 0xeU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x197U] 
        = (1U & (vlSelfRef.xor_ab[0x19U] >> 0xfU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x198U] 
        = (1U & (vlSelfRef.xor_ab[0x19U] >> 0x10U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x198U] 
        = (1U & (vlSelfRef.xor_ab[0x19U] >> 0x11U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x199U] 
        = (1U & (vlSelfRef.xor_ab[0x19U] >> 0x12U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x199U] 
        = (1U & (vlSelfRef.xor_ab[0x19U] >> 0x13U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x19aU] 
        = (1U & (vlSelfRef.xor_ab[0x19U] >> 0x14U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x19aU] 
        = (1U & (vlSelfRef.xor_ab[0x19U] >> 0x15U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x19bU] 
        = (1U & (vlSelfRef.xor_ab[0x19U] >> 0x16U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x19bU] 
        = (1U & (vlSelfRef.xor_ab[0x19U] >> 0x17U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x19cU] 
        = (1U & (vlSelfRef.xor_ab[0x19U] >> 0x18U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x19cU] 
        = (1U & (vlSelfRef.xor_ab[0x19U] >> 0x19U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x19dU] 
        = (1U & (vlSelfRef.xor_ab[0x19U] >> 0x1aU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x19dU] 
        = (1U & (vlSelfRef.xor_ab[0x19U] >> 0x1bU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x19eU] 
        = (1U & (vlSelfRef.xor_ab[0x19U] >> 0x1cU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x19eU] 
        = (1U & (vlSelfRef.xor_ab[0x19U] >> 0x1dU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x19fU] 
        = (1U & (vlSelfRef.xor_ab[0x19U] >> 0x1eU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x19fU] 
        = (vlSelfRef.xor_ab[0x19U] >> 0x1fU);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1a0U] 
        = (1U & vlSelfRef.xor_ab[0x1aU]);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1a0U] 
        = (1U & (vlSelfRef.xor_ab[0x1aU] >> 1U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1a1U] 
        = (1U & (vlSelfRef.xor_ab[0x1aU] >> 2U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1a1U] 
        = (1U & (vlSelfRef.xor_ab[0x1aU] >> 3U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1a2U] 
        = (1U & (vlSelfRef.xor_ab[0x1aU] >> 4U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1a2U] 
        = (1U & (vlSelfRef.xor_ab[0x1aU] >> 5U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1a3U] 
        = (1U & (vlSelfRef.xor_ab[0x1aU] >> 6U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1a3U] 
        = (1U & (vlSelfRef.xor_ab[0x1aU] >> 7U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1a4U] 
        = (1U & (vlSelfRef.xor_ab[0x1aU] >> 8U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1a4U] 
        = (1U & (vlSelfRef.xor_ab[0x1aU] >> 9U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1a5U] 
        = (1U & (vlSelfRef.xor_ab[0x1aU] >> 0xaU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1a5U] 
        = (1U & (vlSelfRef.xor_ab[0x1aU] >> 0xbU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1a6U] 
        = (1U & (vlSelfRef.xor_ab[0x1aU] >> 0xcU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1a6U] 
        = (1U & (vlSelfRef.xor_ab[0x1aU] >> 0xdU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1a7U] 
        = (1U & (vlSelfRef.xor_ab[0x1aU] >> 0xeU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1a7U] 
        = (1U & (vlSelfRef.xor_ab[0x1aU] >> 0xfU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1a8U] 
        = (1U & (vlSelfRef.xor_ab[0x1aU] >> 0x10U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1a8U] 
        = (1U & (vlSelfRef.xor_ab[0x1aU] >> 0x11U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1a9U] 
        = (1U & (vlSelfRef.xor_ab[0x1aU] >> 0x12U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1a9U] 
        = (1U & (vlSelfRef.xor_ab[0x1aU] >> 0x13U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1aaU] 
        = (1U & (vlSelfRef.xor_ab[0x1aU] >> 0x14U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1aaU] 
        = (1U & (vlSelfRef.xor_ab[0x1aU] >> 0x15U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1abU] 
        = (1U & (vlSelfRef.xor_ab[0x1aU] >> 0x16U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1abU] 
        = (1U & (vlSelfRef.xor_ab[0x1aU] >> 0x17U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1acU] 
        = (1U & (vlSelfRef.xor_ab[0x1aU] >> 0x18U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1acU] 
        = (1U & (vlSelfRef.xor_ab[0x1aU] >> 0x19U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1adU] 
        = (1U & (vlSelfRef.xor_ab[0x1aU] >> 0x1aU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1adU] 
        = (1U & (vlSelfRef.xor_ab[0x1aU] >> 0x1bU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1aeU] 
        = (1U & (vlSelfRef.xor_ab[0x1aU] >> 0x1cU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1aeU] 
        = (1U & (vlSelfRef.xor_ab[0x1aU] >> 0x1dU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1afU] 
        = (1U & (vlSelfRef.xor_ab[0x1aU] >> 0x1eU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1afU] 
        = (vlSelfRef.xor_ab[0x1aU] >> 0x1fU);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1b0U] 
        = (1U & vlSelfRef.xor_ab[0x1bU]);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1b0U] 
        = (1U & (vlSelfRef.xor_ab[0x1bU] >> 1U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1b1U] 
        = (1U & (vlSelfRef.xor_ab[0x1bU] >> 2U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1b1U] 
        = (1U & (vlSelfRef.xor_ab[0x1bU] >> 3U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1b2U] 
        = (1U & (vlSelfRef.xor_ab[0x1bU] >> 4U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1b2U] 
        = (1U & (vlSelfRef.xor_ab[0x1bU] >> 5U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1b3U] 
        = (1U & (vlSelfRef.xor_ab[0x1bU] >> 6U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1b3U] 
        = (1U & (vlSelfRef.xor_ab[0x1bU] >> 7U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1b4U] 
        = (1U & (vlSelfRef.xor_ab[0x1bU] >> 8U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1b4U] 
        = (1U & (vlSelfRef.xor_ab[0x1bU] >> 9U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1b5U] 
        = (1U & (vlSelfRef.xor_ab[0x1bU] >> 0xaU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1b5U] 
        = (1U & (vlSelfRef.xor_ab[0x1bU] >> 0xbU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1b6U] 
        = (1U & (vlSelfRef.xor_ab[0x1bU] >> 0xcU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1b6U] 
        = (1U & (vlSelfRef.xor_ab[0x1bU] >> 0xdU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1b7U] 
        = (1U & (vlSelfRef.xor_ab[0x1bU] >> 0xeU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1b7U] 
        = (1U & (vlSelfRef.xor_ab[0x1bU] >> 0xfU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1b8U] 
        = (1U & (vlSelfRef.xor_ab[0x1bU] >> 0x10U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1b8U] 
        = (1U & (vlSelfRef.xor_ab[0x1bU] >> 0x11U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1b9U] 
        = (1U & (vlSelfRef.xor_ab[0x1bU] >> 0x12U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1b9U] 
        = (1U & (vlSelfRef.xor_ab[0x1bU] >> 0x13U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1baU] 
        = (1U & (vlSelfRef.xor_ab[0x1bU] >> 0x14U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1baU] 
        = (1U & (vlSelfRef.xor_ab[0x1bU] >> 0x15U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1bbU] 
        = (1U & (vlSelfRef.xor_ab[0x1bU] >> 0x16U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1bbU] 
        = (1U & (vlSelfRef.xor_ab[0x1bU] >> 0x17U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1bcU] 
        = (1U & (vlSelfRef.xor_ab[0x1bU] >> 0x18U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1bcU] 
        = (1U & (vlSelfRef.xor_ab[0x1bU] >> 0x19U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1bdU] 
        = (1U & (vlSelfRef.xor_ab[0x1bU] >> 0x1aU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1bdU] 
        = (1U & (vlSelfRef.xor_ab[0x1bU] >> 0x1bU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1beU] 
        = (1U & (vlSelfRef.xor_ab[0x1bU] >> 0x1cU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1beU] 
        = (1U & (vlSelfRef.xor_ab[0x1bU] >> 0x1dU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1bfU] 
        = (1U & (vlSelfRef.xor_ab[0x1bU] >> 0x1eU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1bfU] 
        = (vlSelfRef.xor_ab[0x1bU] >> 0x1fU);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1c0U] 
        = (1U & vlSelfRef.xor_ab[0x1cU]);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1c0U] 
        = (1U & (vlSelfRef.xor_ab[0x1cU] >> 1U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1c1U] 
        = (1U & (vlSelfRef.xor_ab[0x1cU] >> 2U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1c1U] 
        = (1U & (vlSelfRef.xor_ab[0x1cU] >> 3U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1c2U] 
        = (1U & (vlSelfRef.xor_ab[0x1cU] >> 4U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1c2U] 
        = (1U & (vlSelfRef.xor_ab[0x1cU] >> 5U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1c3U] 
        = (1U & (vlSelfRef.xor_ab[0x1cU] >> 6U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1c3U] 
        = (1U & (vlSelfRef.xor_ab[0x1cU] >> 7U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1c4U] 
        = (1U & (vlSelfRef.xor_ab[0x1cU] >> 8U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1c4U] 
        = (1U & (vlSelfRef.xor_ab[0x1cU] >> 9U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1c5U] 
        = (1U & (vlSelfRef.xor_ab[0x1cU] >> 0xaU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1c5U] 
        = (1U & (vlSelfRef.xor_ab[0x1cU] >> 0xbU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1c6U] 
        = (1U & (vlSelfRef.xor_ab[0x1cU] >> 0xcU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1c6U] 
        = (1U & (vlSelfRef.xor_ab[0x1cU] >> 0xdU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1c7U] 
        = (1U & (vlSelfRef.xor_ab[0x1cU] >> 0xeU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1c7U] 
        = (1U & (vlSelfRef.xor_ab[0x1cU] >> 0xfU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1c8U] 
        = (1U & (vlSelfRef.xor_ab[0x1cU] >> 0x10U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1c8U] 
        = (1U & (vlSelfRef.xor_ab[0x1cU] >> 0x11U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1c9U] 
        = (1U & (vlSelfRef.xor_ab[0x1cU] >> 0x12U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1c9U] 
        = (1U & (vlSelfRef.xor_ab[0x1cU] >> 0x13U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1caU] 
        = (1U & (vlSelfRef.xor_ab[0x1cU] >> 0x14U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1caU] 
        = (1U & (vlSelfRef.xor_ab[0x1cU] >> 0x15U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1cbU] 
        = (1U & (vlSelfRef.xor_ab[0x1cU] >> 0x16U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1cbU] 
        = (1U & (vlSelfRef.xor_ab[0x1cU] >> 0x17U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1ccU] 
        = (1U & (vlSelfRef.xor_ab[0x1cU] >> 0x18U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1ccU] 
        = (1U & (vlSelfRef.xor_ab[0x1cU] >> 0x19U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1cdU] 
        = (1U & (vlSelfRef.xor_ab[0x1cU] >> 0x1aU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1cdU] 
        = (1U & (vlSelfRef.xor_ab[0x1cU] >> 0x1bU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1ceU] 
        = (1U & (vlSelfRef.xor_ab[0x1cU] >> 0x1cU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1ceU] 
        = (1U & (vlSelfRef.xor_ab[0x1cU] >> 0x1dU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1cfU] 
        = (1U & (vlSelfRef.xor_ab[0x1cU] >> 0x1eU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1cfU] 
        = (vlSelfRef.xor_ab[0x1cU] >> 0x1fU);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1d0U] 
        = (1U & vlSelfRef.xor_ab[0x1dU]);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1d0U] 
        = (1U & (vlSelfRef.xor_ab[0x1dU] >> 1U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1d1U] 
        = (1U & (vlSelfRef.xor_ab[0x1dU] >> 2U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1d1U] 
        = (1U & (vlSelfRef.xor_ab[0x1dU] >> 3U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1d2U] 
        = (1U & (vlSelfRef.xor_ab[0x1dU] >> 4U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1d2U] 
        = (1U & (vlSelfRef.xor_ab[0x1dU] >> 5U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1d3U] 
        = (1U & (vlSelfRef.xor_ab[0x1dU] >> 6U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1d3U] 
        = (1U & (vlSelfRef.xor_ab[0x1dU] >> 7U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1d4U] 
        = (1U & (vlSelfRef.xor_ab[0x1dU] >> 8U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1d4U] 
        = (1U & (vlSelfRef.xor_ab[0x1dU] >> 9U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1d5U] 
        = (1U & (vlSelfRef.xor_ab[0x1dU] >> 0xaU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1d5U] 
        = (1U & (vlSelfRef.xor_ab[0x1dU] >> 0xbU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1d6U] 
        = (1U & (vlSelfRef.xor_ab[0x1dU] >> 0xcU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1d6U] 
        = (1U & (vlSelfRef.xor_ab[0x1dU] >> 0xdU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1d7U] 
        = (1U & (vlSelfRef.xor_ab[0x1dU] >> 0xeU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1d7U] 
        = (1U & (vlSelfRef.xor_ab[0x1dU] >> 0xfU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1d8U] 
        = (1U & (vlSelfRef.xor_ab[0x1dU] >> 0x10U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1d8U] 
        = (1U & (vlSelfRef.xor_ab[0x1dU] >> 0x11U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1d9U] 
        = (1U & (vlSelfRef.xor_ab[0x1dU] >> 0x12U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1d9U] 
        = (1U & (vlSelfRef.xor_ab[0x1dU] >> 0x13U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1daU] 
        = (1U & (vlSelfRef.xor_ab[0x1dU] >> 0x14U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1daU] 
        = (1U & (vlSelfRef.xor_ab[0x1dU] >> 0x15U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1dbU] 
        = (1U & (vlSelfRef.xor_ab[0x1dU] >> 0x16U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1dbU] 
        = (1U & (vlSelfRef.xor_ab[0x1dU] >> 0x17U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1dcU] 
        = (1U & (vlSelfRef.xor_ab[0x1dU] >> 0x18U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1dcU] 
        = (1U & (vlSelfRef.xor_ab[0x1dU] >> 0x19U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1ddU] 
        = (1U & (vlSelfRef.xor_ab[0x1dU] >> 0x1aU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1ddU] 
        = (1U & (vlSelfRef.xor_ab[0x1dU] >> 0x1bU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1deU] 
        = (1U & (vlSelfRef.xor_ab[0x1dU] >> 0x1cU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1deU] 
        = (1U & (vlSelfRef.xor_ab[0x1dU] >> 0x1dU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1dfU] 
        = (1U & (vlSelfRef.xor_ab[0x1dU] >> 0x1eU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1dfU] 
        = (vlSelfRef.xor_ab[0x1dU] >> 0x1fU);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1e0U] 
        = (1U & vlSelfRef.xor_ab[0x1eU]);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1e0U] 
        = (1U & (vlSelfRef.xor_ab[0x1eU] >> 1U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1e1U] 
        = (1U & (vlSelfRef.xor_ab[0x1eU] >> 2U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1e1U] 
        = (1U & (vlSelfRef.xor_ab[0x1eU] >> 3U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1e2U] 
        = (1U & (vlSelfRef.xor_ab[0x1eU] >> 4U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1e2U] 
        = (1U & (vlSelfRef.xor_ab[0x1eU] >> 5U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1e3U] 
        = (1U & (vlSelfRef.xor_ab[0x1eU] >> 6U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1e3U] 
        = (1U & (vlSelfRef.xor_ab[0x1eU] >> 7U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1e4U] 
        = (1U & (vlSelfRef.xor_ab[0x1eU] >> 8U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1e4U] 
        = (1U & (vlSelfRef.xor_ab[0x1eU] >> 9U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1e5U] 
        = (1U & (vlSelfRef.xor_ab[0x1eU] >> 0xaU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1e5U] 
        = (1U & (vlSelfRef.xor_ab[0x1eU] >> 0xbU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1e6U] 
        = (1U & (vlSelfRef.xor_ab[0x1eU] >> 0xcU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1e6U] 
        = (1U & (vlSelfRef.xor_ab[0x1eU] >> 0xdU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1e7U] 
        = (1U & (vlSelfRef.xor_ab[0x1eU] >> 0xeU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1e7U] 
        = (1U & (vlSelfRef.xor_ab[0x1eU] >> 0xfU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1e8U] 
        = (1U & (vlSelfRef.xor_ab[0x1eU] >> 0x10U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1e8U] 
        = (1U & (vlSelfRef.xor_ab[0x1eU] >> 0x11U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1e9U] 
        = (1U & (vlSelfRef.xor_ab[0x1eU] >> 0x12U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1e9U] 
        = (1U & (vlSelfRef.xor_ab[0x1eU] >> 0x13U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1eaU] 
        = (1U & (vlSelfRef.xor_ab[0x1eU] >> 0x14U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1eaU] 
        = (1U & (vlSelfRef.xor_ab[0x1eU] >> 0x15U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1ebU] 
        = (1U & (vlSelfRef.xor_ab[0x1eU] >> 0x16U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1ebU] 
        = (1U & (vlSelfRef.xor_ab[0x1eU] >> 0x17U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1ecU] 
        = (1U & (vlSelfRef.xor_ab[0x1eU] >> 0x18U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1ecU] 
        = (1U & (vlSelfRef.xor_ab[0x1eU] >> 0x19U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1edU] 
        = (1U & (vlSelfRef.xor_ab[0x1eU] >> 0x1aU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1edU] 
        = (1U & (vlSelfRef.xor_ab[0x1eU] >> 0x1bU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1eeU] 
        = (1U & (vlSelfRef.xor_ab[0x1eU] >> 0x1cU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1eeU] 
        = (1U & (vlSelfRef.xor_ab[0x1eU] >> 0x1dU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1efU] 
        = (1U & (vlSelfRef.xor_ab[0x1eU] >> 0x1eU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1efU] 
        = (vlSelfRef.xor_ab[0x1eU] >> 0x1fU);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1f0U] 
        = (1U & vlSelfRef.xor_ab[0x1fU]);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1f0U] 
        = (1U & (vlSelfRef.xor_ab[0x1fU] >> 1U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1f1U] 
        = (1U & (vlSelfRef.xor_ab[0x1fU] >> 2U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1f1U] 
        = (1U & (vlSelfRef.xor_ab[0x1fU] >> 3U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1f2U] 
        = (1U & (vlSelfRef.xor_ab[0x1fU] >> 4U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1f2U] 
        = (1U & (vlSelfRef.xor_ab[0x1fU] >> 5U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1f3U] 
        = (1U & (vlSelfRef.xor_ab[0x1fU] >> 6U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1f3U] 
        = (1U & (vlSelfRef.xor_ab[0x1fU] >> 7U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1f4U] 
        = (1U & (vlSelfRef.xor_ab[0x1fU] >> 8U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1f4U] 
        = (1U & (vlSelfRef.xor_ab[0x1fU] >> 9U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1f5U] 
        = (1U & (vlSelfRef.xor_ab[0x1fU] >> 0xaU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1f5U] 
        = (1U & (vlSelfRef.xor_ab[0x1fU] >> 0xbU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1f6U] 
        = (1U & (vlSelfRef.xor_ab[0x1fU] >> 0xcU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1f6U] 
        = (1U & (vlSelfRef.xor_ab[0x1fU] >> 0xdU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1f7U] 
        = (1U & (vlSelfRef.xor_ab[0x1fU] >> 0xeU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1f7U] 
        = (1U & (vlSelfRef.xor_ab[0x1fU] >> 0xfU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1f8U] 
        = (1U & (vlSelfRef.xor_ab[0x1fU] >> 0x10U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1f8U] 
        = (1U & (vlSelfRef.xor_ab[0x1fU] >> 0x11U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1f9U] 
        = (1U & (vlSelfRef.xor_ab[0x1fU] >> 0x12U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1f9U] 
        = (1U & (vlSelfRef.xor_ab[0x1fU] >> 0x13U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1faU] 
        = (1U & (vlSelfRef.xor_ab[0x1fU] >> 0x14U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1faU] 
        = (1U & (vlSelfRef.xor_ab[0x1fU] >> 0x15U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1fbU] 
        = (1U & (vlSelfRef.xor_ab[0x1fU] >> 0x16U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1fbU] 
        = (1U & (vlSelfRef.xor_ab[0x1fU] >> 0x17U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1fcU] 
        = (1U & (vlSelfRef.xor_ab[0x1fU] >> 0x18U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1fcU] 
        = (1U & (vlSelfRef.xor_ab[0x1fU] >> 0x19U));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1fdU] 
        = (1U & (vlSelfRef.xor_ab[0x1fU] >> 0x1aU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1fdU] 
        = (1U & (vlSelfRef.xor_ab[0x1fU] >> 0x1bU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1feU] 
        = (1U & (vlSelfRef.xor_ab[0x1fU] >> 0x1cU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1feU] 
        = (1U & (vlSelfRef.xor_ab[0x1fU] >> 0x1dU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1[0x1ffU] 
        = (1U & (vlSelfRef.xor_ab[0x1fU] >> 0x1eU));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2[0x1ffU] 
        = (vlSelfRef.xor_ab[0x1fU] >> 0x1fU);
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[1U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [1U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [1U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[2U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [2U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [2U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[3U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [3U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [3U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[4U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [4U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [4U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[5U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [5U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [5U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[6U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [6U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [6U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[7U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [7U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [7U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[8U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [8U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [8U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[9U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [9U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [9U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xaU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xaU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xaU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xbU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xbU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xbU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xcU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xcU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xcU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xdU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xdU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xdU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xeU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xeU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xeU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xfU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xfU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xfU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x10U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x10U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x10U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x11U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x11U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x11U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x12U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x12U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x12U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x13U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x13U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x13U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x14U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x14U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x14U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x15U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x15U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x15U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x16U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x16U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x16U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x17U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x17U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x17U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x18U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x18U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x18U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x19U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x19U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x19U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1aU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1aU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1aU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1bU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1bU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1bU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1cU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1cU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1cU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1dU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1dU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1dU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1eU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1eU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1eU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1fU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1fU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1fU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x20U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x20U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x20U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x21U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x21U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x21U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x22U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x22U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x22U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x23U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x23U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x23U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x24U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x24U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x24U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x25U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x25U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x25U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x26U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x26U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x26U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x27U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x27U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x27U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x28U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x28U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x28U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x29U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x29U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x29U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x2aU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x2aU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x2aU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x2bU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x2bU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x2bU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x2cU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x2cU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x2cU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x2dU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x2dU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x2dU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x2eU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x2eU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x2eU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x2fU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x2fU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x2fU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x30U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x30U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x30U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x31U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x31U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x31U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x32U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x32U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x32U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x33U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x33U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x33U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x34U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x34U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x34U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x35U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x35U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x35U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x36U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x36U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x36U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x37U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x37U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x37U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x38U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x38U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x38U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x39U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x39U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x39U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x3aU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x3aU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x3aU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x3bU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x3bU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x3bU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x3cU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x3cU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x3cU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x3dU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x3dU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x3dU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x3eU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x3eU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x3eU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x3fU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x3fU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x3fU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x40U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x40U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x40U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x41U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x41U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x41U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x42U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x42U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x42U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x43U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x43U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x43U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x44U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x44U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x44U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x45U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x45U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x45U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x46U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x46U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x46U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x47U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x47U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x47U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x48U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x48U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x48U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x49U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x49U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x49U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x4aU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x4aU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x4aU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x4bU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x4bU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x4bU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x4cU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x4cU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x4cU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x4dU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x4dU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x4dU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x4eU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x4eU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x4eU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x4fU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x4fU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x4fU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x50U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x50U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x50U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x51U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x51U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x51U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x52U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x52U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x52U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x53U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x53U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x53U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x54U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x54U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x54U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x55U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x55U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x55U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x56U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x56U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x56U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x57U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x57U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x57U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x58U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x58U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x58U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x59U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x59U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x59U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x5aU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x5aU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x5aU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x5bU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x5bU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x5bU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x5cU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x5cU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x5cU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x5dU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x5dU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x5dU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x5eU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x5eU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x5eU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x5fU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x5fU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x5fU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x60U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x60U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x60U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x61U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x61U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x61U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x62U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x62U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x62U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x63U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x63U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x63U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x64U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x64U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x64U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x65U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x65U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x65U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x66U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x66U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x66U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x67U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x67U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x67U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x68U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x68U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x68U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x69U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x69U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x69U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x6aU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x6aU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x6aU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x6bU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x6bU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x6bU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x6cU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x6cU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x6cU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x6dU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x6dU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x6dU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x6eU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x6eU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x6eU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x6fU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x6fU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x6fU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x70U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x70U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x70U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x71U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x71U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x71U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x72U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x72U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x72U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x73U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x73U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x73U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x74U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x74U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x74U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x75U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x75U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x75U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x76U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x76U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x76U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x77U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x77U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x77U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x78U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x78U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x78U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x79U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x79U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x79U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x7aU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x7aU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x7aU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x7bU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x7bU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x7bU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x7cU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x7cU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x7cU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x7dU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x7dU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x7dU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x7eU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x7eU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x7eU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x7fU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x7fU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x7fU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x80U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x80U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x80U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x81U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x81U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x81U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x82U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x82U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x82U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x83U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x83U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x83U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x84U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x84U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x84U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x85U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x85U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x85U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x86U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x86U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x86U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x87U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x87U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x87U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x88U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x88U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x88U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x89U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x89U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x89U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x8aU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x8aU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x8aU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x8bU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x8bU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x8bU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x8cU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x8cU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x8cU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x8dU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x8dU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x8dU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x8eU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x8eU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x8eU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x8fU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x8fU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x8fU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x90U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x90U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x90U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x91U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x91U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x91U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x92U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x92U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x92U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x93U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x93U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x93U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x94U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x94U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x94U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x95U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x95U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x95U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x96U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x96U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x96U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x97U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x97U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x97U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x98U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x98U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x98U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x99U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x99U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x99U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x9aU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x9aU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x9aU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x9bU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x9bU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x9bU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x9cU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x9cU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x9cU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x9dU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x9dU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x9dU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x9eU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x9eU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x9eU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x9fU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x9fU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x9fU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xa0U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xa0U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xa0U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xa1U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xa1U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xa1U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xa2U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xa2U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xa2U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xa3U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xa3U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xa3U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xa4U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xa4U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xa4U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xa5U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xa5U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xa5U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xa6U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xa6U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xa6U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xa7U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xa7U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xa7U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xa8U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xa8U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xa8U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xa9U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xa9U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xa9U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xaaU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xaaU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xaaU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xabU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xabU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xabU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xacU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xacU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xacU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xadU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xadU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xadU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xaeU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xaeU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xaeU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xafU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xafU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xafU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xb0U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xb0U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xb0U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xb1U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xb1U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xb1U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xb2U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xb2U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xb2U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xb3U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xb3U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xb3U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xb4U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xb4U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xb4U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xb5U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xb5U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xb5U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xb6U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xb6U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xb6U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xb7U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xb7U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xb7U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xb8U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xb8U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xb8U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xb9U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xb9U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xb9U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xbaU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xbaU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xbaU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xbbU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xbbU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xbbU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xbcU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xbcU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xbcU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xbdU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xbdU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xbdU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xbeU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xbeU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xbeU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xbfU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xbfU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xbfU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xc0U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xc0U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xc0U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xc1U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xc1U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xc1U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xc2U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xc2U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xc2U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xc3U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xc3U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xc3U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xc4U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xc4U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xc4U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xc5U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xc5U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xc5U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xc6U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xc6U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xc6U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xc7U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xc7U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xc7U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xc8U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xc8U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xc8U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xc9U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xc9U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xc9U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xcaU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xcaU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xcaU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xcbU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xcbU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xcbU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xccU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xccU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xccU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xcdU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xcdU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xcdU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xceU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xceU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xceU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xcfU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xcfU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xcfU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xd0U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xd0U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xd0U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xd1U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xd1U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xd1U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xd2U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xd2U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xd2U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xd3U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xd3U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xd3U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xd4U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xd4U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xd4U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xd5U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xd5U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xd5U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xd6U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xd6U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xd6U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xd7U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xd7U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xd7U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xd8U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xd8U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xd8U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xd9U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xd9U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xd9U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xdaU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xdaU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xdaU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xdbU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xdbU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xdbU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xdcU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xdcU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xdcU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xddU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xddU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xddU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xdeU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xdeU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xdeU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xdfU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xdfU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xdfU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xe0U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xe0U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xe0U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xe1U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xe1U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xe1U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xe2U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xe2U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xe2U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xe3U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xe3U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xe3U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xe4U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xe4U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xe4U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xe5U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xe5U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xe5U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xe6U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xe6U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xe6U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xe7U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xe7U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xe7U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xe8U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xe8U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xe8U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xe9U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xe9U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xe9U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xeaU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xeaU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xeaU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xebU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xebU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xebU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xecU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xecU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xecU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xedU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xedU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xedU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xeeU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xeeU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xeeU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xefU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xefU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xefU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xf0U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xf0U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xf0U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xf1U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xf1U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xf1U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xf2U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xf2U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xf2U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xf3U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xf3U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xf3U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xf4U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xf4U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xf4U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xf5U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xf5U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xf5U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xf6U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xf6U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xf6U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xf7U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xf7U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xf7U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xf8U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xf8U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xf8U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xf9U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xf9U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xf9U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xfaU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xfaU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xfaU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xfbU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xfbU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xfbU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xfcU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xfcU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xfcU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xfdU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xfdU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xfdU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xfeU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xfeU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xfeU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0xffU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0xffU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0xffU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x100U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x100U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x100U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x101U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x101U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x101U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x102U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x102U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x102U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x103U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x103U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x103U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x104U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x104U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x104U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x105U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x105U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x105U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x106U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x106U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x106U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x107U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x107U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x107U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x108U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x108U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x108U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x109U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x109U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x109U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x10aU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x10aU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x10aU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x10bU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x10bU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x10bU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x10cU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x10cU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x10cU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x10dU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x10dU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x10dU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x10eU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x10eU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x10eU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x10fU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x10fU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x10fU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x110U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x110U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x110U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x111U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x111U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x111U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x112U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x112U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x112U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x113U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x113U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x113U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x114U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x114U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x114U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x115U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x115U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x115U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x116U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x116U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x116U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x117U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x117U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x117U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x118U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x118U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x118U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x119U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x119U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x119U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x11aU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x11aU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x11aU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x11bU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x11bU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x11bU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x11cU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x11cU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x11cU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x11dU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x11dU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x11dU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x11eU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x11eU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x11eU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x11fU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x11fU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x11fU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x120U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x120U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x120U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x121U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x121U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x121U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x122U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x122U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x122U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x123U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x123U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x123U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x124U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x124U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x124U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x125U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x125U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x125U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x126U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x126U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x126U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x127U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x127U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x127U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x128U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x128U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x128U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x129U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x129U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x129U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x12aU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x12aU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x12aU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x12bU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x12bU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x12bU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x12cU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x12cU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x12cU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x12dU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x12dU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x12dU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x12eU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x12eU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x12eU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x12fU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x12fU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x12fU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x130U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x130U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x130U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x131U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x131U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x131U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x132U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x132U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x132U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x133U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x133U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x133U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x134U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x134U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x134U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x135U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x135U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x135U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x136U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x136U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x136U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x137U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x137U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x137U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x138U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x138U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x138U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x139U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x139U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x139U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x13aU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x13aU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x13aU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x13bU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x13bU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x13bU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x13cU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x13cU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x13cU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x13dU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x13dU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x13dU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x13eU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x13eU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x13eU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x13fU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x13fU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x13fU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x140U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x140U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x140U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x141U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x141U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x141U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x142U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x142U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x142U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x143U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x143U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x143U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x144U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x144U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x144U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x145U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x145U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x145U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x146U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x146U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x146U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x147U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x147U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x147U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x148U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x148U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x148U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x149U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x149U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x149U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x14aU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x14aU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x14aU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x14bU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x14bU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x14bU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x14cU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x14cU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x14cU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x14dU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x14dU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x14dU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x14eU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x14eU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x14eU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x14fU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x14fU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x14fU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x150U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x150U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x150U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x151U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x151U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x151U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x152U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x152U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x152U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x153U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x153U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x153U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x154U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x154U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x154U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x155U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x155U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x155U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x156U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x156U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x156U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x157U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x157U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x157U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x158U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x158U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x158U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x159U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x159U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x159U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x15aU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x15aU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x15aU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x15bU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x15bU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x15bU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x15cU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x15cU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x15cU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x15dU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x15dU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x15dU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x15eU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x15eU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x15eU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x15fU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x15fU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x15fU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x160U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x160U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x160U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x161U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x161U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x161U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x162U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x162U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x162U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x163U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x163U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x163U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x164U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x164U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x164U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x165U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x165U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x165U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x166U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x166U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x166U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x167U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x167U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x167U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x168U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x168U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x168U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x169U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x169U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x169U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x16aU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x16aU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x16aU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x16bU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x16bU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x16bU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x16cU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x16cU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x16cU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x16dU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x16dU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x16dU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x16eU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x16eU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x16eU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x16fU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x16fU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x16fU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x170U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x170U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x170U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x171U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x171U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x171U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x172U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x172U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x172U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x173U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x173U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x173U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x174U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x174U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x174U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x175U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x175U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x175U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x176U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x176U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x176U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x177U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x177U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x177U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x178U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x178U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x178U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x179U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x179U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x179U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x17aU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x17aU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x17aU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x17bU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x17bU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x17bU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x17cU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x17cU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x17cU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x17dU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x17dU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x17dU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x17eU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x17eU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x17eU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x17fU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x17fU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x17fU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x180U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x180U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x180U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x181U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x181U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x181U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x182U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x182U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x182U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x183U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x183U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x183U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x184U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x184U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x184U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x185U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x185U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x185U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x186U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x186U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x186U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x187U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x187U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x187U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x188U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x188U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x188U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x189U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x189U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x189U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x18aU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x18aU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x18aU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x18bU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x18bU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x18bU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x18cU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x18cU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x18cU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x18dU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x18dU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x18dU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x18eU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x18eU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x18eU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x18fU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x18fU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x18fU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x190U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x190U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x190U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x191U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x191U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x191U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x192U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x192U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x192U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x193U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x193U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x193U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x194U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x194U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x194U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x195U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x195U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x195U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x196U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x196U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x196U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x197U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x197U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x197U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x198U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x198U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x198U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x199U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x199U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x199U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x19aU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x19aU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x19aU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x19bU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x19bU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x19bU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x19cU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x19cU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x19cU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x19dU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x19dU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x19dU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x19eU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x19eU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x19eU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x19fU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x19fU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x19fU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1a0U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1a0U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1a0U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1a1U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1a1U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1a1U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1a2U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1a2U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1a2U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1a3U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1a3U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1a3U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1a4U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1a4U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1a4U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1a5U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1a5U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1a5U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1a6U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1a6U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1a6U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1a7U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1a7U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1a7U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1a8U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1a8U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1a8U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1a9U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1a9U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1a9U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1aaU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1aaU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1aaU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1abU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1abU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1abU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1acU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1acU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1acU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1adU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1adU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1adU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1aeU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1aeU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1aeU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1afU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1afU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1afU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1b0U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1b0U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1b0U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1b1U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1b1U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1b1U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1b2U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1b2U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1b2U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1b3U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1b3U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1b3U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1b4U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1b4U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1b4U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1b5U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1b5U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1b5U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1b6U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1b6U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1b6U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1b7U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1b7U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1b7U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1b8U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1b8U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1b8U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1b9U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1b9U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1b9U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1baU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1baU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1baU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1bbU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1bbU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1bbU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1bcU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1bcU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1bcU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1bdU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1bdU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1bdU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1beU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1beU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1beU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1bfU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1bfU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1bfU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1c0U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1c0U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1c0U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1c1U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1c1U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1c1U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1c2U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1c2U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1c2U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1c3U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1c3U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1c3U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1c4U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1c4U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1c4U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1c5U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1c5U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1c5U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1c6U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1c6U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1c6U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1c7U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1c7U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1c7U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1c8U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1c8U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1c8U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1c9U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1c9U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1c9U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1caU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1caU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1caU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1cbU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1cbU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1cbU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1ccU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1ccU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1ccU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1cdU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1cdU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1cdU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1ceU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1ceU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1ceU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1cfU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1cfU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1cfU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1d0U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1d0U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1d0U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1d1U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1d1U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1d1U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1d2U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1d2U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1d2U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1d3U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1d3U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1d3U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1d4U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1d4U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1d4U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1d5U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1d5U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1d5U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1d6U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1d6U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1d6U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1d7U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1d7U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1d7U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1d8U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1d8U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1d8U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1d9U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1d9U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1d9U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1daU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1daU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1daU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1dbU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1dbU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1dbU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1dcU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1dcU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1dcU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1ddU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1ddU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1ddU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1deU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1deU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1deU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1dfU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1dfU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1dfU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1e0U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1e0U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1e0U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1e1U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1e1U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1e1U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1e2U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1e2U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1e2U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1e3U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1e3U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1e3U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1e4U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1e4U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1e4U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1e5U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1e5U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1e5U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1e6U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1e6U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1e6U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1e7U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1e7U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1e7U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1e8U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1e8U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1e8U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1e9U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1e9U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1e9U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1eaU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1eaU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1eaU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1ebU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1ebU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1ebU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1ecU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1ecU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1ecU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1edU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1edU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1edU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1eeU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1eeU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1eeU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1efU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1efU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1efU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1f0U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1f0U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1f0U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1f1U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1f1U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1f1U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1f2U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1f2U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1f2U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1f3U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1f3U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1f3U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1f4U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1f4U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1f4U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1f5U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1f5U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1f5U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1f6U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1f6U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1f6U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1f7U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1f7U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1f7U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1f8U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1f8U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1f8U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1f9U] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1f9U] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1f9U]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1faU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1faU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1faU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1fbU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1fbU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1fbU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1fcU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1fcU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1fcU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1fdU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1fdU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1fdU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1feU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1feU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1feU]));
    vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s[0x1ffU] 
        = (3U & (vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend1
                 [0x1ffU] + vlSelfRef.g_adder_stg__BRA__0__KET____DOT__addend2
                 [0x1ffU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[1U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [1U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[1U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [1U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[2U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [2U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[2U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [2U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[3U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [3U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[3U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [3U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[4U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [4U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[4U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [4U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[5U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [5U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[5U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [5U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[6U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [6U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[6U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [6U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[7U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [7U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[7U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [7U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[8U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [8U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[8U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [8U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[9U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [9U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[9U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [9U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xaU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xaU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xaU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xaU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xbU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xbU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xbU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xbU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xcU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xcU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xcU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xcU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xdU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xdU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xdU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xdU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xeU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xeU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xeU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xeU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xfU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xfU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xfU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xfU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x10U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x10U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x10U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x10U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x11U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x11U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x11U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x11U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x12U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x12U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x12U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x12U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x13U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x13U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x13U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x13U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x14U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x14U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x14U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x14U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x15U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x15U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x15U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x15U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x16U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x16U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x16U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x16U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x17U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x17U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x17U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x17U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x18U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x18U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x18U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x18U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x19U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x19U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x19U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x19U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x1aU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x1aU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x1aU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x1aU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x1bU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x1bU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x1bU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x1bU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x1cU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x1cU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x1cU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x1cU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x1dU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x1dU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x1dU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x1dU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x1eU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x1eU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x1eU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x1eU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x1fU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x1fU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x1fU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x1fU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x20U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x20U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x20U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x20U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x21U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x21U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x21U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x21U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x22U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x22U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x22U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x22U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x23U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x23U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x23U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x23U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x24U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x24U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x24U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x24U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x25U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x25U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x25U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x25U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x26U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x26U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x26U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x26U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x27U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x27U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x27U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x27U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x28U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x28U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x28U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x28U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x29U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x29U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x29U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x29U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x2aU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x2aU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x2aU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x2aU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x2bU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x2bU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x2bU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x2bU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x2cU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x2cU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x2cU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x2cU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x2dU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x2dU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x2dU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x2dU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x2eU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x2eU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x2eU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x2eU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x2fU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x2fU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x2fU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x2fU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x30U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x30U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x30U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x30U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x31U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x31U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x31U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x31U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x32U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x32U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x32U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x32U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x33U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x33U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x33U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x33U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x34U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x34U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x34U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x34U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x35U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x35U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x35U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x35U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x36U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x36U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x36U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x36U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x37U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x37U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x37U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x37U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x38U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x38U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x38U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x38U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x39U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x39U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x39U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x39U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x3aU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x3aU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x3aU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x3aU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x3bU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x3bU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x3bU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x3bU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x3cU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x3cU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x3cU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x3cU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x3dU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x3dU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x3dU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x3dU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x3eU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x3eU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x3eU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x3eU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x3fU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x3fU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x3fU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x3fU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x40U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x40U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x40U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x40U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x41U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x41U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x41U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x41U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x42U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x42U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x42U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x42U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x43U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x43U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x43U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x43U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x44U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x44U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x44U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x44U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x45U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x45U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x45U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x45U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x46U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x46U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x46U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x46U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x47U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x47U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x47U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x47U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x48U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x48U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x48U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x48U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x49U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x49U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x49U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x49U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x4aU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x4aU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x4aU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x4aU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x4bU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x4bU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x4bU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x4bU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x4cU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x4cU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x4cU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x4cU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x4dU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x4dU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x4dU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x4dU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x4eU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x4eU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x4eU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x4eU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x4fU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x4fU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x4fU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x4fU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x50U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x50U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x50U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x50U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x51U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x51U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x51U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x51U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x52U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x52U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x52U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x52U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x53U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x53U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x53U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x53U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x54U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x54U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x54U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x54U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x55U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x55U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x55U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x55U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x56U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x56U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x56U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x56U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x57U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x57U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x57U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x57U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x58U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x58U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x58U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x58U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x59U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x59U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x59U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x59U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x5aU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x5aU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x5aU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x5aU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x5bU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x5bU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x5bU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x5bU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x5cU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x5cU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x5cU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x5cU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x5dU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x5dU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x5dU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x5dU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x5eU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x5eU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x5eU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x5eU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x5fU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x5fU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x5fU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x5fU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x60U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x60U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x60U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x60U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x61U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x61U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x61U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x61U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x62U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x62U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x62U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x62U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x63U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x63U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x63U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x63U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x64U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x64U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x64U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x64U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x65U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x65U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x65U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x65U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x66U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x66U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x66U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x66U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x67U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x67U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x67U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x67U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x68U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x68U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x68U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x68U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x69U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x69U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x69U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x69U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x6aU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x6aU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x6aU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x6aU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x6bU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x6bU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x6bU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x6bU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x6cU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x6cU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x6cU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x6cU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x6dU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x6dU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x6dU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x6dU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x6eU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x6eU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x6eU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x6eU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x6fU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x6fU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x6fU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x6fU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x70U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x70U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x70U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x70U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x71U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x71U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x71U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x71U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x72U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x72U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x72U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x72U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x73U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x73U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x73U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x73U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x74U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x74U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x74U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x74U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x75U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x75U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x75U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x75U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x76U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x76U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x76U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x76U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x77U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x77U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x77U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x77U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x78U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x78U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x78U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x78U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x79U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x79U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x79U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x79U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x7aU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x7aU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x7aU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x7aU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x7bU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x7bU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x7bU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x7bU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x7cU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x7cU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x7cU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x7cU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x7dU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x7dU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x7dU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x7dU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x7eU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x7eU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x7eU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x7eU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x7fU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x7fU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x7fU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x7fU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x80U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x80U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x80U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x80U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x81U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x81U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x81U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x81U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x82U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x82U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x82U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x82U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x83U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x83U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x83U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x83U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x84U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x84U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x84U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x84U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x85U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x85U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x85U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x85U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x86U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x86U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x86U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x86U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x87U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x87U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x87U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x87U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x88U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x88U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x88U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x88U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x89U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x89U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x89U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x89U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x8aU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x8aU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x8aU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x8aU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x8bU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x8bU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x8bU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x8bU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x8cU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x8cU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x8cU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x8cU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x8dU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x8dU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x8dU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x8dU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x8eU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x8eU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x8eU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x8eU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x8fU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x8fU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x8fU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x8fU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x90U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x90U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x90U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x90U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x91U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x91U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x91U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x91U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x92U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x92U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x92U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x92U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x93U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x93U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x93U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x93U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x94U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x94U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x94U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x94U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x95U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x95U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x95U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x95U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x96U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x96U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x96U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x96U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x97U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x97U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x97U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x97U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x98U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x98U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x98U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x98U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x99U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x99U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x99U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x99U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x9aU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x9aU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x9aU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x9aU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x9bU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x9bU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x9bU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x9bU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x9cU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x9cU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x9cU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x9cU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x9dU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x9dU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x9dU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x9dU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x9eU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x9eU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x9eU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x9eU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0x9fU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x9fU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0x9fU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0x9fU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xa0U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xa0U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xa0U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xa0U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xa1U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xa1U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xa1U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xa1U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xa2U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xa2U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xa2U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xa2U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xa3U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xa3U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xa3U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xa3U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xa4U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xa4U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xa4U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xa4U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xa5U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xa5U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xa5U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xa5U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xa6U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xa6U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xa6U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xa6U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xa7U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xa7U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xa7U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xa7U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xa8U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xa8U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xa8U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xa8U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xa9U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xa9U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xa9U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xa9U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xaaU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xaaU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xaaU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xaaU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xabU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xabU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xabU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xabU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xacU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xacU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xacU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xacU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xadU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xadU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xadU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xadU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xaeU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xaeU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xaeU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xaeU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xafU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xafU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xafU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xafU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xb0U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xb0U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xb0U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xb0U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xb1U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xb1U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xb1U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xb1U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xb2U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xb2U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xb2U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xb2U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xb3U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xb3U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xb3U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xb3U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xb4U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xb4U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xb4U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xb4U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xb5U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xb5U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xb5U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xb5U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xb6U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xb6U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xb6U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xb6U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xb7U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xb7U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xb7U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xb7U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xb8U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xb8U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xb8U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xb8U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xb9U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xb9U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xb9U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xb9U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xbaU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xbaU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xbaU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xbaU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xbbU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xbbU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xbbU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xbbU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xbcU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xbcU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xbcU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xbcU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xbdU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xbdU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xbdU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xbdU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xbeU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xbeU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xbeU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xbeU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xbfU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xbfU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xbfU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xbfU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xc0U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xc0U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xc0U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xc0U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xc1U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xc1U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xc1U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xc1U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xc2U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xc2U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xc2U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xc2U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xc3U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xc3U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xc3U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xc3U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xc4U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xc4U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xc4U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xc4U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xc5U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xc5U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xc5U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xc5U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xc6U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xc6U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xc6U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xc6U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xc7U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xc7U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xc7U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xc7U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xc8U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xc8U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xc8U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xc8U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xc9U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xc9U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xc9U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xc9U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xcaU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xcaU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xcaU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xcaU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xcbU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xcbU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xcbU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xcbU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xccU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xccU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xccU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xccU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xcdU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xcdU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xcdU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xcdU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xceU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xceU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xceU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xceU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xcfU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xcfU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xcfU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xcfU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xd0U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xd0U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xd0U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xd0U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xd1U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xd1U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xd1U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xd1U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xd2U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xd2U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xd2U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xd2U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xd3U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xd3U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xd3U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xd3U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xd4U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xd4U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xd4U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xd4U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xd5U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xd5U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xd5U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xd5U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xd6U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xd6U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xd6U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xd6U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xd7U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xd7U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xd7U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xd7U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xd8U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xd8U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xd8U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xd8U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xd9U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xd9U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xd9U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xd9U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xdaU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xdaU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xdaU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xdaU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xdbU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xdbU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xdbU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xdbU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xdcU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xdcU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xdcU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xdcU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xddU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xddU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xddU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xddU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xdeU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xdeU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xdeU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xdeU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xdfU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xdfU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xdfU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xdfU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xe0U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xe0U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xe0U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xe0U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xe1U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xe1U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xe1U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xe1U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xe2U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xe2U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xe2U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xe2U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xe3U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xe3U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xe3U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xe3U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xe4U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xe4U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xe4U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xe4U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xe5U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xe5U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xe5U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xe5U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xe6U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xe6U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xe6U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xe6U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xe7U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xe7U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xe7U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xe7U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xe8U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xe8U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xe8U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xe8U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xe9U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xe9U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xe9U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xe9U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xeaU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xeaU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xeaU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xeaU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xebU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xebU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xebU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xebU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xecU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xecU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xecU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xecU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xedU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xedU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xedU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xedU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xeeU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xeeU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xeeU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xeeU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xefU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xefU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xefU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xefU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xf0U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xf0U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xf0U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xf0U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xf1U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xf1U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xf1U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xf1U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xf2U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xf2U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xf2U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xf2U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xf3U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xf3U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xf3U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xf3U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xf4U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xf4U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xf4U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xf4U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xf5U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xf5U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xf5U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xf5U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xf6U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xf6U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xf6U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xf6U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xf7U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xf7U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xf7U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xf7U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xf8U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xf8U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xf8U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xf8U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xf9U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xf9U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xf9U] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xf9U];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xfaU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xfaU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xfaU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xfaU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xfbU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xfbU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xfbU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xfbU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xfcU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xfcU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xfcU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xfcU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xfdU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xfdU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xfdU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xfdU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xfeU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xfeU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xfeU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xfeU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1[0xffU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xffU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2[0xffU] 
        = vlSelfRef.g_adder_stg__BRA__0__KET____DOT__sum_s
        [0xffU];
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[1U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [1U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [1U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[2U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [2U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [2U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[3U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [3U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [3U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[4U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [4U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [4U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[5U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [5U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [5U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[6U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [6U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [6U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[7U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [7U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [7U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[8U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [8U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [8U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[9U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [9U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [9U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0xaU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0xaU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0xaU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0xbU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0xbU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0xbU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0xcU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0xcU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0xcU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0xdU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0xdU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0xdU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0xeU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0xeU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0xeU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0xfU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0xfU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0xfU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x10U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x10U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x10U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x11U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x11U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x11U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x12U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x12U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x12U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x13U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x13U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x13U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x14U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x14U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x14U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x15U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x15U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x15U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x16U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x16U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x16U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x17U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x17U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x17U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x18U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x18U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x18U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x19U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x19U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x19U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x1aU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x1aU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x1aU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x1bU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x1bU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x1bU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x1cU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x1cU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x1cU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x1dU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x1dU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x1dU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x1eU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x1eU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x1eU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x1fU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x1fU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x1fU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x20U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x20U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x20U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x21U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x21U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x21U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x22U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x22U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x22U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x23U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x23U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x23U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x24U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x24U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x24U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x25U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x25U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x25U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x26U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x26U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x26U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x27U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x27U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x27U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x28U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x28U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x28U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x29U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x29U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x29U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x2aU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x2aU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x2aU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x2bU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x2bU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x2bU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x2cU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x2cU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x2cU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x2dU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x2dU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x2dU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x2eU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x2eU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x2eU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x2fU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x2fU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x2fU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x30U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x30U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x30U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x31U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x31U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x31U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x32U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x32U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x32U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x33U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x33U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x33U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x34U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x34U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x34U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x35U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x35U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x35U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x36U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x36U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x36U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x37U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x37U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x37U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x38U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x38U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x38U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x39U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x39U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x39U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x3aU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x3aU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x3aU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x3bU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x3bU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x3bU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x3cU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x3cU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x3cU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x3dU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x3dU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x3dU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x3eU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x3eU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x3eU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x3fU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x3fU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x3fU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x40U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x40U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x40U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x41U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x41U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x41U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x42U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x42U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x42U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x43U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x43U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x43U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x44U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x44U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x44U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x45U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x45U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x45U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x46U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x46U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x46U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x47U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x47U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x47U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x48U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x48U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x48U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x49U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x49U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x49U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x4aU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x4aU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x4aU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x4bU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x4bU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x4bU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x4cU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x4cU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x4cU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x4dU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x4dU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x4dU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x4eU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x4eU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x4eU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x4fU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x4fU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x4fU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x50U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x50U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x50U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x51U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x51U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x51U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x52U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x52U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x52U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x53U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x53U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x53U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x54U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x54U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x54U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x55U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x55U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x55U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x56U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x56U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x56U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x57U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x57U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x57U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x58U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x58U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x58U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x59U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x59U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x59U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x5aU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x5aU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x5aU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x5bU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x5bU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x5bU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x5cU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x5cU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x5cU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x5dU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x5dU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x5dU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x5eU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x5eU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x5eU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x5fU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x5fU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x5fU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x60U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x60U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x60U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x61U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x61U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x61U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x62U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x62U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x62U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x63U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x63U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x63U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x64U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x64U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x64U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x65U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x65U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x65U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x66U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x66U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x66U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x67U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x67U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x67U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x68U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x68U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x68U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x69U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x69U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x69U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x6aU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x6aU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x6aU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x6bU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x6bU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x6bU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x6cU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x6cU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x6cU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x6dU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x6dU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x6dU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x6eU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x6eU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x6eU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x6fU] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x6fU] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x6fU]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x70U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x70U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x70U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x71U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x71U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x71U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x72U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x72U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x72U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x73U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x73U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x73U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x74U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x74U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x74U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x75U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x75U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x75U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x76U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x76U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x76U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x77U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x77U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x77U]));
    vlSelfRef.g_adder_stg__BRA__1__KET____DOT__sum_s[0x78U] 
        = (7U & (vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend1
                 [0x78U] + vlSelfRef.g_adder_stg__BRA__1__KET____DOT__addend2
                 [0x78U]));
}
