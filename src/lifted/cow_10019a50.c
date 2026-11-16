/* f_0x10019a50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_10019a50(Guest* g)
{
    double d1;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    d1 = (double)rdf32(sp0 + 0xcu);
    t2 = (uint32_t)(int16_t)rd16(self + 0x32u);
    if (!(d1 < (double)rdf32(COW_IMG(0x1032a1a8u))))
    {
        ecx = t2;
        loc_4 = t2;
        if (ecx != 0u)
        {
            eax = self + 0x3au;
            edx = in_edx;
            edi = 0u;
            loc_8 = self + 0x3au;
L_10019a83: ;
            if ((int8_t)rd8(rd32(eax) + rd32(COW_IMG(0x1045f028u))) < 0)
            {
                esi = rd32(eax);
                eax = (rd32(COW_IMG(0x1045f028u)) & 0xffffff00u) | rd8(rd32(eax) + rd32(COW_IMG(0x1045f028u)));
                if ((eax & 0x40u) == 0x40u)
                {
                    edx = (edx & 0xffffff00u) | (eax & 0x40u);
                }
                else
                {
                    edx = (edx & 0xffffff00u) | (eax & 0x40u);
                    if ((eax & 0x3fu) == 0u)
                    {
                        eax = eax & 0x3fu;
                        g->edx = arg1;
                        g->esp = sp0 - 0x18u;
                        t4 = cow_call_regs(g, COW_IMG(0x10019b30u), eax, self, g->edx, 0, 5, arg1, edi, esi, arg2, arg4);
                        t5 = g->edx;
                        if ((uint8_t)t4 == 0u)
                        {
                            edx = t5;
                        }
                        else
                        {
                            edx = t5;
                            wr8(esi + rd32(COW_IMG(0x1045f028u)), rd8(esi + rd32(COW_IMG(0x1045f028u))) | 1u);
                        }
                    }
                    else
                    {
                        eax = eax & 0x3fu;
                        if (eax == 1u)
                        {
                            g->edx = edx;
                            g->esp = sp0 - 0x18u;
                            cow_call_regs(g, COW_IMG(0x10019ee0u), arg3, self, g->edx, 0, 6, arg1, edi, esi, arg2, arg3, arg4);
                            t3 = g->edx;
                            edx = t3;
                        }
                    }
                }
            }
            if (edi + 1u < loc_4)
            {
                eax = loc_8 + 0x54u;
                edi = edi + 1u;
                loc_8 = loc_8 + 0x54u;
                goto L_10019a83;
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10019a50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10019a50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
