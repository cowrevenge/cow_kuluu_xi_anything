/* f_0x102af650 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102af650(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_4;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 272u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, arg3);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x18u, arg1);
    wr32(sp0 - 0x1cu, COW_IMG(0x103bf624u));
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x14u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf624u), arg1);
    t5 = g->ecx;
    t6 = g->edx;
    if ((int32_t)arg2 < 1)
    {
        eax = t4;
        edx = t6;
        loc_4 = in_ebx;
        loc_8 = in_ebp;
        loc_c = in_esi;
        loc_10 = in_edi;
    }
    else
    {
        ecx = t5;
        edx = t6;
        wr32(sp0 - 0x14u, arg3 + 1u);
        g->eax = arg3 + 1u;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t7 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_edi, in_esi);
        t8 = g->edx;
        esi = arg1 + 0x1cu;
        edi = sp0 - 0x4cu;
        ecx = 0xfu;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0x50u, COW_IMG(0x103bf614u));
        g->ebx = arg2;
        g->ecx = ecx;
        g->edx = t8;
        g->esp = sp0 - 0x48u;
        t9 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf614u), rd32(sp0 - 0x4cu));
        t10 = g->ecx;
        t11 = g->edx;
        if ((int32_t)arg2 < 2)
        {
            eax = t9;
            ecx = t10;
            edx = t11;
        }
        else
        {
            ecx = t10;
            edx = t11;
            wr32(sp0 - 0x14u, arg3 + 2u);
            wr32(sp0 - 0x18u, arg2);
            wr32(sp0 - 0x1cu, arg1 + 0x1cu);
            g->eax = arg1 + 0x1cu;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t12 = cow_cdecl(g, COW_IMG(0x102857a0u), 3, arg1 + 0x1cu, arg2, arg3 + 2u);
            t13 = g->ecx;
            t14 = g->edx;
            eax = t12;
            ecx = t13;
            edx = t14;
        }
        wr32(sp0 - 0x14u, arg3 + 1u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t15 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t16 = g->edx;
        t17 = rd32(arg1 + 0x58u);
        wr32(sp0 - 0x18u, t17);
        wr32(sp0 - 0x1cu, COW_IMG(0x103bf604u));
        g->ebx = arg2;
        g->ecx = t17;
        g->edx = t16;
        g->esp = sp0 - 0x14u;
        t18 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf604u), t17);
        t19 = g->ecx;
        t20 = g->edx;
        if ((int32_t)arg2 < 2)
        {
            eax = t18;
            ecx = t19;
            edx = t20;
        }
        else
        {
            eax = t18;
            ecx = t19;
            wr32(sp0 - 0x14u, arg3 + 2u);
            wr32(sp0 - 0x18u, arg2);
            t21 = rd32(arg1 + 0x58u);
            wr32(sp0 - 0x1cu, t21);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = t21;
            g->esp = sp0;
            t22 = cow_cdecl(g, COW_IMG(0x10280d30u), 7, t21, arg2, arg3 + 2u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u), rd32(sp0 - 4u));
            t23 = g->ecx;
            t24 = g->edx;
            eax = t22;
            ecx = t23;
            edx = t24;
        }
        wr32(sp0 - 0x14u, arg3 + 1u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t25 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t26 = g->ecx;
        t27 = g->edx;
        wr32(sp0 - 0x18u, arg1 + 0x5cu);
        wr32(sp0 - 0x1cu, COW_IMG(0x103bf5f4u));
        g->ebx = arg2;
        g->ecx = t26;
        g->edx = t27;
        g->esp = sp0 - 0x14u;
        t28 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf5f4u), arg1 + 0x5cu);
        t29 = g->ecx;
        t30 = g->edx;
        if ((int32_t)arg2 < 2)
        {
            eax = t28;
            ecx = t29;
            edx = t30;
        }
        else
        {
            ecx = t29;
            edx = t30;
            wr32(sp0 - 0x14u, arg3 + 2u);
            wr32(sp0 - 0x18u, arg2);
            wr32(sp0 - 0x1cu, arg1 + 0x5cu);
            g->eax = arg3 + 2u;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0;
            t31 = cow_cdecl(g, COW_IMG(0x10280d30u), 7, arg1 + 0x5cu, arg2, arg3 + 2u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u), rd32(sp0 - 4u));
            t32 = g->ecx;
            t33 = g->edx;
            eax = t31;
            ecx = t32;
            edx = t33;
        }
        wr32(sp0 - 0x14u, arg3 + 1u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t34 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t35 = g->edx;
        esi = rd32(arg1 + 0x9cu);
        edi = sp0 - 0x108u;
        ecx = 0x3eu;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0x10cu, COW_IMG(0x103bf5e0u));
        g->ebx = arg2;
        g->edx = t35;
        g->esp = sp0 - 0x104u;
        t36 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf5e0u), rd32(sp0 - 0x108u));
        t37 = g->edx;
        if ((int32_t)arg2 < 2)
        {
            eax = t36;
            edx = t37;
            loc_4 = rd32(sp0 - 4u);
            loc_8 = rd32(sp0 - 8u);
            loc_c = rd32(sp0 - 0xcu);
            loc_10 = rd32(sp0 - 0x10u);
        }
        else
        {
            eax = t36;
            wr32(sp0 - 0x14u, arg3 + 2u);
            wr32(sp0 - 0x18u, arg2);
            t38 = rd32(arg1 + 0x9cu);
            wr32(sp0 - 0x1cu, t38);
            g->eax = eax;
            g->edx = t38;
            g->esp = sp0 - 0x10u;
            t39 = cow_cdecl(g, COW_IMG(0x102857a0u), 3, t38, arg2, arg3 + 2u);
            t40 = g->edx;
            eax = t39;
            edx = t40;
            loc_4 = rd32(sp0 - 4u);
            loc_8 = rd32(sp0 - 8u);
            loc_c = rd32(sp0 - 0xcu);
            loc_10 = rd32(sp0 - 0x10u);
        }
    }
    g->ebx = loc_4;
    g->esi = loc_c;
    g->edi = loc_10;
    g->ebp = loc_8;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102af650(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102af650(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
