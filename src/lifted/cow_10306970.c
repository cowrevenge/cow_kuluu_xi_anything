/* f_0x10306970 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10306970(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->eax = rd32(arg1 + 4u);
    g->edx = in_edx;
    t1 = rd32(arg1 + 4u);
    g->esp = sp0 - 8u;
    t2 = cow_thiscall_cdecl(g, rd32(t1), self, 3, arg1, 1u, 0x30u);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(arg1 + 0x19cu, t2);
    wr8(t2 + 8u, 0u);
    wr32(t2, COW_IMG(0x10306548u));
    t5 = rd32(arg1 + 0x64u) * rd32(arg1 + 0x5cu);
    wr32(t2 + 0x28u, t5);
    if (rd32(arg1 + 0x110u) != 2u)
    {
        ecx = t3;
        edx = t4;
        esi = t2;
        wr32(esi + 0x20u, 0u);
        wr32(esi + 4u, COW_IMG(0x10306603u));
        wr32(esi + 0xcu, COW_IMG(0x10306634u));
    }
    else
    {
        ecx = t3;
        edx = t4;
        esi = t2;
        t6 = rd32(esi + 0x28u);
        wr32(esi + 4u, COW_IMG(0x1030655du));
        wr32(esi + 0xcu, COW_IMG(0x1030678au));
        g->eax = rd32(arg1 + 4u);
        g->edx = edx;
        t7 = rd32(arg1 + 4u);
        g->esp = sp0 - 8u;
        t8 = cow_thiscall_cdecl(g, rd32(t7 + 4u), ecx, 3, arg1, 1u, t6);
        t9 = g->ecx;
        t10 = g->edx;
        wr32(esi + 0x20u, t8);
        ecx = t9;
        edx = t10;
    }
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10306498u), arg1, ecx, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10306970(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10306970(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
