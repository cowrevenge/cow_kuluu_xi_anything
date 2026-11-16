/* f_0x102a60a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_102a60a0(Guest* g)
{
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
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->ecx = self;
    g->edx = in_edx;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be0b8u), in_esi);
    t1 = g->ecx;
    t2 = g->edx;
    g->eax = rd32(arg1);
    g->edx = t2;
    t3 = rd32(arg1);
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be0a4u), t3);
    t5 = g->edx;
    t6 = rd32(arg1 + 4u);
    g->ecx = t6;
    g->esp = sp0 - 0x10u;
    t7 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be090u), t6);
    t8 = g->ecx;
    t9 = rd32(arg1 + 8u);
    g->ecx = t8;
    g->edx = t9;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be07cu), t9);
    t10 = g->ecx;
    t11 = g->edx;
    t12 = rd16(arg1 + 0xcu);
    g->eax = t12;
    g->edx = t11;
    g->esp = sp0 - 0x20u;
    t13 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be068u), t12);
    t14 = g->edx;
    t15 = rd16(arg1 + 0xeu);
    g->ecx = t15;
    g->esp = sp0 - 0x28u;
    t16 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be054u), t15);
    t17 = g->ecx;
    t18 = rd8(arg1 + 0x10u);
    g->ecx = t17;
    g->edx = t18;
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be040u), t18);
    t19 = g->ecx;
    t20 = g->edx;
    t21 = rd8(arg1 + 0x11u);
    g->eax = t21;
    g->edx = t20;
    g->esp = sp0 - 0x38u;
    t22 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be02cu), t21);
    t23 = g->edx;
    t24 = rd8(arg1 + 0x12u);
    g->ecx = t24;
    g->esp = sp0 - 0x40u;
    t25 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be014u), t24);
    t26 = g->ecx;
    t27 = rd8(arg1 + 0x13u);
    g->ecx = t26;
    g->edx = t27;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be000u), t27);
    t28 = g->ecx;
    t29 = g->edx;
    t30 = rd16(arg1 + 0x14u);
    g->eax = t30;
    g->edx = t29;
    g->esp = sp0 - 0xcu;
    t31 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bdfecu), t30);
    t32 = g->edx;
    t33 = rd16(arg1 + 0x16u);
    g->ecx = t33;
    g->esp = sp0 - 0x14u;
    t34 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bdfd8u), t33);
    t35 = g->ecx;
    t36 = rd8(arg1 + 0x18u);
    g->ecx = t35;
    g->edx = t36;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bdfc0u), t36);
    t37 = g->ecx;
    t38 = g->edx;
    t39 = rd8(arg1 + 0x20u);
    g->eax = t39;
    g->edx = t38;
    g->esp = sp0 - 0x24u;
    t40 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bdfa8u), t39);
    t41 = g->edx;
    t42 = rd32(arg1 + 0x28u);
    g->ecx = t42;
    g->esp = sp0 - 0x2cu;
    t43 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bdf90u), t42);
    t44 = g->ecx;
    t45 = rd32(arg1 + 0x2cu);
    g->edx = t45;
    g->esp = sp0 - 0x34u;
    t46 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bdf78u), t45);
    t47 = g->edx;
    g->edx = t47;
    return t46;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a60a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a60a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
