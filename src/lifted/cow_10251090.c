/* f_0x10251090 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10251090(Guest* g)
{
    double d17;
    double d18;
    double d21;
    double d22;
    double d24;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t23;
    uint32_t t25;
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
    cow_frame(g, sp0, 24u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1025109cu: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1025109c;
    case 0x102510a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102510a6;
    case 0x102510a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102510a9;
    case 0x102510aeu: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102510ae;
    case 0x102510b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102510b8;
    case 0x102510c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102510c2;
    case 0x102510d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102510d7;
    case 0x102510e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102510e2;
    case 0x102510f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102510f1;
    case 0x102510f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102510f6;
    case 0x10251100u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10251100;
    case 0x10251103u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10251103;
    case 0x1025110fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1025110f;
    case 0x1025113eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1025113e;
    case 0x1025114fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1025114f;
    case 0x10251168u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10251168;
    case 0x10251170u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10251170;
    default: break;
    }
#endif

    COW_AT(10251090)
    wr32(sp0 - 4u, in_esi);
    if (rd32(rd32(sp0 + 4u) + 0x18u) != 0u)
    {
        eax = rd32(rd32(sp0 + 4u) + 0x18u);
        esi = rd32(sp0 + 4u);
        goto L_102510ae;
    }
    eax = rd32(rd32(sp0 + 4u) + 0x18u);
    COW_AT(1025109c)
    wr32(sp0 - 8u, COW_IMG(0x10389830u));
    g->eax = eax;
    g->esp = sp0 - 8u;
    t1 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    eax = t1;
    COW_AT(102510a6)
L_102510a9: ;
    COW_AT(102510a9)
    g->esi = rd32(sp0 - 4u);
    g->edi = in_edi;
    return 0xffffffffu;
L_102510ae: ;
    COW_AT(102510ae)
    wr32(sp0 - 8u, eax);
    t2 = rd32(esi + 8u);
    wr32(sp0 - 0xcu, t2);
    g->eax = t2;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t3 = cow_cdecl(g, COW_IMG(0x1026ef20u), 2, t2, eax);
    t4 = g->ecx;
    t5 = g->edx;
    eax = t3;
    ecx = t4;
    edx = t5;
    COW_AT(102510b8)
    wr32(esi + 0xcu, eax);
    if ((int32_t)eax < 0) goto L_102510a9;
    COW_AT(102510c2)
    wr32(sp0 - 8u, in_edi);
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, 0x200u);
    wr32(sp0 - 0x14u, eax);
    t6 = rd32(esi) | 0x10u;
    wr32(esi, t6);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x1026f9c0u), 3, eax, 0x200u, 1u);
    t7 = g->ecx;
    t8 = g->edx;
    ecx = t7;
    edx = t8;
    COW_AT(102510d7)
    if ((int32_t)rd32(sp0 + 8u) >= 0)
    {
        eax = rd32(sp0 + 8u);
    COW_AT(102510f6)
        wr32(sp0 - 0xcu, eax);
        t13 = rd32(esi + 0xcu);
        wr32(sp0 - 0x10u, t13);
        g->eax = t13;
        g->esp = sp0 - 8u;
        t14 = cow_call_regs(g, COW_IMG(0x1026efd0u), g->eax, ecx, edx, 1, 2, t13, eax);
        t15 = g->edx;
        eax = t14;
        edx = t15;
    COW_AT(10251100)
    }
    else
    {
        eax = rd32(sp0 + 8u);
    COW_AT(102510e2)
        wr32(sp0 - 0xcu, 0u);
        t9 = rd32(esi + 0xcu);
        wr32(sp0 - 0x10u, t9);
        t10 = rd32(esi + 8u);
        wr32(sp0 - 0x14u, t10);
        g->eax = eax;
        g->esp = sp0 - 8u;
        t11 = cow_call_regs(g, COW_IMG(0x1026f0a0u), g->eax, t9, t10, 1, 3, t10, t9, 0u);
        t12 = g->edx;
        eax = t11;
        edx = t12;
    COW_AT(102510f1)
    }
    COW_AT(10251103)
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, sp0 + 4u);
    g->ecx = sp0 + 4u;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x1026f510u), 2, sp0 + 4u, 0u);
    t16 = g->ecx;
    ecx = t16;
    COW_AT(1025110f)
    d17 = (double)rdf32(sp0 + 0xcu);
    d18 = (double)rdf32(rd32(esi + 0xcu) * 0xc0u + rd32(sp0 + 4u) + 0xa4u);
    t19 = rd32(sp0 + 4u);
    t20 = rd32(esi + 0xcu);
    wr32(t20 * 0xc0u + t19 + 0xa0u, 0x3f800000u);
    if ((cow_fsw(g, d17, d18, 0u) & 0x100u) == 0u)
    {
        eax = cow_fsw(g, d17, d18, 0u) & 0x100u;
        edi = t20 * 0xc0u + t19;
    COW_AT(1025113e)
        d21 = (double)rdf32(sp0 + 0xcu);
        d22 = (double)rdf32(edi + 0xa8u);
        if (d21 <= d22)
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d21, d22, 0u);
    COW_AT(1025114f)
            t23 = rd32(sp0 + 0xcu);
            d24 = fr(g, (double)rdf32(sp0 + 0xcu) / (double)rdf32(edi + 0xb0u));
            wr32(edi + 0xacu, t23);
            fpush(g, d24);
            g->esp = sp0 - 8u;
            t25 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            eax = t25;
    COW_AT(10251168)
            wr32(edi + 0x98u, eax * 2u);
        }
    }
    COW_AT(10251170)
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    return rd32(esi + 0xcu);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10251090(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1025109cu:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102510a6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x102510a9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102510aeu:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102510b8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102510c2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102510d7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x102510e2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x102510f1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x102510f6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10251100u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10251103u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1025110fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1025113eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1025114fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10251168u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10251170u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10251090(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10251090(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
