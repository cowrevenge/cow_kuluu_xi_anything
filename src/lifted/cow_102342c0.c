/* f_0x102342c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102342c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x10668ed4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10668ed4u));
        t1 = (in_eax & 0xffffff00u) | rd8(self + 0x64u);
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t2 = cow_thiscall(g, COW_IMG(0x10233f70u), ecx, 1, t1);
        t3 = g->edx;
        if (t2 != 0u)
        {
            eax = t2;
            edx = t3;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t4 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, eax);
            t5 = g->edx;
            if (t4 != 0u)
            {
                eax = t4;
                edx = t5;
                if (rd32(eax + 0x1598u) != 0u)
                {
                    eax = rd32(eax + 0x1598u);
                    if (rd32(arg1 * 4u + eax) != 0u)
                    {
                        eax = rd32(arg1 * 4u + eax);
                        g->edx = edx;
                        g->esp = sp0 - 8u;
                        t6 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, eax);
                        t7 = g->edx;
                        if (t6 != 0u)
                        {
                            edx = t7;
                            esi = t6;
                            if (rd32(esi + 0x1588u) != 0u)
                            {
                                if (rd32(esi + 0x158cu) != 0u)
                                {
                                    eax = rd32(esi + 0x158cu);
                                    g->eax = eax;
                                    g->edx = edx;
                                    g->esp = sp0 - 8u;
                                    t8 = cow_thiscall(g, COW_IMG(0x10221c30u), self, 0);
                                    t9 = g->edx;
                                    g->edx = t9;
                                    t10 = cow_thiscall(g, COW_IMG(0x10221c50u), self, 0);
                                    t11 = g->edx;
                                    if (rd32(COW_IMG(0x1057847cu)) == 0u)
                                    {
                                        eax = t10;
                                    }
                                    else
                                    {
                                        eax = t10;
                                        ecx = rd32(COW_IMG(0x1057847cu));
                                        edx = t11;
                                        g->eax = eax;
                                        g->esp = sp0 - 8u;
                                        t12 = cow_thiscall(g, COW_IMG(0x10150ce0u), ecx, 2, 0u, 2u);
                                        eax = t12;
                                    }
                                    t13 = (eax & 0xffffff00u) | rd8(rd32(esi + 0x158cu));
                                    t14 = (rd32(esi + 0x158cu) & 0xffffff00u) | rd8(rd32(esi + 0x1588u));
                                    g->edi = self;
                                    g->esp = sp0 - 8u;
                                    cow_call_regs(g, COW_IMG(0x101f7ad0u), t13, g->ecx, g->edx, 1, 3, t14, t13, 0u);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102342c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102342c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
