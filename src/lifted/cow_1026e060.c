/* f_0x1026e060 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_1026e060(Guest* g)
{
    double d26;
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
    uint32_t t4;
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
    cow_frame(g, sp0, 64u);

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
    wr32(sp0 - 0x1cu, COW_IMG(0x103b10d8u));
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x14u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b10d8u), arg1);
    t5 = g->ecx;
    t6 = g->edx;
    if ((int32_t)arg2 < 1)
    {
        eax = t4;
        edx = t6;
    }
    else
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        wr32(sp0 - 0x14u, arg3 + 1u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t7 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_edi, in_esi);
        t8 = g->ecx;
        t9 = g->edx;
        wr32(sp0 - 0x18u, COW_IMG(0x103b10ccu));
        g->ecx = t8;
        g->edx = t9;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b10ccu), arg3 + 1u);
        t10 = g->ecx;
        t11 = g->edx;
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x20u, arg2);
        wr32(sp0 - 0x24u, arg1 + 0x5cu);
        g->eax = arg1 + 0x5cu;
        g->ecx = t10;
        g->edx = t11;
        g->esp = sp0 - 0x18u;
        t12 = cow_cdecl(g, COW_IMG(0x10274ad0u), 3, arg1 + 0x5cu, arg2, 0u);
        t13 = g->ecx;
        t14 = g->edx;
        wr32(sp0 - 0x28u, arg3 + 1u);
        g->ecx = t13;
        g->edx = t14;
        g->esp = sp0 - 0x1cu;
        t15 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, arg1 + 0x5cu, arg2);
        t16 = g->ecx;
        t17 = g->edx;
        wr32(sp0 - 0x2cu, COW_IMG(0x103b10c0u));
        g->edx = t17;
        g->esp = sp0 - 0x24u;
        t18 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b10c0u), arg3 + 1u);
        t19 = g->edx;
        wr32(sp0 - 0x30u, 0u);
        wr32(sp0 - 0x34u, arg2);
        wr32(sp0 - 0x38u, arg1 + 0x68u);
        g->ecx = arg1 + 0x68u;
        g->edx = t19;
        g->esp = sp0 - 0x2cu;
        t20 = cow_cdecl(g, COW_IMG(0x1027b4a0u), 3, arg1 + 0x68u, arg2, 0u);
        t21 = g->ecx;
        t22 = g->edx;
        wr32(sp0 - 0x3cu, arg3 + 1u);
        g->ecx = t21;
        g->edx = t22;
        g->esp = sp0 - 0x30u;
        t23 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, arg1 + 0x68u, arg2);
        t24 = g->ecx;
        t25 = g->edx;
        d26 = (double)rdf32(arg1 + 0x78u);
        wrf64(sp0 - 0x18u, d26);
        wr32(sp0 - 0x1cu, COW_IMG(0x103b10b0u));
        g->ecx = t24;
        g->edx = t25;
        g->esp = sp0 - 0x14u;
        t27 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b10b0u), cow_dlo(d26));
        t28 = g->ecx;
        t29 = g->edx;
        wr32(sp0 - 0x20u, arg3 + 1u);
        g->ecx = t28;
        g->edx = t29;
        t30 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103b10b0u), rd32(sp0 - 0x18u));
        t31 = g->ecx;
        t32 = g->edx;
        wr32(sp0 - 0x24u, arg1 + 0x1cu);
        wr32(sp0 - 0x28u, COW_IMG(0x103b10a0u));
        g->ecx = t31;
        g->edx = t32;
        g->esp = sp0 - 0x20u;
        t33 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b10a0u), arg1 + 0x1cu);
        t34 = g->ecx;
        t35 = g->edx;
        if ((int32_t)arg2 < 2)
        {
            eax = t33;
            edx = t35;
        }
        else
        {
            eax = t33;
            ecx = t34;
            edx = t35;
            wr32(sp0 - 0x14u, arg3 + 2u);
            wr32(sp0 - 0x18u, arg2);
            wr32(sp0 - 0x1cu, arg1 + 0x1cu);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0;
            t36 = cow_cdecl(g, COW_IMG(0x10280d30u), 7, arg1 + 0x1cu, arg2, arg3 + 2u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u), rd32(sp0 - 4u));
            t37 = g->edx;
            eax = t36;
            edx = t37;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026e060(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1026e060(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
