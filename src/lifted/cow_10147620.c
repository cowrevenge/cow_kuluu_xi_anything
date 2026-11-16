/* f_0x10147620 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10147620(Guest* g)
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if ((int32_t)rd32(self + 0x20u) >= 0)
    {
        edx = in_edx;
    }
    else
    {
        wr32(sp0 - 0x14u, sp0 - 8u);
        t1 = rd32(self + 8u);
        wr16(sp0 - 8u, 0u);
        wr16(sp0 - 6u, 0u);
        wr16(sp0 - 4u, 0u);
        wr16(sp0 - 2u, 0u);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x1011a710u), t1, 1, sp0 - 8u);
        t2 = (uint32_t)(int16_t)rd16(sp0 - 8u);
        t3 = rd16(sp0 - 6u);
        wr32(self + 0x20u, t2);
        wr32(self + 0x24u, (uint32_t)(int16_t)t3);
        edx = (uint32_t)(int16_t)t3;
    }
    if (rd8(self + 0x1cu) == 0u) goto L_10147688;
    eax = rd8(self + 0x1cu);
    if (eax == 1u) goto L_1014767b;
    eax = eax - 1u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_10147698;
    }
    eax = rd32(COW_IMG(0x103716a8u)) + rd32(self + 0x24u);
L_1014768b: ;
    wr32(sp0 - 0x14u, eax);
    t4 = rd32(self + 0x20u);
    wr32(sp0 - 0x18u, t4);
    g->esp = sp0 - 0x10u;
    t5 = cow_call_regs(g, COW_IMG(0x10119110u), eax, rd32(self + 8u), g->edx, 0, 2, t4, eax);
    eax = t5;
L_10147698: ;
    wr32(sp0 - 0x14u, self + 0x14u);
    g->edx = self + 0x14u;
    g->esp = sp0 - 0x10u;
    t6 = cow_call_regs(g, COW_IMG(0x10118f70u), eax, rd32(self + 8u), g->edx, 0, 1, self + 0x14u);
    t7 = g->edx;
    g->edx = t7;
    return t6;
L_1014767b: ;
    eax = rd32(COW_IMG(0x103716a4u)) + rd32(self + 0x24u);
    goto L_1014768b;
L_10147688: ;
    eax = rd32(self + 0x24u);
    goto L_1014768b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10147620(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10147620(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
