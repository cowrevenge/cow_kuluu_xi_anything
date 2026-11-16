/* f_0x1007f0e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007f0e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0xcu, 0x32u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x10193850u), in_eax, g->ecx, g->edx, 1, 1, 0x32u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x10u, 0x33u);
    wr32(sp0 - 8u, t1);
    g->edx = t3;
    g->esp = sp0 - 0xcu;
    t4 = cow_call_regs(g, COW_IMG(0x10193850u), t1, g->ecx, g->edx, 1, 1, 0x33u);
    t5 = g->edx;
    wr32(sp0 - 4u, t4);
    t6 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    wr32(sp0 - 0x14u, t6);
    g->eax = rd32(COW_IMG(0x103551e0u));
    g->ecx = t6;
    g->edx = t5;
    t7 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 0x10u;
    t8 = cow_cdecl(g, COW_IMG(0x10079170u), 1, t6);
    t9 = g->ecx;
    t10 = g->edx;
    if (t8 == 1u)
    {
        ecx = t9;
        edx = t10;
        goto L_1007f135;
    }
    eax = t8 - 1u;
    ecx = t9;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_1007f130;
    }
    eax = eax - 1u;
    wr32(sp0 - 0xcu, sp0 - 8u);
    wr32(sp0 - 0x10u, 0x2eu);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 8u;
    g->esp = sp0 - 8u;
    t11 = cow_cdecl(g, COW_IMG(0x101939a0u), 2, 0x2eu, sp0 - 8u);
    t12 = g->ecx;
    t13 = g->edx;
    if ((uint8_t)t11 == 0u)
    {
        eax = t11;
        edx = t13;
        goto L_1007f127;
    }
    ecx = t12;
    edx = t13;
    wr32(sp0 - 0xcu, 0u);
    loc_c = 0u;
L_1007f137: ;
    wr32(sp0 - 0x10u, sp0 - 8u);
    eax = sp0 - 8u;
L_1007f13c: ;
    wr32(sp0 - 0x14u, 0x2eu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t14 = cow_cdecl(g, COW_IMG(0x101939d0u), 3, 0x2eu, sp0 - 8u, loc_c);
    t15 = g->edx;
    t16 = rd32(sp0 - 8u);
    wr32(sp0 - 0xcu, t16);
    wr32(sp0 - 0x10u, 0x32u);
    g->ecx = t16;
    t17 = cow_call_regs(g, COW_IMG(0x10193830u), t14, g->ecx, g->edx, 1, 2, 0x32u, t16);
    t18 = g->ecx;
    t19 = rd32(sp0 - 4u);
    wr32(sp0 - 0x14u, t19);
    wr32(sp0 - 0x18u, 0x33u);
    g->ecx = t18;
    g->edx = t19;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10193830u), t17, g->ecx, g->edx, 1, 2, 0x33u, t19);
    t20 = g->ecx;
    t21 = g->edx;
    wr32(sp0 - 0x1cu, sp0 - 8u);
    wr32(sp0 - 0x20u, 0x2eu);
    g->eax = sp0 - 8u;
    g->edx = t21;
    g->esp = sp0 - 0x18u;
    t22 = cow_cdecl(g, COW_IMG(0x101939a0u), 2, 0x2eu, sp0 - 8u);
    t23 = g->edx;
    if ((uint8_t)t22 == 0u)
    {
        eax = t22;
        ecx = rd32(COW_IMG(0x10578158u));
        edx = t23;
        goto L_1007f189;
    }
    eax = t22;
    ecx = rd32(COW_IMG(0x10578158u));
    edx = t23;
    wr32(sp0 - 0xcu, 0xf9u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10129de0u), ecx, 1, 0xf9u);
    t24 = g->edx;
    g->edx = t24;
    return arg3;
L_1007f127: ;
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, sp0 - 8u);
    ecx = sp0 - 8u;
    loc_c = 1u;
    goto L_1007f13c;
L_1007f130: ;
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, sp0 - 8u);
    edx = sp0 - 8u;
    loc_c = 0u;
    goto L_1007f13c;
L_1007f135: ;
    wr32(sp0 - 0xcu, 1u);
    loc_c = 1u;
    goto L_1007f137;
L_1007f189: ;
    wr32(sp0 - 0xcu, 0xfau);
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10129de0u), ecx, 1, 0xfau);
    t25 = g->edx;
    g->edx = t25;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007f0e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007f0e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
