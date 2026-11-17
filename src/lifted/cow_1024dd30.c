/* f_0x1024dd30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1024dd30(Guest* g)
{
    double d13;
    double d23;
    double d27;
    double d28;
    double d32;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
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
    uint32_t t43;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1 + 0x1cu) != 2u)
    {
        eax = rd32(arg1 + 0x1cu);
        goto L_1024de08;
    }
    eax = rd32(arg1 + 0x1cu);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, self, g->edx, 1, 4, 0x3fu, 0x4fu, 4u, 0xffffffffu);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t4 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3fu, 0x50u, 4u, 0xffffffffu);
        t5 = g->ecx;
        t6 = g->edx;
        if ((uint8_t)t4 == 0u)
        {
            ecx = t5;
            edx = t6;
            t7 = rd8(rd32(COW_IMG(0x104e1d44u)) + 0x253u) - 0x80u;
            t8 = rd32(COW_IMG(0x104e1d44u));
            wr32(sp0 + 8u, t7);
            g->edx = edx;
            d9 = fr(g, (double)(int32_t)rd32(sp0 + 8u) * (double)rdf32(COW_IMG(0x1033cd50u)));
            fpush(g, d9);
            g->esp = sp0 - 4u;
            t10 = cow_call_regs(g, COW_IMG(0x10311c6cu), t7, g->ecx, g->edx, 1, 0);
            t11 = g->edx;
            t12 = rd8(t8 + 0x252u) - 0x80u;
            wr32(sp0 + 8u, t12);
            g->ecx = t12;
            g->edx = t11;
            d13 = fr(g, (double)(int32_t)rd32(sp0 + 8u) * (double)rdf32(COW_IMG(0x1032a9f0u)));
            fpush(g, d13);
            g->esp = sp0 - 8u;
            t14 = cow_call_regs(g, COW_IMG(0x10311c6cu), t10, g->ecx, g->edx, 1, 0);
            t15 = g->ecx;
            t16 = g->edx;
            eax = t14;
            ecx = t15;
            edx = t16;
            loc_8 = t10;
            loc_c = t14;
        }
        else
        {
            eax = t4;
            ecx = t5;
            edx = t6;
            loc_8 = 0xfffffff8u;
            loc_c = 0u;
        }
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        loc_8 = 8u;
        loc_c = 0u;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t17 = cow_cdecl(g, COW_IMG(0x10271c50u), 3, 0u, loc_c, loc_8);
    t18 = g->ecx;
    t19 = g->edx;
    g->edx = t19;
    t20 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), t18, 2, 0x3fu, 6u);
    t21 = g->ecx;
    t22 = g->edx;
    d23 = cow_take_float(g);
    wrf32(sp0 + 8u, (float)d23);
    g->edx = t22;
    t24 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), t21, 4, 0x3fu, 7u, 0x3fu, 6u);
    t25 = g->ecx;
    t26 = g->edx;
    d27 = cow_take_float(g);
    g->ecx = t25;
    g->edx = t26;
    d28 = fr(g, -d27 * (double)rdf32(COW_IMG(0x1032a40cu)));
    fpush(g, d28);
    g->esp = sp0 - 0x14u;
    t29 = cow_call_regs(g, COW_IMG(0x10311c6cu), t24, g->ecx, g->edx, 1, 0);
    t30 = g->ecx;
    t31 = g->edx;
    g->ecx = t30;
    g->edx = t31;
    d32 = fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(COW_IMG(0x1032a40cu)));
    fpush(g, d32);
    g->esp = sp0 - 0x18u;
    t33 = cow_call_regs(g, COW_IMG(0x10311c6cu), t29, g->ecx, g->edx, 1, 0);
    t34 = g->ecx;
    t35 = g->edx;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10271c50u), 3, 1u, t33, t29);
    return;
L_1024de08: ;
    if ((int32_t)eax < 3) goto L_1024de3e;
    if ((rd32(arg1) >> 8u & 8u) == 0u) goto L_1024de30;
    eax = rd32(arg1);
    t36 = rd32(sp0 + 8u);
    g->eax = eax;
    g->edx = t36;
    g->esp = sp0 - 4u;
    t37 = cow_thiscall_cdecl(g, COW_IMG(0x1024f600u), self, 2, arg1, t36);
    t38 = g->ecx;
    t39 = g->edx;
    g->ecx = t38;
    g->edx = t39;
    g->esp = sp0 - 0xcu;
    t40 = cow_cdecl(g, COW_IMG(0x1024e000u), 1, arg1);
    t41 = g->ecx;
    t42 = g->edx;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x1024de40u), 1, arg1);
    return;
L_1024de30: ;
    t43 = rd32(sp0 + 8u);
    g->esp = sp0 - 4u;
    cow_thiscall_cdecl(g, COW_IMG(0x1024e2a0u), self, 2, arg1, t43);
L_1024de3e: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024dd30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1024dd30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
