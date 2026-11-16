/* f_0x10073b20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10073b20(Guest* g)
{
    uint32_t eax;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((rd16(rd32(arg1) + 0x18u) & 0x7fffu) != 0u)
    {
        eax = arg1;
        edx = 0x7fffu;
    }
    else
    {
        ecx = rd32(arg1);
        if (rd8(ecx + 0x1au) >> 2u & 1u)
        {
            eax = (arg1 & 0xffffff00u) | rd8(ecx + 0x1au) >> 2u;
            edx = 0x7fffu;
            goto L_10073b76;
        }
        g->edx = 0x7fffu;
        g->esp = sp0 - 4u;
        t1 = cow_thiscall(g, COW_IMG(0x10072240u), ecx, 0);
        t2 = g->edx;
        if ((rd16(t1 + 0x18u) & (uint16_t)t2) != 0u)
        {
            eax = t1;
            edx = t2;
            goto L_10073b7b;
        }
        edx = t2;
        edi = t1;
        if (rd32(edi + 8u) == 0u)
        {
            eax = rd32(edi + 8u);
            ecx = 0u;
        }
        else
        {
            eax = rd32(edi + 8u);
            ecx = rd32(eax);
        }
        if (ecx != 0u)
        {
L_10073b5b: ;
            if (rd32(ecx + 8u) == 0u)
            {
                eax = rd32(ecx + 8u);
                esi = 0u;
            }
            else
            {
                eax = rd32(ecx + 8u);
                esi = rd32(eax);
            }
            g->edx = edx;
            g->esp = sp0 - 8u;
            t3 = cow_call_regs(g, COW_IMG(0x100721f0u), eax, ecx, g->edx, 1, 0);
            t4 = g->edx;
            if (esi != 0u)
            {
                ecx = esi;
                edx = t4;
                goto L_10073b5b;
            }
            eax = t3;
            edx = t4;
        }
        ecx = edi;
L_10073b76: ;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t5 = cow_call_regs(g, COW_IMG(0x100721f0u), eax, ecx, g->edx, 1, 0);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
L_10073b7b: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10073b20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10073b20(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
