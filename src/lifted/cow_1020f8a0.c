/* f_0x1020f8a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1020f8a0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    int64_t q1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 20u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1020f8afu: eax = g->eax; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1020f8af;
    case 0x1020f8b4u: eax = g->eax; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1020f8b4;
    case 0x1020f8cdu: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1020f8cd;
    case 0x1020f8dfu: eax = g->eax; edx = g->edx; edi = g->edi; cf = g->cf; zf = g->zf; goto E_1020f8df;
    case 0x1020f8e6u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; goto E_1020f8e6;
    case 0x1020f8f2u: eax = g->eax; edx = g->edx; edi = g->edi; cf = g->cf; zf = g->zf; goto E_1020f8f2;
    case 0x1020f8fdu: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; goto E_1020f8fd;
    case 0x1020f909u: eax = g->eax; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1020f909;
    case 0x1020f90eu: eax = g->eax; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1020f90e;
    case 0x1020f913u: eax = g->eax; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1020f913;
    case 0x1020f91bu: eax = g->eax; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1020f91b;
    case 0x1020f921u: eax = g->eax; edx = g->edx; edi = g->edi; cf = g->cf; zf = g->zf; goto E_1020f921;
    case 0x1020f946u: eax = g->eax; edx = g->edx; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1020f946;
    case 0x1020f94du: eax = g->eax; edx = g->edx; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1020f94d;
    case 0x1020f94fu: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1020f94f;
    case 0x1020f954u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1020f954;
    default: break;
    }
#endif

    COW_AT(1020f8a0)
    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    if (rd32(arg1) < 0x30u)
    {
        eax = rd32(arg1);
        goto L_1020f909;
    }
    eax = rd32(arg1);
    COW_AT(1020f8af)
    if (eax > 0x3au) goto L_1020f909;
    COW_AT(1020f8b4)
    q1 = (uint64_t)cow_mulu(0x51eb851fu, rd32(rd32(sp0 + 8u)));
    t2 = cow_qhi(q1) >> 5u;
    t3 = rd32(sp0 + 8u);
    wr32(t3, t2);
    if (cow_qhi(q1) >> 5u <= 1u)
    {
        esi = 0u;
        loc_4 = in_esi;
        loc_8 = in_edi;
        goto L_1020f954;
    }
    edx = t2;
    edi = t3;
    COW_AT(1020f8cd)
    wr32(sp0 - 0xcu, sp0 + 8u);
    wr32(sp0 - 0x10u, rd32(arg1));
    g->eax = sp0 + 8u;
    g->esp = sp0;
    t4 = cow_cdecl(g, COW_IMG(0x100a3540u), 4, rd32(arg1), sp0 + 8u, in_edi, in_esi);
    eax = t4;
    COW_AT(1020f8df)
    if ((uint8_t)eax != 0u) goto L_1020f8f2;
    COW_AT(1020f8e6)
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    return 0x80404040u;
L_1020f8f2: ;
    COW_AT(1020f8f2)
    if (rd32(sp0 + 8u) >= rd32(edi) - 1u)
    {
        esi = 0x80808080u;
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        goto L_1020f954;
    }
    COW_AT(1020f8fd)
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    return 0x80404040u;
L_1020f909: ;
    COW_AT(1020f909)
    if (eax < 0x40u) goto L_1020f946;
    COW_AT(1020f90e)
    if (eax > 0x57u) goto L_1020f946;
    COW_AT(1020f913)
    if ((int32_t)(eax - 0x40u) <= 1)
    {
        esi = 0u;
        loc_4 = in_esi;
        loc_8 = in_edi;
        goto L_1020f954;
    }
    eax = eax - 0x40u;
    COW_AT(1020f91b)
    wr32(sp0 - 0xcu, eax);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t5 = cow_cdecl(g, COW_IMG(0x100f0fb0u), 1, eax);
    eax = t5;
    COW_AT(1020f921)
    t6 = (-((uint8_t)eax < rd32(rd32(sp0 + 8u))) & 0xffbfbfc0u) - 0x7f7f7f80u;
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    return t6;
L_1020f946: ;
    COW_AT(1020f946)
    if (eax < 0x80u)
    {
        esi = 0u;
        loc_4 = in_esi;
        loc_8 = in_edi;
    }
    else
    {
        cf = eax < 0x80u;
        zf = eax == 0x80u;
    COW_AT(1020f94d)
        if (!cf && !zf)
        {
            esi = 0u;
            loc_4 = in_esi;
            loc_8 = in_edi;
        }
        else
        {
    COW_AT(1020f94f)
            esi = 0x80808080u;
            loc_4 = in_esi;
            loc_8 = in_edi;
        }
    }
L_1020f954: ;
    COW_AT(1020f954)
    g->esi = loc_4;
    g->edi = loc_8;
    return esi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1020f8a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1020f8afu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ecx = arg1;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1020f8b4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ecx = arg1;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1020f8cdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020f8dfu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x10u;
        g->esi = 0x80808080u;
        wr32(sp0 - 0xcu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1020f8e6u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0xcu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1020f8f2u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 8u;
        g->esi = 0x80808080u;
        wr32(sp0 - 0xcu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1020f8fdu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0xcu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1020f909u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ecx = arg1;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1020f90eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ecx = arg1;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1020f913u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ecx = arg1;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1020f91bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ecx = arg1;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1020f921u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0xcu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1020f946u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1020f94du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1020f94fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1020f954u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1020f8a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1020f8a0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
