/* f_0x100d80b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_100d80b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x1048b6b4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1048b6b4u));
        goto L_100d80bd;
    }
    return in_eax & 0xffffff00u;
L_100d80bd: ;
    if ((int32_t)rd32(ecx + 0x12c8u) < 30)
    {
        eax = rd32(ecx + 0x12c8u);
        goto L_100d80cb;
    }
    eax = rd32(ecx + 0x12c8u);
    return eax & 0xffffff00u;
L_100d80cb: ;
    if (arg4 == 0u)
    {
        eax = eax * 0x50u + ecx + 0x960u;
        wr8(eax + 2u, (uint8_t)(arg4 | 0xffu));
        wr8(eax + 1u, (uint8_t)(arg4 | 0xffu));
        wr8(eax, (uint8_t)(arg4 | 0xffu));
        ecx = (arg4 & 0xffffff00u) | (uint8_t)(arg4 | 0xffu);
    }
    else
    {
        eax = eax * 0x50u + ecx + 0x960u;
        t1 = rd8(arg4);
        wr8(eax, (uint8_t)t1);
        t2 = rd8(arg4 + 1u);
        wr8(eax + 1u, (uint8_t)t2);
        wr8(eax + 2u, rd8(arg4 + 2u));
        ecx = (arg4 & 0xffffff00u) | rd8(arg4 + 3u);
    }
    wr8(eax + 3u, (uint8_t)ecx);
    wr32(eax + 0x44u, arg1);
    wr32(eax + 0x48u, arg2);
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x10312090u), eax + 4u, g->ecx, g->edx, 1, 3, eax + 4u, arg3, 0x40u);
    t3 = rd32(rd32(COW_IMG(0x1048b6b4u)) + 0x12c8u) + 1u;
    t4 = rd32(COW_IMG(0x1048b6b4u));
    wr32(t4 + 0x12c8u, t3);
    return (t4 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d80b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d80b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
