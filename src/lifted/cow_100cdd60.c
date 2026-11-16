/* f_0x100cdd60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=9 */
void cow_fn_100cdd60(Guest* g)
{
    double d10;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 0x70u) == 0u)
    {
        edx = in_edx;
        goto L_100cdd89;
    }
    ecx = rd32(self + 0x70u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x10097a60u), ecx, 0);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u) goto L_100cde5e;
    edx = t2;
    if (arg9 == 0u) goto L_100cde5e;
    if ((int32_t)arg9 <= 3)
    {
        edi = arg9;
        goto L_100cdd8e;
    }
L_100cdd89: ;
    edi = 3u;
L_100cdd8e: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x10084350u), self, 1, t3);
    t6 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        edx = t6;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t7 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
        t8 = g->edx;
        t9 = cow_thiscall(g, COW_IMG(0x10084370u), self, 1, t7);
        if ((uint8_t)t9 == 0u)
        {
            if (rd32(self + 0x80u) == 0u)
            {
                eax = rd32(self + 0x80u);
                if (rd8(self + 0xf8u) == 0u)
                {
                    if (arg1 != 0u)
                    {
                        if (arg1 != 2u)
                        {
                            eax = 0x3f696664u;
                        }
                        else
                        {
                            eax = 0x3f696264u;
                        }
                    }
                    else
                    {
                        if (arg2 == arg1)
                        {
                            eax = 0x3f696664u;
                        }
                        else
                        {
                            if (arg2 - arg1 != 1u)
                            {
                                eax = arg1;
                            }
                            else
                            {
                                eax = 0x3f696264u;
                            }
                        }
                    }
                }
                else
                {
                    if (arg1 == 0u)
                    {
                        eax = 0x3f6d6664u;
                    }
                    else
                    {
                        if (arg1 != 2u)
                        {
                            eax = 0x3f6d6664u;
                        }
                        else
                        {
                            eax = 0x3f6d6264u;
                        }
                    }
                }
                d10 = (double)(float)fr(g, (double)rdf32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x1035d738u) + edi * 4u));
                g->esp = sp0 - 8u;
                cow_thiscall(g, COW_IMG(0x100cd920u), self, 11, eax, cow_f2bits(d10), arg4, arg5, arg6, arg7, arg8, 0u, 0u, 0u, 0u);
            }
        }
    }
L_100cde5e: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100cdd60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100cdd60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 36u);
}
/* COW_ADAPTER END */
