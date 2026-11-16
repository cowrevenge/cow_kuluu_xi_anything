/* f_0x10154860 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10154860(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x78u) == 1u) goto L_10154879;
    eax = rd32(self + 0x78u) - 1u;
    if (eax != 1u) goto L_101548bd;
    eax = rd32(self + 0x88u);
    edx = in_edx;
    zf = rd32(self + 0x88u) == 0u;
L_101548a8: ;
    if (zf)
    {
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x10154840u), self, 0);
        wr32(self + 0x78u, 0u);
    }
L_101548b4: ;
    wr32(self + 0x88u, 0u);
    return;
L_10154879: ;
    if (rd32(self + 0x88u) != 0u) goto L_101548b4;
    t1 = rd32(self + 0x84u);
    t2 = rd32(self + 0x7cu);
    g->esp = sp0 - 0x10u;
    t3 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, in_edx, 1, 1, 0x3fu);
    t4 = g->edx;
    g->edx = t4;
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, COW_IMG(0x101c4a10u), rd32(COW_IMG(0x10662dccu)), 3, t3, t2, t1);
    t6 = g->edx;
    eax = t5;
    edx = t6;
    zf = (uint8_t)t5 == 0u;
    goto L_101548a8;
L_101548bd: ;
    wr32(self + 0x88u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10154860(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10154860(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
