// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_SIMILARITY_H_
#define VERILATED_VTOP_SIMILARITY_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_similarity final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*0:0*/ ff_simi__DOT__clk;
    VL_OUT16(simi,10,0);
    SData/*10:0*/ ff_simi__DOT__data;
    SData/*10:0*/ ff_simi__DOT__qout;
    VL_INW(a,1023,0,32);
    VL_INW(b,1023,0,32);
    VlWide<32>/*1023:0*/ xor_ab;
    VlUnpacked<CData/*0:0*/, 512> g_adder_stg__BRA__0__KET____DOT__addend1;
    VlUnpacked<CData/*0:0*/, 512> g_adder_stg__BRA__0__KET____DOT__addend2;
    VlUnpacked<CData/*1:0*/, 512> g_adder_stg__BRA__0__KET____DOT__sum_s;
    VlUnpacked<CData/*1:0*/, 256> g_adder_stg__BRA__1__KET____DOT__addend1;
    VlUnpacked<CData/*1:0*/, 256> g_adder_stg__BRA__1__KET____DOT__addend2;
    VlUnpacked<CData/*2:0*/, 256> g_adder_stg__BRA__1__KET____DOT__sum_s;
    VlUnpacked<CData/*2:0*/, 128> g_adder_stg__BRA__2__KET____DOT__addend1;
    VlUnpacked<CData/*2:0*/, 128> g_adder_stg__BRA__2__KET____DOT__addend2;
    VlUnpacked<CData/*3:0*/, 128> g_adder_stg__BRA__2__KET____DOT__sum_s;
    VlUnpacked<CData/*3:0*/, 64> g_adder_stg__BRA__3__KET____DOT__addend1;
    VlUnpacked<CData/*3:0*/, 64> g_adder_stg__BRA__3__KET____DOT__addend2;
    VlUnpacked<CData/*4:0*/, 64> g_adder_stg__BRA__3__KET____DOT__sum_s;
    VlUnpacked<CData/*4:0*/, 32> g_adder_stg__BRA__4__KET____DOT__addend1;
    VlUnpacked<CData/*4:0*/, 32> g_adder_stg__BRA__4__KET____DOT__addend2;
    VlUnpacked<CData/*5:0*/, 32> g_adder_stg__BRA__4__KET____DOT__sum_s;
    VlUnpacked<CData/*5:0*/, 16> g_adder_stg__BRA__5__KET____DOT__addend1;
    VlUnpacked<CData/*5:0*/, 16> g_adder_stg__BRA__5__KET____DOT__addend2;
    VlUnpacked<CData/*6:0*/, 16> g_adder_stg__BRA__5__KET____DOT__sum_s;
    VlUnpacked<CData/*6:0*/, 8> g_adder_stg__BRA__6__KET____DOT__addend1;
    VlUnpacked<CData/*6:0*/, 8> g_adder_stg__BRA__6__KET____DOT__addend2;
    VlUnpacked<CData/*7:0*/, 8> g_adder_stg__BRA__6__KET____DOT__sum_s;
    VlUnpacked<CData/*7:0*/, 4> g_adder_stg__BRA__7__KET____DOT__addend1;
    VlUnpacked<CData/*7:0*/, 4> g_adder_stg__BRA__7__KET____DOT__addend2;
    VlUnpacked<SData/*8:0*/, 4> g_adder_stg__BRA__7__KET____DOT__sum_s;
    VlUnpacked<SData/*8:0*/, 2> g_adder_stg__BRA__8__KET____DOT__addend1;
    VlUnpacked<SData/*8:0*/, 2> g_adder_stg__BRA__8__KET____DOT__addend2;
    VlUnpacked<SData/*9:0*/, 2> g_adder_stg__BRA__8__KET____DOT__sum_s;
    VlUnpacked<SData/*9:0*/, 1> g_adder_stg__BRA__9__KET____DOT__addend1;
    VlUnpacked<SData/*9:0*/, 1> g_adder_stg__BRA__9__KET____DOT__addend2;
    VlUnpacked<SData/*10:0*/, 1> g_adder_stg__BRA__9__KET____DOT__sum_s;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ ADDER_LENGTH = 0x0000000aU;
    static constexpr IData/*31:0*/ ff_simi__DOT__DW = 0x0000000bU;

    // CONSTRUCTORS
    Vtop_similarity(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_similarity();
    VL_UNCOPYABLE(Vtop_similarity);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
