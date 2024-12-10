// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_TOP;
    VerilatedScope __Vscope_rchdc;
    VerilatedScope __Vscope_rchdc__g_class__BRA__0__KET__;
    VerilatedScope __Vscope_rchdc__g_class__BRA__0__KET____simi;
    VerilatedScope __Vscope_rchdc__g_class__BRA__0__KET____simi__ff_simi;
    VerilatedScope __Vscope_rchdc__g_class__BRA__0__KET____simi__g_adder_stg__BRA__0__KET__;
    VerilatedScope __Vscope_rchdc__g_class__BRA__0__KET____simi__g_adder_stg__BRA__1__KET__;
    VerilatedScope __Vscope_rchdc__g_class__BRA__0__KET____simi__g_adder_stg__BRA__2__KET__;
    VerilatedScope __Vscope_rchdc__g_class__BRA__0__KET____simi__g_adder_stg__BRA__3__KET__;
    VerilatedScope __Vscope_rchdc__g_class__BRA__1__KET__;
    VerilatedScope __Vscope_rchdc__g_class__BRA__1__KET____simi;
    VerilatedScope __Vscope_rchdc__g_class__BRA__1__KET____simi__ff_simi;
    VerilatedScope __Vscope_rchdc__g_class__BRA__1__KET____simi__g_adder_stg__BRA__0__KET__;
    VerilatedScope __Vscope_rchdc__g_class__BRA__1__KET____simi__g_adder_stg__BRA__1__KET__;
    VerilatedScope __Vscope_rchdc__g_class__BRA__1__KET____simi__g_adder_stg__BRA__2__KET__;
    VerilatedScope __Vscope_rchdc__g_class__BRA__1__KET____simi__g_adder_stg__BRA__3__KET__;
    VerilatedScope __Vscope_rchdc__spatio_enc;
    VerilatedScope __Vscope_rchdc__spatio_enc__elemCnt;
    VerilatedScope __Vscope_rchdc__spatio_enc__g_sample__BRA__0__KET__;
    VerilatedScope __Vscope_rchdc__spatio_enc__g_sample__BRA__0__KET____bitAcc;
    VerilatedScope __Vscope_rchdc__spatio_enc__g_sample__BRA__10__KET__;
    VerilatedScope __Vscope_rchdc__spatio_enc__g_sample__BRA__10__KET____bitAcc;
    VerilatedScope __Vscope_rchdc__spatio_enc__g_sample__BRA__11__KET__;
    VerilatedScope __Vscope_rchdc__spatio_enc__g_sample__BRA__11__KET____bitAcc;
    VerilatedScope __Vscope_rchdc__spatio_enc__g_sample__BRA__12__KET__;
    VerilatedScope __Vscope_rchdc__spatio_enc__g_sample__BRA__12__KET____bitAcc;
    VerilatedScope __Vscope_rchdc__spatio_enc__g_sample__BRA__13__KET__;
    VerilatedScope __Vscope_rchdc__spatio_enc__g_sample__BRA__13__KET____bitAcc;
    VerilatedScope __Vscope_rchdc__spatio_enc__g_sample__BRA__14__KET__;
    VerilatedScope __Vscope_rchdc__spatio_enc__g_sample__BRA__14__KET____bitAcc;
    VerilatedScope __Vscope_rchdc__spatio_enc__g_sample__BRA__15__KET__;
    VerilatedScope __Vscope_rchdc__spatio_enc__g_sample__BRA__15__KET____bitAcc;
    VerilatedScope __Vscope_rchdc__spatio_enc__g_sample__BRA__1__KET__;
    VerilatedScope __Vscope_rchdc__spatio_enc__g_sample__BRA__1__KET____bitAcc;
    VerilatedScope __Vscope_rchdc__spatio_enc__g_sample__BRA__2__KET__;
    VerilatedScope __Vscope_rchdc__spatio_enc__g_sample__BRA__2__KET____bitAcc;
    VerilatedScope __Vscope_rchdc__spatio_enc__g_sample__BRA__3__KET__;
    VerilatedScope __Vscope_rchdc__spatio_enc__g_sample__BRA__3__KET____bitAcc;
    VerilatedScope __Vscope_rchdc__spatio_enc__g_sample__BRA__4__KET__;
    VerilatedScope __Vscope_rchdc__spatio_enc__g_sample__BRA__4__KET____bitAcc;
    VerilatedScope __Vscope_rchdc__spatio_enc__g_sample__BRA__5__KET__;
    VerilatedScope __Vscope_rchdc__spatio_enc__g_sample__BRA__5__KET____bitAcc;
    VerilatedScope __Vscope_rchdc__spatio_enc__g_sample__BRA__6__KET__;
    VerilatedScope __Vscope_rchdc__spatio_enc__g_sample__BRA__6__KET____bitAcc;
    VerilatedScope __Vscope_rchdc__spatio_enc__g_sample__BRA__7__KET__;
    VerilatedScope __Vscope_rchdc__spatio_enc__g_sample__BRA__7__KET____bitAcc;
    VerilatedScope __Vscope_rchdc__spatio_enc__g_sample__BRA__8__KET__;
    VerilatedScope __Vscope_rchdc__spatio_enc__g_sample__BRA__8__KET____bitAcc;
    VerilatedScope __Vscope_rchdc__spatio_enc__g_sample__BRA__9__KET__;
    VerilatedScope __Vscope_rchdc__spatio_enc__g_sample__BRA__9__KET____bitAcc;
    VerilatedScope __Vscope_rchdc__tempo_enc;
    VerilatedScope __Vscope_rchdc__tempo_enc__elemCnt;
    VerilatedScope __Vscope_rchdc__tempo_enc__g_sample__BRA__0__KET__;
    VerilatedScope __Vscope_rchdc__tempo_enc__g_sample__BRA__0__KET____bitAcc;
    VerilatedScope __Vscope_rchdc__tempo_enc__g_sample__BRA__10__KET__;
    VerilatedScope __Vscope_rchdc__tempo_enc__g_sample__BRA__10__KET____bitAcc;
    VerilatedScope __Vscope_rchdc__tempo_enc__g_sample__BRA__11__KET__;
    VerilatedScope __Vscope_rchdc__tempo_enc__g_sample__BRA__11__KET____bitAcc;
    VerilatedScope __Vscope_rchdc__tempo_enc__g_sample__BRA__12__KET__;
    VerilatedScope __Vscope_rchdc__tempo_enc__g_sample__BRA__12__KET____bitAcc;
    VerilatedScope __Vscope_rchdc__tempo_enc__g_sample__BRA__13__KET__;
    VerilatedScope __Vscope_rchdc__tempo_enc__g_sample__BRA__13__KET____bitAcc;
    VerilatedScope __Vscope_rchdc__tempo_enc__g_sample__BRA__14__KET__;
    VerilatedScope __Vscope_rchdc__tempo_enc__g_sample__BRA__14__KET____bitAcc;
    VerilatedScope __Vscope_rchdc__tempo_enc__g_sample__BRA__15__KET__;
    VerilatedScope __Vscope_rchdc__tempo_enc__g_sample__BRA__15__KET____bitAcc;
    VerilatedScope __Vscope_rchdc__tempo_enc__g_sample__BRA__1__KET__;
    VerilatedScope __Vscope_rchdc__tempo_enc__g_sample__BRA__1__KET____bitAcc;
    VerilatedScope __Vscope_rchdc__tempo_enc__g_sample__BRA__2__KET__;
    VerilatedScope __Vscope_rchdc__tempo_enc__g_sample__BRA__2__KET____bitAcc;
    VerilatedScope __Vscope_rchdc__tempo_enc__g_sample__BRA__3__KET__;
    VerilatedScope __Vscope_rchdc__tempo_enc__g_sample__BRA__3__KET____bitAcc;
    VerilatedScope __Vscope_rchdc__tempo_enc__g_sample__BRA__4__KET__;
    VerilatedScope __Vscope_rchdc__tempo_enc__g_sample__BRA__4__KET____bitAcc;
    VerilatedScope __Vscope_rchdc__tempo_enc__g_sample__BRA__5__KET__;
    VerilatedScope __Vscope_rchdc__tempo_enc__g_sample__BRA__5__KET____bitAcc;
    VerilatedScope __Vscope_rchdc__tempo_enc__g_sample__BRA__6__KET__;
    VerilatedScope __Vscope_rchdc__tempo_enc__g_sample__BRA__6__KET____bitAcc;
    VerilatedScope __Vscope_rchdc__tempo_enc__g_sample__BRA__7__KET__;
    VerilatedScope __Vscope_rchdc__tempo_enc__g_sample__BRA__7__KET____bitAcc;
    VerilatedScope __Vscope_rchdc__tempo_enc__g_sample__BRA__8__KET__;
    VerilatedScope __Vscope_rchdc__tempo_enc__g_sample__BRA__8__KET____bitAcc;
    VerilatedScope __Vscope_rchdc__tempo_enc__g_sample__BRA__9__KET__;
    VerilatedScope __Vscope_rchdc__tempo_enc__g_sample__BRA__9__KET____bitAcc;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
