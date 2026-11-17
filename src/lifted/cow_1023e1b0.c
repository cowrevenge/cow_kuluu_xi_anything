/* f_0x1023e1b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1023e1b0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 0x18u, COW_IMG(0x10350334u));
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, COW_IMG(0x1015e030u), COW_IMG(0x10621838u), 1, COW_IMG(0x10350334u));
    t2 = g->edx;
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, sp0 - 0xcu);
    wr32(sp0 - 0x20u, arg1);
    t3 = rd32(t1 + 0x10u);
    wr32(sp0 - 8u, t3);
    t4 = rd32(t1 + 0x14u);
    wr32(sp0 - 4u, t4);
    cow_call_regs(g, COW_IMG(0x1011d460u), sp0 - 0xcu, g->ecx, g->edx, 1, 3, arg1, sp0 - 0xcu, 0u);
    if ((int32_t)((uint32_t)(int16_t)t4 - (uint32_t)(int16_t)t3) < (int16_t)rd16(sp0 - 0xcu))
    {
        eax = (uint32_t)(int16_t)t4 - (uint32_t)(int16_t)t3;
        edx = (uint32_t)(int16_t)t3;
        goto L_1023e217;
    }
    if ((int32_t)((uint32_t)(int16_t)rd16(sp0 - 2u) - (uint32_t)(int16_t)rd16(sp0 - 6u)) < (int16_t)rd16(sp0 - 0xau))
    {
        eax = (uint32_t)(int16_t)rd16(sp0 - 2u) - (uint32_t)(int16_t)rd16(sp0 - 6u);
        edx = (uint32_t)(int16_t)rd16(sp0 - 6u);
        goto L_1023e217;
    }
    edx = (uint32_t)(int16_t)rd16(sp0 - 6u);
    g->edx = edx;
    return 1u;
L_1023e217: ;
    g->edx = edx;
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023e1b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1023e1b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
