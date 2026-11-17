/* f_0x101e0f20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101e0f20(Guest* g)
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

    if (rd32(self + 0x70u) != 2u)
    {
        eax = rd32(self + 0x70u);
        goto L_101e0fa9;
    }
    eax = rd32(self + 0x70u);
    if (rd8(sp0 + 4u) == 0u) goto L_101e0f65;
    t1 = rd32(COW_IMG(0x106634c8u));
    wr8(t1 + 0x10u, 1u);
    t2 = rd32(rd32(COW_IMG(0x106634c4u)) + 8u);
    g->esp = sp0 - 4u;
    cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t2, 2, t2, 0u);
    if (rd32(self + 8u) == 0u) goto L_101e0ff4;
    esi = rd32(self + 8u);
    wr8(esi + 0x63u, 0u);
    return;
L_101e0f65: ;
    t3 = rd32(self + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t4 = cow_call_regs(g, COW_IMG(0x1015e790u), t3, COW_IMG(0x10621838u), g->edx, 0, 2, t3, 1u);
    t5 = g->edx;
    if (rd32(COW_IMG(0x10578204u)) == 0u)
    {
        eax = t4;
        edx = t5;
        goto L_101e0fcc;
    }
    eax = t4;
    edx = t5;
    esi = rd32(COW_IMG(0x10578204u));
    t6 = rd32(esi + 8u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, t6, 1u);
    t8 = g->edx;
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x1013bf40u), esi, 0);
    t10 = g->edx;
    wr32(sp0 + 4u, COW_IMG(0x10370018u));
    g->esp = sp0;
    g->edx = t10;
    cow_tailcall(g, COW_IMG(0x1015e910u), t9, COW_IMG(0x10621838u), t10);
    return;
L_101e0fa9: ;
    if (eax != 1u) goto L_101e0fdf;
    t11 = rd32(self + 8u);
    t12 = rd8(sp0 + 4u);
    wr8(self + 0x4au, (uint8_t)t12);
    g->edx = (in_edx & 0xffffff00u) | t12;
    g->esp = sp0 - 4u;
    t13 = cow_call_regs(g, COW_IMG(0x1015e790u), t11, COW_IMG(0x10621838u), g->edx, 0, 2, t11, 1u);
    t14 = g->edx;
    if (rd8(self + 0x4au) != 0u) goto L_101e0ff4;
    eax = (t13 & 0xffffff00u) | rd8(self + 0x4au);
    edx = t14;
L_101e0fcc: ;
    wr32(sp0 + 4u, COW_IMG(0x10370018u));
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x1015e910u), eax, COW_IMG(0x10621838u), edx);
    return;
L_101e0fdf: ;
    t15 = rd32(self + 8u);
    wr8(self + 0x4au, rd8(sp0 + 4u));
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, t15, 1u);
L_101e0ff4: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e0f20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101e0f20(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
