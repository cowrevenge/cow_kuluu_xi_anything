/* f_0x102ed879 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102ed879(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102ed887u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102ed887;
    case 0x102ed894u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102ed894;
    case 0x102ed89fu: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102ed89f;
    case 0x102ed8a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102ed8a6;
    case 0x102ed8b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102ed8b0;
    case 0x102ed8bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102ed8bc;
    case 0x102ed8c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102ed8c3;
    case 0x102ed8c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102ed8c7;
    case 0x102ed8d5u: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102ed8d5;
    case 0x102ed8dau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102ed8da;
    case 0x102ed8e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102ed8e1;
    case 0x102ed8e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102ed8e6;
    case 0x102ed8ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102ed8eb;
    case 0x102ed8f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102ed8f9;
    case 0x102ed906u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102ed906;
    case 0x102ed90au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102ed90a;
    case 0x102ed915u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102ed915;
    case 0x102ed91cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102ed91c;
    case 0x102ed933u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102ed933;
    default: break;
    }
#endif

    COW_AT(102ed879)
    if (rd32(arg1 + 0x10u) != 0xcau)
    {
        ecx = self;
        edx = in_edx;
        goto L_102ed8a6;
    }
    COW_AT(102ed887)
    g->eax = in_eax;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x102f6f8fu), g->eax, self, in_edx, 1, 1, arg1);
    t2 = g->edx;
    if (rd8(arg1 + 0x40u) == 0u)
    {
        edx = t2;
        goto L_102ed89f;
    }
    eax = t1;
    edx = t2;
    COW_AT(102ed894)
    wr32(arg1 + 0x10u, 0xcfu);
    g->esi = in_esi;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_102ed89f: ;
    COW_AT(102ed89f)
    wr32(arg1 + 0x10u, 0xcbu);
    ecx = arg1;
L_102ed8a6: ;
    COW_AT(102ed8a6)
    if (rd32(arg1 + 0x10u) != 0xcbu)
    {
        eax = rd32(arg1 + 0x10u);
        goto L_102ed915;
    }
    COW_AT(102ed8b0)
    if (rd8(rd32(arg1 + 0x18cu) + 0x10u) == 0u) goto L_102ed90a;
L_102ed8bc: ;
    COW_AT(102ed8bc)
    if (rd32(arg1 + 8u) != 0u)
    {
        eax = rd32(arg1 + 8u);
    COW_AT(102ed8c3)
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_thiscall_cdecl(g, rd32(eax), ecx, 1, arg1);
        t3 = g->edx;
        ecx = arg1;
        edx = t3;
    }
    COW_AT(102ed8c7)
    g->eax = rd32(arg1 + 0x18cu);
    g->edx = edx;
    t4 = rd32(arg1 + 0x18cu);
    g->esp = sp0 - 4u;
    t5 = cow_thiscall_cdecl(g, rd32(t4), ecx, 1, arg1);
    t6 = g->edx;
    if (t5 == 0u)
    {
        eax = t5;
        edx = t6;
        goto L_102ed906;
    }
    eax = t5;
    edx = t6;
    COW_AT(102ed8d5)
    if (eax == 2u)
    {
        ecx = arg1;
        goto L_102ed90a;
    }
    COW_AT(102ed8da)
    if (rd32(arg1 + 8u) == 0u)
    {
        ecx = rd32(arg1 + 8u);
    }
    else
    {
        ecx = rd32(arg1 + 8u);
    COW_AT(102ed8e1)
        if (eax == 3u) goto L_102ed8eb;
    COW_AT(102ed8e6)
        if (eax != 1u) goto L_102ed8bc;
L_102ed8eb: ;
    COW_AT(102ed8eb)
        wr32(ecx + 4u, rd32(ecx + 4u) + 1u);
        if ((int32_t)rd32(rd32(arg1 + 8u) + 4u) < (int32_t)rd32(rd32(arg1 + 8u) + 8u))
        {
            ecx = rd32(rd32(arg1 + 8u) + 8u);
        }
        else
        {
            eax = rd32(arg1 + 8u);
            ecx = rd32(rd32(arg1 + 8u) + 8u);
    COW_AT(102ed8f9)
            t7 = ecx + rd32(arg1 + 0x118u);
            wr32(eax + 8u, t7);
            edx = t7;
        }
    }
    goto L_102ed8bc;
L_102ed906: ;
    COW_AT(102ed906)
    g->esi = in_esi;
    g->edx = edx;
    return eax & 0xffffff00u;
L_102ed90a: ;
    COW_AT(102ed90a)
    t8 = rd32(arg1 + 0x7cu);
    wr32(arg1 + 0x84u, t8);
    eax = t8;
L_102ed933: ;
    COW_AT(102ed933)
    g->esi = arg1;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t13 = cow_fastcall(g, COW_IMG(0x102ed5d8u), ecx, edx, 0);
    t14 = g->edx;
    g->esi = in_esi;
    g->edx = t14;
    return t13;
L_102ed915: ;
    COW_AT(102ed915)
    if (eax != 0xccu)
    {
    COW_AT(102ed91c)
        wr32(rd32(arg1) + 0x14u, 0x12u);
        t9 = rd32(arg1 + 0x10u);
        wr32(rd32(arg1) + 0x18u, t9);
        g->eax = rd32(arg1);
        g->edx = edx;
        t10 = rd32(arg1);
        g->esp = sp0 - 4u;
        t11 = cow_thiscall_cdecl(g, rd32(t10), t9, 1, arg1);
        t12 = g->edx;
        eax = t11;
        ecx = arg1;
        edx = t12;
    }
    goto L_102ed933;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102ed879(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102ed887u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ed894u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ed89fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ecx = arg1;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ed8a6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ed8b0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ed8bcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ed8c3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ed8c7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ed8d5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ecx = arg1;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ed8dau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ed8e1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ed8e6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ed8ebu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ed8f9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ed906u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ed90au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ed915u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ed91cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ed933u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102ed879(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102ed879(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
