/* f_0x1015d630 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1015d630(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x10257820u), 2, arg2, 1u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_1015d69c;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_cdecl(g, COW_IMG(0x10257510u), 2, arg2, 7u);
    t5 = g->ecx;
    t6 = g->edx;
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 8u;
    t7 = cow_cdecl(g, COW_IMG(0x10257820u), 2, arg2, 6u);
    t8 = g->ecx;
    t9 = g->edx;
    g->ecx = t8;
    g->edx = t9;
    g->esp = sp0 - 0xcu;
    t10 = cow_cdecl(g, COW_IMG(0x10257820u), 2, arg2, 5u);
    t11 = g->ecx;
    t12 = g->edx;
    g->ecx = t11;
    g->edx = t12;
    g->esp = sp0 - 0x10u;
    t13 = cow_cdecl(g, COW_IMG(0x10257510u), 2, arg2, 4u);
    t14 = g->ecx;
    t15 = g->edx;
    g->ecx = t14;
    g->edx = t15;
    g->esp = sp0 - 0x14u;
    t16 = cow_cdecl(g, COW_IMG(0x10257820u), 2, arg2, 3u);
    t17 = g->ecx;
    t18 = g->edx;
    g->edx = t18;
    g->esp = sp0 - 0x18u;
    t19 = cow_cdecl(g, COW_IMG(0x10257820u), 2, arg2, 2u);
    t20 = g->edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10155f60u), arg1, 6, t19, t16, t13, t10, t7, t4);
    return 1u;
L_1015d69c: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t21 = cow_cdecl(g, COW_IMG(0x10257510u), 2, arg2, 7u);
    t22 = g->ecx;
    t23 = g->edx;
    g->ecx = t22;
    g->edx = t23;
    g->esp = sp0 - 8u;
    t24 = cow_cdecl(g, COW_IMG(0x10257820u), 2, arg2, 6u);
    t25 = g->ecx;
    t26 = g->edx;
    g->ecx = t25;
    g->edx = t26;
    g->esp = sp0 - 0xcu;
    t27 = cow_cdecl(g, COW_IMG(0x10257820u), 2, arg2, 5u);
    t28 = g->ecx;
    t29 = g->edx;
    g->ecx = t28;
    g->edx = t29;
    g->esp = sp0 - 0x10u;
    t30 = cow_cdecl(g, COW_IMG(0x10257510u), 2, arg2, 4u);
    t31 = g->ecx;
    t32 = g->edx;
    g->ecx = t31;
    g->edx = t32;
    g->esp = sp0 - 0x14u;
    t33 = cow_cdecl(g, COW_IMG(0x10257820u), 2, arg2, 3u);
    t34 = g->ecx;
    t35 = g->edx;
    g->edx = t35;
    g->esp = sp0 - 0x18u;
    t36 = cow_cdecl(g, COW_IMG(0x10257820u), 2, arg2, 2u);
    t37 = g->edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10156080u), arg1, 7, 1u, t36, t33, t30, t27, t24, t21);
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015d630(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1015d630(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
