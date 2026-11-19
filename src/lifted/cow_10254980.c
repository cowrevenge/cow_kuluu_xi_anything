/* f_0x10254980 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10254980(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_8;
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
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 40u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1025498fu: eax = g->eax; self = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1025498f;
    case 0x10254993u: eax = g->eax; self = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10254993;
    case 0x1025499bu: eax = g->eax; self = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1025499b;
    case 0x102549d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; loc_8 = rd32(sp0 - 8u); self = g->esi - 0x10u; goto E_102549d0;
    case 0x102549d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; loc_8 = rd32(sp0 - 8u); self = g->esi - 0x10u; goto E_102549d7;
    case 0x102549e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; loc_8 = rd32(sp0 - 8u); self = g->esi - 0x10u; goto E_102549e3;
    case 0x102549e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; loc_8 = rd32(sp0 - 8u); self = g->esi - 0x10u; goto E_102549e8;
    case 0x102549ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; loc_8 = rd32(sp0 - 8u); self = g->esi - 0x10u; goto E_102549ec;
    case 0x102549f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; loc_8 = rd32(sp0 - 8u); self = g->esi - 0x10u; goto E_102549f0;
    case 0x102549f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; loc_8 = rd32(sp0 - 8u); self = g->esi - 0x10u; goto E_102549f5;
    case 0x102549ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; loc_8 = rd32(sp0 - 8u); self = g->esi - 0x10u; goto E_102549ff;
    case 0x10254a01u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; loc_8 = rd32(sp0 - 8u); self = g->esi - 0x10u; goto E_10254a01;
    case 0x10254a83u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; loc_8 = rd32(sp0 - 8u); self = g->esi - 0x10u; goto E_10254a83;
    case 0x10254a91u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; loc_8 = rd32(sp0 - 8u); self = g->ecx - 0x10u; goto E_10254a91;
    case 0x10254ac4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; self = g->esi - 0x10u; goto E_10254ac4;
    case 0x10254ad1u: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; self = g->esi - 0x10u; goto E_10254ad1;
    case 0x10254ae2u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; loc_8 = rd32(sp0 - 8u); self = g->ecx - 0x10u; goto E_10254ae2;
    case 0x10254af7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; self = g->esi - 0x10u; goto E_10254af7;
    case 0x10254b06u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; self = g->esi - 0x10u; goto E_10254b06;
    case 0x10254b0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; self = g->esi - 0x10u; goto E_10254b0f;
    case 0x10254b1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; self = g->esi - 0x10u; goto E_10254b1c;
    default: break;
    }
#endif

    COW_AT(10254980)
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if (rd32(self + 0x14u) != 0u)
    {
        edx = rd32(self + 0x14u);
    COW_AT(10254993)
        eax = (uint32_t)((int32_t)(rd32(self + 0x18u) - edx) >> 2u);
    }
    else
    {
    COW_AT(1025498f)
        eax = 0u;
    }
    COW_AT(1025499b)
    wr32(sp0 - 4u, eax);
    wr32(sp0 - 0x14u, sp0 - 8u);
    wr32(sp0 - 0x18u, 1u);
    t1 = rd32(self + 0x28u);
    wr32(sp0 - 0x1cu, t1);
    wr32(sp0 - 8u, 1u);
    g->edx = t1;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x102555e0u), self + 0x20u, 3, t1, 1u, sp0 - 8u);
    t2 = g->edx;
    t3 = rd32(self + 0x18u);
    if ((uint32_t)((int32_t)(rd32(self + 0x1cu) - rd32(self + 0x18u)) >> 2u) >= 1u)
    {
        eax = t3;
        edx = t2;
        edi = t3;
        goto L_10254a83;
    }
    eax = t3;
    edi = t3;
    COW_AT(102549d0)
    if (rd32(self + 0x14u) == 0u)
    {
        edx = rd32(self + 0x14u);
        goto L_102549e3;
    }
    edx = rd32(self + 0x14u);
    COW_AT(102549d7)
    if ((uint32_t)((int32_t)(eax - edx) >> 2u) > 1u)
    {
        ecx = (uint32_t)((int32_t)(eax - edx) >> 2u);
        goto L_102549e8;
    }
L_102549e3: ;
    COW_AT(102549e3)
    ecx = 1u;
L_102549e8: ;
    COW_AT(102549e8)
    if (edx != 0u)
    {
    COW_AT(102549f0)
        eax = (uint32_t)((int32_t)(eax - edx) >> 2u);
    }
    else
    {
    COW_AT(102549ec)
        eax = 0u;
    }
    COW_AT(102549f5)
    wr32(sp0 - 8u, eax + ecx);
    if ((int32_t)(eax + ecx) >= 0)
    {
        loc_8 = eax + ecx;
        eax = eax + ecx;
    }
    else
    {
        loc_8 = eax + ecx;
    COW_AT(102549ff)
        eax = 0u;
    }
    COW_AT(10254a01)
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, eax * 4u);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t4 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, eax * 4u, 1, 3, eax * 4u, in_ebp, in_ebx);
    t5 = g->edx;
    wr32(sp0 - 0x1cu, t4);
    wr32(sp0 - 0x20u, edi);
    t6 = rd32(self + 0x14u);
    wr32(sp0 - 0x24u, t6);
    g->eax = t6;
    g->edx = t5;
    g->esp = sp0 - 0x18u;
    t7 = cow_stdcall(g, COW_IMG(0x10255d50u), 3, t6, edi, t4);
    t8 = g->edx;
    wr32(sp0 - 0x1cu, sp0 + 4u);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, t7);
    t9 = cow_stdcall(g, COW_IMG(0x10255d80u), 3, t7, 1u, sp0 + 4u);
    wr32(sp0 - 0x1cu, t7 + 4u);
    t10 = rd32(self + 0x18u);
    wr32(sp0 - 0x20u, t10);
    wr32(sp0 - 0x24u, edi);
    g->edx = t10;
    cow_stdcall(g, COW_IMG(0x10255d50u), 3, edi, t10, t7 + 4u);
    t11 = g->edx;
    t12 = rd32(self + 0x18u);
    wr32(sp0 - 0x1cu, t12);
    t13 = rd32(self + 0x14u);
    wr32(sp0 - 0x20u, t13);
    g->eax = t12;
    g->ecx = self + 0x10u;
    t14 = cow_stdcall(g, COW_IMG(0x10255420u), 2, t13, t12);
    t15 = g->ecx;
    t16 = rd32(self + 0x14u);
    wr32(sp0 - 0x1cu, t16);
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t15, t16, 1, 1, t16);
    t17 = g->edx;
    t18 = t4 + rd32(sp0 - 8u) * 4u;
    t19 = rd32(sp0 - 8u);
    wr32(self + 0x1cu, t18);
    g->eax = t19;
    t20 = cow_thiscall(g, COW_IMG(0x10255220u), self + 0x10u, 0);
    wr32(self + 0x14u, t4);
    t21 = t20 * 4u + t4 + 4u;
    wr32(self + 0x18u, t21);
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = in_ebp;
    g->edx = t21;
    return t20;
L_10254a83: ;
    COW_AT(10254a83)
    if ((uint32_t)((int32_t)(eax - edi) >> 2u) >= 1u) goto L_10254ae2;
    COW_AT(10254a91)
    wr32(sp0 - 0x14u, edi + 4u);
    wr32(sp0 - 0x18u, eax);
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, COW_IMG(0x10255d50u), 3, edi, eax, edi + 4u);
    t22 = rd32(self + 0x18u);
    wr32(sp0 - 0x14u, sp0 + 4u);
    t23 = 1u - (uint32_t)((int32_t)(t22 - edi) >> 2u);
    wr32(sp0 - 0x18u, t23);
    wr32(sp0 - 0x1cu, t22);
    g->edx = (uint32_t)((int32_t)(t22 - edi) >> 2u);
    cow_stdcall(g, COW_IMG(0x10255d80u), 3, t22, t23, sp0 + 4u);
    t24 = g->edx;
    if (edi == rd32(self + 0x18u))
    {
        edx = t24;
        goto L_10254b1c;
    }
    eax = edi;
    ecx = rd32(self + 0x18u);
L_10254ac4: ;
    COW_AT(10254ac4)
    wr32(eax, arg1);
    if (eax + 4u != ecx)
    {
        eax = eax + 4u;
        goto L_10254ac4;
    }
    COW_AT(10254ad1)
    t25 = rd32(self + 0x18u) + 4u;
    t26 = rd32(sp0 - 0x10u);
    wr32(self + 0x18u, t25);
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0xcu);
    g->edi = t26;
    g->ebp = in_ebp;
    g->edx = arg1;
    return t25;
L_10254ae2: ;
    COW_AT(10254ae2)
    wr32(sp0 - 0x14u, eax);
    wr32(sp0 - 0x18u, eax);
    wr32(sp0 - 0x1cu, eax - 4u);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, COW_IMG(0x10255d50u), 3, eax - 4u, eax, eax);
    t27 = g->edx;
    if (edi == rd32(self + 0x18u) - 4u)
    {
        edx = t27;
        goto L_10254b06;
    }
    eax = rd32(self + 0x18u) - 4u;
    ecx = rd32(self + 0x18u);
L_10254af7: ;
    COW_AT(10254af7)
    t28 = rd32(eax - 4u);
    wr32(ecx - 4u, t28);
    if (eax - 4u != edi)
    {
        eax = eax - 4u;
        ecx = ecx - 4u;
        goto L_10254af7;
    }
    edx = t28;
L_10254b06: ;
    COW_AT(10254b06)
    if (edi == edi + 4u) goto L_10254b1c;
    eax = edi;
    ecx = edi + 4u;
L_10254b0f: ;
    COW_AT(10254b0f)
    wr32(eax, arg1);
    if (eax + 4u != ecx)
    {
        eax = eax + 4u;
        goto L_10254b0f;
    }
    edx = arg1;
L_10254b1c: ;
    COW_AT(10254b1c)
    t29 = rd32(self + 0x18u) + 4u;
    t30 = rd32(sp0 - 0x10u);
    wr32(self + 0x18u, t29);
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0xcu);
    g->edi = t30;
    g->ebp = in_ebp;
    g->edx = edx;
    return t29;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10254980(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1025498fu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->esi = self + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10254993u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->esi = self + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1025499bu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->esi = self + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102549d0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        self = g->esi - 0x10u;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x14u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102549d7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        self = g->esi - 0x10u;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x14u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102549e3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        self = g->esi - 0x10u;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x14u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102549e8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        self = g->esi - 0x10u;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x14u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102549ecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        self = g->esi - 0x10u;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x14u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102549f0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        self = g->esi - 0x10u;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x14u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102549f5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        self = g->esi - 0x10u;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x14u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102549ffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        self = g->esi - 0x10u;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x14u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10254a01u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        self = g->esi - 0x10u;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x14u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10254a83u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        self = g->esi - 0x10u;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x14u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10254a91u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        self = g->ecx - 0x10u;
        g->esp = sp0 - 0x10u;
        g->esi = self + 0x10u;
        wr32(sp0 - 0x14u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10254ac4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        self = g->esi - 0x10u;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10254ad1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        self = g->esi - 0x10u;
        g->esp = sp0 - 0x10u;
        g->edx = arg1;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10254ae2u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        self = g->ecx - 0x10u;
        g->esp = sp0 - 0x10u;
        g->esi = self + 0x10u;
        wr32(sp0 - 0x14u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10254af7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        self = g->esi - 0x10u;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10254b06u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        self = g->esi - 0x10u;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10254b0fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        self = g->esi - 0x10u;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10254b1cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        self = g->esi - 0x10u;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10254980(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10254980(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
