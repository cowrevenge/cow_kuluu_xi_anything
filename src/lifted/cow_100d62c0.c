/* f_0x100d62c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100d62c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_edi);
    wr32(sp0 - 0x10u, sp0 - 4u);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(rd32(self) + 0x1e0u), self, 1, sp0 - 4u);
    t1 = g->edx;
    if (self == 0u)
    {
        eax = self;
        edx = t1;
        loc_4 = self;
        loc_8 = in_ebx;
        loc_c = in_edi;
    }
    else
    {
        edx = t1;
        if (rd32(self) == 0u)
        {
            eax = self;
            loc_4 = self;
            loc_8 = in_ebx;
            loc_c = in_edi;
        }
        else
        {
            g->eax = self;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t2 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 4u, 0);
            t3 = g->edx;
            if ((uint8_t)t2 == 0u)
            {
                eax = t2;
                edx = t3;
                loc_4 = self;
                loc_8 = in_ebx;
                loc_c = in_edi;
            }
            else
            {
                eax = t2;
                t4 = rd32(sp0 - 4u);
                wr32(sp0 - 0x10u, t4);
                g->eax = eax;
                g->esp = sp0 - 0xcu;
                t5 = cow_fastcall(g, COW_IMG(0x10085060u), self, t4, 1, t4);
                t6 = g->edx;
                eax = t5;
                edx = t6;
                loc_4 = rd32(sp0 - 4u);
                loc_8 = rd32(sp0 - 8u);
                loc_c = rd32(sp0 - 0xcu);
            }
        }
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t7 = cow_thiscall(g, COW_IMG(0x1002b5a0u), self + 0x674u, 0);
    t8 = g->edx;
    if (t7 == 0u)
    {
        eax = t7;
        edx = t8;
        esi = in_esi;
        loc_4 = rd32(sp0 - 4u);
    }
    else
    {
        eax = t7;
        edx = t8;
        edi = t7;
        if (rd32(edi) == 0u)
        {
            esi = in_esi;
            loc_4 = rd32(sp0 - 4u);
        }
        else
        {
            ecx = rd32(edi);
            wr32(sp0 - 0x10u, in_esi);
            loc_10 = in_esi;
            loc_4 = rd32(sp0 - 4u);
L_100d6312: ;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t9 = cow_thiscall(g, COW_IMG(0x10029e70u), ecx, 0);
            t10 = g->edx;
            if (t9 == 0u)
            {
                eax = t9;
                edx = t10;
                loc_4 = rd32(sp0 - 4u);
            }
            else
            {
                edx = t10;
                esi = t9;
                if (rd32(esi) == 0u)
                {
                    eax = rd32(esi);
                    loc_4 = rd32(sp0 - 4u);
                    goto L_100d6357;
                }
                eax = rd32(esi);
L_100d6323: ;
                t11 = rd32(eax + 8u);
                wr32(sp0 - 4u, t11);
                if (rd32(eax + 8u) == 0u)
                {
                    loc_4 = t11;
                }
                else
                {
                    eax = t11;
                    loc_4 = t11;
                    if (rd32(eax) != 0u)
                    {
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x10u;
                        t12 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 4u, 0);
                        t13 = g->edx;
                        if ((uint8_t)t12 == 0u)
                        {
                            edx = t13;
                            loc_4 = rd32(sp0 - 4u);
                        }
                        else
                        {
                            edx = t13;
                            t14 = rd32(sp0 - 4u);
                            wr32(sp0 - 0x14u, t14);
                            g->esp = sp0 - 0x10u;
                            cow_fastcall(g, COW_IMG(0x10085060u), self, edx, 1, t14);
                            t15 = g->edx;
                            edx = t15;
                            loc_4 = rd32(sp0 - 4u);
                        }
                    }
                }
                if (rd32(rd32(esi) + 4u) != 0u)
                {
                    eax = rd32(rd32(esi) + 4u);
                    esi = rd32(esi) + 4u;
                    goto L_100d6323;
                }
                eax = rd32(rd32(esi) + 4u);
            }
L_100d6357: ;
            if (rd32(rd32(edi) + 4u) != 0u)
            {
                ecx = rd32(rd32(edi) + 4u);
                edi = rd32(edi) + 4u;
                loc_10 = rd32(sp0 - 0x10u);
                goto L_100d6312;
            }
            esi = rd32(sp0 - 0x10u);
        }
    }
    g->ebx = rd32(sp0 - 8u);
    g->esi = esi;
    g->edi = rd32(sp0 - 0xcu);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d62c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d62c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
