/* f_0x1013d630 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1013d630(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    if (rd8(self + rd8(self + 0x380u) * 0xcu + 0x383u) != 0xffu) goto L_1013d661;
    eax = rd8(self + 0x380u) * 3u;
    if (rd8(self + 0x382u) != 1u)
    {
        loc_4 = self;
        goto L_1013d74f;
    }
    g->esp = sp0;
    cow_tailcall(g, COW_IMG(0x1013cec0u), eax, self, in_edx);
    return;
L_1013d661: ;
    edi = 0u;
    loc_4 = self;
L_1013d664: ;
    if (rd8(edi + self + rd8(self + 0x380u) * 0xcu + 0x383u) != 1u)
    {
        eax = (rd8(self + 0x380u) & 0xffffff00u) | rd8(edi + self + rd8(self + 0x380u) * 0xcu + 0x383u);
        edx = edi + rd8(self + 0x380u) * 0xcu;
        loc_4 = (loc_4 & 0xffffff00u) | rd8(edi + self + rd8(self + 0x380u) * 0xcu + 0x383u);
        if ((uint8_t)eax < 0xau) goto L_1013d6a7;
        if ((uint8_t)eax > 0x1du) goto L_1013d6a7;
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x1013d1f0u), self, 2, edi, loc_4);
    }
    else
    {
        eax = (rd8(self + 0x380u) & 0xffffff00u) | rd8(edi + self + rd8(self + 0x380u) * 0xcu + 0x383u);
        edx = edi + rd8(self + 0x380u) * 0xcu;
        loc_4 = (loc_4 & 0xffffff00u) | rd8(edi + self + rd8(self + 0x380u) * 0xcu + 0x383u);
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x1013cec0u), self, 0);
    }
L_1013d744: ;
    if ((int32_t)(edi + 1u) < 12)
    {
        edi = edi + 1u;
        goto L_1013d664;
    }
L_1013d74f: ;
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_1013d6a7: ;
    if ((uint8_t)eax < 0x1eu) goto L_1013d6c1;
    if ((uint8_t)eax > 0x27u) goto L_1013d6c1;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x1013d290u), eax, self, g->edx, 0, 2, edi, loc_4);
    goto L_1013d744;
L_1013d6c1: ;
    if ((uint8_t)eax < 0x32u) goto L_1013d6d8;
    if ((uint8_t)eax > 0x34u) goto L_1013d6d8;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x1013d380u), eax, self, g->edx, 0, 2, edi, loc_4);
    goto L_1013d744;
L_1013d6d8: ;
    if ((uint8_t)eax != 0x3cu)
    {
        if ((uint8_t)eax != 0x3du)
        {
            if ((uint8_t)eax != 0x3eu)
            {
                if ((uint8_t)eax != 0x46u)
                {
                    if ((uint8_t)eax != 0x47u)
                    {
                        if ((uint8_t)eax != 0x48u)
                        {
                            if ((uint8_t)eax == 0x50u)
                            {
                                g->esp = sp0 - 0xcu;
                                cow_call_regs(g, COW_IMG(0x1013d5f0u), eax, self, g->edx, 0, 1, edi);
                            }
                        }
                        else
                        {
                            g->esi = self;
                            g->esp = sp0 - 0xcu;
                            cow_call_regs(g, COW_IMG(0x1013d560u), eax, self, g->edx, 0, 2, edi, 1u);
                        }
                    }
                    else
                    {
                        g->esi = self;
                        g->esp = sp0 - 0xcu;
                        cow_call_regs(g, COW_IMG(0x1013d4d0u), eax, self, g->edx, 0, 2, edi, 1u);
                    }
                }
                else
                {
                    g->edi = edi;
                    g->esp = sp0 - 0xcu;
                    cow_call_regs(g, COW_IMG(0x1013d440u), eax, self, g->edx, 0, 2, edi, 1u);
                }
            }
            else
            {
                g->esi = self;
                g->esp = sp0 - 0xcu;
                cow_call_regs(g, COW_IMG(0x1013d560u), eax, self, g->edx, 0, 2, edi, 0u);
            }
        }
        else
        {
            g->esi = self;
            g->esp = sp0 - 0xcu;
            cow_call_regs(g, COW_IMG(0x1013d4d0u), eax, self, g->edx, 0, 2, edi, 0u);
        }
    }
    else
    {
        g->edi = edi;
        g->esp = sp0 - 0xcu;
        cow_call_regs(g, COW_IMG(0x1013d440u), eax, self, g->edx, 0, 2, edi, 0u);
    }
    goto L_1013d744;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013d630(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1013d630(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
