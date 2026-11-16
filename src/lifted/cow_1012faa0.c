/* f_0x1012faa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1012faa0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7d0u) & 0x4000000u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7d0u);
        edx = in_edx;
        goto L_1012fb20;
    }
    eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7d0u);
    ecx = rd32(COW_IMG(0x104dfd98u));
    if (rd32(ecx + 0x2c7c8u) != 3u)
    {
        edx = in_edx;
        goto L_1012fb20;
    }
    wr32(ecx + 0x2c7d0u, eax & 0xfbffffffu);
    if (rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7ccu) == 2u)
    {
        eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7ccu);
        edx = in_edx;
        goto L_1012fb20;
    }
    eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7ccu);
    if (eax != 1u) goto L_1012faff;
    wr16(self + 0x1b4u, 0xdu);
    wr32(self + 0x1c0u, 0xffffffffu);
    wr32(self + 0x1bcu, 0xffffffffu);
    g->esp = sp0;
    cow_tailcall(g, COW_IMG(0x10130150u), 0xffffffffu, self, in_edx);
    return;
L_1012faff: ;
    wr32(self + 0x1c0u, 0xffffffffu);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10130120u), self, 0);
    t2 = g->edx;
    wr8(rd32(self + 8u) + 0x5du, 0u);
    wr16(self + 0x1b4u, 5u);
    eax = t1;
    edx = t2;
L_1012fb20: ;
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10130150u), eax, self, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012faa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1012faa0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
