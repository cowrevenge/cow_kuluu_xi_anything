/* f_0x10265ff0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10265ff0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_c;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 44u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10266019u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); goto E_10266019;
    case 0x10266037u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10266037;
    case 0x1026604au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; self = rd32(sp0 - 0x24u) - 0x24u; goto E_1026604a;
    default: break;
    }
#endif

    COW_AT(10265ff0)
    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327e38u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    wr32(sp0 - 0x10u, self + 0x24u);
    eax = t1;
    ecx = self;
    edx = in_edx;
    ebp = rd32(COW_IMG(0x10329188u));
    loc_c = t1;
    loc_14 = in_ebx;
    loc_18 = in_ebp;
    loc_1c = in_esi;
    loc_20 = in_edi;
L_10266019: ;
    COW_AT(10266019)
    wr32(sp0 - 0x24u, self + 0x24u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t2 = cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, self + 0x24u);   /* kernel32.dll!EnterCriticalSection */
    t3 = g->edx;
    wr32(sp0 - 4u, 0u);
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x10269c10u), self + 0xcu, 0);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x24u, self + 0x24u);
    if (t4 != 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        edi = t4;
        goto L_1026604a;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(10266037)
    wr32(self + 0x40u, rd32(self + 0x40u) + 1u);
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, ebp, ecx, 1, self + 0x24u);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x24u, 0xffffffffu);
    t9 = rd32(self + 0x3cu);
    wr32(sp0 - 0x28u, t9);
    g->eax = t9;
    g->ecx = t7;
    g->edx = t8;
    t10 = cow_stdcall(g, rd32(COW_IMG(0x103291c8u)), 2, t9, 0xffffffffu);   /* kernel32.dll!WaitForSingleObject */
    t11 = g->ecx;
    t12 = g->edx;
    eax = t10;
    ecx = t11;
    edx = t12;
    loc_c = rd32(sp0 - 0xcu);
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
    loc_20 = rd32(sp0 - 0x20u);
    goto L_10266019;
L_1026604a: ;
    COW_AT(1026604a)
    wr32(sp0 - 4u, 0xffffffffu);
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, ebp, ecx, 1, self + 0x24u);
    wr32(sp0 - 0x24u, edi);
    wr32(arg1, rd32(edi));
    t13 = rd32(edi + 4u);
    wr32(arg1 + 4u, t13);
    t14 = rd32(edi + 8u);
    wr32(arg1 + 8u, t14);
    t15 = rd32(edi + 0xcu);
    wr32(arg1 + 0xcu, t15);
    g->eax = t14;
    t16 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t15, arg1, 1, 1, edi);
    t17 = g->edx;
    t18 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t18);
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    g->edx = t17;
    return t16;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10265ff0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10266019u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        g->ebx = self + 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10266037u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebx = self + 0x24u;
        wr32(sp0 - 0x24u, self + 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x1026604au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        self = rd32(sp0 - 0x24u) - 0x24u;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10265ff0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10265ff0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
