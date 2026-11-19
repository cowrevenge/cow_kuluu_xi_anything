/* f_0x1031be92 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1031be92(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1031bea5u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1031bea5;
    case 0x1031bec4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1031bec4;
    case 0x1031bed5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1031bed5;
    case 0x1031befbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1031befb;
    case 0x1031bf15u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1031bf15;
    case 0x1031bf25u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1031bf25;
    case 0x1031bf29u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1031bf29;
    case 0x1031bf40u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1031bf40;
    default: break;
    }
#endif

    COW_AT(1031be92)
    if (rd32(COW_IMG(0x109f83f8u)) != rd32(COW_IMG(0x109f83e4u)))
    {
        eax = rd32(COW_IMG(0x109f83f8u));
        edx = in_edx;
        goto L_1031bed5;
    }
    ecx = rd32(COW_IMG(0x109f83e4u));
    COW_AT(1031bea5)
    t1 = ecx * 0x14u + 0x140u;
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_stdcall(g, rd32(COW_IMG(0x10329288u)), 4, rd32(COW_IMG(0x109f8404u)), 0u, rd32(COW_IMG(0x109f83fcu)), t1);   /* kernel32.dll!HeapReAlloc */
    t3 = g->edx;
    if (t2 == 0u)
    {
        edx = t3;
        goto L_1031bf25;
    }
    eax = t2;
    edx = t3;
    COW_AT(1031bec4)
    wr32(COW_IMG(0x109f83e4u), rd32(COW_IMG(0x109f83e4u)) + 0x10u);
    wr32(COW_IMG(0x109f83fcu), eax);
    eax = rd32(COW_IMG(0x109f83f8u));
L_1031bed5: ;
    COW_AT(1031bed5)
    g->eax = eax * 5u;
    g->ecx = rd32(COW_IMG(0x109f83fcu));
    g->edx = edx;
    t4 = rd32(COW_IMG(0x109f83fcu));
    g->esp = sp0 - 8u;
    t5 = cow_stdcall(g, rd32(COW_IMG(0x1032928cu)), 3, rd32(COW_IMG(0x109f8404u)), 8u, 0x41c4u);   /* kernel32.dll!HeapAlloc */
    t6 = g->ecx;
    t7 = g->edx;
    wr32(eax * 0x14u + t4 + 0x10u, t5);
    if (t5 == 0u)
    {
        edx = t7;
        goto L_1031bf25;
    }
    ecx = t6;
    edx = t7;
    esi = eax * 0x14u + t4;
    eax = t5;
    COW_AT(1031befb)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t8 = cow_stdcall(g, rd32(COW_IMG(0x10329228u)), 4, 0u, 0x100000u, 0x2000u, 4u);   /* kernel32.dll!VirtualAlloc */
    t9 = g->ecx;
    t10 = g->edx;
    wr32(esi + 0xcu, t8);
    if (t8 != 0u)
    {
        edx = t10;
        goto L_1031bf29;
    }
    eax = t8;
    ecx = t9;
    edx = t10;
    COW_AT(1031bf15)
    t11 = rd32(esi + 0x10u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_stdcall(g, rd32(COW_IMG(0x10329260u)), 3, rd32(COW_IMG(0x109f8404u)), 0u, t11);   /* kernel32.dll!HeapFree */
    t12 = g->edx;
    edx = t12;
L_1031bf25: ;
    COW_AT(1031bf25)
    eax = 0u;
L_1031bf40: ;
    COW_AT(1031bf40)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_1031bf29: ;
    COW_AT(1031bf29)
    wr32(esi + 8u, 0xffffffffu);
    wr32(esi, 0u);
    wr32(esi + 4u, 0u);
    wr32(COW_IMG(0x109f83f8u), rd32(COW_IMG(0x109f83f8u)) + 1u);
    wr32(rd32(esi + 0x10u), 0xffffffffu);
    eax = esi;
    goto L_1031bf40;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1031be92(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1031bea5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031bec4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031bed5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031befbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031bf15u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031bf25u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1031bf29u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031bf40u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1031be92(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1031be92(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
