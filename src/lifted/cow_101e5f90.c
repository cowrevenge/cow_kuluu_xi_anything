/* f_0x101e5f90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101e5f90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_18;
    uint32_t loc_1c;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, 1u);
    g->esp = sp0 - 0x14u;
    t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    wr32(sp0 - 0x18u, 1u);
    t2 = rd32(rd32(t1) + 0x1e8u);
    wr32(self + 0x1cu, t2);
    wr32(sp0 - 0x1cu, 1u);
    t3 = rd32(rd32(t1) + 0xb04u);
    t4 = rd16(self + 0x14u);
    wr32(self + 0x20u, t3);
    wr32(sp0 - 0x20u, (uint32_t)(int16_t)t4);
    wr32(sp0 - 0x24u, sp0 - 8u);
    t5 = rd32(self + 8u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    g->ebx = 0u;
    g->eax = sp0 - 8u;
    g->edx = (uint32_t)(int16_t)t4;
    t6 = cow_thiscall(g, COW_IMG(0x10118900u), t5, 4, sp0 - 8u, (uint32_t)(int16_t)t4, 1u, 1u);
    t7 = g->ecx;
    t8 = g->edx;
    t9 = rd16(self + 0x14u);
    t10 = rd16(sp0 - 6u);
    wr16(self + 0x18u, rd16(sp0 - 8u));
    wr32(sp0 - 0x18u, 1u);
    t11 = (t6 & 0xffff0000u) | t9;
    wr32(sp0 - 0x1cu, t11);
    t12 = rd32(self + 8u);
    wr16(self + 0x1au, (uint16_t)t10);
    g->eax = t11;
    g->edx = (t8 & 0xffff0000u) | t10;
    t13 = cow_thiscall(g, COW_IMG(0x101192b0u), t12, 2, t11, 1u);
    t14 = g->ecx;
    t15 = g->edx;
    if (rd16(self + 0x16u) != 0u)
    {
        eax = t13;
        ecx = t14;
        edx = t15;
        wr32(sp0 - 0x18u, 1u);
        wr32(sp0 - 0x1cu, 0xeu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t20 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 1u);
        t21 = g->edx;
        wr32(sp0 - 0x18u, t20);
        t22 = (t21 & 0xffff0000u) | rd16(self + 0x14u);
        wr32(sp0 - 0x1cu, t22);
        eax = t20;
        edx = t22;
        loc_18 = t20;
        loc_1c = t22;
    }
    else
    {
        eax = t13;
        ecx = t14;
        edx = t15;
        wr32(sp0 - 0x18u, 2u);
        wr32(sp0 - 0x1cu, 0xeu);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t16 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 2u);
        t17 = g->ecx;
        t18 = g->edx;
        wr32(sp0 - 0x18u, t16);
        t19 = (t17 & 0xffff0000u) | rd16(self + 0x14u);
        wr32(sp0 - 0x1cu, t19);
        eax = t16;
        edx = t18;
        loc_18 = t16;
        loc_1c = t19;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t23 = cow_thiscall(g, COW_IMG(0x1011adb0u), rd32(self + 8u), 2, loc_1c, loc_18);
    t24 = g->edx;
    wr8(self + 0x25u, 1u);
    if (rd32(COW_IMG(0x10663520u)) == 0u)
    {
        eax = t23;
        edx = t24;
    }
    else
    {
        eax = t23;
        ecx = rd32(COW_IMG(0x10663520u));
        edx = t24;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t25 = cow_thiscall(g, COW_IMG(0x101e34d0u), ecx, 0);
        t26 = g->edx;
        if (t25 == 0u)
        {
            eax = t25;
            edx = t26;
        }
        else
        {
            eax = t25;
            edx = t26;
            if (rd8(eax + 2u) == 4u)
            {
                t27 = (uint32_t)(int16_t)rd16(self + 0x14u);
                wr32(sp0 - 0x18u, t27);
                wr32(sp0 - 0x1cu, 5u);
                g->eax = t27;
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                t28 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, t27);
                t29 = g->edx;
                wr8(self + 0x25u, 0u);
                eax = t28;
                edx = t29;
            }
        }
    }
    if (rd8(self + 0x24u) != 0u)
    {
        wr32(sp0 - 0x18u, sp0 - 9u);
        g->ebx = 0u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t30 = cow_cdecl(g, COW_IMG(0x100eb800u), 1, sp0 - 9u);
        t31 = g->edx;
        if ((uint8_t)t30 == 0u)
        {
            eax = t30;
            edx = t31;
            wr32(sp0 - 0x18u, 3u);
            wr32(sp0 - 0x1cu, 5u);
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 3u);
        }
    }
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e5f90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101e5f90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
