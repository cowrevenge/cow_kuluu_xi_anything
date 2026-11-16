/* f_0x101d79e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101d79e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;

    if ((uint32_t)(int8_t)rd8(rd32(sp0 + 4u) + 6u) + 0x1cu > 0x1eu)
    {
        eax = rd32(sp0 + 4u);
        ecx = (uint32_t)(int8_t)rd8(rd32(sp0 + 4u) + 6u) + 0x1cu;
        goto L_101d7a1a;
    }
    eax = rd32(sp0 + 4u);
    ecx = (uint32_t)(int8_t)rd8(rd32(sp0 + 4u) + 6u) + 0x1cu;
    t1 = rd32(COW_IMG(0x101d7a8cu) + rd8(COW_IMG(0x101d7a9cu) + ecx) * 4u);
    switch (t1 - RD)
    {
    case 0x101d79ffu: goto L_101d79ff;
    case 0x101d7a08u: goto L_101d7a08;
    case 0x101d7a11u: goto L_101d7a11;
    case 0x101d7a1au: goto L_101d7a1a;
    default: rt_fatal(g, COW_IMG(0x101d79f8u), "switch");
    }
    return;
L_101d79ff: ;
    wr8(COW_IMG(0x1066344du), 1u);
L_101d7a21: ;
    wr8(COW_IMG(0x1066344eu), 0u);
    wr8(COW_IMG(0x1066344cu), 1u);
    t2 = rd16(eax + 0xcu);
    wr16(COW_IMG(0x10663452u), (uint16_t)t2);
    t3 = rd32(eax + 0x10u);
    wr32(COW_IMG(0x10663454u), t3);
    t4 = rd32(eax + 8u);
    wr32(COW_IMG(0x10663458u), t4);
    t5 = cow_divu(g, (uint16_t)t2 * t4, 0x78u);
    t6 = cow_modu(g, (uint16_t)t2 * t4, 0x78u);
    wr16(COW_IMG(0x10663450u), (uint16_t)(t6 + 0xb4u));
    if (rd32(rd32(COW_IMG(0x10663400u)) + 8u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x10663400u)) + 8u);
        ecx = 0x78u;
        edx = rd32(COW_IMG(0x10663400u));
        goto L_101d7a7e;
    }
    eax = rd32(rd32(COW_IMG(0x10663400u)) + 8u);
    edx = rd32(COW_IMG(0x10663400u));
    if (rd8(eax + 0x6eu) == 0u) goto L_101d7a8b;
    ecx = rd8(eax + 0x6eu);
L_101d7a7e: ;
    wr32(sp0 + 4u, 1u);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x101d7ac0u), eax, ecx, edx);
    return;
L_101d7a08: ;
    wr8(COW_IMG(0x1066344du), 0u);
    goto L_101d7a21;
L_101d7a11: ;
    wr8(COW_IMG(0x1066344du), 3u);
    goto L_101d7a21;
L_101d7a1a: ;
    wr8(COW_IMG(0x1066344du), 2u);
    goto L_101d7a21;
L_101d7a8b: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d79e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d79e0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
