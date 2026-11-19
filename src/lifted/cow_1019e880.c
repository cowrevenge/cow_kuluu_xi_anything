/* f_0x1019e880 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1019e880(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1019e891u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1019e891;
    case 0x1019e89au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1019e89a;
    case 0x1019e8b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1019e8b0;
    case 0x1019e8b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1019e8b9;
    case 0x1019e90cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1019e90c;
    case 0x1019e92du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1019e92d;
    default: break;
    }
#endif

    COW_AT(1019e880)
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x1019dff0u), self + 4u, 0);
    t2 = g->edx;
    if ((int32_t)t1 >= 0)
    {
        eax = t1;
        edx = t2;
        goto L_1019e89a;
    }
    eax = t1;
    edx = t2;
    COW_AT(1019e891)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return 0xffffffffu;
L_1019e89a: ;
    COW_AT(1019e89a)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_thiscall(g, COW_IMG(0x101c4b40u), rd32(COW_IMG(0x10662dccu)), 1, COW_IMG(0x1037a878u));
    t4 = g->edx;
    if ((int32_t)t3 >= 0)
    {
        edi = t3;
        goto L_1019e8b9;
    }
    eax = t3;
    edx = t4;
    COW_AT(1019e8b0)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return 0xffffffffu;
L_1019e8b9: ;
    COW_AT(1019e8b9)
    t5 = edi + rd8(self + 0x55u) + rd8(self + 0x56u) + 1u;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x101907a0u), 4, self + 0x2cu, t5, COW_IMG(0x1037a868u), in_edi);
    t6 = edi + rd8(self + 0x55u) + rd8(self + 0x56u) + 1u;
    t7 = rd8(self + 0x55u);
    t8 = rd32(self + 0x2cu);
    wr32(self + 0x30u, t6);
    g->eax = t7;
    g->edx = t6;
    t9 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0xcu;
    t10 = cow_thiscall(g, COW_IMG(0x101c47b0u), t9, 4, COW_IMG(0x1037a878u), t8 + t7, edi, 0u);
    t11 = g->ecx;
    t12 = g->edx;
    if ((int32_t)t10 >= (int32_t)edi)
    {
        eax = t10;
        edx = t12;
        goto L_1019e92d;
    }
    eax = t10;
    ecx = t11;
    COW_AT(1019e90c)
    t13 = rd32(self + 0x2cu);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t14 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, t13, 1, 1, t13);
    t15 = g->edx;
    wr32(self + 0x30u, 0u);
    wr32(self + 0x2cu, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t15;
    return 0xffffffffu;
L_1019e92d: ;
    COW_AT(1019e92d)
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1019ea00u), self, 0);
    t16 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t16;
    return 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1019e880(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1019e891u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1019e89au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1019e8b0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1019e8b9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1019e90cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = self + 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1019e92du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
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
void cow_adapter_1019e880(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1019e880(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
