/* f_0x10269250 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=12 */
uint32_t cow_fn_10269250(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg7 = rd32(sp0 + 0x1cu);
    const uint32_t arg8 = rd32(sp0 + 0x20u);
    const uint32_t arg9 = rd32(sp0 + 0x24u);
    const uint32_t arg10 = rd32(sp0 + 0x28u);
    const uint32_t arg11 = rd32(sp0 + 0x2cu);
    const uint32_t arg12 = rd32(sp0 + 0x30u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 92u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102692acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102692ac;
    case 0x102692f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); self = g->edi - 0x8u; g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102692f6;
    case 0x102692fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi - 0x8u; goto E_102692fd;
    case 0x10269303u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); self = g->edi - 0x8u; goto E_10269303;
    default: break;
    }
#endif

    COW_AT(10269250)
    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327fe3u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    wr32(sp0 - 0x24u, self + 8u);
    wr32(sp0 - 0x10u, self + 8u);
    g->eax = t1;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t2 = cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, self + 8u);   /* kernel32.dll!EnterCriticalSection */
    t3 = g->ecx;
    t4 = g->edx;
    wr32(sp0 - 0x24u, 0x50u);
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 0x14u, 0u);
    t5 = rd32(sp0 + 4u);
    wr32(t5, 0u);
    g->esp = sp0 - 0x18u;
    t6 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t3, t4, 1, 3, 0x50u, in_edi, in_esi);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 + 4u, t6);
    wr8(sp0 - 4u, 1u);
    if (t6 == 0u)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        goto L_102692f6;
    }
    eax = t6;
    ebx = t5;
    COW_AT(102692ac)
    wr32(sp0 - 0x24u, arg12);
    wr32(sp0 - 0x28u, arg11);
    wr32(sp0 - 0x2cu, arg10);
    wr32(sp0 - 0x30u, arg9);
    wr32(sp0 - 0x34u, arg8);
    wr32(sp0 - 0x38u, arg7);
    wr32(sp0 - 0x3cu, arg6);
    wr32(sp0 - 0x40u, arg5);
    wr32(sp0 - 0x44u, arg4);
    wr32(sp0 - 0x48u, arg3);
    wr32(sp0 - 0x4cu, arg2);
    wr32(sp0 - 0x50u, sp0 - 0x14u);
    wr32(sp0 - 0x54u, 0u);
    wr32(sp0 - 0x58u, self);
    g->eax = eax;
    g->esp = sp0 - 0x20u;
    t9 = cow_fastcall(g, COW_IMG(0x10268c80u), eax, sp0 - 0x14u, 14, self, 0u, sp0 - 0x14u, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 != 0u)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        goto L_102692fd;
    }
    eax = t9;
    ecx = t10;
    edx = t11;
L_102692f6: ;
    COW_AT(102692f6)
    esi = 0x8007000eu;
    loc_18 = in_ebx;
    loc_1c = in_esi;
    loc_20 = in_edi;
L_10269303: ;
    COW_AT(10269303)
    wr32(sp0 - 0x24u, self + 8u);
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, self + 8u);   /* kernel32.dll!LeaveCriticalSection */
    t13 = g->edx;
    t14 = rd32(sp0 - 0xcu);
    t15 = rd32(sp0 - 0x18u);
    t16 = rd32(sp0 - 0x1cu);
    t17 = rd32(sp0 - 0x20u);
    wr32(g->fs_base, t14);
    g->ebx = t15;
    g->esi = t16;
    g->edi = t17;
    g->edx = t13;
    return esi;
L_102692fd: ;
    COW_AT(102692fd)
    t12 = rd32(sp0 - 0x14u);
    wr32(ebx, eax);
    esi = t12;
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
    loc_20 = rd32(sp0 - 0x20u);
    goto L_10269303;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10269250(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102692acu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        g->edi = self + 8u;
        wr32(sp0 - 0x14u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102692f6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        self = g->edi - 0x8u;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102692fdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi - 0x8u;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x50u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x10269303u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        self = g->edi - 0x8u;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10269250(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10269250(g);
    g->esp = sp0;
    rt_return(g, r, 48u);
}
/* COW_ADAPTER END */
