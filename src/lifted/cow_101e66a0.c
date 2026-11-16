/* f_0x101e66a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101e66a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint8_t)arg2 == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        g->edx = in_edx;
        t1 = rd32(COW_IMG(0x10663524u));
        g->esp = sp0;
        t2 = cow_thiscall(g, COW_IMG(0x1020a420u), t1, 0);
        t3 = g->ecx;
        t4 = g->edx;
        if (t2 == 0u)
        {
            ecx = t3;
            edx = t4;
        }
        else
        {
            eax = t2;
            ecx = t3;
            edx = t4;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0;
            cow_cdecl(g, COW_IMG(0x100e9220u), 2, 1u, eax + 8u);
            t5 = g->ecx;
            t6 = g->edx;
            ecx = t5;
            edx = t6;
        }
    }
    if (rd32(COW_IMG(0x1066355cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x1066355cu));
    }
    else
    {
        eax = rd32(COW_IMG(0x1066355cu));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0;
        t7 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
        t8 = g->edx;
        wr32(COW_IMG(0x1066355cu), 0u);
        eax = t7;
        edx = t8;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t9 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037f3e4u));
    t10 = g->edx;
    g->edx = t10;
    return t9;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e66a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e66a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
