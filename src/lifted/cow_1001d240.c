/* f_0x1001d240 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1001d240(Guest* g)
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
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
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

    if (rd32(self + 8u) == 0u)
    {
        eax = in_eax;
        goto L_1001d264;
    }
    edx = rd32(self + 8u);
    if (rd8(COW_IMG(0x10456d48u)) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10456d48u));
        goto L_1001d268;
    }
    if ((rd32(COW_IMG(0x10456d4cu)) & 0xff000000u) != 0x80000000u)
    {
        eax = rd32(COW_IMG(0x10456d4cu)) & 0xff000000u;
        goto L_1001d268;
    }
    eax = rd32(COW_IMG(0x10456d4cu)) & 0xff000000u;
L_1001d264: ;
    return eax & 0xffffff00u;
L_1001d268: ;
    if (rd8(self + 4u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 4u);
        goto L_1001d311;
    }
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1000d660u), rd32(COW_IMG(0x104566e8u)), 0);
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
    }
    else
    {
        eax = t1;
        t2 = rd32(self + 0x14u);
        t3 = rd32(self + 0xcu);
        g->eax = eax;
        g->edx = t3;
        g->esp = sp0 - 4u;
        t4 = cow_thiscall(g, COW_IMG(0x10009e20u), rd32(COW_IMG(0x1045666cu)), 3, t3, t2, 0u);
        t5 = g->edx;
        t6 = cow_fastcall(g, COW_IMG(0x100096b0u), rd32(COW_IMG(0x1045666cu)), t5, 6, 0u, 0u, 1u, 0u, 0x3f800000u, 0u);
        t7 = g->edx;
        t8 = cow_fastcall(g, COW_IMG(0x1000a1d0u), rd32(COW_IMG(0x1045666cu)), t7, 2, 0u, 0u);
        eax = t8;
    }
    if (rd8(rd32(COW_IMG(0x1045666cu)) + 0x158u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(rd32(COW_IMG(0x1045666cu)) + 0x158u);
        ecx = rd32(COW_IMG(0x1045666cu));
        eax = rd32(ecx + (uint8_t)eax * 4u + 0x70u);
    }
    else
    {
        ecx = rd32(COW_IMG(0x1045666cu));
        eax = rd32(ecx + 0x94u);
    }
    t9 = rd32(self + 0x10u);
    t10 = rd32(self + 8u);
    g->eax = t9;
    g->edx = t10;
    g->esp = sp0 - 4u;
    t11 = cow_thiscall(g, COW_IMG(0x10009e20u), ecx, 3, t10, t9, eax);
    t12 = g->edx;
    t13 = cow_fastcall(g, COW_IMG(0x100096b0u), rd32(COW_IMG(0x1045666cu)), t12, 6, 0u, 0u, 1u, 0u, 0x3f800000u, 0u);
    wr8(self + 4u, 1u);
    return (t13 & 0xffffff00u) | 1u;
L_1001d311: ;
    if (rd8(rd32(COW_IMG(0x1045666cu)) + 0x158u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(rd32(COW_IMG(0x1045666cu)) + 0x158u);
        ecx = rd32(COW_IMG(0x1045666cu));
        goto L_1001d336;
    }
    ecx = rd32(COW_IMG(0x1045666cu));
    t14 = rd32(ecx + 0x94u);
    t15 = rd32(self + 0x10u);
    g->eax = t15;
    g->esp = sp0 - 4u;
    t16 = cow_thiscall(g, COW_IMG(0x10009e20u), ecx, 3, edx, t15, t14);
    return (t16 & 0xffffff00u) | 1u;
L_1001d336: ;
    t17 = rd32(ecx + (uint8_t)eax * 4u + 0x70u);
    t18 = rd32(self + 0x10u);
    g->eax = t18;
    g->esp = sp0 - 4u;
    t19 = cow_thiscall(g, COW_IMG(0x10009e20u), ecx, 3, edx, t18, t17);
    return (t19 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001d240(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1001d240(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
