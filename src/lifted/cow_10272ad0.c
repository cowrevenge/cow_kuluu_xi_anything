/* f_0x10272ad0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10272ad0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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

    if (rd32(sp0 + 4u) != 0xffffffffu)
    {
        esi = rd32(sp0 + 4u);
    }
    else
    {
        esi = rd32(COW_IMG(0x1099b0f4u));
    }
    if ((int32_t)esi >= (int32_t)rd32(COW_IMG(0x1099b1b0u)))
    {
        ecx = COW_IMG(0x1099b33cu) + esi * 0x7cu;
        edx = esi * 0x34u;
        goto L_10272b7b;
    }
    eax = esi * 0x7cu;
    ecx = COW_IMG(0x1099b33cu) + esi * 0x7cu;
    edx = esi * 0x34u;
    t1 = rd32(COW_IMG(0x1099b6b8u) + edx);
    wr32(sp0 + 4u, ecx);
    wr32(COW_IMG(0x1099b1e8u) + edx, t1);
    t2 = rd32(COW_IMG(0x1099b6b4u) + edx);
    wr32(COW_IMG(0x1099b1e4u) + edx, t2);
    t3 = rd32(COW_IMG(0x1099b6bcu) + edx);
    wr32(COW_IMG(0x1099b1ecu) + edx, t3);
    t4 = rd32(COW_IMG(0x1099b868u) + eax);
    wr32(ecx + 0x5cu, t4);
    t5 = rd32(COW_IMG(0x1099b86cu) + eax);
    wr32(ecx + 0x60u, t5);
    t6 = rd32(COW_IMG(0x1099b870u) + eax);
    wr32(ecx + 0x64u, t6);
    t7 = rd32(COW_IMG(0x1099b874u) + eax);
    wr32(ecx + 0x68u, t7);
    t8 = rd32(COW_IMG(0x1099b878u) + eax);
    wr32(ecx + 0x6cu, t8);
    t9 = rd32(COW_IMG(0x1099b87cu) + eax);
    wr32(ecx + 0x70u, t9);
    t10 = rd32(COW_IMG(0x1099b880u) + eax);
    wr32(ecx + 0x74u, t10);
    t11 = rd32(COW_IMG(0x1099b884u) + eax);
    wr32(ecx + 0x78u, t11);
    g->esp = sp0;
    g->edx = t10;
    return cow_tailcall(g, COW_IMG(0x1026e210u), t11, ecx, t10);
L_10272b7b: ;
    wr32(COW_IMG(0x1099b1e8u) + edx, 0x3f800000u);
    wr32(COW_IMG(0x1099b1e4u) + edx, 0x42200000u);
    wr32(COW_IMG(0x1099b1ecu) + edx, 0x49212200u);
    wr32(ecx + 0x5cu, 0u);
    wr32(ecx + 0x60u, 0u);
    wr32(ecx + 0x64u, 0u);
    wr32(ecx + 0x78u, 0x44480000u);
    wr32(sp0 + 4u, ecx);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1026e210u), 0u, ecx, edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10272ad0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10272ad0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
