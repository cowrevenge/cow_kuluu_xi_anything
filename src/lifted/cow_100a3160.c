/* f_0x100a3160 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100a3160(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        if (rd8(arg1) != 1u)
        {
            eax = in_eax;
            ecx = self;
            edx = in_edx;
        }
        else
        {
            if ((int8_t)rd8(arg1 + 1u) < 0)
            {
                eax = (in_eax & 0xffffff00u) | rd8(arg1 + 1u);
                ecx = self;
                edx = in_edx;
            }
            else
            {
                eax = (in_eax & 0xffffff00u) | rd8(arg1 + 1u);
                g->ecx = self;
                g->edx = in_edx;
                g->esp = sp0 - 4u;
                cow_stdcall(g, COW_IMG(0x100a31d0u), 0);
                t1 = g->ecx;
                t2 = g->edx;
                if ((int32_t)rd32(arg1 + 4u) <= 0)
                {
                    eax = rd32(arg1 + 4u);
                    ecx = t1;
                    edx = t2;
                }
                else
                {
                    ecx = t1;
                    edx = t2;
                    if ((int32_t)rd32(arg1 + 8u) <= 0)
                    {
                        eax = rd32(arg1 + 8u);
                    }
                    else
                    {
                        eax = rd32(arg1 + 8u);
                        if (rd32(arg1 + 0x14u) == 0u)
                        {
                            ecx = rd32(arg1 + 0x14u);
                        }
                        else
                        {
                            ecx = rd32(arg1 + 0x14u);
                            if ((int32_t)rd32(arg1 + 0x10u) <= 0)
                            {
                                eax = rd32(arg1 + 0x10u);
                            }
                            else
                            {
                                eax = rd32(arg1 + 0x10u);
                                wr8(eax + ecx - 1u, 0u);
                                t3 = rd32(arg1 + 0x14u);
                                g->eax = t3;
                                g->edx = edx;
                                g->esp = sp0 - 4u;
                                t4 = cow_thiscall_cdecl(g, COW_IMG(0x100a3240u), ecx, 1, t3);
                                t5 = g->ecx;
                                t6 = g->edx;
                                eax = t4;
                                ecx = t5;
                                edx = t6;
                            }
                        }
                    }
                }
            }
        }
        g->edx = edx;
        g->esp = sp0 - 4u;
        t7 = cow_call_regs(g, COW_IMG(0x100a2fd0u), eax, ecx, g->edx, 1, 6, arg1, 0u, 0u, 0u, COW_IMG(0x10485178u), 0x400u);
        t8 = g->edx;
        eax = t7;
        edx = t8;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a3160(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a3160(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
