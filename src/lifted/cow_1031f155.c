/* f_0x1031f155 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1031f155(Guest* g)
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
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1031f167u: eax = g->eax; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1031f167;
    case 0x1031f174u: eax = g->eax; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1031f174;
    case 0x1031f18cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1031f18c;
    case 0x1031f194u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1031f194;
    case 0x1031f196u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1031f196;
    case 0x1031f19au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1031f19a;
    case 0x1031f1a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1031f1a1;
    case 0x1031f1a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1031f1a6;
    case 0x1031f1c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1031f1c5;
    default: break;
    }
#endif

    COW_AT(1031f155)
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x10320c66u), g->eax, self, in_edx, 1, 1, arg1);
    t2 = g->edx;
    if (t1 != 0xffffffffu)
    {
        eax = t1;
        edx = t2;
        goto L_1031f174;
    }
    eax = t1;
    edx = t2;
    COW_AT(1031f167)
    g->eax = eax;
    g->esp = sp0 - 8u;
    t3 = cow_fastcall(g, COW_IMG(0x10319c89u), arg1, edx, 0);
    t4 = g->edx;
    wr32(t3, 9u);
    eax = t3;
    edx = t4;
L_1031f1a1: ;
    COW_AT(1031f1a1)
    eax = 0xffffffffu;
L_1031f1c5: ;
    COW_AT(1031f1c5)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_1031f174: ;
    COW_AT(1031f174)
    g->eax = eax;
    g->ecx = arg1;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t5 = cow_stdcall(g, rd32(COW_IMG(0x103292b4u)), 4, eax, arg2, 0u, arg3);   /* kernel32.dll!SetFilePointer */
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 != 0xffffffffu)
    {
        ecx = t6;
        edx = t7;
        edi = t5;
    COW_AT(1031f194)
        eax = 0u;
    }
    else
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        edi = t5;
    COW_AT(1031f18c)
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t8 = cow_stdcall(g, rd32(COW_IMG(0x10329168u)), 0);   /* kernel32.dll!GetLastError */
        t9 = g->ecx;
        t10 = g->edx;
        eax = t8;
        ecx = t9;
        edx = t10;
    }
    COW_AT(1031f196)
    if (eax == 0u) goto L_1031f1a6;
    COW_AT(1031f19a)
    g->eax = eax;
    g->esp = sp0 - 8u;
    t11 = cow_call_regs(g, COW_IMG(0x10319c16u), g->eax, ecx, edx, 1, 1, eax);
    t12 = g->edx;
    eax = t11;
    edx = t12;
    goto L_1031f1a1;
L_1031f1a6: ;
    COW_AT(1031f1a6)
    t13 = rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u);
    wr8((arg1 & 0x1fu) * 0x24u + t13 + 4u, rd8((arg1 & 0x1fu) * 0x24u + t13 + 4u) & 0xfdu);
    eax = edi;
    goto L_1031f1c5;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1031f155(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1031f167u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1031f174u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ecx = arg1;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1031f18cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1031f194u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1031f196u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1031f19au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1031f1a1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1031f1a6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1031f1c5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
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
void cow_adapter_1031f155(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1031f155(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
