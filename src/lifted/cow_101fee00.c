/* f_0x101fee00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101fee00(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
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

    if (rd16(self + 0x14u) == 2u) goto L_101fee52;
    eax = (in_eax & 0xffff0000u) | rd16(self + 0x14u);
    if ((uint16_t)eax == 7u) goto L_101fee52;
    if (rd32(self + 0x1cu) != 0u)
    {
        eax = rd32(self + 0x1cu);
        edx = in_edx;
        goto L_101fee95;
    }
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 1, 0x6b4u);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        goto L_101fee90;
    }
    eax = t1;
    edx = t2;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x101c5be0u), eax, 8, 8u, 0x12cu, self, COW_IMG(0x101fedd0u), COW_IMG(0x103d3c84u), 0x14au, 0xfu, 0x114u);
    t4 = g->edx;
    eax = t3;
    edx = t4;
L_101fee92: ;
    wr32(self + 0x1cu, eax);
L_101fee95: ;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x101c68a0u), eax, rd32(COW_IMG(0x10662da0u)), edx, 1, 0);
    t9 = rd32(self + 0x1cu);
    cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, t9);
    wr8(rd32(self + 8u) + 0x62u, 0u);
    return;
L_101fee52: ;
    if (rd32(self + 0x1cu) != 0u)
    {
        eax = rd32(self + 0x1cu);
        edx = in_edx;
        goto L_101fee95;
    }
    g->esp = sp0 - 4u;
    t5 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 1, 0x6b4u);
    t6 = g->edx;
    if (t5 == 0u)
    {
        edx = t6;
        goto L_101fee90;
    }
    eax = t5;
    edx = t6;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, COW_IMG(0x101c5be0u), eax, 8, 7u, 0xfu, self, COW_IMG(0x101fedd0u), self + 0x188u, 0x14au, 0xfu, 0x114u);
    t8 = g->edx;
    eax = t7;
    edx = t8;
    goto L_101fee92;
L_101fee90: ;
    eax = 0u;
    goto L_101fee92;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fee00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101fee00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
