// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_similarity.h"

// Parameter definitions for Vtop_similarity
constexpr IData/*31:0*/ Vtop_similarity::ADDER_LENGTH;
constexpr IData/*31:0*/ Vtop_similarity::ff_simi__DOT__DW;


void Vtop_similarity___ctor_var_reset(Vtop_similarity* vlSelf);

Vtop_similarity::Vtop_similarity(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_similarity___ctor_var_reset(this);
}

void Vtop_similarity::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_similarity::~Vtop_similarity() {
}
