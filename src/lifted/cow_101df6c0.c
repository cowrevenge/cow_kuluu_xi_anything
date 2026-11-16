/* f_0x101df6c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101df6c0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t in_edi = g->edi;

    g->esp = sp0 - 8u;
    t1 = cow_fastcall(g, COW_IMG(0x101c7fe0u), rd32(COW_IMG(0x106631e8u)), in_edx, 0);
    t2 = g->edx;
    g->edi = self;
    t3 = cow_fastcall(g, COW_IMG(0x101ebfd0u), rd32(COW_IMG(0x1066369cu)), t2, 0);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x101ec2d0u), rd32(COW_IMG(0x106636a0u)), 0);
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1036f818u));
    t8 = g->edx;
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037f220u));
    t10 = g->edx;
    if (rd32(self + 0x98u) == 0u)
    {
        eax = t9;
        edx = t10;
    }
    else
    {
        eax = t9;
        edx = t10;
        esi = rd32(self + 0x98u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t11 = cow_thiscall(g, COW_IMG(0x101c8230u), esi, 0);
        t12 = g->ecx;
        t13 = g->edx;
        t14 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t12, t13, 1, 1, esi);
        t15 = g->edx;
        wr32(self + 0x98u, 0u);
        eax = t14;
        edx = t15;
    }
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101df6c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101df6c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
