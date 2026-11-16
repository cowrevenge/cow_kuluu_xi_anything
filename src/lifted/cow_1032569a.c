/* f_0x1032569a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_1032569a(Guest* g)
{
    uint32_t ecx;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x109f82d8u)) == 0u)
    {
        if (arg2 >= rd32(arg4))
        {
            wr32(arg4, 0u);
        }
        else
        {
            if (arg2 == 0u)
            {
                loc_8 = 0u;
            }
            else
            {
                ecx = arg2 - 1u;
                loc_8 = 0u;
L_103256d6: ;
                t2 = cow_divs(g, rd32(sp0 + 4u), 0xau);
                t3 = cow_mods(g, rd32(sp0 + 4u), 0xau);
                wr8(ecx + rd32(arg3), (uint8_t)((uint8_t)t3 + 0x30u));
                t4 = cow_divs(g, rd32(sp0 + 4u), 0xau);
                t5 = cow_mods(g, rd32(sp0 + 4u), 0xau);
                wr32(sp0 + 4u, t4);
                if (ecx - 1u != 0xffffffffu)
                {
                    ecx = ecx - 1u;
                    loc_8 = loc_8 + 1u;
                    goto L_103256d6;
                }
                loc_8 = loc_8 + 1u;
            }
            wr32(arg3, loc_8 + rd32(arg3));
            wr32(arg4, rd32(arg4) - loc_8);
        }
    }
    else
    {
        t1 = rd32(sp0 + 4u);
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x10325709u), g->eax, g->ecx, in_edx, 1, 5, t1, arg3, arg4, in_edi, 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1032569a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1032569a(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
