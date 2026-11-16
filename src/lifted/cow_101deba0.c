/* f_0x101deba0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101deba0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)arg1 <= 0) goto L_101debc4;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664514u)), 7, COW_IMG(0x101dec10u), arg1, 0u, 0u, 0u, 1u, 0u);
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_101debc4: ;
    if (arg1 == 0u)
    {
        g->edx = in_edx;
        t3 = rd32(COW_IMG(0x1066348cu));
        g->esp = sp0;
        t4 = cow_call_regs(g, COW_IMG(0x101de750u), arg1, t3, g->edx, 1, 0);
        t5 = g->ecx;
        t6 = g->edx;
        if (t4 != 0u)
        {
            eax = t4;
            ecx = t5;
            edx = t6;
            t7 = (eax & 0xffffff00u) | rd8(eax + 2u);
            g->esp = sp0;
            cow_cdecl(g, COW_IMG(0x100e0250u), 2, t7, 0u);
        }
    }
    wr8(rd32(COW_IMG(0x1066348cu)) + 0x10u, 0u);
    t8 = rd32(rd32(COW_IMG(0x10664508u)) + 8u);
    g->eax = t8;
    t9 = rd32(COW_IMG(0x10664508u));
    g->esp = sp0;
    t10 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t9, 2, t8, 0u);
    t11 = g->edx;
    g->edx = t11;
    return t10;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101deba0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101deba0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
