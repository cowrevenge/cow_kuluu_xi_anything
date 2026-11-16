/* f_0x1029cf10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1029cf10(Guest* g)
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
    uint32_t t28;
    uint32_t t29;
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
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0xcu, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, self, in_edx, 1, 1, sp0 - 8u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        edx = t3;
        goto L_1029cf50;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    wr32(sp0 - 0xcu, 0x133u);
    wr32(sp0 - 0x10u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x14u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x18u, COW_IMG(0x103bc96cu));
    wr32(sp0 - 0x1cu, COW_IMG(0x103bc94cu));
    g->edx = t6;
    g->esp = sp0 - 0x14u;
    t7 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc94cu), COW_IMG(0x103bc96cu));
    t8 = g->edx;
    g->edx = t8;
    return t7 & 0xffffff00u;
L_1029cf50: ;
    wr32(sp0 - 0xcu, sp0 - 4u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t9 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, sp0 - 4u, edx, 1, 1, sp0 - 4u);
    t10 = g->ecx;
    t11 = g->edx;
    if ((uint8_t)t9 != 0u)
    {
        eax = t9;
        ecx = t10;
        goto L_1029cf8d;
    }
    eax = t9;
    ecx = t10;
    edx = t11;
    wr32(sp0 - 0xcu, 0x137u);
    wr32(sp0 - 0x10u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x14u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t12 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t13 = g->ecx;
    t14 = g->edx;
    wr32(sp0 - 0x18u, COW_IMG(0x1038f618u));
    wr32(sp0 - 0x1cu, COW_IMG(0x103bc94cu));
    g->edx = t14;
    g->esp = sp0 - 0x14u;
    t15 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc94cu), COW_IMG(0x1038f618u));
    t16 = g->edx;
    g->edx = t16;
    return t15 & 0xffffff00u;
L_1029cf8d: ;
    t17 = rd32(sp0 - 8u);
    wr32(sp0 - 0xcu, t17);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t18 = cow_call_regs(g, COW_IMG(0x1029cfe0u), g->eax, g->ecx, t17, 1, 1, t17);
    t19 = g->ecx;
    t20 = g->edx;
    if (t18 == 0u)
    {
        eax = t18;
        goto L_1029cfca;
    }
    eax = t18;
    ecx = t19;
    edx = t20;
    wr32(sp0 - 0xcu, 0x13bu);
    wr32(sp0 - 0x10u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x14u, COW_IMG(0x103b379cu));
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t21 = g->ecx;
    t22 = g->edx;
    t23 = rd32(sp0 - 8u);
    wr32(sp0 - 0x18u, t23);
    wr32(sp0 - 0x1cu, COW_IMG(0x103bc930u));
    g->eax = t23;
    g->edx = t22;
    g->esp = sp0 - 0x14u;
    t24 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc930u), t23);
    t25 = g->edx;
    g->edx = t25;
    return t24 & 0xffffff00u;
L_1029cfca: ;
    t26 = rd32(sp0 - 4u);
    wr32(sp0 - 0xcu, t26);
    t27 = rd32(sp0 - 8u);
    wr32(sp0 - 0x10u, t27);
    g->eax = eax;
    g->edx = t27;
    g->esp = sp0 - 8u;
    t28 = cow_thiscall_cdecl(g, COW_IMG(0x1029d050u), t26, 2, t27, t26);
    t29 = g->edx;
    g->edx = t29;
    return t28;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1029cf10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1029cf10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
