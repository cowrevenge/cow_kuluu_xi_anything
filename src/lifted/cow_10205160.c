/* f_0x10205160 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10205160(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 96u);

    if (rd32(COW_IMG(0x106643a8u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x106643a8u));
        wr32(sp0 - 0x44u, in_esi);
        if (rd32(arg1) == (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)))
        {
            eax = arg1;
            edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
        }
        else
        {
            edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
            wr32(sp0 - 0x44u, 0u);
            wr32(sp0 - 0x48u, 1u);
            t1 = rd32(arg1 + 4u);
            wr32(sp0 - 0x4cu, t1);
            g->edx = edx;
            g->esp = sp0 - 0x40u;
            t2 = cow_call_regs(g, COW_IMG(0x102031f0u), t1, g->ecx, g->edx, 0, 3, t1, 1u, 0u);
            t3 = g->edx;
            if ((uint8_t)t2 == 0u)
            {
                eax = t2;
                edx = t3;
            }
            else
            {
                edx = t3;
                wr32(sp0 - 0x44u, rd32(COW_IMG(0x106643e0u)));
                g->ecx = rd32(COW_IMG(0x106643e0u));
                t4 = rd32(COW_IMG(0x106643e0u));
                g->esp = sp0 - 0x40u;
                t5 = cow_cdecl(g, COW_IMG(0x10076810u), 1, t4);
                t6 = g->ecx;
                wr32(sp0 - 0x48u, t5);
                wr32(sp0 - 0x4cu, COW_IMG(0x10385488u));
                wr32(sp0 - 0x50u, COW_IMG(0x10358098u));
                wr32(sp0 - 0x54u, sp0 - 0x40u);
                g->ecx = t6;
                g->edx = sp0 - 0x40u;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x10358098u), COW_IMG(0x10385488u), t5, rd32(sp0 - 0x44u));
                t7 = g->ecx;
                t8 = g->edx;
                wr32(sp0 - 0x58u, 0u);
                wr32(sp0 - 0x5cu, sp0 - 0x40u);
                g->edx = t8;
                g->esp = sp0 - 0x54u;
                t9 = cow_cdecl(g, COW_IMG(0x10080dc0u), 2, sp0 - 0x40u, 0u);
                t10 = g->edx;
                eax = t9;
                edx = t10;
            }
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10205160(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10205160(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
