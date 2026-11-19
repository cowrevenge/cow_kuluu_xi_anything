/* f_0x10108b50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10108b50(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_138;
    uint32_t loc_13c;
    uint32_t loc_140;
    uint32_t loc_144;
    uint32_t loc_148;
    uint32_t loc_150;
    uint32_t loc_154;
    uint32_t loc_158;
    uint32_t loc_15c;
    uint32_t loc_160;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 372u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10108b7bu: in_eax = g->eax; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x160u); in_esi = rd32(sp0 - 0x15cu); in_ebp = rd32(sp0 - 0x158u); self = rd32(sp0 - 0x140u); g->ebp = rd32(sp0 - 0x158u); g->edi = rd32(sp0 - 0x160u); g->esi = rd32(sp0 - 0x15cu); goto E_10108b7b;
    case 0x10108b7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_148 = rd32(sp0 - 0x148u); goto E_10108b7d;
    case 0x10108b81u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); loc_154 = rd32(sp0 - 0x154u); loc_150 = rd32(sp0 - 0x150u); loc_148 = rd32(sp0 - 0x148u); loc_140 = rd32(sp0 - 0x140u); goto E_10108b81;
    case 0x10108b8au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); loc_154 = rd32(sp0 - 0x154u); loc_150 = rd32(sp0 - 0x150u); loc_148 = rd32(sp0 - 0x148u); loc_140 = rd32(sp0 - 0x140u); goto E_10108b8a;
    case 0x10108b9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); loc_154 = rd32(sp0 - 0x154u); loc_150 = rd32(sp0 - 0x150u); loc_148 = rd32(sp0 - 0x148u); loc_140 = rd32(sp0 - 0x140u); goto E_10108b9b;
    case 0x10108bbfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); loc_154 = rd32(sp0 - 0x154u); loc_150 = rd32(sp0 - 0x150u); loc_148 = rd32(sp0 - 0x148u); loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_13c = rd32(sp0 - 0x13cu); loc_138 = rd32(sp0 - 0x138u); goto E_10108bbf;
    case 0x10108bc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); loc_154 = rd32(sp0 - 0x154u); loc_150 = rd32(sp0 - 0x150u); loc_148 = rd32(sp0 - 0x148u); loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_13c = rd32(sp0 - 0x13cu); loc_138 = rd32(sp0 - 0x138u); goto E_10108bc1;
    case 0x10108bd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); loc_154 = rd32(sp0 - 0x154u); loc_150 = rd32(sp0 - 0x150u); loc_148 = rd32(sp0 - 0x148u); loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_13c = rd32(sp0 - 0x13cu); loc_138 = rd32(sp0 - 0x138u); goto E_10108bd7;
    case 0x10108c0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10108c0b;
    case 0x10108c0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10108c0d;
    case 0x10108c13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10108c13;
    case 0x10108c14u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10108c14;
    case 0x10108c3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); loc_154 = rd32(sp0 - 0x154u); loc_150 = rd32(sp0 - 0x150u); loc_148 = rd32(sp0 - 0x148u); loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_13c = rd32(sp0 - 0x13cu); loc_138 = rd32(sp0 - 0x138u); goto E_10108c3b;
    case 0x10108c55u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); loc_154 = rd32(sp0 - 0x154u); loc_150 = rd32(sp0 - 0x150u); loc_148 = rd32(sp0 - 0x148u); loc_144 = rd32(sp0 - 0x144u); loc_140 = rd32(sp0 - 0x140u); loc_13c = rd32(sp0 - 0x13cu); loc_138 = rd32(sp0 - 0x138u); goto E_10108c55;
    case 0x10108c6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_148 = rd32(sp0 - 0x148u); goto E_10108c6b;
    case 0x10108c6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); loc_154 = rd32(sp0 - 0x154u); loc_150 = rd32(sp0 - 0x150u); loc_148 = rd32(sp0 - 0x148u); loc_140 = rd32(sp0 - 0x140u); goto E_10108c6f;
    case 0x10108c80u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); loc_154 = rd32(sp0 - 0x154u); loc_150 = rd32(sp0 - 0x150u); loc_148 = rd32(sp0 - 0x148u); loc_140 = rd32(sp0 - 0x140u); goto E_10108c80;
    case 0x10108c82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10108c82;
    case 0x10108c86u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); loc_154 = rd32(sp0 - 0x154u); loc_150 = rd32(sp0 - 0x150u); loc_148 = rd32(sp0 - 0x148u); loc_140 = rd32(sp0 - 0x140u); goto E_10108c86;
    case 0x10108c92u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); loc_154 = rd32(sp0 - 0x154u); loc_150 = rd32(sp0 - 0x150u); loc_148 = rd32(sp0 - 0x148u); loc_140 = rd32(sp0 - 0x140u); goto E_10108c92;
    case 0x10108c97u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); loc_154 = rd32(sp0 - 0x154u); loc_150 = rd32(sp0 - 0x150u); loc_148 = rd32(sp0 - 0x148u); loc_140 = rd32(sp0 - 0x140u); goto E_10108c97;
    case 0x10108cd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); loc_154 = rd32(sp0 - 0x154u); loc_150 = rd32(sp0 - 0x150u); loc_148 = rd32(sp0 - 0x148u); loc_140 = rd32(sp0 - 0x140u); goto E_10108cd0;
    case 0x10108ce1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); loc_154 = rd32(sp0 - 0x154u); loc_150 = rd32(sp0 - 0x150u); loc_148 = rd32(sp0 - 0x148u); loc_140 = rd32(sp0 - 0x140u); goto E_10108ce1;
    case 0x10108ce6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); loc_154 = rd32(sp0 - 0x154u); loc_150 = rd32(sp0 - 0x150u); loc_148 = rd32(sp0 - 0x148u); loc_140 = rd32(sp0 - 0x140u); goto E_10108ce6;
    case 0x10108ce8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); loc_154 = rd32(sp0 - 0x154u); loc_150 = rd32(sp0 - 0x150u); loc_148 = rd32(sp0 - 0x148u); loc_140 = rd32(sp0 - 0x140u); goto E_10108ce8;
    case 0x10108cecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); loc_154 = rd32(sp0 - 0x154u); loc_150 = rd32(sp0 - 0x150u); loc_148 = rd32(sp0 - 0x148u); loc_140 = rd32(sp0 - 0x140u); goto E_10108cec;
    case 0x10108cf3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); loc_154 = rd32(sp0 - 0x154u); loc_150 = rd32(sp0 - 0x150u); loc_148 = rd32(sp0 - 0x148u); loc_140 = rd32(sp0 - 0x140u); goto E_10108cf3;
    case 0x10108cf8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); loc_154 = rd32(sp0 - 0x154u); loc_150 = rd32(sp0 - 0x150u); loc_148 = rd32(sp0 - 0x148u); loc_140 = rd32(sp0 - 0x140u); goto E_10108cf8;
    case 0x10108cfau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); loc_154 = rd32(sp0 - 0x154u); loc_150 = rd32(sp0 - 0x150u); loc_148 = rd32(sp0 - 0x148u); loc_140 = rd32(sp0 - 0x140u); goto E_10108cfa;
    case 0x10108cfeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); loc_154 = rd32(sp0 - 0x154u); loc_150 = rd32(sp0 - 0x150u); loc_148 = rd32(sp0 - 0x148u); loc_140 = rd32(sp0 - 0x140u); goto E_10108cfe;
    case 0x10108d03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); loc_154 = rd32(sp0 - 0x154u); loc_150 = rd32(sp0 - 0x150u); loc_148 = rd32(sp0 - 0x148u); loc_140 = rd32(sp0 - 0x140u); goto E_10108d03;
    case 0x10108d0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); loc_154 = rd32(sp0 - 0x154u); loc_150 = rd32(sp0 - 0x150u); loc_148 = rd32(sp0 - 0x148u); loc_140 = rd32(sp0 - 0x140u); goto E_10108d0d;
    case 0x10108d17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); loc_154 = rd32(sp0 - 0x154u); loc_150 = rd32(sp0 - 0x150u); loc_148 = rd32(sp0 - 0x148u); loc_140 = rd32(sp0 - 0x140u); goto E_10108d17;
    case 0x10108d21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); loc_154 = rd32(sp0 - 0x154u); loc_150 = rd32(sp0 - 0x150u); loc_148 = rd32(sp0 - 0x148u); loc_140 = rd32(sp0 - 0x140u); goto E_10108d21;
    case 0x10108d24u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); loc_154 = rd32(sp0 - 0x154u); loc_150 = rd32(sp0 - 0x150u); loc_148 = rd32(sp0 - 0x148u); loc_140 = rd32(sp0 - 0x140u); goto E_10108d24;
    case 0x10108d30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); loc_154 = rd32(sp0 - 0x154u); loc_150 = rd32(sp0 - 0x150u); loc_148 = rd32(sp0 - 0x148u); loc_140 = rd32(sp0 - 0x140u); goto E_10108d30;
    case 0x10108d3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); loc_154 = rd32(sp0 - 0x154u); loc_150 = rd32(sp0 - 0x150u); loc_148 = rd32(sp0 - 0x148u); loc_140 = rd32(sp0 - 0x140u); goto E_10108d3f;
    case 0x10108d4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); loc_154 = rd32(sp0 - 0x154u); loc_150 = rd32(sp0 - 0x150u); loc_148 = rd32(sp0 - 0x148u); loc_140 = rd32(sp0 - 0x140u); goto E_10108d4c;
    case 0x10108d61u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10108d61;
    case 0x10108d68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10108d68;
    case 0x10108d6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); loc_154 = rd32(sp0 - 0x154u); loc_150 = rd32(sp0 - 0x150u); loc_148 = rd32(sp0 - 0x148u); loc_140 = rd32(sp0 - 0x140u); goto E_10108d6e;
    default: break;
    }
#endif

    COW_AT(10108b50)
    wr32(sp0 - 0x154u, in_ebx);
    wr32(sp0 - 0x158u, in_ebp);
    wr32(sp0 - 0x15cu, in_esi);
    wr32(sp0 - 0x140u, self);
    wr32(sp0 - 0x160u, in_edi);
    wr32(sp0 - 0x150u, 0u);
    wr32(sp0 - 0x14cu, sp0 - 0x100u);
    wr32(sp0 - 0x148u, self + 0x14u);
    if (self + 0x14u == 0u)
    {
        eax = in_eax;
        edx = 0u;
        loc_154 = in_ebx;
        loc_158 = in_ebp;
        loc_15c = in_esi;
        loc_140 = self;
        loc_160 = in_edi;
        loc_150 = 0u;
    }
    else
    {
    COW_AT(10108b7b)
        eax = in_eax;
        ecx = self + 0x14u;
        edx = 0u;
        ebx = in_ebx;
        loc_154 = in_ebx;
        loc_158 = in_ebp;
        loc_15c = in_esi;
        loc_140 = self;
        loc_160 = in_edi;
        loc_150 = 0u;
        loc_148 = self + 0x14u;
L_10108b81: ;
    COW_AT(10108b81)
        if (rd32(ecx) != 0u)
        {
    COW_AT(10108b8a)
            if ((uint16_t)(rd16(ecx + 6u) - 8u) == 0u)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)(rd16(ecx + 6u) - 8u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)(rd16(ecx + 6u) - 8u);
    COW_AT(10108b9b)
                wr32(sp0 - 0x144u, 0u);
                wr32(sp0 - 0x138u, (uint16_t)eax);
                t1 = (uint16_t)(((eax & 0xffff0000u) | (uint16_t)((uint16_t)eax - 1u) >> 3u) + 1u);
                wr32(sp0 - 0x13cu, t1);
                loc_144 = 0u;
                loc_138 = (uint16_t)eax;
                loc_13c = t1;
L_10108bbf: ;
    COW_AT(10108bbf)
                ebp = 0u;
L_10108bc1: ;
    COW_AT(10108bc1)
                if ((int32_t)(loc_144 + (uint16_t)ebp) >= (int32_t)loc_138) goto L_10108c3b;
                eax = loc_144 + (uint16_t)ebp;
                esi = (uint16_t)ebp;
    COW_AT(10108bd7)
                t2 = rd8(eax + ecx + 8u);
                wr8(sp0 - 0x134u, (uint8_t)t2);
                t3 = (uint8_t)rd32(sp0 - 0x134u);
                wr32(sp0 - 0x164u, t3);
                wr32(sp0 - 0x168u, COW_IMG(0x1036be9cu));
                t4 = esi * 3u + sp0 - 0x120u;
                wr32(sp0 - 0x16cu, t4);
                g->ebx = (ebx & 0xffffff00u) | t2;
                g->eax = eax;
                g->ecx = esi + sp0 - 0x120u;
                g->edx = t4;
                g->esp = sp0 - 0x158u;
                t5 = cow_cdecl(g, COW_IMG(0x10312031u), 5, t4, COW_IMG(0x1036be9cu), t3, loc_160, loc_15c);
                t6 = g->ecx;
                t7 = g->edx;
                wr32(sp0 - 0x170u, t3);
                g->edx = t7;
                g->esp = sp0 - 0x16cu;
                t8 = cow_thiscall_cdecl(g, COW_IMG(0x1031486fu), t6, 1, t3);
                t9 = g->ecx;
                t10 = g->edx;
                if (t8 != 0u)
                {
                    eax = (t8 & 0xffffff00u) | (uint8_t)t2;
                    ecx = t9;
                    edx = t10;
                    ebx = (ebx & 0xffffff00u) | t2;
                }
                else
                {
                    eax = (t8 & 0xffffff00u) | (uint8_t)t2;
                    ecx = t9;
                    edx = t10;
                    ebx = (ebx & 0xffffff00u) | t2;
    COW_AT(10108c0b)
                    eax = (eax & 0xffffff00u) | 0x2eu;
                }
    COW_AT(10108c0d)
                if ((uint16_t)ebp >= 4u)
                {
    COW_AT(10108c13)
                    esi = esi + 1u;
                }
    COW_AT(10108c14)
                wr32(sp0 - 0x164u, (uint8_t)eax);
                wr32(sp0 - 0x168u, COW_IMG(0x1036be98u));
                t11 = esi + sp0 - 0x130u;
                wr32(sp0 - 0x16cu, t11);
                g->ebx = ebx;
                g->esp = sp0 - 0x158u;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, t11, COW_IMG(0x1036be98u), (uint8_t)eax, rd32(sp0 - 0x160u), rd32(sp0 - 0x15cu));
                if ((uint16_t)(ebp + 1u) < 8u)
                {
                    ecx = rd32(sp0 - 0x148u);
                    ebp = ebp + 1u;
                    loc_154 = rd32(sp0 - 0x154u);
                    loc_158 = rd32(sp0 - 0x158u);
                    loc_15c = rd32(sp0 - 0x15cu);
                    loc_140 = rd32(sp0 - 0x140u);
                    loc_160 = rd32(sp0 - 0x160u);
                    loc_150 = rd32(sp0 - 0x150u);
                    loc_148 = rd32(sp0 - 0x148u);
                    loc_144 = rd32(sp0 - 0x144u);
                    loc_138 = rd32(sp0 - 0x138u);
                    loc_13c = rd32(sp0 - 0x13cu);
                    goto L_10108bc1;
                }
                ecx = rd32(sp0 - 0x148u);
                loc_154 = rd32(sp0 - 0x154u);
                loc_158 = rd32(sp0 - 0x158u);
                loc_15c = rd32(sp0 - 0x15cu);
                loc_140 = rd32(sp0 - 0x140u);
                loc_160 = rd32(sp0 - 0x160u);
                loc_150 = rd32(sp0 - 0x150u);
                loc_148 = rd32(sp0 - 0x148u);
                loc_144 = rd32(sp0 - 0x144u);
                loc_138 = rd32(sp0 - 0x138u);
                loc_13c = rd32(sp0 - 0x13cu);
L_10108c3b: ;
    COW_AT(10108c3b)
                wr32(sp0 - 0x144u, loc_144 + 8u);
                wr32(sp0 - 0x13cu, loc_13c - 1u);
                if (loc_13c != 1u)
                {
                    loc_144 = loc_144 + 8u;
                    loc_13c = loc_13c - 1u;
                    goto L_10108bbf;
                }
                eax = loc_13c - 1u;
                edx = loc_144 + 8u;
            }
        }
    COW_AT(10108c55)
        wr32(sp0 - 0x164u, ecx);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x160u;
        t12 = cow_thiscall(g, COW_IMG(0x10108870u), loc_140, 1, ecx);
        t13 = g->edx;
        wr32(sp0 - 0x148u, t12);
        if (t12 != 0u)
        {
            eax = t12;
            edx = t13;
            loc_148 = t12;
            goto L_10108b7d;
        }
        eax = t12;
    COW_AT(10108c6b)
        edx = rd32(sp0 - 0x150u);
        loc_154 = rd32(sp0 - 0x154u);
        loc_158 = rd32(sp0 - 0x158u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_140 = rd32(sp0 - 0x140u);
        loc_160 = rd32(sp0 - 0x160u);
        loc_150 = rd32(sp0 - 0x150u);
    }
    COW_AT(10108c6f)
    if (loc_140 + 0x14u != 0u)
    {
        ecx = loc_140;
        esi = loc_140 + 0x14u;
    COW_AT(10108c80)
        ebx = 0u;
        edi = sp0 - 0x100u;
L_10108c86: ;
    COW_AT(10108c86)
        if (rd16(esi + 6u) == 0u) goto L_10108d4c;
        ebp = 0u;
L_10108c92: ;
    COW_AT(10108c92)
        if ((uint16_t)edx == 0u)
        {
    COW_AT(10108c97)
            t14 = esi + (uint16_t)ebp;
            wr32(sp0 - 0x164u, t14);
            wr32(sp0 - 0x168u, COW_IMG(0x1036bec4u));
            wr32(sp0 - 0x16cu, sp0 - 0x100u);
            g->ebx = ebx;
            g->ecx = ecx;
            g->esp = sp0 - 0x158u;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1036bec4u), t14, loc_160, loc_15c);
            t15 = g->ecx;
            edi = sp0 - 0x100u;
            eax = 0u;
            ecx = 0xffffffffu;
            cf = sp0 - 0x160u < sp0 - 0x16cu;
            pf = PARITY((uint8_t)(sp0 - 0x160u));
            af = (sp0 - 0x16cu ^ sp0 - 0x160u) >> 4u & 1u;
            zf = sp0 == 0x160u;
            sf = (int32_t)(sp0 - 0x160u) < 0;
            of = ((sp0 - 0x16cu ^ sp0 - 0x160u) & (sp0 - 0x160u ^ 0xcu)) >> 0x1fu;
            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
            t16 = sp0 + ~ecx - 0x101u;
            wr32(sp0 - 0x14cu, t16);
            edx = rd32(sp0 - 0x150u);
            edi = t16;
            loc_154 = rd32(sp0 - 0x154u);
            loc_158 = rd32(sp0 - 0x158u);
            loc_15c = rd32(sp0 - 0x15cu);
            loc_140 = rd32(sp0 - 0x140u);
            loc_160 = rd32(sp0 - 0x160u);
        }
    COW_AT(10108cd0)
        if ((int32_t)(edx & 3u) >= 0)
        {
            eax = (uint16_t)edx;
            ecx = edx & 3u;
            zf = (edx & 3u) == 0u;
        }
        else
        {
            eax = (uint16_t)edx;
            ecx = edx & 3u;
    COW_AT(10108ce1)
            zf = (ecx - 1u | 0xfffffffcu) + 1u == 0u;
            ecx = (ecx - 1u | 0xfffffffcu) + 1u;
        }
    COW_AT(10108ce6)
        if (zf)
        {
    COW_AT(10108ce8)
            wr8(edi, 0x20u);
            edi = edi + 1u;
        }
    COW_AT(10108cec)
        if ((int32_t)(eax & 0x8000000fu) >= 0)
        {
            zf = (eax & 0x8000000fu) == 0u;
            eax = eax & 0x8000000fu;
        }
        else
        {
            eax = eax & 0x8000000fu;
    COW_AT(10108cf3)
            zf = (eax - 1u | 0xfffffff0u) + 1u == 0u;
            eax = (eax - 1u | 0xfffffff0u) + 1u;
        }
    COW_AT(10108cf8)
        if (zf)
        {
    COW_AT(10108cfa)
            wr8(edi, 0x20u);
            edi = edi + 1u;
        }
    COW_AT(10108cfe)
        if (rd32(esi) == 0u)
        {
    COW_AT(10108d21)
            wr8(edi, 0x2eu);
        }
        else
        {
    COW_AT(10108d03)
            if ((ebx & 0xfu) >= 0xau)
            {
                eax = ebx;
    COW_AT(10108d17)
                wr8(edi, (uint8_t)((eax & 0xfu) + 0x57u));
                eax = (eax & 0xfu) + 0x57u;
            }
            else
            {
                eax = ebx;
    COW_AT(10108d0d)
                wr8(edi, (uint8_t)((eax & 0xfu) + 0x30u));
                eax = (eax & 0xfu) + 0x30u;
            }
        }
    COW_AT(10108d24)
        wr32(sp0 - 0x150u, edx + 1u);
        if ((uint16_t)(edx + 1u) < 0x20u)
        {
            edi = edi + 1u;
            loc_150 = edx + 1u;
            edx = edx + 1u;
        }
        else
        {
            edi = edi + 1u;
    COW_AT(10108d30)
            wr32(sp0 - 0x150u, 0u);
            wr8(edi, 0u);
            edx = 0u;
            loc_150 = 0u;
        }
    COW_AT(10108d3f)
        if ((uint16_t)(ebp + 4u) < rd16(esi + 6u))
        {
            ebp = ebp + 4u;
            goto L_10108c92;
        }
L_10108d4c: ;
    COW_AT(10108d4c)
        wr32(sp0 - 0x164u, esi);
        g->eax = eax;
        g->esp = sp0 - 0x160u;
        t17 = cow_thiscall(g, COW_IMG(0x10108870u), loc_140, 1, esi);
        t18 = g->ecx;
        if (t17 != 0u)
        {
            eax = t17;
            ecx = t18;
            ebx = ebx + 1u;
            esi = t17;
            goto L_10108c82;
        }
        eax = t17;
    COW_AT(10108d61)
        if (rd16(sp0 - 0x150u) <= (uint16_t)eax)
        {
            loc_154 = rd32(sp0 - 0x154u);
            loc_158 = rd32(sp0 - 0x158u);
            loc_15c = rd32(sp0 - 0x15cu);
            loc_160 = rd32(sp0 - 0x160u);
        }
        else
        {
    COW_AT(10108d68)
            wr8(edi, 0x2au);
            wr8(edi + 1u, (uint8_t)eax);
            loc_154 = rd32(sp0 - 0x154u);
            loc_158 = rd32(sp0 - 0x158u);
            loc_15c = rd32(sp0 - 0x15cu);
            loc_160 = rd32(sp0 - 0x160u);
        }
    }
    COW_AT(10108d6e)
    g->ebx = loc_154;
    g->esi = loc_15c;
    g->edi = loc_160;
    g->ebp = loc_158;
    return;
L_10108b7d: ;
    COW_AT(10108b7d)
    ecx = loc_148;
    loc_154 = rd32(sp0 - 0x154u);
    loc_158 = rd32(sp0 - 0x158u);
    loc_15c = rd32(sp0 - 0x15cu);
    loc_140 = rd32(sp0 - 0x140u);
    loc_160 = rd32(sp0 - 0x160u);
    loc_150 = rd32(sp0 - 0x150u);
    goto L_10108b81;
L_10108c82: ;
    COW_AT(10108c82)
    edx = rd32(sp0 - 0x150u);
    loc_154 = rd32(sp0 - 0x154u);
    loc_158 = rd32(sp0 - 0x158u);
    loc_15c = rd32(sp0 - 0x15cu);
    loc_140 = rd32(sp0 - 0x140u);
    loc_160 = rd32(sp0 - 0x160u);
    loc_150 = rd32(sp0 - 0x150u);
    goto L_10108c86;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10108b50(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10108b7bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t ebp;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        in_eax = g->eax;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x160u);
        in_esi = rd32(sp0 - 0x15cu);
        in_ebp = rd32(sp0 - 0x158u);
        self = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x160u;
        g->ecx = self + 0x14u;
        g->edx = 0u;
        g->edi = sp0 - 0x100u;
        wr32(sp0 - 0x154u, in_ebx);
        wr32(sp0 - 0x150u, 0u);
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        wr32(sp0 - 0x148u, self + 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x10108b7du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_148;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_148 = rd32(sp0 - 0x148u);
        g->esp = sp0 - 0x160u;
        g->edi = sp0 - 0x100u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x10108b81u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_140;
        uint32_t loc_148;
        uint32_t loc_150;
        uint32_t loc_154;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        loc_154 = rd32(sp0 - 0x154u);
        loc_150 = rd32(sp0 - 0x150u);
        loc_148 = rd32(sp0 - 0x148u);
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x160u;
        g->edi = sp0 - 0x100u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x10108b8au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_140;
        uint32_t loc_148;
        uint32_t loc_150;
        uint32_t loc_154;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        loc_154 = rd32(sp0 - 0x154u);
        loc_150 = rd32(sp0 - 0x150u);
        loc_148 = rd32(sp0 - 0x148u);
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x160u;
        g->edi = sp0 - 0x100u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x10108b9bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_140;
        uint32_t loc_148;
        uint32_t loc_150;
        uint32_t loc_154;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        loc_154 = rd32(sp0 - 0x154u);
        loc_150 = rd32(sp0 - 0x150u);
        loc_148 = rd32(sp0 - 0x148u);
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x160u;
        g->edi = sp0 - 0x100u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x10108bbfu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_13c;
        uint32_t loc_140;
        uint32_t loc_144;
        uint32_t loc_148;
        uint32_t loc_150;
        uint32_t loc_154;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        loc_154 = rd32(sp0 - 0x154u);
        loc_150 = rd32(sp0 - 0x150u);
        loc_148 = rd32(sp0 - 0x148u);
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_13c = rd32(sp0 - 0x13cu);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x160u;
        g->edi = sp0 - 0x100u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x10108bc1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_13c;
        uint32_t loc_140;
        uint32_t loc_144;
        uint32_t loc_148;
        uint32_t loc_150;
        uint32_t loc_154;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        loc_154 = rd32(sp0 - 0x154u);
        loc_150 = rd32(sp0 - 0x150u);
        loc_148 = rd32(sp0 - 0x148u);
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_13c = rd32(sp0 - 0x13cu);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x160u;
        g->edi = sp0 - 0x100u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x10108bd7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_13c;
        uint32_t loc_140;
        uint32_t loc_144;
        uint32_t loc_148;
        uint32_t loc_150;
        uint32_t loc_154;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        loc_154 = rd32(sp0 - 0x154u);
        loc_150 = rd32(sp0 - 0x150u);
        loc_148 = rd32(sp0 - 0x148u);
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_13c = rd32(sp0 - 0x13cu);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x160u;
        g->edi = sp0 - 0x100u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x10108c0bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x160u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x10108c0du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x160u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x10108c13u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x160u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x10108c14u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x160u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x10108c3bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_13c;
        uint32_t loc_140;
        uint32_t loc_144;
        uint32_t loc_148;
        uint32_t loc_150;
        uint32_t loc_154;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        loc_154 = rd32(sp0 - 0x154u);
        loc_150 = rd32(sp0 - 0x150u);
        loc_148 = rd32(sp0 - 0x148u);
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_13c = rd32(sp0 - 0x13cu);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x160u;
        g->edi = sp0 - 0x100u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x10108c55u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        uint32_t loc_13c;
        uint32_t loc_140;
        uint32_t loc_144;
        uint32_t loc_148;
        uint32_t loc_150;
        uint32_t loc_154;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        loc_154 = rd32(sp0 - 0x154u);
        loc_150 = rd32(sp0 - 0x150u);
        loc_148 = rd32(sp0 - 0x148u);
        loc_144 = rd32(sp0 - 0x144u);
        loc_140 = rd32(sp0 - 0x140u);
        loc_13c = rd32(sp0 - 0x13cu);
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x160u;
        g->edi = sp0 - 0x100u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x10108c6bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_148;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_148 = rd32(sp0 - 0x148u);
        g->esp = sp0 - 0x160u;
        g->edi = sp0 - 0x100u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x10108c6fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_140;
        uint32_t loc_148;
        uint32_t loc_150;
        uint32_t loc_154;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        loc_154 = rd32(sp0 - 0x154u);
        loc_150 = rd32(sp0 - 0x150u);
        loc_148 = rd32(sp0 - 0x148u);
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x160u;
        g->edi = sp0 - 0x100u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x10108c80u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_140;
        uint32_t loc_148;
        uint32_t loc_150;
        uint32_t loc_154;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        loc_154 = rd32(sp0 - 0x154u);
        loc_150 = rd32(sp0 - 0x150u);
        loc_148 = rd32(sp0 - 0x148u);
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x160u;
        g->ebx = 0u;
        g->edi = sp0 - 0x100u;
        wr32(sp0 - 0x14cu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x10108c82u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x160u;
        (void)sp0;
        return 1;
    }
    case 0x10108c86u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_140;
        uint32_t loc_148;
        uint32_t loc_150;
        uint32_t loc_154;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        loc_154 = rd32(sp0 - 0x154u);
        loc_150 = rd32(sp0 - 0x150u);
        loc_148 = rd32(sp0 - 0x148u);
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x160u;
        (void)sp0;
        return 1;
    }
    case 0x10108c92u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_140;
        uint32_t loc_148;
        uint32_t loc_150;
        uint32_t loc_154;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        loc_154 = rd32(sp0 - 0x154u);
        loc_150 = rd32(sp0 - 0x150u);
        loc_148 = rd32(sp0 - 0x148u);
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x160u;
        (void)sp0;
        return 1;
    }
    case 0x10108c97u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_140;
        uint32_t loc_148;
        uint32_t loc_150;
        uint32_t loc_154;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        loc_154 = rd32(sp0 - 0x154u);
        loc_150 = rd32(sp0 - 0x150u);
        loc_148 = rd32(sp0 - 0x148u);
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x160u;
        (void)sp0;
        return 1;
    }
    case 0x10108cd0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_140;
        uint32_t loc_148;
        uint32_t loc_150;
        uint32_t loc_154;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        loc_154 = rd32(sp0 - 0x154u);
        loc_150 = rd32(sp0 - 0x150u);
        loc_148 = rd32(sp0 - 0x148u);
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x160u;
        (void)sp0;
        return 1;
    }
    case 0x10108ce1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_140;
        uint32_t loc_148;
        uint32_t loc_150;
        uint32_t loc_154;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        loc_154 = rd32(sp0 - 0x154u);
        loc_150 = rd32(sp0 - 0x150u);
        loc_148 = rd32(sp0 - 0x148u);
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x160u;
        (void)sp0;
        return 1;
    }
    case 0x10108ce6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_140;
        uint32_t loc_148;
        uint32_t loc_150;
        uint32_t loc_154;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        loc_154 = rd32(sp0 - 0x154u);
        loc_150 = rd32(sp0 - 0x150u);
        loc_148 = rd32(sp0 - 0x148u);
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x160u;
        (void)sp0;
        return 1;
    }
    case 0x10108ce8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_140;
        uint32_t loc_148;
        uint32_t loc_150;
        uint32_t loc_154;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        loc_154 = rd32(sp0 - 0x154u);
        loc_150 = rd32(sp0 - 0x150u);
        loc_148 = rd32(sp0 - 0x148u);
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x160u;
        (void)sp0;
        return 1;
    }
    case 0x10108cecu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_140;
        uint32_t loc_148;
        uint32_t loc_150;
        uint32_t loc_154;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        loc_154 = rd32(sp0 - 0x154u);
        loc_150 = rd32(sp0 - 0x150u);
        loc_148 = rd32(sp0 - 0x148u);
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x160u;
        (void)sp0;
        return 1;
    }
    case 0x10108cf3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_140;
        uint32_t loc_148;
        uint32_t loc_150;
        uint32_t loc_154;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        loc_154 = rd32(sp0 - 0x154u);
        loc_150 = rd32(sp0 - 0x150u);
        loc_148 = rd32(sp0 - 0x148u);
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x160u;
        (void)sp0;
        return 1;
    }
    case 0x10108cf8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_140;
        uint32_t loc_148;
        uint32_t loc_150;
        uint32_t loc_154;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        loc_154 = rd32(sp0 - 0x154u);
        loc_150 = rd32(sp0 - 0x150u);
        loc_148 = rd32(sp0 - 0x148u);
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x160u;
        (void)sp0;
        return 1;
    }
    case 0x10108cfau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_140;
        uint32_t loc_148;
        uint32_t loc_150;
        uint32_t loc_154;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        loc_154 = rd32(sp0 - 0x154u);
        loc_150 = rd32(sp0 - 0x150u);
        loc_148 = rd32(sp0 - 0x148u);
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x160u;
        (void)sp0;
        return 1;
    }
    case 0x10108cfeu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_140;
        uint32_t loc_148;
        uint32_t loc_150;
        uint32_t loc_154;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        loc_154 = rd32(sp0 - 0x154u);
        loc_150 = rd32(sp0 - 0x150u);
        loc_148 = rd32(sp0 - 0x148u);
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x160u;
        (void)sp0;
        return 1;
    }
    case 0x10108d03u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_140;
        uint32_t loc_148;
        uint32_t loc_150;
        uint32_t loc_154;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        loc_154 = rd32(sp0 - 0x154u);
        loc_150 = rd32(sp0 - 0x150u);
        loc_148 = rd32(sp0 - 0x148u);
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x160u;
        (void)sp0;
        return 1;
    }
    case 0x10108d0du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_140;
        uint32_t loc_148;
        uint32_t loc_150;
        uint32_t loc_154;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        loc_154 = rd32(sp0 - 0x154u);
        loc_150 = rd32(sp0 - 0x150u);
        loc_148 = rd32(sp0 - 0x148u);
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x160u;
        (void)sp0;
        return 1;
    }
    case 0x10108d17u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_140;
        uint32_t loc_148;
        uint32_t loc_150;
        uint32_t loc_154;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        loc_154 = rd32(sp0 - 0x154u);
        loc_150 = rd32(sp0 - 0x150u);
        loc_148 = rd32(sp0 - 0x148u);
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x160u;
        (void)sp0;
        return 1;
    }
    case 0x10108d21u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_140;
        uint32_t loc_148;
        uint32_t loc_150;
        uint32_t loc_154;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        loc_154 = rd32(sp0 - 0x154u);
        loc_150 = rd32(sp0 - 0x150u);
        loc_148 = rd32(sp0 - 0x148u);
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x160u;
        (void)sp0;
        return 1;
    }
    case 0x10108d24u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_140;
        uint32_t loc_148;
        uint32_t loc_150;
        uint32_t loc_154;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        loc_154 = rd32(sp0 - 0x154u);
        loc_150 = rd32(sp0 - 0x150u);
        loc_148 = rd32(sp0 - 0x148u);
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x160u;
        (void)sp0;
        return 1;
    }
    case 0x10108d30u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_140;
        uint32_t loc_148;
        uint32_t loc_150;
        uint32_t loc_154;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        loc_154 = rd32(sp0 - 0x154u);
        loc_150 = rd32(sp0 - 0x150u);
        loc_148 = rd32(sp0 - 0x148u);
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x160u;
        (void)sp0;
        return 1;
    }
    case 0x10108d3fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_140;
        uint32_t loc_148;
        uint32_t loc_150;
        uint32_t loc_154;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        loc_154 = rd32(sp0 - 0x154u);
        loc_150 = rd32(sp0 - 0x150u);
        loc_148 = rd32(sp0 - 0x148u);
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x160u;
        (void)sp0;
        return 1;
    }
    case 0x10108d4cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_140;
        uint32_t loc_148;
        uint32_t loc_150;
        uint32_t loc_154;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        loc_154 = rd32(sp0 - 0x154u);
        loc_150 = rd32(sp0 - 0x150u);
        loc_148 = rd32(sp0 - 0x148u);
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x160u;
        (void)sp0;
        return 1;
    }
    case 0x10108d61u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x160u;
        (void)sp0;
        return 1;
    }
    case 0x10108d68u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x160u;
        (void)sp0;
        return 1;
    }
    case 0x10108d6eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_140;
        uint32_t loc_148;
        uint32_t loc_150;
        uint32_t loc_154;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        loc_154 = rd32(sp0 - 0x154u);
        loc_150 = rd32(sp0 - 0x150u);
        loc_148 = rd32(sp0 - 0x148u);
        loc_140 = rd32(sp0 - 0x140u);
        g->esp = sp0 - 0x160u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10108b50(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10108b50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
