/* f_0x1000c6e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1000c6e0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    if (rd32(rd32(COW_IMG(0x104566e8u)) + 0x18u) == 0u)
    {
        eax = rd32(COW_IMG(0x104566e8u));
    }
    else
    {
        wr32(sp0 - 0x14u, sp0 - 8u);
        wr32(sp0 - 0x18u, self + 0x814u);
        g->edx = self + 0x814u;
        g->esp = sp0 - 0x10u;
        t1 = cow_thiscall(g, COW_IMG(0x1000c900u), self, 2, self + 0x814u, sp0 - 8u);
        t2 = g->edx;
        if ((uint8_t)t1 == 0u)
        {
            eax = t1;
            edx = t2;
            goto L_1000c7a0;
        }
        edx = t2;
        wr32(sp0 - 0x14u, sp0 - 8u);
        wr32(sp0 - 0x18u, self + 0x81cu);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t3 = cow_thiscall(g, COW_IMG(0x1000c900u), self, 2, self + 0x81cu, sp0 - 8u);
        t4 = g->edx;
        if ((uint8_t)t3 == 0u)
        {
            eax = t3;
            edx = t4;
            goto L_1000c7a0;
        }
        wr32(sp0 - 0x14u, self + 0x82cu);
        g->edx = self + 0x82cu;
        g->esp = sp0 - 0x10u;
        t5 = cow_thiscall(g, COW_IMG(0x1000c850u), self, 1, self + 0x82cu);
        t6 = g->edx;
        if ((uint8_t)t5 == 0u)
        {
            eax = t5;
            edx = t6;
            goto L_1000c7a0;
        }
        edx = t6;
        wr32(sp0 - 0x14u, 0u);
        wr32(sp0 - 0x18u, 1u);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x20u, arg2);
        wr32(sp0 - 0x24u, arg1);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t7 = cow_thiscall(g, COW_IMG(0x1000a6e0u), self, 5, arg1, arg2, 0u, 1u, 0u);
        t8 = g->edx;
        wr32(self + 0x824u, t7);
        if (t7 != 0u)
        {
            eax = t7;
            goto L_1000c7b2;
        }
        eax = t7;
        edx = t8;
L_1000c7a0: ;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t9 = cow_stdcall(g, COW_IMG(0x1000d620u), 0);
        t10 = g->edx;
        t11 = cow_fastcall(g, COW_IMG(0x1000c7c0u), self, t10, 0);
        eax = t11;
    }
L_1000c7b2: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000c6e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1000c6e0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
