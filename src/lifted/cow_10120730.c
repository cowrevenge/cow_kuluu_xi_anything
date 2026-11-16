/* f_0x10120730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=5 */
uint32_t cow_fn_10120730(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(self + 0x40u) != 0u) goto L_10120756;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1036cf44u));
    wr32(self + 0x40u, t1);
    if (t1 != 0u) goto L_10120756;
    eax = t1;
    return eax & 0xffffff00u;
L_10120756: ;
    if (rd32((uint8_t)arg1 * 4u + rd32(rd32(self + 0x40u)) - 0xc0u) != 0u)
    {
        ecx = rd32((uint8_t)arg1 * 4u + rd32(rd32(self + 0x40u)) - 0xc0u);
        edx = rd32(rd32(self + 0x40u));
        goto L_10120775;
    }
    return 0u;
L_10120775: ;
    if (arg4 != 0u)
    {
        t2 = rd16(ecx + 0x20u);
        wr16(arg4, (uint16_t)t2);
        edx = (edx & 0xffff0000u) | t2;
    }
    if (arg5 != 0u)
    {
        wr16(arg5, rd16(ecx + 0x24u));
    }
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x1011fa80u), ecx, 2, arg2, arg3);
    return (t3 & 0xffffff00u) | t3 != 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10120730(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10120730(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
