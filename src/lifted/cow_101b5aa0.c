/* f_0x101b5aa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101b5aa0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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

    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 8u;
    t2 = cow_call_regs(g, COW_IMG(0x10193850u), in_eax, g->ecx, g->edx, 1, 1, 3u);
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_thiscall(g, rd32(t1 + 0x3cu), self, 1, t2);
    t5 = g->edx;
    if (rd8(self + 0xf0ecu) != 0u)
    {
        eax = (t4 & 0xffffff00u) | rd8(self + 0xf0ecu);
        edx = t5;
        goto L_101b5ad6;
    }
    eax = (t4 & 0xffffff00u) | rd8(self + 0xf0ecu);
    edx = t5;
    if (rd32(self + 0xf0f4u) != 1u) goto L_101b5ad6;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t6 = cow_thiscall(g, COW_IMG(0x10190b50u), rd32(COW_IMG(0x1066269cu)), 0);
    t7 = g->edx;
    eax = t6;
    edx = t7;
L_101b5ae1: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t10 = cow_thiscall(g, COW_IMG(0x1015ec50u), COW_IMG(0x10621838u), 1, COW_IMG(0x103798ccu));
    t11 = g->edx;
    if ((uint8_t)t10 != 0u)
    {
        eax = t10;
        edx = t11;
    }
    else
    {
        eax = t10;
        edx = t11;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t12 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103798e0u));
        t13 = g->edx;
        eax = t12;
        edx = t13;
    }
    wr8(self + 0xf100u, 0u);
    g->edx = edx;
    return eax;
L_101b5ad6: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t8 = cow_stdcall(g, COW_IMG(0x101aeb80u), 0);
    t9 = g->edx;
    eax = t8;
    edx = t9;
    goto L_101b5ae1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b5aa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b5aa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
