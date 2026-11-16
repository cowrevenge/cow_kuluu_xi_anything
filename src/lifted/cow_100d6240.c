/* f_0x100d6240 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100d6240(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((int32_t)rd32(sp0 + 4u) >= 0)
    {
        eax = rd32(sp0 + 4u);
        goto L_100d6251;
    }
    eax = rd32(sp0 + 4u);
    if ((int32_t)eax > 9)
    {
        edx = in_edx;
        goto L_100d629e;
    }
L_100d6251: ;
    wr32(sp0 + 4u, self + 0x674u);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x1002b5a0u), self + 0x674u, 0);
    t2 = g->edx;
    if (rd32(t1) == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_100d629e;
    }
    edx = t2;
    ebx = rd32(t1);
    ebp = (eax + 0x30u) << 0x18u | 0x706577u;
L_100d6272: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall(g, COW_IMG(0x10029e70u), ebx, 0);
    t4 = g->edx;
    if (rd32(t3) == 0u)
    {
        eax = t3;
        edx = t4;
        goto L_100d6297;
    }
    edx = t4;
    esi = rd32(t3);
    edi = 0u;
L_100d6281: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t5 = cow_thiscall(g, COW_IMG(0x1002c710u), rd32(sp0 + 4u), 1, edi);
    t6 = g->edx;
    if (t5 == ebp)
    {
        edx = t6;
        goto L_100d62a7;
    }
    eax = t5;
    edx = t6;
    if (rd32(esi + 4u) != 0u)
    {
        esi = rd32(esi + 4u);
        edi = edi + 1u;
        goto L_100d6281;
    }
L_100d6297: ;
    if (rd32(ebx + 4u) != 0u)
    {
        ebx = rd32(ebx + 4u);
        goto L_100d6272;
    }
L_100d629e: ;
    g->edx = edx;
    return eax & 0xffffff00u;
L_100d62a7: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t7 = cow_thiscall(g, COW_IMG(0x1002c750u), rd32(sp0 + 4u), 1, edi);
    t8 = g->edx;
    g->edx = t8;
    return t7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d6240(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d6240(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
