/* f_0x101bb9e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_101bb9e0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd8(self) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        if (rd32(self + 0x208u) == 0u)
        {
            edx = in_edx;
        }
        else
        {
            edi = rd32(self + 0x208u);
            g->eax = in_eax;
            g->edx = in_edx;
            g->esp = sp0 - 0x10u;
            t1 = cow_thiscall(g, COW_IMG(0x101bca30u), edi, 0);
            t2 = g->ecx;
            t3 = g->edx;
            g->edx = t3;
            cow_cdecl(g, COW_IMG(0x10311bf0u), 1, edi);
            t4 = g->edx;
            edx = t4;
        }
        wr32(self + 0x208u, 0u);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t5 = cow_thiscall(g, COW_IMG(0x101bc720u), self, 0);
        t6 = g->edx;
        wr8(self, 0u);
        wr32(self + 0x224u, 0u);
        wr32(self + 0x228u, 0u);
        eax = t5;
        edx = t6;
    }
    if (rd32(self + 0x210u) != 0u)
    {
        edi = rd32(self + 0x210u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t7 = cow_thiscall(g, COW_IMG(0x101bca30u), edi, 0);
        t8 = g->ecx;
        t9 = g->edx;
        g->edx = t9;
        t10 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, edi);
        t11 = g->edx;
        wr32(self + 0x210u, 0u);
        wr32(self + 0x218u, 0xffffffffu);
        wr32(self + 0x21cu, 0xffffffffu);
        wr32(self + 0x220u, 0xffffffffu);
        eax = t10;
        edx = t11;
    }
    if (rd32(self + 0x20cu) != 0u)
    {
        edi = rd32(self + 0x20cu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t12 = cow_thiscall(g, COW_IMG(0x101bca30u), edi, 0);
        t13 = g->ecx;
        t14 = g->edx;
        t15 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, edi);
        wr32(self + 0x20cu, 0u);
        wr32(self + 0x214u, 0xffffffffu);
        eax = t15;
    }
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101bb9e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101bb9e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
