/* f_0x102226a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_102226a0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if (rd32(self + 0x40u) == 0u)
    {
        eax = rd32(self + 0x40u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x40u);
        if ((int32_t)rd32(self + 0x44u) <= 2)
        {
            edi = 0u;
        }
        else
        {
            edi = rd32(self + 0x20u) + 0x10u;
        }
        if (rd32(edi) == 0u)
        {
            edx = in_edx;
        }
        else
        {
            wr32(sp0 - 0x14u, sp0 - 4u);
            wr32(sp0 - 0x18u, sp0 - 8u);
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10221be0u), self, 2, sp0 - 8u, sp0 - 4u);
            wr32(sp0 - 0x14u, 0u);
            t1 = rd32(self + 0x68u) + rd32(sp0 - 8u);
            wr32(sp0 - 8u, t1);
            t2 = rd32(self + 0x6cu) + rd32(sp0 - 4u);
            wr32(sp0 - 4u, t2);
            g->eax = rd32(self + 0x6cu);
            g->ecx = t1;
            g->edx = t2;
            t3 = rd32(self + 0x6cu);
            t4 = cow_cdecl(g, COW_IMG(0x102225f0u), 1, 0u);
            t5 = g->ecx;
            t6 = g->edx;
            wr32(sp0 - 0x14u, t4);
            wr32(sp0 - 0x18u, t6);
            wr32(sp0 - 0x1cu, t5);
            g->edx = t6;
            t7 = cow_thiscall(g, COW_IMG(0x10222470u), edi, 3, t5, t6, t4);
            t8 = g->edx;
            eax = t7;
            edx = t8;
        }
    }
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t9 = cow_fastcall(g, COW_IMG(0x10221f50u), self, edx, 0);
    t10 = g->edx;
    g->edx = t10;
    return t9;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102226a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102226a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
