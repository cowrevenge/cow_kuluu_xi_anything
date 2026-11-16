/* f_0x10084210 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10084210(Guest* g)
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    cow_frame(g, sp0, 32u);

    wr8(COW_IMG(0x10351220u), 1u);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    else
    {
        wr32(sp0 - 0x10u, rd32(COW_IMG(0x103581dcu)));
        wr32(sp0 - 0xcu, rd32(COW_IMG(0x103581e0u)));
        wr32(sp0 - 8u, rd32(COW_IMG(0x103581e4u)));
        wr32(sp0 - 4u, rd32(COW_IMG(0x103581e8u)));
        g->eax = rd32(COW_IMG(0x103581e8u));
        g->edx = rd32(COW_IMG(0x103581e4u));
        t4 = rd32(COW_IMG(0x103581e8u));
        t5 = rd32(COW_IMG(0x103581e4u));
        g->esp = sp0 - 0x14u;
        t6 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
        t7 = g->edx;
        wr32(sp0 - 0x18u, t6);
        wr32(sp0 - 0x1cu, sp0 - 0x10u);
        g->edx = t7;
        g->esp = sp0 - 0x1cu;
        t8 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
        t9 = g->edx;
        g->edx = t9;
        g->esp = sp0 - 0x14u;
        t10 = cow_thiscall(g, COW_IMG(0x10021680u), t8, 2, sp0 - 0x10u, rd32(sp0 - 0x18u));
        t11 = g->ecx;
        t12 = g->edx;
        g->ecx = t11;
        g->edx = t12;
        t13 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
        t14 = g->ecx;
        t15 = g->edx;
        wr32(t13 + 0xa4u, 0u);
        wr8(t13 + 0x8au, 1u);
        eax = t13;
        ecx = t14;
        edx = t15;
    }
    if (rd8(COW_IMG(0x10487f80u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f80u));
        goto L_1008429f;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f80u));
    wr32(sp0 - 0x14u, 0x438c0000u);
    wr32(sp0 - 0x18u, 0x438c0000u);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t16 = cow_cdecl(g, COW_IMG(0x10015290u), 1, 0x438c0000u);
    return t16;
L_1008429f: ;
    wr32(sp0 - 0x18u, 0x49u);
    g->ecx = ecx;
    g->esp = sp0 - 0x14u;
    t17 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0x49u);
    t18 = g->ecx;
    wr32(sp0 - 0x14u, t17);
    wrf32(sp0 - 0x14u, (float)(double)(float)(double)(int32_t)t17);
    t19 = cow_f2bits((double)(float)(double)(int32_t)t17);
    wr32(sp0 - 0x18u, t19);
    t20 = cow_cdecl(g, COW_IMG(0x10015290u), 1, t19);
    return t20;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10084210(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10084210(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
