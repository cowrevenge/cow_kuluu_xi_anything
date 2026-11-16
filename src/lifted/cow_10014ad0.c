/* f_0x10014ad0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10014ad0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
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

    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x100db140u), t1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(rd32(COW_IMG(0x10456a28u)), 0x90u);
    if ((uint32_t)(int16_t)rd16(self + 6u) == 0u)
    {
        eax = (uint32_t)(int16_t)rd16(self + 6u);
        edx = t3;
        goto L_10014b6f;
    }
    eax = (uint32_t)(int16_t)rd16(self + 6u);
    ecx = t2;
    edx = t3;
    if (eax == 1u) goto L_10014b41;
    eax = eax - 1u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_10014c0a;
    }
    eax = eax - 1u;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_call_regs(g, COW_IMG(0x101ab7d0u), eax, g->ecx, g->edx, 1, 0);
    t5 = g->edx;
    if (rd32(COW_IMG(0x106631d4u)) == 0u)
    {
        eax = t4;
    }
    else
    {
        eax = t4;
        edx = t5;
        esi = rd32(COW_IMG(0x106631d4u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t6 = cow_thiscall(g, COW_IMG(0x101d2f00u), esi, 0);
        t7 = g->ecx;
        t8 = g->edx;
        t9 = cow_cdecl(g, COW_IMG(0x1002c8b0u), 1, esi);
        wr32(COW_IMG(0x106631d4u), 0u);
        eax = t9;
    }
    if (rd32(COW_IMG(0x1045690cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1045690cu));
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t10 = cow_thiscall(g, rd32(rd32(ecx) + 0x18u), ecx, 1, 1u);
        wr32(COW_IMG(0x1045690cu), 0u);
        eax = t10;
    }
    return (eax & 0xffffff00u) | 1u;
L_10014b41: ;
    if (rd32(rd32(COW_IMG(0x10668ff8u)) + 0x25cu) != 1u)
    {
        eax = rd32(COW_IMG(0x10668ff8u));
        goto L_10014c0a;
    }
    eax = rd32(COW_IMG(0x10668ff8u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t11 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10350334u));
    t12 = g->edx;
    t13 = cow_thiscall(g, COW_IMG(0x10010d10u), self, 0);
    return t13 & 0xffffff00u;
L_10014b6f: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t14 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103502e8u));
    t15 = g->edx;
    t16 = cow_call_regs(g, COW_IMG(0x10136870u), t14, rd32(rd32(COW_IMG(0x104e2150u)) + 0x30u), g->edx, 0, 3, 0u, 0u, 0u);
    g->edx = rd32(COW_IMG(0x104e2154u));
    t17 = rd32(rd32(COW_IMG(0x104e2154u)) + 0x30u);
    t18 = rd32(COW_IMG(0x104e2154u));
    cow_call_regs(g, COW_IMG(0x10136870u), t16, t17, g->edx, 0, 3, 0u, 0u, 0u);
    t19 = g->ecx;
    t20 = g->edx;
    t21 = rd32(rd32(COW_IMG(0x10668ff8u)) + 0x14u);
    t22 = rd32(COW_IMG(0x10668ff8u));
    wr8(t22 + 0x258u, 0u);
    if (t21 != 0u)
    {
        ecx = t19;
        edx = t20;
    }
    else
    {
        eax = t21;
        edx = t20;
        esi = t22;
        wr32(esi + 0x25cu, 0u);
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x1018d430u), esi + 0x24cu, 1, 0u);
        t23 = g->ecx;
        t24 = g->edx;
        wr32(esi + 0x14u, 0u);
        ecx = t23;
        edx = t24;
    }
    if ((int32_t)rd32(COW_IMG(0x10456900u)) < 0)
    {
        eax = rd32(COW_IMG(0x10456900u));
        g->ebx = 0u;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x1023bf40u), 1, eax);
        t25 = g->edx;
        edx = t25;
    }
    g->eax = rd32(COW_IMG(0x10668ff4u));
    g->edx = edx;
    t26 = rd32(COW_IMG(0x10668ff4u));
    g->esp = sp0 - 0xcu;
    t27 = cow_thiscall(g, COW_IMG(0x1018d430u), rd32(COW_IMG(0x10668ff8u)) + 0x24cu, 1, t26);
    t28 = g->edx;
    g->edx = t28;
    t29 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10350334u), 1u, 0u);
    t30 = g->edx;
    t31 = cow_thiscall(g, COW_IMG(0x10010d10u), self, 0);
    eax = t31;
L_10014c0a: ;
    g->ebx = in_ebx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10014ad0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10014ad0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
