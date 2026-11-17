/* f_0x1023d4b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1023d4b0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 8u, 0x64u);
    wr32(sp0 - 4u, 0x64u);
    if (rd16(rd32(self + 8u) + 0x52u) != 0x64u) goto L_1023d4d2;
    eax = rd32(self + 8u);
    if (rd16(eax + 0x54u) == 0x64u)
    {
        edx = in_edx;
        goto L_1023d4f7;
    }
L_1023d4d2: ;
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x101602f0u), COW_IMG(0x10621838u), 3, sp0 - 8u, 0u, 0u);
    wr32(sp0 - 0x10u, 0x64u);
    wr32(sp0 - 0x14u, 0x64u);
    g->edx = 0x64u;
    t2 = cow_call_regs(g, COW_IMG(0x10119110u), t1, rd32(self + 8u), g->edx, 0, 2, 0x64u, 0x64u);
    t3 = g->edx;
    eax = t2;
    edx = t3;
L_1023d4f7: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023d4b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1023d4b0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
