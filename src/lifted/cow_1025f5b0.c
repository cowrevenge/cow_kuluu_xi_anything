/* f_0x1025f5b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1025f5b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t loc_18;
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
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 32u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1025f5efu: ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1025f5ef;
    case 0x1025f60bu: eax = g->eax; self = g->ecx; edx = g->edx; goto E_1025f60b;
    case 0x1025f62au: eax = g->eax; self = g->ecx; edx = g->edx; goto E_1025f62a;
    case 0x1025f632u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1025f632;
    case 0x1025f63cu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); self = g->edi - 0x94u; goto E_1025f63c;
    default: break;
    }
#endif

    COW_AT(1025f5b0)
    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327758u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, self + 0x94u);
    wr32(sp0 - 0x10u, self + 0x94u);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, self + 0x94u);   /* kernel32.dll!EnterCriticalSection */
    t2 = g->edx;
    wr32(sp0 - 4u, 0u);
    if (rd32(self + 0x64u) == 1u)
    {
        eax = 1u;
        ecx = rd32(self + 0x64u);
        edx = t2;
        loc_14 = in_esi;
        loc_18 = in_edi;
        goto L_1025f63c;
    }
    ecx = rd32(self + 0x64u);
    edx = t2;
    COW_AT(1025f5ef)
    wr32(sp0 - 0x1cu, 1u);
    wr32(self + 0x64u, 1u);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_stdcall(g, rd32(COW_IMG(0x1032940cu)), 1, 1u);   /* winmm.dll!timeBeginPeriod */
    t3 = g->edx;
    cow_thiscall(g, rd32(rd32(self) + 0x40u), self, 0);
    if (rd32(self + 0x6cu) != 0u)
    {
        eax = rd32(self + 0x6cu);
        edx = rd32(self);
        goto L_1025f62a;
    }
    eax = rd32(self + 0x6cu);
    edx = rd32(self);
    COW_AT(1025f60b)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t4 = cow_thiscall(g, rd32(edx + 0x60u), self, 0);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x1cu, self + 0x94u);
    g->edx = t6;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, self + 0x94u);   /* kernel32.dll!LeaveCriticalSection */
    t7 = g->edx;
    t8 = rd32(sp0 - 0xcu);
    t9 = rd32(sp0 - 0x14u);
    t10 = rd32(sp0 - 0x18u);
    wr32(g->fs_base, t8);
    g->esi = t9;
    g->edi = t10;
    g->edx = t7;
    return t4;
L_1025f62a: ;
    COW_AT(1025f62a)
    wr32(sp0 - 0x1cu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t11 = cow_thiscall(g, rd32(edx + 0x54u), self, 1, eax);
    t12 = g->ecx;
    t13 = g->edx;
    if (t11 != 0u)
    {
        eax = t11;
        ecx = t12;
        edx = t13;
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
    }
    else
    {
        ecx = t12;
        edx = t13;
    COW_AT(1025f632)
        t14 = rd32(self + 0x54u);
        wr32(sp0 - 0x1cu, t14);
        g->eax = t14;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t15 = cow_stdcall(g, rd32(COW_IMG(0x103291c4u)), 1, t14);   /* kernel32.dll!SetEvent */
        t16 = g->ecx;
        t17 = g->edx;
        eax = t15;
        ecx = t16;
        edx = t17;
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
    }
L_1025f63c: ;
    COW_AT(1025f63c)
    wr32(sp0 - 0x1cu, self + 0x94u);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, self + 0x94u);   /* kernel32.dll!LeaveCriticalSection */
    t18 = g->edx;
    t19 = rd32(sp0 - 0xcu);
    t20 = rd32(sp0 - 0x14u);
    t21 = rd32(sp0 - 0x18u);
    wr32(g->fs_base, t19);
    g->esi = t20;
    g->edi = t21;
    g->edx = t18;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1025f5b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1025f5efu:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->eax = 1u;
        g->edi = self + 0x94u;
        (void)sp0;
        return 1;
    }
    case 0x1025f60bu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x18u;
        g->edi = self + 0x94u;
        (void)sp0;
        return 1;
    }
    case 0x1025f62au:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x18u;
        g->esi = self;
        g->edi = self + 0x94u;
        (void)sp0;
        return 1;
    }
    case 0x1025f632u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x18u;
        g->edi = self + 0x94u;
        (void)sp0;
        return 1;
    }
    case 0x1025f63cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        self = g->edi - 0x94u;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1025f5b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1025f5b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
