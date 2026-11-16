/* f_0x1000bb90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1000bb90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (!(rd8(COW_IMG(0x10456560u)) & 1u))
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10456560u));
        wr8(COW_IMG(0x10456560u), (uint8_t)(eax | 1u));
        t1 = rd32(arg1);
        wrf32(COW_IMG(0x10456678u), (float)(double)(int32_t)t1);
        t2 = rd32(arg1 + 4u);
        wr32(COW_IMG(0x10456680u), 0u);
        wr32(COW_IMG(0x10456684u), 0x3f800000u);
        wr32(COW_IMG(0x10456688u), 0x80808080u);
        wr32(COW_IMG(0x1045668cu), 0u);
        wrf32(COW_IMG(0x1045667cu), (float)(double)(int32_t)t2);
        wr32(COW_IMG(0x10456690u), 0u);
        t3 = rd32(arg1 + 8u);
        wrf32(COW_IMG(0x10456694u), (float)(double)(int32_t)t3);
        t4 = rd32(arg1 + 4u);
        wr32(COW_IMG(0x1045669cu), 0u);
        wr32(COW_IMG(0x104566a0u), 0x3f800000u);
        wr32(COW_IMG(0x104566a4u), 0x80808080u);
        wr32(COW_IMG(0x104566a8u), 0x3f800000u);
        wrf32(COW_IMG(0x10456698u), (float)(double)(int32_t)t4);
        wr32(COW_IMG(0x104566acu), 0u);
        t5 = rd32(arg1);
        wrf32(COW_IMG(0x104566b0u), (float)(double)(int32_t)t5);
        t6 = rd32(arg1 + 0xcu);
        wr32(COW_IMG(0x104566b8u), 0u);
        wr32(COW_IMG(0x104566bcu), 0x3f800000u);
        wr32(COW_IMG(0x104566c0u), 0x80808080u);
        wr32(COW_IMG(0x104566c4u), 0u);
        wrf32(COW_IMG(0x104566b4u), (float)(double)(int32_t)t6);
        wr32(COW_IMG(0x104566c8u), 0x3f800000u);
        t7 = rd32(arg1 + 8u);
        wrf32(COW_IMG(0x104566ccu), (float)(double)(int32_t)t7);
        t8 = rd32(arg1 + 0xcu);
        wr32(COW_IMG(0x104566d4u), 0u);
        wr32(COW_IMG(0x104566d8u), 0x3f800000u);
        wr32(COW_IMG(0x104566dcu), 0x80808080u);
        wr32(COW_IMG(0x104566e0u), 0x3f800000u);
        wrf32(COW_IMG(0x104566d0u), (float)(double)(int32_t)t8);
        wr32(COW_IMG(0x104566e4u), 0x3f800000u);
    }
    if (rd32(COW_IMG(0x104566e8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x104566e8u));
        g->esp = sp0 - 4u;
        t9 = cow_thiscall(g, COW_IMG(0x1000d660u), ecx, 0);
        if ((uint8_t)t9 != 0u)
        {
            if (rd32(self + 0x82cu) != 0u)
            {
                ecx = rd32(self + 0x82cu);
                t10 = rd32(self + 0xcu);
                g->edx = rd32(t10);
                t11 = rd32(t10);
                g->esp = sp0 - 4u;
                cow_thiscall(g, rd32(t11 + 0xf4u), ecx, 3, t10, 0u, ecx);
                t12 = g->edx;
                t13 = rd32(self + 0xcu);
                t14 = rd32(t13);
                cow_thiscall(g, rd32(t14 + 0x130u), t14, 2, t13, 0x144u);
                t15 = g->ecx;
                t16 = rd32(self + 0xcu);
                g->edx = rd32(t16);
                t17 = rd32(t16);
                cow_thiscall(g, rd32(t17 + 0xc8u), t15, 3, t16, 7u, 0u);
                t18 = g->edx;
                t19 = rd32(self + 0xcu);
                g->edx = t18;
                cow_thiscall(g, rd32(rd32(t19) + 0xc8u), rd32(t19), 3, t19, 0xeu, 0u);
                t20 = g->edx;
                cow_thiscall(g, COW_IMG(0x1000cd00u), self, 4, 5u, 2u, COW_IMG(0x10456678u), 0x1cu);
                t21 = g->ecx;
                t22 = rd32(self + 0xcu);
                g->edx = rd32(t22);
                t23 = rd32(t22);
                cow_thiscall(g, rd32(t23 + 0xc8u), t21, 3, t22, 7u, 1u);
                t24 = g->ecx;
                t25 = g->edx;
                t26 = rd32(self + 0xcu);
                cow_thiscall(g, rd32(rd32(t26) + 0xc8u), t24, 3, t26, 0xeu, 1u);
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000bb90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1000bb90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
