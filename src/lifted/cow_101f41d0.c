/* f_0x101f41d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101f41d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 == 9u)
    {
        ebp = rd32(COW_IMG(0x10666e6cu));
    }
    else
    {
        ebp = rd32(COW_IMG(0x10666e30u));
    }
    if ((int32_t)rd8(ebp + rd32(ebp + 0xcu) + 0x18u) > 0)
    {
        ebx = rd8(ebp + rd32(ebp + 0xcu) + 0x18u);
        edx = in_edx;
        edi = 0u;
L_101f41fd: ;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t1 = cow_thiscall(g, COW_IMG(0x1021cb80u), ebp, 1, edi);
        t2 = g->edx;
        if (t1 == 0u)
        {
            edx = t2;
        }
        else
        {
            edx = t2;
            esi = t1;
            g->ecx = rd32(COW_IMG(0x10621808u));
            g->edx = edx;
            t3 = rd32(COW_IMG(0x10621808u));
            g->esp = sp0 - 0x14u;
            t4 = cow_stdcall(g, COW_IMG(0x1015bc40u), 1, rd16(esi));
            t5 = g->ecx;
            t6 = g->edx;
            if (t4 == 0u)
            {
                edx = t6;
            }
            else
            {
                eax = t4;
                ecx = t5;
                edx = t6;
                wr8(eax + 0x1b3u, (uint8_t)(rd8(eax + 0x1b3u) + 1u));
                if (rd16(eax + 4u) == 0xcu)
                {
                    if ((rd8(esi + 0x11u) & 0x40u) != 0u)
                    {
                        wr32(self + 8u, rd32(self + 8u) + 1u);
                    }
                }
                else
                {
                    ecx = rd16(eax + 4u) - 0xcu;
                    if (ecx == 2u)
                    {
                        if ((rd8(esi + 0x11u) & 0x40u) != 0u)
                        {
                            wr32(self + 0xcu, rd32(self + 0xcu) + 1u);
                        }
                    }
                }
                wr8(eax + 0x1b3u, (uint8_t)(rd8(eax + 0x1b3u) - 1u));
            }
        }
        if ((int32_t)(edi + 1u) < (int32_t)ebx)
        {
            edi = edi + 1u;
            goto L_101f41fd;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f41d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101f41d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
