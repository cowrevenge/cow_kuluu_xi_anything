/* f_0x101cd2d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101cd2d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(sp0 + 4u);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, COW_IMG(0x101ceac0u), t1, 0);
    t3 = g->edx;
    g->edx = t3;
    t4 = rd32(self + 0x14u);
    t5 = cow_thiscall(g, COW_IMG(0x101ceae0u), t1, 0);
    t6 = g->edx;
    if (arg2 > 3u)
    {
        edx = t6;
        ebx = t4 - t2;
        ebp = t1;
        edi = rd32(self + 0x1cu) - t5;
        goto L_101cd344;
    }
    edx = t6;
    ebx = t4 - t2;
    ebp = t1;
    edi = rd32(self + 0x1cu) - t5;
    t7 = rd32(COW_IMG(0x101cd398u) + arg2 * 4u);
    switch (t7 - RD)
    {
    case 0x101cd302u: goto L_101cd302;
    case 0x101cd322u: goto L_101cd322;
    default: rt_fatal(g, COW_IMG(0x101cd2fbu), "switch");
    }
    return;
L_101cd302: ;
    g->eax = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t12 = cow_thiscall(g, COW_IMG(0x101ceaf0u), ebp, 0);
    t13 = g->edx;
    wr32(sp0 + 4u, t12 - edi);
    g->eax = t12 - edi;
    g->edx = t13;
    t14 = cow_thiscall(g, COW_IMG(0x101ceb40u), self, 0);
    t15 = g->edx;
    eax = t14;
    ecx = rd32(sp0 + 4u);
    edx = t15;
    edi = ebx;
L_101cd340: ;
    ebx = ecx - eax;
L_101cd344: ;
    t16 = rd32(self + 0x20u) - 1u;
    t17 = rd32(self + 0x20u);
    wr32(self + 0x20u, t16);
    if ((int32_t)(t17 - 1u) >= 0)
    {
        eax = t16;
    }
    else
    {
        eax = t16;
        wr32(self + 0x20u, 3u);
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t18 = cow_thiscall(g, COW_IMG(0x101ceac0u), ebp, 0);
    t19 = g->edx;
    wr32(self + 0x14u, ebx + t18);
    g->eax = ebx + t18;
    g->edx = t19;
    t20 = cow_thiscall(g, COW_IMG(0x101ceae0u), ebp, 0);
    t21 = g->edx;
    wr32(self + 0x1cu, edi + t20);
    t22 = rd32(self + 0x20u);
    cow_thiscall(g, COW_IMG(0x101cdf50u), self, 1, t22);
    t23 = rd32(self + 0x1cu);
    t24 = rd32(self + 0x18u);
    t25 = rd32(self + 0x14u);
    t26 = (uint32_t)(int8_t)rd8(self + 6u);
    cow_thiscall(g, COW_IMG(0x101cdd90u), self, 4, t26, t25, t24, t23);
    return;
L_101cd322: ;
    g->eax = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t8 = cow_thiscall(g, COW_IMG(0x101ceaf0u), ebp, 0);
    t9 = g->edx;
    wr32(sp0 + 4u, t8 - edi);
    g->eax = t8 - edi;
    g->edx = t9;
    t10 = cow_thiscall(g, COW_IMG(0x101ceb40u), self, 0);
    t11 = g->edx;
    eax = t10;
    ecx = rd32(sp0 + 4u);
    edx = t11;
    edi = ebx;
    goto L_101cd340;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cd2d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101cd2d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
