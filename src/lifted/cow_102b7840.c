/* f_0x102b7840 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_102b7840(Guest* g)
{
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)rd32(arg4) <= 0)
    {
        ecx = rd32(rd32(sp0 + 4u) + 0x4cu);
        loc_4 = rd32(arg4);
        goto L_102b78aa;
    }
    ecx = rd32(rd32(sp0 + 4u) + 0x4cu);
    edx = rd32(arg4);
    loc_4 = rd32(arg4);
    wr32(sp0 + 4u, arg4 + 4u);
    ebp = 0u;
    esi = arg4 + 4u;
L_102b786b: ;
    if (rd32(esi) == arg2) goto L_102b789a;
    esi = rd32(esi);
    edx = 0u;
    esi = ecx + esi * 0x28u;
    edi = rd32(arg2 * 0x28u + ecx + rd32(COW_IMG(0x103c7b60u) + arg3 * 4u) * 4u);
L_102b7889: ;
    if (rd32(esi) == edi) goto L_102b78be;
    if ((int32_t)(edx + 1u) < 4)
    {
        edx = edx + 1u;
        esi = esi + 4u;
        goto L_102b7889;
    }
    edx = loc_4;
L_102b789a: ;
    t2 = rd32(sp0 + 4u) + 4u;
    wr32(sp0 + 4u, t2);
    if ((int32_t)(ebp + 1u) < (int32_t)edx)
    {
        ebp = ebp + 1u;
        esi = t2;
        goto L_102b786b;
    }
L_102b78aa: ;
    wr32(arg2 * 0x28u + arg3 * 4u + ecx + 0x10u, 0u);
    return;
L_102b78be: ;
    t1 = ecx + rd32(arg4 + ebp * 4u + 4u) * 0x28u;
    wr32(arg2 * 0x28u + arg3 * 4u + ecx + 0x10u, t1);
    wr8(arg2 * 0x28u + arg3 + ecx + 0x20u, (uint8_t)edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b7840(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102b7840(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
