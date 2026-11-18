/* f_0x10062650 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10062650(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10062694u: eax = g->eax; edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10062694;
    case 0x1006269fu: eax = g->eax; edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1006269f;
    case 0x100626beu: eax = g->eax; edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100626be;
    default: break;
    }
#endif

    COW_AT(10062650)
    g->eax = arg1;
    g->esp = sp0 - 0xcu;
    t1 = cow_fastcall(g, COW_IMG(0x10074790u), self, in_edx, 1, arg1);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x1003b540u), self + 0x34u, 0);
    t4 = g->edx;
    wr32(self, COW_IMG(0x1032c048u));
    wrf32(self + 0x74u, (float)(double)(int32_t)arg3);
    wr32(self + 0x34u, COW_IMG(0x1032c02cu));
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x1003b7b0u), self + 0x34u, 1, arg2);
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x1003b830u), self + 0x34u, 1, arg2);
    t8 = g->edx;
    if (arg2 != 0u)
    {
        eax = t7;
        edx = t8;
    COW_AT(10062694)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t9 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
        t10 = g->edx;
        if (t9 != 0u)
        {
            eax = t9;
            edx = t10;
    COW_AT(1006269f)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t11 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
            t12 = g->edx;
            g->edx = t12;
            t13 = cow_thiscall(g, COW_IMG(0x10083300u), t11, 0);
            t14 = g->edx;
            t15 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
            cow_thiscall(g, rd32(rd32(t15) + 0x160u), t15, 0);
        }
    }
    COW_AT(100626be)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return self;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10062650(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10062694u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = self + 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1006269fu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = self + 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100626beu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10062650(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10062650(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
