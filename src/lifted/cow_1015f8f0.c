/* f_0x1015f8f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1015f8f0(Guest* g)
{
    uint32_t eax;
    uint32_t esi;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    if (rd32(arg1) == 0u)
    {
        eax = arg1;
        goto L_1015f945;
    }
    esi = rd32(arg1);
    if (rd32(esi + 8u) == 0u)
    {
        eax = arg1;
        goto L_1015f945;
    }
    wr16(sp0 - 0xcu, 0u);
    wr16(sp0 - 0xau, 0u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr32(sp0 - 0x18u, sp0 - 0xcu);
    g->esp = sp0 - 0x14u;
    t1 = cow_call_regs(g, COW_IMG(0x10118f70u), arg1, rd32(esi + 8u), g->edx, 0, 1, sp0 - 0xcu);
    if (rd8(rd32(esi + 8u) + 0x69u) != 0u)
    {
        eax = rd32(sp0 - 0xau);
    }
    else
    {
        eax = rd32(sp0 - 6u);
    }
    if ((uint16_t)eax == rd16(arg2)) goto L_1015f94f;
    wr16(arg2, (uint16_t)eax);
L_1015f945: ;
    return (eax & 0xffffff00u) | 1u;
L_1015f94f: ;
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015f8f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1015f8f0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
