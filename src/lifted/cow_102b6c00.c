/* f_0x102b6c00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_102b6c00(Guest* g)
{
    double d1;
    double d2;
    double d3;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t loc_c;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    ebp = arg3 + 0x54u;
    loc_c = arg3 + 0x54u;
    loc_8 = 0xau;
L_102b6c36: ;
    if (rd32(ebp - 0x3cu) != 0u)
    {
        ecx = rd32(ebp - 0x3cu);
        if (arg4 != 0u)
        {
            esi = rd32(arg4 + ebp - arg3);
        }
        else
        {
            esi = 0u;
        }
        if (arg3 == 0u)
        {
            edx = arg3;
        }
        else
        {
            edx = rd32(ebp);
        }
        if ((int32_t)ecx <= 0) goto L_102b6cab;
        eax = 0u;
        edx = edx + ecx * arg1 * 4u;
L_102b6c63: ;
        wr32(eax * 4u + edx, 0u);
        d1 = fr(g, (double)rdf32(eax * 4u + esi + rd32(arg5) * ecx * 4u) * (double)rdf32(arg2));
        wrf32(eax * 4u + edx, (float)d1);
        d2 = fr(g, d1 + fr(g, (double)rdf32(eax * 4u + esi + rd32(arg5 + 4u) * ecx * 4u) * (double)rdf32(arg2 + 4u)));
        wrf32(eax * 4u + edx, (float)d2);
        d3 = fr(g, fr(g, (double)rdf32(eax * 4u + esi + rd32(arg5 + 8u) * ecx * 4u) * (double)rdf32(arg2 + 8u)) + d2);
        wrf32(eax * 4u + edx, (float)d3);
        if ((int32_t)(eax + 1u) < (int32_t)ecx)
        {
            eax = eax + 1u;
            goto L_102b6c63;
        }
        ebp = loc_c;
    }
L_102b6cab: ;
    if (loc_8 != 1u)
    {
        loc_c = ebp + 4u;
        ebp = ebp + 4u;
        loc_8 = loc_8 - 1u;
        goto L_102b6c2e;
    }
    return;
L_102b6c2e: ;
    goto L_102b6c36;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b6c00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102b6c00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
