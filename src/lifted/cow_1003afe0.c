/* f_0x1003afe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_1003afe0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->edx = in_edx;
    t1 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x48u);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        goto L_1003aff9;
    }
    eax = t1;
    edx = t2;
    g->edx = edx;
    g->esp = sp0;
    t3 = cow_thiscall(g, COW_IMG(0x10039920u), eax, 0);
    t4 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        goto L_1003affe;
    }
    edx = t4;
L_1003aff9: ;
    g->edx = edx;
    return 0u;
L_1003affe: ;
    wr32(eax + 0x1cu, arg2);
    wr32(eax + 0x20u, arg1);
    wr16(eax + 0x24u, (uint16_t)arg3);
    wr16(eax + 0x26u, (uint16_t)arg4);
    wr8(eax + 0x28u, (uint8_t)arg5);
    wr8(eax + 0x29u, (uint8_t)arg6);
    wr8(eax + 0x2au, 0u);
    g->edx = (((arg1 & 0xffff0000u) | (uint16_t)arg4) & 0xffffff00u) | (uint8_t)arg6;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003afe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1003afe0(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
