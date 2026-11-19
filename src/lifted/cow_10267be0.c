/* f_0x10267be0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10267be0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10267c2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); self = rd32(sp0 - 0x30u) - 0x1cu; g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10267c2e;
    case 0x10267c4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10267c4a;
    default: break;
    }
#endif

    COW_AT(10267be0)
    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327ed8u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    wr32(sp0 - 0x30u, self + 0x1cu);
    wr32(sp0 - 0x20u, self + 0x1cu);
    g->esp = sp0 - 0x2cu;
    cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, self + 0x1cu);   /* kernel32.dll!EnterCriticalSection */
    wr32(sp0 - 0x30u, sp0 - 0x14u);
    wr32(sp0 - 0x34u, sp0 - 0x1cu);
    wr32(sp0 - 0x38u, arg1);
    wr32(sp0 - 4u, 0u);
    g->eax = arg1;
    g->edx = sp0 - 0x1cu;
    t2 = rd32(arg1);
    t3 = cow_thiscall(g, rd32(t2 + 0x14u), t2, 3, arg1, sp0 - 0x1cu, sp0 - 0x14u);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x30u, self + 0x1cu);
    if ((int32_t)t3 >= 0) goto L_10267c4a;
    eax = t3;
    ecx = t4;
    edx = t5;
    ebx = t3;
    COW_AT(10267c2e)
    g->esp = sp0 - 0x2cu;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, self + 0x1cu);   /* kernel32.dll!LeaveCriticalSection */
    t6 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t6);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return ebx;
L_10267c4a: ;
    COW_AT(10267c4a)
    t7 = rd32(sp0 - 0x1cu);
    t8 = rd32(sp0 - 0x18u);
    t9 = rd32(sp0 - 0x14u);
    wr32(self + 0x38u, t7);
    t10 = rd32(sp0 - 0x10u);
    wr32(self + 0x3cu, t8);
    wr32(self + 0x40u, t9);
    wr32(self + 0x44u, t10);
    wr32(self + 0x48u, 0u);
    g->esp = sp0 - 0x2cu;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, self + 0x1cu);   /* kernel32.dll!LeaveCriticalSection */
    t11 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t11);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10267be0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10267c2eu:
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
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        self = rd32(sp0 - 0x30u) - 0x1cu;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x34u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10267c4au:
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
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x34u, sp0 - 0x1cu);
        wr32(sp0 - 0x30u, self + 0x1cu);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10267be0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10267be0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
