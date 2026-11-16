/* f_0x10233ef0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10233ef0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
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

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10221a30u), self, 0);
    t1 = g->edx;
    t2 = rd8(self + 0x66u);
    g->edx = t1;
    cow_thiscall(g, COW_IMG(0x10221900u), self, 4, 0u, 0u, t2, t2);
    t3 = g->edx;
    t4 = rd8(self + 0x66u);
    g->edx = t3;
    cow_thiscall(g, COW_IMG(0x10221a80u), self, 2, t4, 0u);
    t5 = g->ecx;
    t6 = g->edx;
    t7 = rd8(self + 0x66u);
    wr32(self + 0x1cu, COW_IMG(0x10233dc0u));
    if ((uint8_t)t7 == 0u)
    {
        edx = t6;
        goto L_10233f43;
    }
    eax = 0u;
    edx = t6;
L_10233f2a: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0u, eax + 1u);
    t8 = g->edx;
    if ((int32_t)(eax + 1u) < (int32_t)rd8(self + 0x66u))
    {
        eax = eax + 1u;
        edx = t8;
        goto L_10233f2a;
    }
    edx = t8;
L_10233f43: ;
    if ((int32_t)rd8(self + 0x66u) < 8)
    {
        eax = rd8(self + 0x66u);
        edi = eax + 1u;
L_10233f50: ;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t9 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0x10u, edi);
        t10 = g->edx;
        if ((int32_t)(edi + 1u) < 9)
        {
            eax = t9;
            edx = t10;
            edi = edi + 1u;
            goto L_10233f50;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10233ef0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10233ef0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
