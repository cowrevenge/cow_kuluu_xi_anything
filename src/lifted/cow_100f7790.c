/* f_0x100f7790 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100f7790(Guest* g)
{
    uint32_t eax;
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
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;

    edi = COW_IMG(0x109f7640u);
    eax = 0u;
    ecx = 0x12u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(COW_IMG(0x104df90cu), COW_IMG(0x109f7640u));
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x100f1300u), 4, 3u, 0u, COW_IMG(0x100f18d0u), COW_IMG(0x100f1900u));
    t2 = rd32(COW_IMG(0x104df90cu));
    wr32(t2 + 0x30u, t1);
    if (rd32(rd32(COW_IMG(0x104df90cu)) + 0x30u) != 0u)
    {
        ecx = t2;
        edx = rd32(COW_IMG(0x104df90cu));
        goto L_100f77d8;
    }
    eax = rd32(rd32(COW_IMG(0x104df90cu)) + 0x30u);
    return eax & 0xffffff00u;
L_100f77d8: ;
    g->edx = edx;
    g->esp = sp0;
    t3 = cow_cdecl(g, COW_IMG(0x100f1300u), 4, 1u, 0u, COW_IMG(0x100f16b0u), COW_IMG(0x100f16c0u));
    t4 = g->edx;
    wr32(rd32(COW_IMG(0x104df90cu)) + 0x40u, t3);
    if (rd32(rd32(COW_IMG(0x104df90cu)) + 0x40u) != 0u)
    {
        eax = rd32(COW_IMG(0x104df90cu));
        ecx = rd32(rd32(COW_IMG(0x104df90cu)) + 0x40u);
        edx = t4;
        goto L_100f7812;
    }
    eax = rd32(COW_IMG(0x104df90cu));
    ecx = rd32(rd32(COW_IMG(0x104df90cu)) + 0x40u);
    t5 = rd32(eax + 0x30u);
    g->eax = eax;
    g->esp = sp0;
    t6 = cow_cdecl(g, COW_IMG(0x100f10c0u), 1, t5);
    return t6 & 0xffffff00u;
L_100f7812: ;
    g->eax = eax;
    g->esp = sp0;
    t7 = cow_stdcall(g, COW_IMG(0x100f1920u), 0);
    t8 = rd32(COW_IMG(0x104df90cu));
    wr32(t8 + 0x18u, t7);
    t9 = rd32(rd32(COW_IMG(0x104df90cu)) + 0x18u);
    t10 = rd32(COW_IMG(0x104df90cu));
    wr32(t10, t9);
    g->eax = t10;
    t11 = cow_stdcall(g, COW_IMG(0x100f1910u), 0);
    t12 = rd32(COW_IMG(0x104df90cu));
    wr32(t12 + 0x1cu, t11);
    t13 = rd32(rd32(COW_IMG(0x104df90cu)) + 0x1cu);
    t14 = rd32(COW_IMG(0x104df90cu));
    wr32(t14 + 4u, t13);
    g->eax = t14;
    t15 = cow_stdcall(g, COW_IMG(0x100f1940u), 0);
    t16 = rd32(COW_IMG(0x104df90cu));
    wr32(t16 + 0x20u, t15);
    t17 = rd32(rd32(COW_IMG(0x104df90cu)) + 0x20u);
    t18 = rd32(COW_IMG(0x104df90cu));
    wr32(t18 + 8u, t17);
    g->eax = t18;
    t19 = cow_stdcall(g, COW_IMG(0x100f1930u), 0);
    wr32(rd32(COW_IMG(0x104df90cu)) + 0x24u, t19);
    t20 = rd32(rd32(COW_IMG(0x104df90cu)) + 0x24u);
    t21 = rd32(COW_IMG(0x104df90cu));
    wr32(t21 + 0xcu, t20);
    t22 = rd32(COW_IMG(0x104df90cu));
    wr32(t22 + 0x28u, 0xffffffffu);
    t23 = rd32(COW_IMG(0x104df90cu));
    wr32(t23 + 0x10u, 0xffffffffu);
    t24 = cow_stdcall(g, COW_IMG(0x100f1950u), 0);
    t25 = rd32(COW_IMG(0x104df90cu));
    wr32(t25 + 0x2cu, t24);
    t26 = rd32(rd32(COW_IMG(0x104df90cu)) + 0x2cu);
    wr32(rd32(COW_IMG(0x104df90cu)) + 0x14u, t26);
    t27 = rd32(COW_IMG(0x104df90cu));
    t28 = cow_stdcall(g, COW_IMG(0x100f1670u), 0);
    wr32(rd32(COW_IMG(0x104df90cu)) + 0x3cu, t28);
    t29 = rd32(rd32(COW_IMG(0x104df90cu)) + 0x3cu);
    t30 = rd32(COW_IMG(0x104df90cu));
    wr32(t30 + 0x38u, t29);
    return (t30 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f7790(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f7790(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
