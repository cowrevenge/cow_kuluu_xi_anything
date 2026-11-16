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
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 2220u);

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
        ebx = 0u;
        ebp = 0u;
L_102904b1: ;
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
    if ((int32_t)rd32(arg2 * 0x2cu + rd32(arg1 + 0x48u) + 4u) <= 0) goto L_10290563;
    eax = 0u;
    ecx = arg2 * 0x2cu + rd32(arg1 + 0x48u);
L_10290552: ;
    wr32(eax * 4u + rd32(ecx + 0x24u), eax);
    if ((int32_t)(eax + 1u) < (int32_t)rd32(arg2 * 0x2cu + rd32(arg1 + 0x48u) + 4u))
    {
        eax = eax + 1u;
        ecx = arg2 * 0x2cu + rd32(arg1 + 0x48u);
        goto L_10290552;
    }
L_10290563: ;
    if ((int32_t)rd32(arg2 * 0x2cu + rd32(arg1 + 0x48u) + 4u) > 1)
    {
        wr32(sp0 - 0x86cu, 4u);
        edx = 4u;
        ebx = 1u;
        loc_86c = 4u;
L_1029057e: ;
        if ((int32_t)edx <= 0) goto L_10290600;
        ecx = 0u;
L_10290584: ;
        if ((int32_t)(ecx - 1u) < 0) goto L_102905ae;
        d10 = (double)rdf32(sp0 + rd32(edx + rd32(arg2 * 0x2cu + rd32(arg1 + 0x48u) + 0x24u)) * 4u - 0x7d0u);
        d11 = (double)rdf32(sp0 + rd32(ecx * 4u + rd32(arg2 * 0x2cu + rd32(arg1 + 0x48u) + 0x24u) - 4u) * 4u - 0x7d0u);
        if (!(d10 < d11)) goto L_102905fb;
L_102905ae: ;
        d12 = (double)rdf32(sp0 + rd32(edx + rd32(arg2 * 0x2cu + rd32(arg1 + 0x48u) + 0x24u)) * 4u - 0x7d0u);
        d13 = (double)rdf32(sp0 + rd32(ecx * 4u + rd32(arg2 * 0x2cu + rd32(arg1 + 0x48u) + 0x24u)) * 4u - 0x7d0u);
        if ((cow_fsw(g, d12, d13, 0u) & 0x4100u) == 0u)
        {
            if ((int32_t)ebx <= (int32_t)ecx) goto L_102905f1;
            eax = ebx;
L_102905d8: ;
            t14 = rd32(eax * 4u + rd32(arg2 * 0x2cu + rd32(arg1 + 0x48u) + 0x24u) - 4u);
            wr32(eax * 4u + rd32(arg2 * 0x2cu + rd32(arg1 + 0x48u) + 0x24u), t14);
            if ((int32_t)(eax - 1u) > (int32_t)ecx)
            {
                eax = eax - 1u;
                goto L_102905d8;
            }
            edx = loc_86c;
L_102905f1: ;
            wr32(ecx * 4u + rd32(arg2 * 0x2cu + rd32(arg1 + 0x48u) + 0x24u), ebx);
        }
L_102905fb: ;
        if ((int32_t)(ecx + 1u) < (int32_t)ebx)
        {
            ecx = ecx + 1u;
            goto L_10290584;
        }
L_10290600: ;
        wr32(sp0 - 0x86cu, edx + 4u);
        if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg2 * 0x2cu + rd32(arg1 + 0x48u) + 4u))
        {
            ebx = ebx + 1u;
            loc_86c = edx + 4u;
            edx = edx + 4u;
            goto L_1029057e;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10290460(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10290460(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
