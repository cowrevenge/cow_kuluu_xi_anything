/* f_0x102e7337 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_102e7337(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(self) == 0u)
    {
        eax = in_eax;
        ecx = self;
        edx = in_edx;
    }
    else
    {
        g->esp = sp0 - 0x10u;
        t1 = cow_fastcall(g, COW_IMG(0x102e7318u), self, in_edx, 0);
        t2 = g->ecx;
        t3 = g->edx;
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    if (arg4 != 0u)
    {
        edi = rd32(COW_IMG(0x10329258u));
    }
    else
    {
        edi = rd32(COW_IMG(0x10329164u));
    }
    if (arg3 == 0u) goto L_102e7370;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_thiscall(g, edi, ecx, 3, arg1, arg2, 2u);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 != 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        esi = t4;
        goto L_102e7380;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
L_102e7370: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t7 = cow_thiscall(g, edi, ecx, 3, arg1, arg2, 0xau);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 == 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        goto L_102e73af;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    esi = t7;
L_102e7380: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t10 = cow_thiscall(g, rd32(COW_IMG(0x1032915cu)), ecx, 2, arg1, esi);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(self + 8u, t10);
    if (t10 == 0u)
    {
        eax = t10;
        ecx = t11;
        edx = t12;
        goto L_102e73af;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t13 = cow_thiscall(g, rd32(COW_IMG(0x10329160u)), ecx, 2, arg1, esi);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(self, t13);
    if (t13 == 0u)
    {
        eax = t13;
        ecx = t14;
        edx = t15;
        goto L_102e73af;
    }
    eax = t13;
    ecx = t14;
    edx = t15;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t16 = cow_thiscall(g, rd32(COW_IMG(0x10329254u)), ecx, 1, eax);
    t17 = g->ecx;
    t18 = g->edx;
    wr32(self + 4u, t16);
    if (t16 != 0u) goto L_102e73bc;
    eax = t16;
    ecx = t17;
    edx = t18;
L_102e73af: ;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(COW_IMG(0x10329168u)), ecx, 0);
    eax = 0x88760b59u;
L_102e73be: ;
    return eax;
L_102e73bc: ;
    eax = 0u;
    goto L_102e73be;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e7337(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e7337(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
