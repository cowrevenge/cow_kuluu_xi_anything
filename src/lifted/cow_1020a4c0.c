/* f_0x1020a4c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1020a4c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t in_edx = g->edx;

    wr32(self + 0x34u, 0u);
    wr8(self + 0x49u, 1u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x101f7020u), self, 3, 0u, 0u, 1u);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd32(COW_IMG(0x106644dcu)) == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    else
    {
        ecx = t2;
        edx = t3;
        esi = rd32(COW_IMG(0x106644dcu));
        if (rd32(esi + 0x1cu) != 0u)
        {
            eax = rd32(esi + 0x1cu);
            g->esp = sp0 - 8u;
            cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
            t4 = g->ecx;
            t5 = g->edx;
            wr32(esi + 0x1cu, 0u);
            ecx = t4;
            edx = t5;
        }
        if (rd32(esi + 0x20u) == 0u)
        {
            eax = rd32(esi + 0x20u);
        }
        else
        {
            eax = rd32(esi + 0x20u);
            g->eax = eax;
            g->esp = sp0 - 8u;
            t6 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
            t7 = g->ecx;
            t8 = g->edx;
            wr32(esi + 0x20u, 0u);
            eax = t6;
            ecx = t7;
            edx = t8;
        }
        wr32(esi, 0xffffffffu);
    }
    if (rd32(COW_IMG(0x106644e0u)) != 0u)
    {
        esi = rd32(COW_IMG(0x106644e0u));
        if (rd32(esi + 0x1cu) != 0u)
        {
            eax = rd32(esi + 0x1cu);
            g->esp = sp0 - 8u;
            cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
            t9 = g->ecx;
            t10 = g->edx;
            wr32(esi + 0x1cu, 0u);
            ecx = t9;
            edx = t10;
        }
        if (rd32(esi + 0x20u) == 0u)
        {
            eax = rd32(esi + 0x20u);
        }
        else
        {
            eax = rd32(esi + 0x20u);
            g->eax = eax;
            g->esp = sp0 - 8u;
            t11 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
            wr32(esi + 0x20u, 0u);
            eax = t11;
        }
        wr32(esi, 0xffffffffu);
    }
    wr32(COW_IMG(0x106644e4u), 0u);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020a4c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020a4c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
