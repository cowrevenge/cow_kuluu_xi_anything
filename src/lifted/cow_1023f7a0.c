/* f_0x1023f7a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1023f7a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0xcu, in_ebp);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, COW_IMG(0x1015edb0u), COW_IMG(0x10621838u), 0);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        edx = t2;
        g->esp = sp0 - 0x14u;
        t3 = cow_fastcall(g, COW_IMG(0x1015dce0u), COW_IMG(0x10621838u), edx, 0);
        t4 = g->edx;
        if ((uint8_t)t3 != 0u)
        {
            eax = t3;
            edx = t4;
        }
        else
        {
            eax = t3;
            edx = t4;
            if (rd8(sp0 + 4u) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(sp0 + 4u);
            }
            else
            {
                if (rd32(COW_IMG(0x1066903cu)) == 0u)
                {
                    eax = rd32(COW_IMG(0x1066903cu));
                }
                else
                {
                    eax = rd32(COW_IMG(0x1066903cu));
                    if (rd32(eax + 8u) != 0u)
                    {
                        ecx = rd32(eax + 8u);
                        if (rd32(COW_IMG(0x104e1d4cu)) == 0u)
                        {
                            edi = ecx;
                        }
                        else
                        {
                            eax = rd32(COW_IMG(0x104e1d4cu));
                            edi = ecx;
                            t5 = rd32(eax + 4u);
                            wr32(sp0 - 8u, t5);
                            t6 = rd32(eax + 8u);
                            wr32(sp0 - 4u, t6);
                            edx = t6;
                        }
                        wr32(sp0 - 0x18u, sp0 + 4u);
                        wr32(sp0 - 0x1cu, sp0 - 8u);
                        wr8(sp0 + 4u, 0u);
                        g->edx = edx;
                        g->esp = sp0 - 0x14u;
                        t7 = cow_call_regs(g, COW_IMG(0x10118cb0u), sp0 + 4u, edi, g->edx, 0, 2, sp0 - 8u, sp0 + 4u);
                        t8 = g->edx;
                        if ((int16_t)t7 <= 0)
                        {
                            eax = t7;
                            edx = t8;
                        }
                        else
                        {
                            eax = t7;
                            edx = t8;
                            esi = (uint32_t)(int16_t)t7;
                            if ((int32_t)esi < 4)
                            {
                                wr32(sp0 - 0x18u, 0u);
                                wr32(sp0 - 0x1cu, esi);
                                g->esp = sp0 - 0x14u;
                                cow_call_regs(g, COW_IMG(0x10118db0u), eax, edi, g->edx, 0, 2, esi, 0u);
                                t9 = rd32(edi + 4u);
                                wr16(t9 + 0x1au, (uint16_t)esi);
                                wr32(rd32(COW_IMG(0x1066903cu)) + 0x28u, esi - 1u);
                                t10 = rd32(self + 8u);
                                wr8(t10 + 0x5du, 1u);
                                wr32(self + 0x14u, 1u);
                                wr32(self + 0x18u, 0u);
                                g->eax = 1u;
                                g->edx = t9;
                                t11 = cow_thiscall(g, COW_IMG(0x10037b30u), t10, 0);
                                t12 = g->edx;
                                eax = t11;
                                edx = t12;
                            }
                        }
                    }
                }
            }
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023f7a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1023f7a0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
