/* f_0x10040c20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10040c20(Guest* g)
{
    double d5;
    double d6;
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((rd8(self + 0x17bu) & 3u) == 0u)
    {
        t16 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        t17 = rd32(t16);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(t17 + 0xfcu), t17, 4, t16, 0u, 0xbu, 0u);
        t18 = g->ecx;
        t19 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        g->edx = rd32(t19);
        t20 = rd32(t19);
        cow_thiscall(g, rd32(t20 + 0xfcu), t18, 4, t19, 0u, 0x18u, 0u);
        t21 = g->edx;
        t22 = rd32(COW_IMG(0x1047cf7cu)) + 0x810u;
        g->eax = t22;
        g->edx = t21;
        t23 = cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc8u), 2, 0x10u, t22);
        t24 = g->edx;
        eax = t23;
        edx = t24;
    }
    else
    {
        t1 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
        t2 = rd32(COW_IMG(0x1047cf7cu));
        t3 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
        wr32(t2 + 0xa90u, t1);
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x100746a0u), t3, 0);
        t4 = g->edx;
        d5 = (double)rdf32(self + 0x120u);
        wrf32(t3 + 0x20u, (float)d5);
        d6 = (double)rdf32(self + 0x124u);
        wrf32(t3 + 0x24u, (float)d6);
        t7 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        t8 = rd32(t7);
        cow_thiscall(g, rd32(t8 + 0xfcu), t8, 4, t7, 0u, 0xbu, 0u);
        t9 = g->ecx;
        t10 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        g->edx = rd32(t10);
        t11 = rd32(t10);
        cow_thiscall(g, rd32(t11 + 0xfcu), t9, 4, t10, 0u, 0x18u, 2u);
        t12 = g->edx;
        g->edx = t12;
        cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc8u), 2, 0x10u, t3);
        t13 = g->edx;
        t14 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
        t15 = rd32(COW_IMG(0x1047cf7cu));
        wr32(t15 + 0xa90u, t14);
        wr32(t14 * 4u + t15 + 0xa10u, t3);
        eax = t15;
        edx = t13;
    }
    if (rd8(COW_IMG(0x1047baa4u)) & 1u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047baa4u));
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047baa4u));
        wr8(COW_IMG(0x1047baa4u), (uint8_t)(eax | 1u));
        g->eax = eax;
        g->edx = (edx & 0xffffff00u) | (uint8_t)(eax | 1u);
        g->esp = sp0 - 4u;
        t25 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047ba1cu), 0);
        t26 = g->ecx;
        t27 = g->edx;
        g->edx = t27;
        t28 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10040e10u));
        t29 = g->edx;
        eax = t28;
        edx = t29;
    }
    g->esp = sp0 - 4u;
    cow_fastcall(g, COW_IMG(0x1006af90u), COW_IMG(0x1047ba1cu), edx, 1, COW_IMG(0x103528ccu));
    t30 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    g->eax = t30;
    g->edx = rd32(t30);
    t31 = rd32(t30);
    t32 = cow_thiscall(g, rd32(t31 + 0xc8u), rd32(COW_IMG(0x1047bc0cu)), 3, t30, 0x3cu, rd32(COW_IMG(0x1047bc0cu)));
    t33 = g->edx;
    if (rd8(self + 0x16cu) != 0x64u)
    {
        eax = (t32 & 0xffffff00u) | rd8(self + 0x16cu);
        edx = t33;
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10045d40u), self, 0);
        t35 = rd32(self + 0x10cu);
        t36 = ~(uint8_t)(t35 >> 0x12u) & 1u;
        t37 = t35 >> 0x1cu & 1u;
        edx = t36;
        loc_8 = t36;
        loc_c = t37;
    }
    else
    {
        eax = (t32 & 0xffffff00u) | rd8(self + 0x16cu);
        edx = t33;
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10045d40u), self, 0);
        t34 = ~(uint8_t)(rd32(self + 0x10cu) >> 0x12u) & 1u;
        edx = t34;
        loc_8 = t34;
        loc_c = 1u;
    }
    t38 = rd32(self + 0x104u);
    g->eax = t38;
    g->esp = sp0 - 4u;
    t39 = cow_thiscall(g, COW_IMG(0x10183760u), rd32(COW_IMG(0x10631f24u)), 4, self + 0xa0u, t38, loc_c, loc_8);
    if ((rd8(self + 0x17bu) & 3u) != 0u)
    {
        t40 = rd32(COW_IMG(0x1047cf7cu)) + 0x810u;
        g->edx = t40;
        g->esp = sp0;
        cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc8u), 2, 0x10u, t40);
        t41 = g->edx;
        t42 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        cow_thiscall(g, rd32(rd32(t42) + 0xfcu), rd32(t42), 4, t42, 0u, 0x18u, 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10040c20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10040c20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
