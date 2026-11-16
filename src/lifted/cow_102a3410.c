/* f_0x102a3410 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102a3410(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d19;
    double d26;
    double d33;
    double d40;
    double d53;
    uint32_t t1;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
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
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0xcu;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bd718u), arg1);
    t5 = g->ecx;
    t6 = g->edx;
    g->ecx = t5;
    g->edx = t6;
    t7 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, COW_IMG(0x103bd718u), arg1);
    t8 = g->ecx;
    t9 = g->edx;
    d10 = (double)rdf32(arg1 + 0x1cu);
    d11 = (double)rdf32(arg1 + 0x18u);
    d12 = (double)rdf32(arg1 + 0x14u);
    g->ecx = t8;
    g->edx = t9;
    g->esp = sp0 - 0x1cu;
    t13 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bd704u), cow_dlo(d12));
    t14 = g->ecx;
    t15 = g->edx;
    g->ecx = t14;
    g->edx = t15;
    t16 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, COW_IMG(0x103bd704u), cow_dlo(d12));
    t17 = g->ecx;
    t18 = g->edx;
    d19 = (double)rdf32(arg1 + 0x20u);
    g->ecx = t17;
    g->edx = t18;
    g->esp = sp0 - 0xcu;
    t20 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bd6f4u), cow_dlo(d19));
    t21 = g->ecx;
    t22 = g->edx;
    g->ecx = t21;
    g->edx = t22;
    t23 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, COW_IMG(0x103bd6f4u), cow_dlo(d19));
    t24 = g->ecx;
    t25 = g->edx;
    d26 = (double)rdf32(arg1 + 0x24u);
    g->ecx = t24;
    g->edx = t25;
    t27 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bd6e4u), cow_dlo(d26));
    t28 = g->ecx;
    t29 = g->edx;
    g->ecx = t28;
    g->edx = t29;
    t30 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, COW_IMG(0x103bd6e4u), cow_dlo(d26));
    t31 = g->ecx;
    t32 = g->edx;
    d33 = (double)rdf32(arg1 + 0x28u);
    g->ecx = t31;
    g->edx = t32;
    t34 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bd6d4u), cow_dlo(d33));
    t35 = g->ecx;
    t36 = g->edx;
    g->ecx = t35;
    g->edx = t36;
    t37 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, COW_IMG(0x103bd6d4u), cow_dlo(d33));
    t38 = g->ecx;
    t39 = g->edx;
    d40 = (double)rdf32(arg1 + 0x2cu);
    g->ecx = t38;
    g->edx = t39;
    t41 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bd6c4u), cow_dlo(d40));
    t42 = g->ecx;
    t43 = g->edx;
    g->ecx = t42;
    g->edx = t43;
    cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, COW_IMG(0x103bd6c4u), cow_dlo(d40));
    t44 = g->ecx;
    t45 = g->edx;
    t46 = rd8(arg1 + 0x34u);
    g->eax = t46;
    g->ecx = t44;
    g->edx = t45;
    g->esp = sp0 - 0x18u;
    t47 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bd6b4u), t46);
    t48 = g->ecx;
    t49 = g->edx;
    g->ecx = t48;
    g->edx = t49;
    t50 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, COW_IMG(0x103bd6b4u), t46);
    t51 = g->ecx;
    t52 = g->edx;
    d53 = (double)rdf32(arg1 + 0x30u);
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bd6a0u), cow_dlo(d53));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a3410(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102a3410(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
