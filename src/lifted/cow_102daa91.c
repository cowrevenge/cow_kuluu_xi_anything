/* f_0x102daa91 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102daa91(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t loc_10;
    uint32_t loc_c;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg2 != 0u)
    {
        if (arg3 != 0u)
        {
            if ((int32_t)arg1 > -2005530522) goto L_102dabf6;
            if (arg1 + 0x7789f79au == 0u) goto L_102dabec;
            if ((int32_t)arg1 > -2005530596) goto L_102dab71;
            if (arg1 + 0x7789f7e4u == 0u) goto L_102dab67;
            if ((int32_t)arg1 > -2005530600) goto L_102dab30;
            if (arg1 + 0x7789f7e8u == 0u) goto L_102dab26;
            if (arg1 == 0x80004001u) goto L_102dab1c;
            if (arg1 == 0x80004005u) goto L_102dab12;
            if (arg1 == 0x8007000eu) goto L_102dab08;
            if (arg1 != 0x8876017cu)
            {
                ecx = 0x88760818u;
                goto L_102dacdc;
            }
            eax = COW_IMG(0x103460e0u);
            ecx = 0x88760818u;
L_102dacd4: ;
            loc_c = eax;
            loc_10 = COW_IMG(0x10345dd8u);
L_102dace2: ;
            g->esp = sp0;
            t1 = cow_cdecl(g, COW_IMG(0x10313507u), 6, arg2, arg3, loc_10, loc_c, in_edi, in_esi);
            if ((int32_t)t1 < 0)
            {
                if (arg3 != 0u)
                {
                    wr8(arg2 + arg3 - 1u, 0u);
                }
            }
        }
    }
    return 0u;
L_102dab08: ;
    eax = COW_IMG(0x103460d0u);
    ecx = 0x88760818u;
    goto L_102dacd4;
L_102dab12: ;
    eax = COW_IMG(0x103460c8u);
    ecx = 0x88760818u;
    goto L_102dacd4;
L_102dab1c: ;
    eax = COW_IMG(0x103460bcu);
    ecx = 0x88760818u;
    goto L_102dacd4;
L_102dab26: ;
    eax = COW_IMG(0x103460a0u);
    ecx = 0x88760818u;
    goto L_102dacd4;
L_102dab30: ;
    if (arg1 == 0x88760819u) goto L_102dab5d;
    if (arg1 == 0x8876081au) goto L_102dab53;
    if (arg1 != 0x8876081bu)
    {
        ecx = 0x88760818u;
        goto L_102dacdc;
    }
    eax = COW_IMG(0x1034607cu);
    ecx = 0x88760818u;
    goto L_102dacd4;
L_102dab53: ;
    eax = COW_IMG(0x10346060u);
    ecx = 0x88760818u;
    goto L_102dacd4;
L_102dab5d: ;
    eax = COW_IMG(0x1034603cu);
    ecx = 0x88760818u;
    goto L_102dacd4;
L_102dab67: ;
    eax = COW_IMG(0x10346020u);
    ecx = 0x8876081cu;
    goto L_102dacd4;
L_102dab71: ;
    if (arg1 == 0x8876081du) goto L_102dabe2;
    if (arg1 == 0x8876081eu) goto L_102dabd8;
    if (arg1 == 0x8876081fu) goto L_102dabce;
    if (arg1 == 0x88760821u) goto L_102dabc4;
    if (arg1 == 0x88760822u) goto L_102dabba;
    if (arg1 == 0x88760826u) goto L_102dabb0;
    if (arg1 != 0x88760827u)
    {
        ecx = 0x8876081cu;
        goto L_102dacdc;
    }
    eax = COW_IMG(0x10346004u);
    ecx = 0x8876081cu;
    goto L_102dacd4;
L_102dabb0: ;
    eax = COW_IMG(0x10345fe0u);
    ecx = 0x8876081cu;
    goto L_102dacd4;
L_102dabba: ;
    eax = COW_IMG(0x10345fc0u);
    ecx = 0x8876081cu;
    goto L_102dacd4;
L_102dabc4: ;
    eax = COW_IMG(0x10345fa0u);
    ecx = 0x8876081cu;
    goto L_102dacd4;
L_102dabce: ;
    eax = COW_IMG(0x10345f80u);
    ecx = 0x8876081cu;
    goto L_102dacd4;
L_102dabd8: ;
    eax = COW_IMG(0x10345f60u);
    ecx = 0x8876081cu;
    goto L_102dacd4;
L_102dabe2: ;
    eax = COW_IMG(0x10345f44u);
    ecx = 0x8876081cu;
    goto L_102dacd4;
L_102dabec: ;
    eax = COW_IMG(0x10345f34u);
    ecx = 0x88760866u;
    goto L_102dacd4;
L_102dabf6: ;
    if ((int32_t)arg1 > -2005529772) goto L_102dac77;
    if (arg1 + 0x7789f4acu == 0u) goto L_102dac70;
    if (arg1 == 0x88760867u) goto L_102dac69;
    if (arg1 == 0x88760868u) goto L_102dac62;
    if (arg1 == 0x88760869u) goto L_102dac5b;
    if (arg1 == 0x8876086au) goto L_102dac54;
    if (arg1 == 0x8876086bu) goto L_102dac4a;
    if (arg1 == 0x8876086cu) goto L_102dac40;
    if (arg1 != 0x8876086du)
    {
        ecx = 0x88760b54u;
        goto L_102dacdc;
    }
    eax = COW_IMG(0x10345f18u);
    ecx = 0x88760b54u;
    goto L_102dacd4;
L_102dac40: ;
    eax = COW_IMG(0x10345f04u);
    ecx = 0x88760b54u;
    goto L_102dacd4;
L_102dac4a: ;
    eax = COW_IMG(0x10345eecu);
    ecx = 0x88760b54u;
    goto L_102dacd4;
L_102dac54: ;
    eax = COW_IMG(0x10345ed8u);
    ecx = 0x88760b54u;
    goto L_102dacd4;
L_102dac5b: ;
    eax = COW_IMG(0x10345ec0u);
    ecx = 0x88760b54u;
    goto L_102dacd4;
L_102dac62: ;
    eax = COW_IMG(0x10345eacu);
    ecx = 0x88760b54u;
    goto L_102dacd4;
L_102dac69: ;
    eax = COW_IMG(0x10345e9cu);
    ecx = 0x88760b54u;
    goto L_102dacd4;
L_102dac70: ;
    eax = COW_IMG(0x10345e7cu);
    ecx = 0x88760b54u;
    goto L_102dacd4;
L_102dac77: ;
    if (arg1 == 0x88760b55u) goto L_102daccf;
    if (arg1 == 0x88760b56u) goto L_102dacc8;
    if (arg1 == 0x88760b57u) goto L_102dacc1;
    if (arg1 == 0x88760b58u) goto L_102dacba;
    if (arg1 == 0x88760b59u) goto L_102dacb3;
    if (arg1 == 0x88760b5au) goto L_102dacac;
    if (arg1 != 0u)
    {
        ecx = 0x88760b54u;
        goto L_102dacdc;
    }
    eax = COW_IMG(0x10345e74u);
    ecx = 0x88760b54u;
    goto L_102dacd4;
L_102dacac: ;
    eax = COW_IMG(0x10345e58u);
    ecx = 0x88760b54u;
    goto L_102dacd4;
L_102dacb3: ;
    eax = COW_IMG(0x10345e44u);
    ecx = 0x88760b54u;
    goto L_102dacd4;
L_102dacba: ;
    eax = COW_IMG(0x10345e28u);
    ecx = 0x88760b54u;
    goto L_102dacd4;
L_102dacc1: ;
    eax = COW_IMG(0x10345e08u);
    ecx = 0x88760b54u;
    goto L_102dacd4;
L_102dacc8: ;
    eax = COW_IMG(0x10345df0u);
    ecx = 0x88760b54u;
    goto L_102dacd4;
L_102daccf: ;
    eax = COW_IMG(0x10345ddcu);
    ecx = 0x88760b54u;
    goto L_102dacd4;
L_102dacdc: ;
    loc_c = arg1;
    loc_10 = COW_IMG(0x10345dbcu);
    goto L_102dace2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102daa91(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102daa91(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
