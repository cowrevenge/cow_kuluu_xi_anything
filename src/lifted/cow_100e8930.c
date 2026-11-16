/* f_0x100e8930 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100e8930(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;

    t1 = rd32(COW_IMG(0x104dfd98u));
    edi = rd32(COW_IMG(0x104dfd98u)) + 0x57d8u;
    eax = 0u;
    ecx = 0x1024u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t1;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0xdcu, COW_IMG(0x100e9c50u));
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 != 1u)
    {
        eax = t2;
        goto L_100e8a33;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t5 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0xddu, COW_IMG(0x100ea380u));
    t6 = g->ecx;
    t7 = g->edx;
    if ((uint8_t)t5 != 1u)
    {
        eax = t5;
        goto L_100e8a33;
    }
    eax = t5;
    ecx = t6;
    edx = t7;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t8 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0xe2u, COW_IMG(0x100ea560u));
    t9 = g->ecx;
    t10 = g->edx;
    if ((uint8_t)t8 != 1u)
    {
        eax = t8;
        goto L_100e8a33;
    }
    eax = t8;
    ecx = t9;
    edx = t10;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t11 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0xdeu, COW_IMG(0x100ea6d0u));
    t12 = g->ecx;
    t13 = g->edx;
    if ((uint8_t)t11 != 1u)
    {
        eax = t11;
        goto L_100e8a33;
    }
    eax = t11;
    ecx = t12;
    edx = t13;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t14 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0xdfu, COW_IMG(0x100e9cb0u));
    t15 = g->ecx;
    t16 = g->edx;
    if ((uint8_t)t14 != 1u)
    {
        eax = t14;
        goto L_100e8a33;
    }
    eax = t14;
    ecx = t15;
    edx = t16;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t17 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0xe0u, COW_IMG(0x100ea780u));
    t18 = g->ecx;
    t19 = g->edx;
    if ((uint8_t)t17 != 1u)
    {
        eax = t17;
        goto L_100e8a33;
    }
    eax = t17;
    ecx = t18;
    edx = t19;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t20 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0xe1u, COW_IMG(0x100ea7f0u));
    t21 = g->ecx;
    t22 = g->edx;
    if ((uint8_t)t20 != 1u)
    {
        eax = t20;
        goto L_100e8a33;
    }
    eax = t20;
    ecx = t21;
    edx = t22;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t23 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0xc8u, COW_IMG(0x100e9ee0u));
    t24 = g->ecx;
    t25 = g->edx;
    if ((uint8_t)t23 != 1u)
    {
        eax = t23;
        goto L_100e8a33;
    }
    eax = t23;
    ecx = t24;
    edx = t25;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t26 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0xccu, COW_IMG(0x100ea810u));
    t27 = g->ecx;
    t28 = g->edx;
    if ((uint8_t)t26 != 1u)
    {
        eax = t26;
        goto L_100e8a33;
    }
    eax = t26;
    ecx = t27;
    edx = t28;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t29 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0x11du, COW_IMG(0x100eaa10u));
    t30 = g->edx;
    if ((uint8_t)t29 == 1u)
    {
        edx = t30;
        goto L_100e8a36;
    }
    eax = t29;
L_100e8a33: ;
    return eax & 0xffffff00u;
L_100e8a36: ;
    t31 = rd32(COW_IMG(0x104dfd98u)) + 0x3c3a4u;
    t32 = rd32(COW_IMG(0x104dfd98u)) + 0x57dau;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x10312090u), t32, g->ecx, g->edx, 1, 3, t32, t31, 0x10u);
    t33 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c390u);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x57ecu, t33);
    t34 = rd32(COW_IMG(0x104dfd98u)) + 0x3c3a4u;
    t35 = rd32(COW_IMG(0x104dfd98u)) + 0x609eu;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10312090u), t35, g->ecx, g->edx, 1, 3, t35, t34, 0x10u);
    t36 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c390u);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x60b0u, t36);
    t37 = rd32(COW_IMG(0x104dfd98u)) + 0x3c3a4u;
    t38 = rd32(COW_IMG(0x104dfd98u)) + 0x6962u;
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x10312090u), t38, g->ecx, g->edx, 1, 3, t38, t37, 0x10u);
    t39 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c390u);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x6974u, t39);
    t40 = rd32(COW_IMG(0x104dfd98u)) + 0x3c3a4u;
    t41 = rd32(COW_IMG(0x104dfd98u)) + 0x7226u;
    g->ecx = t40;
    g->esp = sp0 - 0x24u;
    cow_call_regs(g, COW_IMG(0x10312090u), t41, g->ecx, g->edx, 1, 3, t41, t40, 0x10u);
    t42 = g->ecx;
    t43 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c390u);
    t44 = rd32(COW_IMG(0x104dfd98u));
    wr32(t44 + 0x7238u, t43);
    g->eax = t44;
    g->esp = sp0;
    t45 = cow_stdcall(g, COW_IMG(0x100da570u), 0);
    if (t45 == 0u) goto L_100e8b13;
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x981cu, 0u);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x9820u, 0u);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x9824u, 0u);
    return 1u;
L_100e8b13: ;
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x981cu, 2u);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x9820u, 2u);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x9824u, 2u);
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e8930(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e8930(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
