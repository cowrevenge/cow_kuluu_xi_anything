/* f_0x101d37e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101d37e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + (uint8_t)arg1 * 4u + (rd32(sp0 + 8u) == 9u) * 0x144u + 0x4cu) != 0u)
    {
        eax = rd32(self + (uint8_t)arg1 * 4u + (rd32(sp0 + 8u) == 9u) * 0x144u + 0x4cu);
        ebp = self + (uint8_t)arg1 * 4u + (rd32(sp0 + 8u) == 9u) * 0x144u + 0x4cu;
        wr32(sp0 + 8u, 2u);
        edx = in_edx;
        esi = self + 0x4cu;
L_101d381b: ;
        edi = 0x51u;
L_101d3820: ;
        if (rd32(esi) != 0u)
        {
            ecx = rd32(esi);
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t1 = cow_call_regs(g, COW_IMG(0x101ce1e0u), eax, ecx, g->edx, 0, 2, 1u, 5u);
            t2 = g->edx;
            eax = t1;
            edx = t2;
        }
        if (edi != 1u)
        {
            esi = esi + 4u;
            edi = edi - 1u;
            goto L_101d3820;
        }
        esi = esi + 4u;
        t3 = rd32(sp0 + 8u) - 1u;
        t4 = rd32(sp0 + 8u);
        wr32(sp0 + 8u, t3);
        if (t4 != 1u)
        {
            eax = t3;
            goto L_101d381b;
        }
        eax = t3;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t5 = cow_call_regs(g, COW_IMG(0x101d39a0u), eax, self, g->edx, 0, 1, 0x80606060u);
        t6 = g->edx;
        g->edx = t6;
        t7 = cow_call_regs(g, COW_IMG(0x101ce1e0u), t5, rd32(ebp), g->edx, 0, 2, 2u, 0u);
        t8 = g->edx;
        g->edx = t8;
        t9 = cow_thiscall(g, COW_IMG(0x101ce9e0u), rd32(ebp), 1, 0xffffffffu);
        t10 = g->edx;
        t11 = cow_call_regs(g, COW_IMG(0x101cd990u), t9, rd32(ebp), g->edx, 1, 0);
        wr16(self + 0x7e6u, (uint16_t)t11);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d37e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d37e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
