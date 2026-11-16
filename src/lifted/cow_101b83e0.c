/* f_0x101b83e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101b83e0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(sp0 + 4u) > 0x200u)
    {
        eax = rd32(sp0 + 4u);
        goto L_101b8496;
    }
    eax = rd32(sp0 + 4u);
    zf = rd32(sp0 + 4u) == 0x200u;
    if (zf) goto L_101b8478;
    if (eax == 4u) goto L_101b8443;
    if (eax != 8u)
    {
        edx = in_edx;
        goto L_101b84c0;
    }
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1015ec50u), COW_IMG(0x10621838u), 1, COW_IMG(0x103798ccu));
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_101b84c0;
    }
    eax = t1;
    edx = t2;
    wr8(self + 0x24u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103798ccu));
    t4 = g->edx;
    wr32(sp0 + 4u, COW_IMG(0x103798e0u));
    g->esp = sp0;
    g->edx = t4;
    return cow_tailcall(g, COW_IMG(0x1015e910u), t3, COW_IMG(0x10621838u), t4);
L_101b8443: ;
    if (rd8(self + 0x24u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x24u);
        edx = in_edx;
        goto L_101b84c0;
    }
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103798ccu), 1u, 0u);
    t5 = g->edx;
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103798e0u), 1u, 0u);
    t7 = g->edx;
    wr8(self + 0x24u, 0u);
    g->edx = t7;
    return t6;
L_101b8478: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t8 = cow_thiscall(g, COW_IMG(0x101ad670u), rd32(COW_IMG(0x10662da4u)), 2, 2u, 0u);
    t9 = g->edx;
    t10 = cow_call_regs(g, COW_IMG(0x101c68a0u), t8, rd32(COW_IMG(0x10662da0u)), t9, 1, 0);
    t11 = g->edx;
    g->edx = t11;
    return t10;
L_101b8496: ;
    if (eax == 0x400u)
    {
        edx = in_edx;
        goto L_101b84af;
    }
    if (eax != 0x2000u)
    {
        edx = in_edx;
        goto L_101b84c0;
    }
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x101c68a0u), eax, rd32(COW_IMG(0x10662da0u)), in_edx, 1, 0);
    t12 = g->edx;
    edx = t12;
L_101b84af: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t13 = cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, 0u);
    t14 = g->edx;
    wr8(self + 0x24u, 0u);
    eax = t13;
    edx = t14;
L_101b84c0: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b83e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b83e0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
