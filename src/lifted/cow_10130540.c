/* f_0x10130540 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10130540(Guest* g)
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
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(arg2 + 0x14d0u) == 0u) goto L_101306df;
    eax = rd32(arg2 + 0x14d0u);
    if (rd16(eax) == 0u) goto L_101306df;
    if (rd32(arg2 + 0x14d8u) == 0u) goto L_101306df;
    eax = rd32(arg2 + 0x14d8u);
    if (rd16(eax) == 0u) goto L_101306df;
    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, rd32(t1 + 0x54u), self, 0);
    t3 = g->edx;
    if (t2 != 0xbu)
    {
        edx = t3;
        goto L_101305a2;
    }
    if (rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 2u & 1u)
    {
        edx = rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 2u;
        goto L_101305a2;
    }
    edx = rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 2u;
    g->edx = edx;
    return 0x80404040u;
L_101305a2: ;
    g->eax = rd32(self);
    g->edx = edx;
    t4 = rd32(self);
    g->esp = sp0 - 0xcu;
    t5 = cow_thiscall(g, rd32(t4 + 0x54u), self, 0);
    t6 = g->edx;
    if (t5 != 0xcu)
    {
        edx = t6;
        goto L_101305cd;
    }
    if (rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 3u & 1u)
    {
        edx = rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 3u;
        goto L_101305cd;
    }
    edx = rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 3u;
    g->edx = edx;
    return 0x80404040u;
L_101305cd: ;
    g->eax = rd32(self);
    g->edx = edx;
    t7 = rd32(self);
    g->esp = sp0 - 0xcu;
    t8 = cow_thiscall(g, rd32(t7 + 0x54u), self, 0);
    t9 = g->edx;
    if (t8 != 0xdu)
    {
        edx = t9;
        goto L_101305f8;
    }
    if (rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 4u & 1u)
    {
        edx = rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 4u;
        goto L_101305f8;
    }
    edx = rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 4u;
    g->edx = edx;
    return 0x80404040u;
L_101305f8: ;
    g->eax = rd32(self);
    g->edx = edx;
    t10 = rd32(self);
    g->esp = sp0 - 0xcu;
    t11 = cow_thiscall(g, rd32(t10 + 0x54u), self, 0);
    t12 = g->edx;
    if (t11 != 0xeu)
    {
        edx = t12;
        goto L_10130623;
    }
    if (rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 5u & 1u)
    {
        edx = rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 5u;
        goto L_10130623;
    }
    edx = rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 5u;
    g->edx = edx;
    return 0x80404040u;
L_10130623: ;
    g->eax = rd32(self);
    g->edx = edx;
    t13 = rd32(self);
    g->esp = sp0 - 0xcu;
    t14 = cow_thiscall(g, rd32(t13 + 0x54u), self, 0);
    t15 = g->edx;
    if (t14 != 0xfu)
    {
        edx = t15;
        goto L_1013064e;
    }
    if (rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 6u & 1u)
    {
        edx = rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 6u;
        goto L_1013064e;
    }
    edx = rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 6u;
    g->edx = edx;
    return 0x80404040u;
L_1013064e: ;
    g->eax = rd32(self);
    g->edx = edx;
    t16 = rd32(self);
    g->esp = sp0 - 0xcu;
    t17 = cow_thiscall(g, rd32(t16 + 0x54u), self, 0);
    t18 = g->ecx;
    t19 = g->edx;
    if (t17 != 0x10u)
    {
        eax = t17;
        ecx = t18;
        edx = t19;
        goto L_10130679;
    }
    eax = t17;
    if (rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 7u & 1u)
    {
        ecx = rd32(COW_IMG(0x103601bcu));
        edx = rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 7u;
        goto L_10130679;
    }
    edx = rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 7u;
    g->edx = edx;
    return 0x80404040u;
L_10130679: ;
    if (rd8(self + 4u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 4u);
        goto L_10130699;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 4u);
    if (rd8(self + 8u) != rd8(arg1 + 2u))
    {
        eax = (eax & 0xffffff00u) | rd8(self + 8u);
        goto L_10130699;
    }
    g->edx = edx;
    return 0x80804020u;
L_10130699: ;
    g->eax = eax;
    g->edx = rd32(self);
    t20 = rd32(self);
    g->esp = sp0 - 0xcu;
    t21 = cow_thiscall(g, rd32(t20 + 0x54u), self, 0);
    t22 = g->edx;
    t23 = (t21 & 0xffffff00u) | rd8(arg1 + 2u);
    g->ebx = arg2;
    t24 = cow_fastcall(g, COW_IMG(0x10131f10u), rd32(COW_IMG(0x105781a8u)), t22, 2, t23, t21);
    t25 = g->edx;
    if ((uint8_t)t24 == 0u)
    {
        edx = t25;
        goto L_101306bf;
    }
    edx = t25;
    g->ebx = in_ebx;
    g->edx = edx;
    return 0x80509050u;
L_101306bf: ;
    g->ebx = arg2;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t26 = cow_thiscall(g, COW_IMG(0x10132050u), rd32(COW_IMG(0x105781a8u)), 1, arg2);
    t27 = g->edx;
    g->ebx = in_ebx;
    g->edx = t27;
    return (-((uint8_t)t26 != 0u) & 0x404040u) - 0x7fbfbfc0u;
L_101306df: ;
    g->ebx = in_ebx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10130540(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10130540(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
