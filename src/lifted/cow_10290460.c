/* f_0x10290460 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10290460(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_86c;
    uint32_t t1;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 2220u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102904afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_edi = rd32(sp0 - 0x87cu); in_esi = rd32(sp0 - 0x878u); in_ebp = rd32(sp0 - 0x874u); in_ebx = rd32(sp0 - 0x870u); g->ebp = rd32(sp0 - 0x874u); g->ebx = rd32(sp0 - 0x870u); g->edi = rd32(sp0 - 0x87cu); g->esi = rd32(sp0 - 0x878u); goto E_102904af;
    case 0x102904b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_edi = rd32(sp0 - 0x87cu); in_esi = rd32(sp0 - 0x878u); in_ebp = rd32(sp0 - 0x874u); in_ebx = rd32(sp0 - 0x870u); g->ebp = rd32(sp0 - 0x874u); g->ebx = rd32(sp0 - 0x870u); g->edi = rd32(sp0 - 0x87cu); g->esi = rd32(sp0 - 0x878u); goto E_102904b1;
    case 0x10290544u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_edi = rd32(sp0 - 0x87cu); in_esi = rd32(sp0 - 0x878u); in_ebp = rd32(sp0 - 0x874u); in_ebx = rd32(sp0 - 0x870u); g->ebp = rd32(sp0 - 0x874u); g->ebx = rd32(sp0 - 0x870u); g->edi = rd32(sp0 - 0x87cu); g->esi = rd32(sp0 - 0x878u); goto E_10290544;
    case 0x10290552u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_edi = rd32(sp0 - 0x87cu); in_esi = rd32(sp0 - 0x878u); in_ebp = rd32(sp0 - 0x874u); in_ebx = rd32(sp0 - 0x870u); g->ebp = rd32(sp0 - 0x874u); g->ebx = rd32(sp0 - 0x870u); g->edi = rd32(sp0 - 0x87cu); g->esi = rd32(sp0 - 0x878u); goto E_10290552;
    case 0x10290563u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_edi = rd32(sp0 - 0x87cu); in_esi = rd32(sp0 - 0x878u); in_ebp = rd32(sp0 - 0x874u); in_ebx = rd32(sp0 - 0x870u); g->ebp = rd32(sp0 - 0x874u); g->ebx = rd32(sp0 - 0x870u); g->edi = rd32(sp0 - 0x87cu); g->esi = rd32(sp0 - 0x878u); goto E_10290563;
    case 0x10290575u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_edi = rd32(sp0 - 0x87cu); in_esi = rd32(sp0 - 0x878u); in_ebp = rd32(sp0 - 0x874u); in_ebx = rd32(sp0 - 0x870u); g->ebp = rd32(sp0 - 0x874u); g->ebx = rd32(sp0 - 0x870u); g->edi = rd32(sp0 - 0x87cu); g->esi = rd32(sp0 - 0x878u); goto E_10290575;
    case 0x1029057eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_edi = rd32(sp0 - 0x87cu); in_esi = rd32(sp0 - 0x878u); in_ebp = rd32(sp0 - 0x874u); in_ebx = rd32(sp0 - 0x870u); loc_86c = rd32(sp0 - 0x86cu); g->ebp = rd32(sp0 - 0x874u); g->ebx = rd32(sp0 - 0x870u); g->edi = rd32(sp0 - 0x87cu); g->esi = rd32(sp0 - 0x878u); goto E_1029057e;
    case 0x10290584u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_edi = rd32(sp0 - 0x87cu); in_esi = rd32(sp0 - 0x878u); in_ebp = rd32(sp0 - 0x874u); in_ebx = rd32(sp0 - 0x870u); loc_86c = rd32(sp0 - 0x86cu); g->ebp = rd32(sp0 - 0x874u); g->ebx = rd32(sp0 - 0x870u); g->edi = rd32(sp0 - 0x87cu); g->esi = rd32(sp0 - 0x878u); goto E_10290584;
    case 0x1029058bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_edi = rd32(sp0 - 0x87cu); in_esi = rd32(sp0 - 0x878u); in_ebp = rd32(sp0 - 0x874u); in_ebx = rd32(sp0 - 0x870u); loc_86c = rd32(sp0 - 0x86cu); g->ebp = rd32(sp0 - 0x874u); g->ebx = rd32(sp0 - 0x870u); g->edi = rd32(sp0 - 0x87cu); g->esi = rd32(sp0 - 0x878u); goto E_1029058b;
    case 0x102905aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_edi = rd32(sp0 - 0x87cu); in_esi = rd32(sp0 - 0x878u); in_ebp = rd32(sp0 - 0x874u); in_ebx = rd32(sp0 - 0x870u); loc_86c = rd32(sp0 - 0x86cu); g->ebp = rd32(sp0 - 0x874u); g->ebx = rd32(sp0 - 0x870u); g->edi = rd32(sp0 - 0x87cu); g->esi = rd32(sp0 - 0x878u); goto E_102905ae;
    case 0x102905d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_edi = rd32(sp0 - 0x87cu); in_esi = rd32(sp0 - 0x878u); in_ebp = rd32(sp0 - 0x874u); in_ebx = rd32(sp0 - 0x870u); loc_86c = rd32(sp0 - 0x86cu); g->ebp = rd32(sp0 - 0x874u); g->ebx = rd32(sp0 - 0x870u); g->edi = rd32(sp0 - 0x87cu); g->esi = rd32(sp0 - 0x878u); goto E_102905d2;
    case 0x102905d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_edi = rd32(sp0 - 0x87cu); in_esi = rd32(sp0 - 0x878u); in_ebp = rd32(sp0 - 0x874u); in_ebx = rd32(sp0 - 0x870u); loc_86c = rd32(sp0 - 0x86cu); g->ebp = rd32(sp0 - 0x874u); g->ebx = rd32(sp0 - 0x870u); g->edi = rd32(sp0 - 0x87cu); g->esi = rd32(sp0 - 0x878u); goto E_102905d8;
    case 0x102905edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_edi = rd32(sp0 - 0x87cu); in_esi = rd32(sp0 - 0x878u); in_ebp = rd32(sp0 - 0x874u); in_ebx = rd32(sp0 - 0x870u); loc_86c = rd32(sp0 - 0x86cu); g->ebp = rd32(sp0 - 0x874u); g->ebx = rd32(sp0 - 0x870u); g->edi = rd32(sp0 - 0x87cu); g->esi = rd32(sp0 - 0x878u); goto E_102905ed;
    case 0x102905f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_edi = rd32(sp0 - 0x87cu); in_esi = rd32(sp0 - 0x878u); in_ebp = rd32(sp0 - 0x874u); in_ebx = rd32(sp0 - 0x870u); loc_86c = rd32(sp0 - 0x86cu); g->ebp = rd32(sp0 - 0x874u); g->ebx = rd32(sp0 - 0x870u); g->edi = rd32(sp0 - 0x87cu); g->esi = rd32(sp0 - 0x878u); goto E_102905f1;
    case 0x102905fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_edi = rd32(sp0 - 0x87cu); in_esi = rd32(sp0 - 0x878u); in_ebp = rd32(sp0 - 0x874u); in_ebx = rd32(sp0 - 0x870u); loc_86c = rd32(sp0 - 0x86cu); g->ebp = rd32(sp0 - 0x874u); g->ebx = rd32(sp0 - 0x870u); g->edi = rd32(sp0 - 0x87cu); g->esi = rd32(sp0 - 0x878u); goto E_102905fb;
    case 0x10290600u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_edi = rd32(sp0 - 0x87cu); in_esi = rd32(sp0 - 0x878u); in_ebp = rd32(sp0 - 0x874u); in_ebx = rd32(sp0 - 0x870u); loc_86c = rd32(sp0 - 0x86cu); g->ebp = rd32(sp0 - 0x874u); g->ebx = rd32(sp0 - 0x870u); g->edi = rd32(sp0 - 0x87cu); g->esi = rd32(sp0 - 0x878u); goto E_10290600;
    case 0x10290617u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_edi = rd32(sp0 - 0x87cu); in_esi = rd32(sp0 - 0x878u); in_ebp = rd32(sp0 - 0x874u); in_ebx = rd32(sp0 - 0x870u); loc_86c = rd32(sp0 - 0x86cu); g->ebp = rd32(sp0 - 0x874u); g->ebx = rd32(sp0 - 0x870u); g->edi = rd32(sp0 - 0x87cu); g->esi = rd32(sp0 - 0x878u); goto E_10290617;
    default: break;
    }
#endif

    COW_AT(10290460)
    wr32(sp0 - 0x870u, in_ebx);
    wr32(sp0 - 0x874u, in_ebp);
    wr32(sp0 - 0x878u, in_esi);
    wr32(sp0 - 0x87cu, in_edi);
    t1 = rd32(rd32(arg1 + 0x18u) + rd32(arg2 * 0x2cu + rd32(arg1 + 0x48u) + 8u) * 0xcu + 4u);
    wr32(sp0 - 0x880u, t1);
    g->esp = sp0 - 0x87cu;
    cow_cdecl(g, COW_IMG(0x10283d80u), 1, t1);
    if ((int32_t)rd32(arg2 * 0x2cu + rd32(arg1 + 0x48u) + 4u) > 0)
    {
        eax = arg2 * 0x2cu + rd32(arg1 + 0x48u);
    COW_AT(102904af)
        ebx = 0u;
        ebp = 0u;
L_102904b1: ;
    COW_AT(102904b1)
        wr32(sp0 - 0x880u, sp0 - 0x85cu);
        t2 = rd32(ebp + rd32(eax + 0x28u)) + 0x14u;
        wr32(sp0 - 0x884u, t2);
        g->esp = sp0 - 0x87cu;
        cow_cdecl(g, COW_IMG(0x1028dbd0u), 2, t2, sp0 - 0x85cu);
        t3 = rd32(ebp + rd32(arg2 * 0x2cu + rd32(arg1 + 0x48u) + 0x28u) + 4u);
        wr32(sp0 - 0x888u, t3);
        g->esp = sp0 - 0x884u;
        cow_cdecl(g, COW_IMG(0x10283e20u), 1, t3);
        t4 = rd32(COW_IMG(0x1099d200u)) + 0x208u;
        wr32(sp0 - 0x88cu, t4);
        t5 = rd32(COW_IMG(0x1099d200u)) + 0x1c8u;
        wr32(sp0 - 0x890u, t5);
        wr32(sp0 - 0x894u, sp0 - 0x850u);
        g->edx = sp0 - 0x850u;
        g->esp = sp0 - 0x888u;
        cow_cdecl(g, COW_IMG(0x10280160u), 3, sp0 - 0x850u, t5, t4);
        t6 = g->edx;
        wr32(sp0 - 0x898u, sp0 - 0x850u);
        wr32(sp0 - 0x89cu, sp0 - 0x810u);
        g->esp = sp0 - 0x894u;
        cow_cdecl(g, COW_IMG(0x1027f090u), 2, sp0 - 0x810u, sp0 - 0x850u);
        wr32(sp0 - 0x8a0u, sp0 - 0x85cu);
        wr32(sp0 - 0x8a4u, sp0 - 0x810u);
        wr32(sp0 - 0x8a8u, sp0 - 0x868u);
        g->esp = sp0 - 0x89cu;
        cow_cdecl(g, COW_IMG(0x1027ef40u), 3, sp0 - 0x868u, sp0 - 0x810u, sp0 - 0x85cu);
        t7 = rd32(arg1 + 0x48u);
        t8 = rd32(arg2 * 0x2cu + rd32(arg1 + 0x48u) + 4u);
        d9 = (double)rdf32(sp0 - 0x860u);
        wrf32(ebx * 4u + sp0 - 0x7d0u, (float)-d9);
        if ((int32_t)(ebx + 1u) < (int32_t)t8)
        {
            eax = arg2 * 0x2cu + t7;
            ebx = ebx + 1u;
            ebp = ebp + 0x90u;
            goto L_102904b1;
        }
    }
    COW_AT(10290544)
    if ((int32_t)rd32(arg2 * 0x2cu + rd32(arg1 + 0x48u) + 4u) <= 0) goto L_10290563;
    eax = 0u;
    ecx = arg2 * 0x2cu + rd32(arg1 + 0x48u);
L_10290552: ;
    COW_AT(10290552)
    wr32(eax * 4u + rd32(ecx + 0x24u), eax);
    if ((int32_t)(eax + 1u) < (int32_t)rd32(arg2 * 0x2cu + rd32(arg1 + 0x48u) + 4u))
    {
        eax = eax + 1u;
        ecx = arg2 * 0x2cu + rd32(arg1 + 0x48u);
        goto L_10290552;
    }
L_10290563: ;
    COW_AT(10290563)
    if ((int32_t)rd32(arg2 * 0x2cu + rd32(arg1 + 0x48u) + 4u) > 1)
    {
    COW_AT(10290575)
        wr32(sp0 - 0x86cu, 4u);
        edx = 4u;
        ebx = 1u;
        loc_86c = 4u;
L_1029057e: ;
    COW_AT(1029057e)
        if ((int32_t)edx <= 0) goto L_10290600;
        ecx = 0u;
L_10290584: ;
    COW_AT(10290584)
        if ((int32_t)(ecx - 1u) < 0) goto L_102905ae;
    COW_AT(1029058b)
        d10 = (double)rdf32(sp0 + rd32(edx + rd32(arg2 * 0x2cu + rd32(arg1 + 0x48u) + 0x24u)) * 4u - 0x7d0u);
        d11 = (double)rdf32(sp0 + rd32(ecx * 4u + rd32(arg2 * 0x2cu + rd32(arg1 + 0x48u) + 0x24u) - 4u) * 4u - 0x7d0u);
        if (!(d10 < d11)) goto L_102905fb;
L_102905ae: ;
    COW_AT(102905ae)
        d12 = (double)rdf32(sp0 + rd32(edx + rd32(arg2 * 0x2cu + rd32(arg1 + 0x48u) + 0x24u)) * 4u - 0x7d0u);
        d13 = (double)rdf32(sp0 + rd32(ecx * 4u + rd32(arg2 * 0x2cu + rd32(arg1 + 0x48u) + 0x24u)) * 4u - 0x7d0u);
        if ((cow_fsw(g, d12, d13, 0u) & 0x4100u) == 0u)
        {
    COW_AT(102905d2)
            if ((int32_t)ebx <= (int32_t)ecx) goto L_102905f1;
            eax = ebx;
L_102905d8: ;
    COW_AT(102905d8)
            t14 = rd32(eax * 4u + rd32(arg2 * 0x2cu + rd32(arg1 + 0x48u) + 0x24u) - 4u);
            wr32(eax * 4u + rd32(arg2 * 0x2cu + rd32(arg1 + 0x48u) + 0x24u), t14);
            if ((int32_t)(eax - 1u) > (int32_t)ecx)
            {
                eax = eax - 1u;
                goto L_102905d8;
            }
    COW_AT(102905ed)
            edx = loc_86c;
L_102905f1: ;
    COW_AT(102905f1)
            wr32(ecx * 4u + rd32(arg2 * 0x2cu + rd32(arg1 + 0x48u) + 0x24u), ebx);
        }
L_102905fb: ;
    COW_AT(102905fb)
        if ((int32_t)(ecx + 1u) < (int32_t)ebx)
        {
            ecx = ecx + 1u;
            goto L_10290584;
        }
L_10290600: ;
    COW_AT(10290600)
        wr32(sp0 - 0x86cu, edx + 4u);
        if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg2 * 0x2cu + rd32(arg1 + 0x48u) + 4u))
        {
            ebx = ebx + 1u;
            loc_86c = edx + 4u;
            edx = edx + 4u;
            goto L_1029057e;
        }
    }
    COW_AT(10290617)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10290460(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102904afu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x87cu);
        in_esi = rd32(sp0 - 0x878u);
        in_ebp = rd32(sp0 - 0x874u);
        in_ebx = rd32(sp0 - 0x870u);
        g->esp = sp0 - 0x87cu;
        g->ebx = 0u;
        g->esi = arg2 * 0x2cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102904b1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x87cu);
        in_esi = rd32(sp0 - 0x878u);
        in_ebp = rd32(sp0 - 0x874u);
        in_ebx = rd32(sp0 - 0x870u);
        g->esp = sp0 - 0x87cu;
        g->esi = arg2 * 0x2cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10290544u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x87cu);
        in_esi = rd32(sp0 - 0x878u);
        in_ebp = rd32(sp0 - 0x874u);
        in_ebx = rd32(sp0 - 0x870u);
        g->esp = sp0 - 0x87cu;
        g->esi = arg2 * 0x2cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10290552u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x87cu);
        in_esi = rd32(sp0 - 0x878u);
        in_ebp = rd32(sp0 - 0x874u);
        in_ebx = rd32(sp0 - 0x870u);
        g->esp = sp0 - 0x87cu;
        g->esi = arg2 * 0x2cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10290563u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x87cu);
        in_esi = rd32(sp0 - 0x878u);
        in_ebp = rd32(sp0 - 0x874u);
        in_ebx = rd32(sp0 - 0x870u);
        g->esp = sp0 - 0x87cu;
        g->esi = arg2 * 0x2cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10290575u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x87cu);
        in_esi = rd32(sp0 - 0x878u);
        in_ebp = rd32(sp0 - 0x874u);
        in_ebx = rd32(sp0 - 0x870u);
        g->esp = sp0 - 0x87cu;
        g->ebx = 1u;
        g->esi = arg2 * 0x2cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029057eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_86c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x87cu);
        in_esi = rd32(sp0 - 0x878u);
        in_ebp = rd32(sp0 - 0x874u);
        in_ebx = rd32(sp0 - 0x870u);
        loc_86c = rd32(sp0 - 0x86cu);
        g->esp = sp0 - 0x87cu;
        g->esi = arg2 * 0x2cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10290584u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_86c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x87cu);
        in_esi = rd32(sp0 - 0x878u);
        in_ebp = rd32(sp0 - 0x874u);
        in_ebx = rd32(sp0 - 0x870u);
        loc_86c = rd32(sp0 - 0x86cu);
        g->esp = sp0 - 0x87cu;
        g->esi = arg2 * 0x2cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029058bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_86c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x87cu);
        in_esi = rd32(sp0 - 0x878u);
        in_ebp = rd32(sp0 - 0x874u);
        in_ebx = rd32(sp0 - 0x870u);
        loc_86c = rd32(sp0 - 0x86cu);
        g->esp = sp0 - 0x87cu;
        g->esi = arg2 * 0x2cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102905aeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_86c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x87cu);
        in_esi = rd32(sp0 - 0x878u);
        in_ebp = rd32(sp0 - 0x874u);
        in_ebx = rd32(sp0 - 0x870u);
        loc_86c = rd32(sp0 - 0x86cu);
        g->esp = sp0 - 0x87cu;
        g->esi = arg2 * 0x2cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102905d2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_86c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x87cu);
        in_esi = rd32(sp0 - 0x878u);
        in_ebp = rd32(sp0 - 0x874u);
        in_ebx = rd32(sp0 - 0x870u);
        loc_86c = rd32(sp0 - 0x86cu);
        g->esp = sp0 - 0x87cu;
        g->esi = arg2 * 0x2cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102905d8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_86c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x87cu);
        in_esi = rd32(sp0 - 0x878u);
        in_ebp = rd32(sp0 - 0x874u);
        in_ebx = rd32(sp0 - 0x870u);
        loc_86c = rd32(sp0 - 0x86cu);
        g->esp = sp0 - 0x87cu;
        g->esi = arg2 * 0x2cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102905edu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_86c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x87cu);
        in_esi = rd32(sp0 - 0x878u);
        in_ebp = rd32(sp0 - 0x874u);
        in_ebx = rd32(sp0 - 0x870u);
        loc_86c = rd32(sp0 - 0x86cu);
        g->esp = sp0 - 0x87cu;
        g->esi = arg2 * 0x2cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102905f1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_86c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x87cu);
        in_esi = rd32(sp0 - 0x878u);
        in_ebp = rd32(sp0 - 0x874u);
        in_ebx = rd32(sp0 - 0x870u);
        loc_86c = rd32(sp0 - 0x86cu);
        g->esp = sp0 - 0x87cu;
        g->esi = arg2 * 0x2cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102905fbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_86c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x87cu);
        in_esi = rd32(sp0 - 0x878u);
        in_ebp = rd32(sp0 - 0x874u);
        in_ebx = rd32(sp0 - 0x870u);
        loc_86c = rd32(sp0 - 0x86cu);
        g->esp = sp0 - 0x87cu;
        g->esi = arg2 * 0x2cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10290600u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_86c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x87cu);
        in_esi = rd32(sp0 - 0x878u);
        in_ebp = rd32(sp0 - 0x874u);
        in_ebx = rd32(sp0 - 0x870u);
        loc_86c = rd32(sp0 - 0x86cu);
        g->esp = sp0 - 0x87cu;
        g->esi = arg2 * 0x2cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10290617u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_86c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x87cu);
        in_esi = rd32(sp0 - 0x878u);
        in_ebp = rd32(sp0 - 0x874u);
        in_ebx = rd32(sp0 - 0x870u);
        loc_86c = rd32(sp0 - 0x86cu);
        g->esp = sp0 - 0x87cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10290460(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10290460(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
