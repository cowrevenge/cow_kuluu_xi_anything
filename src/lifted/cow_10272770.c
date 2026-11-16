/* f_0x10272770 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10272770(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (arg1 != 0xffffffffu)
    {
        edi = arg1;
    }
    else
    {
        edi = rd32(COW_IMG(0x1099b0f8u));
    }
    if (rd32(COW_IMG(0x1099c514u) + edi * 0x14u) & 1u)
    {
        eax = rd32(COW_IMG(0x1099c514u) + edi * 0x14u);
        esi = COW_IMG(0x1099c514u) + edi * 0x14u;
        if (arg2 != 0xffffffffu)
        {
            if (arg2 == 0u)
            {
                eax = (eax & 0xffffff00u) | (eax & 0xfdu);
            }
            else
            {
                eax = (eax & 0xffffff00u) | (uint8_t)(eax | 2u);
            }
        }
        else
        {
            eax = eax ^ 2u;
        }
        wr32(esi, eax);
        if ((eax & 2u) != 0u)
        {
            t1 = COW_IMG(0x1099b3a4u) + rd32(COW_IMG(0x1099b0f4u)) * 0x7cu;
            wr32(sp0 - 0x1cu, t1);
            wr32(sp0 - 0x20u, sp0 - 0x10u);
            g->eax = sp0 - 0x10u;
            g->edx = t1;
            g->esp = sp0 - 0x18u;
            t2 = cow_cdecl(g, COW_IMG(0x1027a720u), 2, sp0 - 0x10u, t1);
            t3 = g->edx;
            wr32(sp0 - 0x24u, sp0 - 0x10u);
            cow_call_regs(g, COW_IMG(0x1027afd0u), t2, g->ecx, g->edx, 1, 3, sp0 - 0x10u, sp0 - 0x10u, rd32(sp0 - 0x1cu));
            t4 = COW_IMG(0x1099bd1cu) + edi * 0x7cu;
            wr32(sp0 - 0x28u, t4);
            wr32(sp0 - 0x2cu, sp0 - 0x10u);
            wr32(sp0 - 0x30u, esi + 4u);
            g->esp = sp0 - 0x24u;
            cow_cdecl(g, COW_IMG(0x1027b190u), 3, esi + 4u, sp0 - 0x10u, t4);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10272770(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10272770(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
