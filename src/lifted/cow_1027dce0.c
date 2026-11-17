/* f_0x1027dce0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1027dce0(Guest* g)
{
    double d10;
    double d17;
    double d21;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t22;
    uint32_t t23;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->esp = sp0 - 0x10u;
    t1 = cow_fastcall(g, COW_IMG(0x102750b0u), self, in_edx, 0);
    t2 = g->ecx;
    t3 = g->edx;
    t4 = rd32(sp0 + 8u);
    g->ecx = t2;
    g->edx = t3;
    t5 = cow_cdecl(g, COW_IMG(0x102960c0u), 2, t4, 0u);
    t6 = g->ecx;
    t7 = g->edx;
    g->ecx = t6;
    g->edx = t7;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x10284f40u), 1, t4);
    t8 = g->ecx;
    t9 = g->edx;
    d10 = cow_take_float(g);
    wrf32(t5 + 0x24u, (float)d10);
    g->edx = t9;
    g->esp = sp0 - 0x1cu;
    t11 = cow_call_regs(g, COW_IMG(0x10312090u), arg1 + 4u, g->ecx, g->edx, 1, 3, arg1 + 4u, COW_IMG(0x103b46e8u), 0x7fu);
    t12 = g->edx;
    t13 = rd32(t5 + 0x20u);
    wr32(arg1 + 0xa4u, t13);
    g->ecx = t13;
    g->edx = t12;
    g->esp = sp0 - 0x28u;
    t14 = cow_cdecl(g, COW_IMG(0x1028d9b0u), 1, t5);
    t15 = g->ecx;
    t16 = g->edx;
    d17 = cow_take_float(g);
    wrf32(arg1 + 0xa8u, (float)d17);
    wr32(arg1 + 0xb4u, t4);
    wr32(arg1 + 0xb8u, t5);
    g->ecx = t15;
    g->edx = t16;
    g->esp = sp0 - 0x2cu;
    t18 = cow_call_regs(g, COW_IMG(0x1027df90u), t14, g->ecx, g->edx, 1, 1, arg1);
    t19 = g->ecx;
    t20 = g->edx;
    if (t18 != 0xffffffffu)
    {
        eax = t18;
        ecx = t19;
        edx = t20;
        ebp = t1;
        wr32(sp0 + 8u, eax - 1u);
        d21 = fr(g, (double)rdf32(arg1 + 0xa8u) / (double)(int32_t)rd32(sp0 + 8u));
        wrf32(arg1 + 0xb0u, (float)d21);
        eax = eax - 1u;
    }
    else
    {
        eax = t18;
        ecx = t19;
        edx = t20;
        ebp = t1;
        wr32(arg1 + 0xb0u, 0x3d088889u);
    }
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t22 = cow_fastcall(g, COW_IMG(0x102750b0u), ecx, edx, 0);
    wr32(arg1 + 0x84u, t22 - ebp);
    t23 = (rd32(arg1) & 0xffffff00u) | (uint8_t)(rd32(arg1) | 0x10u);
    wr32(arg1, t23);
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027dce0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1027dce0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
