/* f_0x101da370 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101da370(Guest* g)
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
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x101d7ac0u), in_eax, g->ecx, g->edx, 1, 1, 1u);
    t1 = g->edx;
    if (rd32(COW_IMG(0x105781f8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x105781f8u));
        edx = t1;
    }
    else
    {
        eax = rd32(COW_IMG(0x105781f8u));
        edx = t1;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t2 = cow_thiscall(g, COW_IMG(0x10221300u), eax + 0x20u, 1, 0x80000000u);
        t3 = g->edx;
        eax = t2;
        edx = t3;
    }
    g->eax = eax;
    g->esp = sp0 - 4u;
    t4 = cow_fastcall(g, COW_IMG(0x10140e40u), rd32(COW_IMG(0x1057824cu)), edx, 0);
    t5 = g->edx;
    g->edx = t5;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1036f718u));
    t6 = g->edx;
    t7 = rd32(COW_IMG(0x10664514u));
    wr8(t7 + 0x3au, 0u);
    wr32(t7 + 0x14u, 0u);
    t8 = rd32(t7 + 8u);
    g->edx = t6;
    cow_call_regs(g, COW_IMG(0x1015e790u), t8, COW_IMG(0x10621838u), g->edx, 0, 2, t8, 1u);
    t9 = g->edx;
    t10 = rd32(COW_IMG(0x10664520u));
    t11 = rd32(rd32(COW_IMG(0x10664520u)) + 8u);
    wr8(t10 + 0x3au, 0u);
    wr32(t10 + 0x14u, 0u);
    g->edx = t9;
    t12 = cow_call_regs(g, COW_IMG(0x1015e790u), t10, COW_IMG(0x10621838u), g->edx, 0, 2, t11, 1u);
    t13 = g->edx;
    g->ebx = 0u;
    t14 = cow_thiscall(g, COW_IMG(0x101f2600u), rd32(COW_IMG(0x10663740u)), 0);
    t15 = rd32(COW_IMG(0x1066342cu));
    wr16(t15 + 0x89au, 0xffffu);
    g->edx = t15;
    t16 = cow_thiscall(g, COW_IMG(0x1020a4c0u), rd32(COW_IMG(0x10663428u)), 0);
    t17 = g->edx;
    g->edx = t17;
    t18 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037ef68u));
    t19 = g->edx;
    g->edx = t19;
    t20 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037ef54u));
    t21 = g->edx;
    g->edx = t21;
    t22 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037ef40u));
    t23 = g->edx;
    g->edx = t23;
    t24 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037ef2cu));
    t25 = g->edx;
    g->edx = t25;
    t26 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037ef18u));
    t27 = g->edx;
    g->edx = t27;
    t28 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037ef04u));
    t29 = g->edx;
    g->edx = t29;
    t30 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037eef0u));
    t31 = g->edx;
    g->edx = t31;
    t32 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037eedcu));
    t33 = g->edx;
    g->edx = t33;
    t34 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037eec8u));
    t35 = g->edx;
    g->edx = t35;
    t36 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037ee3cu));
    t37 = g->edx;
    g->edx = t37;
    t38 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037eea0u));
    t39 = g->edx;
    g->edx = t39;
    t40 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037ee8cu));
    t41 = g->edx;
    g->edx = t41;
    t42 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037ee78u));
    t43 = g->edx;
    g->edx = t43;
    t44 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037ee64u));
    t45 = g->edx;
    g->edx = t45;
    t46 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037ee50u));
    t47 = g->edx;
    g->edx = t47;
    t48 = rd32(COW_IMG(0x10663448u));
    cow_thiscall(g, COW_IMG(0x101d7820u), t48, 0);
    t49 = g->ecx;
    t50 = g->edx;
    if (rd32(COW_IMG(0x10663448u)) == 0u)
    {
        ecx = t49;
        edx = t50;
    }
    else
    {
        eax = rd32(COW_IMG(0x10663448u));
        ecx = t49;
        edx = t50;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
        t51 = g->ecx;
        t52 = g->edx;
        wr32(COW_IMG(0x10663448u), 0u);
        ecx = t51;
        edx = t52;
    }
    if (rd32(COW_IMG(0x10663444u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10663444u));
    }
    else
    {
        eax = rd32(COW_IMG(0x10663444u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t53 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
        t54 = g->edx;
        wr32(COW_IMG(0x10663444u), 0u);
        eax = t53;
        edx = t54;
    }
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101da370(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101da370(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
