/* f_0x10099070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10099070(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(arg3 + 4u);
    wr32(COW_IMG(0x104804d0u), t1);
    t2 = rd16(arg3 + 8u);
    wr16(COW_IMG(0x104804d4u), (uint16_t)t2);
    wr16(COW_IMG(0x104804d6u), rd16(arg3 + 0xau));
    eax = 0u;
    edx = (in_edx & 0xffff0000u) | t2;
L_10099093: ;
    t3 = rd8(arg3 + eax + 0xcu);
    wr8(COW_IMG(0x104804d8u) + eax, (uint8_t)t3);
    if ((int32_t)(eax + 1u) < 8)
    {
        eax = eax + 1u;
        edx = (edx & 0xffffff00u) | t3;
        goto L_10099093;
    }
    t4 = rd32(COW_IMG(0x104807ecu)) | 1u;
    t5 = rd32(COW_IMG(0x104807e0u));
    wr32(COW_IMG(0x104807ecu), t4);
    if (t5 == 0u)
    {
        eax = t5;
        edx = t4;
    }
    else
    {
        eax = t5;
        edx = t4;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0;
        t6 = cow_thiscall(g, eax, arg3, 0);
        t7 = g->edx;
        eax = t6;
        edx = t7;
    }
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10099070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10099070(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
