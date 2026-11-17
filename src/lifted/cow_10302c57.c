/* f_0x10302c57 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_10302c57(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if (rd8(rd32(rd32(sp0 + 4u) + 0x180u) + 0x30u) != 0u)
    {
        edx = in_edx;
        esi = rd32(rd32(sp0 + 4u) + 0x180u);
        edi = rd32(sp0 + 4u);
        goto L_10302c83;
    }
    esi = rd32(rd32(sp0 + 4u) + 0x180u);
    edi = rd32(sp0 + 4u);
    g->eax = rd32(edi + 0x184u);
    g->edx = in_edx;
    t1 = rd32(edi + 0x184u);
    g->esp = sp0 - 0x14u;
    t2 = cow_thiscall(g, rd32(t1 + 0xcu), esi + 8u, 0);
    t3 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        edx = t3;
        goto L_10302cbb;
    }
    edx = t3;
    wr8(esi + 0x30u, 1u);
L_10302c83: ;
    t4 = rd32(edi + 0x114u);
    t5 = rd32(edi + 0x188u);
    wr32(sp0 + 4u, t4);
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, rd32(t5 + 4u), t5, 0);
    t6 = g->edx;
    if (rd32(esi + 0x34u) < rd32(sp0 + 4u))
    {
        eax = rd32(sp0 + 4u);
        edx = t6;
    }
    else
    {
        eax = rd32(sp0 + 4u);
        edx = t6;
        ebx = esi + 0x34u;
        wr8(esi + 0x30u, 0u);
        wr32(ebx, 0u);
    }
L_10302cbb: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10302c57(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10302c57(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
