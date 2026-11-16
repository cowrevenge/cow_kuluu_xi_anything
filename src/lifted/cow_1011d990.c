/* f_0x1011d990 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1011d990(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd32(sp0 + 4u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x1011c900u), 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        edx = t4;
        esi = t1;
        goto L_1011d9b0;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    esi = t1;
    t5 = (eax & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)rd8(esi);
    wr32(sp0 + 4u, t5);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x1011cec0u), t5, ecx, edx);
    return;
L_1011d9b0: ;
    t6 = rd8(esi) << 8u | (edx & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)rd8(esi + 1u);
    t7 = rd8(esi + 1u);
    wr32(sp0 + 4u, t6);
    g->esp = sp0;
    g->edx = (edx & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)t7;
    cow_tailcall(g, COW_IMG(0x1011cec0u), eax, t6, (edx & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)t7);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011d990(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1011d990(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
