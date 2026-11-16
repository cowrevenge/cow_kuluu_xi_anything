/* f_0x1012f7e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1012f7e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7d0u) & 0x4000000u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7d0u);
        edx = in_edx;
        goto L_1012f870;
    }
    eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7d0u);
    ecx = rd32(COW_IMG(0x104dfd98u));
    if (rd32(ecx + 0x2c7c8u) != 0xcu)
    {
        edx = in_edx;
        goto L_1012f870;
    }
    wr32(ecx + 0x2c7d0u, eax & 0xfbffffffu);
    if (rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7ccu) == 2u)
    {
        eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7ccu);
        edx = in_edx;
        goto L_1012f870;
    }
    eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7ccu);
    if (eax != 1u) goto L_1012f851;
    t1 = rd32(self + 8u);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t2 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), in_edx, 2, t1, 0u);
    t3 = rd32(self + 8u);
    wr8(t3 + 0x5du, 0u);
    wr16(self + 0x1b4u, 9u);
    wr32(self + 0x1c0u, 0xffffffffu);
    g->esp = sp0;
    g->edx = t3;
    cow_tailcall(g, COW_IMG(0x10130150u), t2, self, t3);
    return;
L_1012f851: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t4 = g->edx;
    t5 = rd32(self + 8u);
    wr8(t5 + 0x5du, 0u);
    wr16(self + 0x1b4u, 5u);
    wr32(self + 0x1c0u, 0xffffffffu);
    eax = t5;
    edx = t4;
L_1012f870: ;
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10130150u), eax, self, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012f7e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1012f7e0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
