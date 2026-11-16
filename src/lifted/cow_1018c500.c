/* f_0x1018c500 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1018c500(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 == 0u)
    {
        eax = arg2;
        edx = in_edx;
    }
    else
    {
        edx = in_edx;
        ebx = arg1;
        esi = arg2;
L_1018c510: ;
        t1 = rd32(COW_IMG(0x10662688u));
        t2 = rd8(rd32(COW_IMG(0x10662684u)));
        wr8(rd32(COW_IMG(0x10662684u)), (uint8_t)(t2 | ((t1 & 0x1fu) != 0u ? (uint8_t)((ebx & 1u) << (t1 & 0x1fu)) : ebx & 1u)));
        t3 = rd32(COW_IMG(0x10662688u)) + 1u;
        t4 = rd32(COW_IMG(0x10662688u));
        wr32(COW_IMG(0x10662688u), t3);
        if (t4 + 1u != 8u)
        {
            eax = t3;
            edx = (edx & 0xffffff00u) | (uint8_t)((t1 & 0x1fu) != 0u ? (uint8_t)((ebx & 1u) << (t1 & 0x1fu)) : ebx & 1u);
        }
        else
        {
            eax = t3;
            ecx = (t1 & 0xffffff00u) | (uint8_t)(t2 | ((t1 & 0x1fu) != 0u ? (uint8_t)((ebx & 1u) << (t1 & 0x1fu)) : ebx & 1u));
            edx = (edx & 0xffffff00u) | (uint8_t)((t1 & 0x1fu) != 0u ? (uint8_t)((ebx & 1u) << (t1 & 0x1fu)) : ebx & 1u);
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_stdcall(g, COW_IMG(0x1018c550u), 0);
            t5 = g->edx;
            t6 = rd32(COW_IMG(0x10662684u));
            wr8(t6, 0u);
            eax = t6;
            edx = t5;
        }
        if (esi != 1u)
        {
            ebx = ebx >> 1u;
            esi = esi - 1u;
            goto L_1018c510;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018c500(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018c500(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
