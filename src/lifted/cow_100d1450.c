/* f_0x100d1450 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_100d1450(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 12u);

    wr32(sp0 - 4u, in_esi);
    if (rd32(sp0 + 8u) != rd32(self + 0x9ecu))
    {
        eax = rd32(sp0 + 8u);
        edx = in_edx;
    }
    else
    {
        if ((rd32(rd32(arg1) + 0x24u) & 0x7fu) != 1u)
        {
            eax = arg1;
            edx = rd32(rd32(arg1) + 0x24u) & 0x7fu;
        }
        else
        {
            edx = rd32(rd32(arg1) + 0x24u) & 0x7fu;
            wr32(sp0 - 8u, arg1);
            g->eax = arg1;
            g->esp = sp0 - 4u;
            t1 = cow_fastcall(g, COW_IMG(0x10085060u), self, edx, 1, arg1);
            t2 = g->edx;
            eax = t1;
            edx = t2;
        }
        if (rd32(self + 0x7e4u) != 0u)
        {
            esi = rd32(self + 0x7e4u);
            wr32(sp0 - 8u, in_edi);
L_100d1483: ;
            t3 = rd32(esi + 0x1cu);
            t4 = rd32(esi + 4u);
            t5 = rd32(esi + 0x1cu);
            wr32(sp0 + 8u, t3);
            if (t5 == 0u)
            {
                eax = t3;
                edi = t4;
            }
            else
            {
                eax = t3;
                edi = t4;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 8u;
                t6 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 + 8u, 0);
                t7 = g->edx;
                if ((uint8_t)t6 != 1u)
                {
                    eax = t6;
                    edx = t7;
                }
                else
                {
                    eax = t6;
                    edx = t7;
                    if (rd8(esi + 0x20u) != 0u)
                    {
                        eax = (eax & 0xffffff00u) | rd8(esi + 0x20u);
                    }
                    else
                    {
                        eax = (eax & 0xffffff00u) | rd8(esi + 0x20u);
                        g->edx = edx;
                        g->esp = sp0 - 8u;
                        t8 = cow_call_regs(g, COW_IMG(0x1001b7b0u), eax, esi, g->edx, 1, 0);
                        t9 = g->edx;
                        eax = t8;
                        edx = t9;
                    }
                }
            }
            if (edi != 0u)
            {
                esi = edi;
                goto L_100d1483;
            }
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d1450(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d1450(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
