/* f_0x10282100 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10282100(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 4u, in_esi);
    t1 = rd32(sp0 + 4u);
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x8a0u, t1);
    if (rd32(rd32(COW_IMG(0x1099d200u)) + 0x89cu) != rd32(rd32(COW_IMG(0x1099d200u)) + 0x8a8u))
    {
        ecx = rd32(rd32(COW_IMG(0x1099d200u)) + 0x89cu);
        esi = t1;
        wr32(sp0 - 8u, sp0 + 4u);
        wr32(sp0 - 0xcu, 0u);
        t3 = rd32(COW_IMG(0x1099d638u) + ecx * 0x28u);
        wr32(sp0 - 0x10u, t3);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1099d638u) + ecx * 0x28u)) + 0x3cu), sp0 + 4u, 3, t3, 0u, sp0 + 4u);
        eax = rd32(COW_IMG(0x1099d200u));
        edx = rd32(sp0 + 4u);
    }
    else
    {
        eax = rd32(COW_IMG(0x1099d200u));
        esi = t1;
        t2 = rd32(eax + 0x8fcu);
        wr32(sp0 + 4u, t2);
        edx = t2;
    }
    if (esi != rd32(eax + 0x8acu)) goto L_1028218e;
    t4 = rd32(eax + 0x900u);
    wr32(sp0 - 8u, t4);
    wr32(sp0 - 0xcu, edx);
    wr32(sp0 - 0x10u, rd32(COW_IMG(0x1066941cu)));
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x7cu), rd32(COW_IMG(0x1066941cu)), 3, rd32(COW_IMG(0x1066941cu)), edx, t4);
    if (rd32(rd32(COW_IMG(0x1099d200u)) + 0x89cu) == rd32(rd32(COW_IMG(0x1099d200u)) + 0x8a8u)) goto L_102821a5;
    ecx = rd32(rd32(COW_IMG(0x1099d200u)) + 0x89cu);
    t5 = rd32(sp0 + 4u);
    wr32(sp0 - 8u, t5);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(t5) + 8u), ecx, 1, t5);
    g->esi = rd32(sp0 - 4u);
    return;
L_1028218e: ;
    t6 = rd32(COW_IMG(0x1099d63cu) + esi * 0x28u);
    wr32(sp0 - 8u, t6);
    wr32(sp0 - 0xcu, edx);
    wr32(sp0 - 0x10u, rd32(COW_IMG(0x1066941cu)));
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x7cu), rd32(rd32(COW_IMG(0x1066941cu))), 3, rd32(COW_IMG(0x1066941cu)), edx, t6);
L_102821a5: ;
    g->esi = rd32(sp0 - 4u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10282100(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10282100(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
