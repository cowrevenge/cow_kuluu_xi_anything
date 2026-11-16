/* f_0x10139250 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10139250(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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

    if ((uint32_t)(int16_t)rd16(sp0 + 4u) == 2u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 2u;
        goto L_101392bb;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 2u;
    if (eax == 4u) goto L_1013926b;
    eax = eax - 4u;
    if (eax == 2u)
    {
        eax = eax - 2u;
        ecx = self;
        edx = in_edx;
        goto L_1013930c;
    }
    eax = eax - 2u;
L_10139268: ;
    return eax;
L_1013926b: ;
    if (rd32(COW_IMG(0x10578484u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x10578484u));
        goto L_101392a6;
    }
    ecx = rd32(COW_IMG(0x10578484u));
    if (rd32(ecx + 8u) == 0u) goto L_101392a6;
    eax = rd32(ecx + 8u);
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x10118db0u), eax, eax, g->edx, 0, 2, 0xau, 0u);
    t1 = rd32(COW_IMG(0x10578484u));
    wr32(sp0 + 8u, 0u);
    t2 = rd32(t1 + 8u);
    wr32(sp0 + 4u, t2);
    g->edx = t1;
    return cow_tailcall(g, COW_IMG(0x1015db80u), t2, COW_IMG(0x10621838u), t1);
L_101392a6: ;
    g->edx = in_edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10151340u), ecx, 1, 0u);
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_stdcall(g, COW_IMG(0x10151d90u), 0);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_101392bb: ;
    if (rd16(rd32(self + 8u) + 0x5au) != 2u) goto L_10139268;
    ecx = rd32(self + 8u);
    if ((uint32_t)(int16_t)rd16(sp0 + 8u) - 1u > 3u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 1u;
        edx = in_edx;
        goto L_1013930c;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 1u;
    t6 = rd32(COW_IMG(0x10139330u) + eax * 4u);
    switch (t6 - RD)
    {
    case 0x101392d7u: goto L_101392d7;
    case 0x101392ddu: goto L_101392dd;
    case 0x101392ebu: goto L_101392eb;
    case 0x101392fau: goto L_101392fa;
    default: rt_fatal(g, COW_IMG(0x101392d0u), "switch");
    }
    return 0;
L_101392d7: ;
    loc_8 = 5u;
L_101392fe: ;
    ecx = rd32(rd32(COW_IMG(0x10578484u)) + 8u);
    edx = rd32(COW_IMG(0x10578484u));
L_10139307: ;
    g->edx = edx;
    g->esp = sp0;
    t7 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, ecx, g->edx, 0, 2, loc_8, 0u);
    t8 = g->ecx;
    t9 = g->edx;
    eax = t7;
    ecx = t8;
    edx = t9;
L_1013930c: ;
    g->edx = edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10037e90u), ecx, 0);
    t10 = g->edx;
    t11 = rd32(COW_IMG(0x10578484u));
    wr32(sp0 + 8u, 0u);
    t12 = rd32(t11 + 8u);
    wr32(sp0 + 4u, t12);
    g->edx = t10;
    return cow_tailcall(g, COW_IMG(0x1015db80u), t11, COW_IMG(0x10621838u), t10);
L_101392dd: ;
    eax = rd32(COW_IMG(0x10578484u));
    ecx = rd32(rd32(COW_IMG(0x10578484u)) + 8u);
    edx = in_edx;
    loc_8 = 6u;
    goto L_10139307;
L_101392eb: ;
    ecx = rd32(rd32(COW_IMG(0x10578484u)) + 8u);
    edx = in_edx;
    loc_8 = 7u;
    goto L_10139307;
L_101392fa: ;
    loc_8 = 8u;
    goto L_101392fe;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10139250(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10139250(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
