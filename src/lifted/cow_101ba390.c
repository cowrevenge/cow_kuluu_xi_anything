/* f_0x101ba390 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101ba390(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    t1 = arg1 & ((int32_t)arg1 < 0) - 1u;
    wr32(self + 4u, t1);
    if ((arg1 & ((int32_t)arg1 < 0) - 1u) == 1u)
    {
        eax = t1;
        edx = in_edx;
        goto L_101ba441;
    }
    if (rd32(self + 0xcu) != 0u) goto L_101ba448;
    eax = rd32(self + 0xcu);
    wr32(sp0 - 0x14u, 0x13u);
    wr32(sp0 - 0x18u, COW_IMG(0x1037c938u));
    g->eax = eax;
    g->edx = in_edx;
    t2 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall(g, COW_IMG(0x101c4b80u), t2, 2, COW_IMG(0x1037c938u), 0x13u);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(self + 0x10u, t3);
    if ((int32_t)t3 < 0)
    {
        eax = t3;
        edx = t5;
        goto L_101ba43a;
    }
    eax = t3;
    ecx = t4;
    edx = t5;
    wr32(sp0 - 0x14u, COW_IMG(0x1037c930u));
    wr32(sp0 - 0x18u, eax);
    wr32(sp0 - 0x1cu, self + 0xcu);
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x101907a0u), 4, self + 0xcu, eax, COW_IMG(0x1037c930u), rd32(sp0 - 0x10u));
    wr32(sp0 - 0x14u, 0u);
    t6 = rd32(self + 0x10u);
    wr32(sp0 - 0x18u, t6);
    t7 = rd32(self + 0xcu);
    wr32(sp0 - 0x1cu, t7);
    wr32(sp0 - 0x20u, 0x13u);
    wr32(sp0 - 0x24u, COW_IMG(0x1037c938u));
    g->eax = t7;
    g->edx = t6;
    t8 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0x10u;
    t9 = cow_thiscall(g, COW_IMG(0x101c47d0u), t8, 5, COW_IMG(0x1037c938u), 0x13u, t7, t6, 0u);
    t10 = g->ecx;
    t11 = g->edx;
    if ((int32_t)t9 < 0)
    {
        eax = t9;
        edx = t11;
        goto L_101ba43a;
    }
    ecx = t10;
    t12 = rd32(self + 0x10u);
    wr32(sp0 - 0x14u, t12);
    wr32(sp0 - 0x18u, sp0 - 8u);
    t13 = rd32(self + 0xcu);
    wr32(sp0 - 0x1cu, t13);
    wr32(sp0 - 8u, 0u);
    g->eax = sp0 - 8u;
    g->edx = t12;
    g->esp = sp0 - 0x10u;
    t14 = cow_cdecl(g, COW_IMG(0x1031056cu), 3, t13, sp0 - 8u, t12);
    t15 = g->edx;
    wr32(self + 8u, t14);
    if (t14 != 0u) goto L_101ba448;
    eax = t14;
    edx = t15;
L_101ba43a: ;
    wr32(self + 4u, 1u);
L_101ba441: ;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x101ba2d0u), self, 0);
L_101ba448: ;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ba390(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ba390(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
