/* f_0x1030576c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_1030576c(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(rd32(sp0 + 0x10u));
    if ((int32_t)rd32(arg1 + 0x110u) <= 0)
    {
        eax = rd32(sp0 + 0x10u);
        edx = in_edx;
    }
    else
    {
        ebx = t1;
        loc_8 = t1;
        wr32(sp0 + 0x10u, arg3);
        esi = 0u;
L_1030578e: ;
        if (rd32(ebx + esi * 4u) >= rd32(arg1 + 0x5cu) + rd32(ebx + esi * 4u))
        {
            ecx = rd32(ebx + esi * 4u);
            edx = rd32(rd32(sp0 + 0x10u));
            goto L_103057af;
        }
        eax = rd32(arg1 + 0x5cu) + rd32(ebx + esi * 4u);
        ecx = rd32(ebx + esi * 4u);
        edx = rd32(rd32(sp0 + 0x10u));
L_1030579f: ;
        t2 = rd8(edx);
        wr8(ecx, (uint8_t)t2);
        wr8(ecx + 1u, (uint8_t)t2);
        if (ecx + 2u < eax)
        {
            ecx = ecx + 2u;
            edx = edx + 1u;
            ebx = (ebx & 0xffffff00u) | t2;
            goto L_1030579f;
        }
        ecx = ecx + 2u;
        edx = edx + 1u;
        ebx = loc_8;
L_103057af: ;
        t3 = rd32(arg1 + 0x5cu);
        g->eax = esi + 1u;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t4 = cow_cdecl(g, COW_IMG(0x102f58f5u), 7, ebx, esi, ebx, esi + 1u, 1u, t3, in_edi);
        t5 = g->edx;
        wr32(sp0 + 0x10u, rd32(sp0 + 0x10u) + 4u);
        if ((int32_t)(esi + 2u) < (int32_t)rd32(arg1 + 0x110u))
        {
            esi = esi + 2u;
            goto L_1030578e;
        }
        eax = t4;
        edx = t5;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1030576c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1030576c(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
