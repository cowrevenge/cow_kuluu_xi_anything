/* f_0x101dae10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=4 */
uint32_t cow_fn_101dae10(Guest* g)
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x10160c80u), in_eax, COW_IMG(0x10621838u), g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_101dae25;
    }
    eax = t1;
    return eax & 0xffffff00u;
L_101dae25: ;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x101cc0d0u), eax, g->ecx, edx, 1, 2, 0x44u, 0u);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        goto L_101dae38;
    }
    eax = t4;
    return eax;
L_101dae38: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    t7 = rd32(COW_IMG(0x105782b4u));
    g->esp = sp0 - 8u;
    t8 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
    t9 = g->ecx;
    t10 = g->edx;
    if (rd32(t7 + 0x18u) < t8)
    {
        eax = t8;
        ecx = t9;
        edx = t10;
        goto L_101dae4d;
    }
    eax = t8;
    return eax & 0xffffff00u;
L_101dae4d: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t11 = cow_cdecl(g, COW_IMG(0x101cc070u), 1, arg4);
    t12 = g->ecx;
    t13 = g->edx;
    if ((uint8_t)t11 != 0u)
    {
        ecx = t12;
        edx = t13;
        goto L_101dae73;
    }
    edx = t13;
    g->eax = arg1;
    g->esp = sp0 - 8u;
    t14 = cow_thiscall(g, COW_IMG(0x101f23a0u), rd32(COW_IMG(0x10663740u)), 1, arg1);
    return (t14 & 0xffffff00u) | 1u;
L_101dae73: ;
    if (arg3 == 0u)
    {
        eax = arg3;
        goto L_101dae8d;
    }
    g->eax = arg3;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t15 = cow_thiscall_cdecl(g, arg3, ecx, 1, arg1);
    t16 = g->ecx;
    t17 = g->edx;
    if ((uint8_t)t15 != 0u)
    {
        eax = t15;
        goto L_101daf5c;
    }
    eax = t15;
    ecx = t16;
    edx = t17;
L_101dae8d: ;
    if ((uint8_t)arg4 == 0u) goto L_101daec1;
    g->edx = rd32(rd32(COW_IMG(0x1066346cu)));
    t18 = rd32(rd32(COW_IMG(0x1066346cu)));
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(t18 + 0x58u), rd32(COW_IMG(0x1066346cu)), 1, 0u);
    t19 = g->edx;
    t20 = rd32(COW_IMG(0x10663468u));
    wr8(t20 + 0x70u, 1u);
    wr8(t20 + 0x71u, (uint8_t)arg4);
    g->eax = arg2;
    t21 = cow_fastcall(g, COW_IMG(0x101dc880u), rd32(COW_IMG(0x10663468u)), t19, 2, arg2, 0u);
    return (t21 & 0xffffff00u) | 1u;
L_101daec1: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t22 = cow_call_regs(g, COW_IMG(0x10097b40u), eax, g->ecx, g->edx, 1, 0);
    t23 = g->edx;
    if ((uint8_t)t22 != 0u)
    {
        eax = t22;
        edx = t23;
        goto L_101daee8;
    }
    eax = t22;
    edx = t23;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t24 = cow_thiscall(g, COW_IMG(0x101f23a0u), rd32(COW_IMG(0x10663740u)), 1, arg1);
    t25 = g->edx;
    t26 = cow_thiscall(g, COW_IMG(0x10129d90u), rd32(COW_IMG(0x10578158u)), 1, 6u);
    return (t26 & 0xffffff00u) | 1u;
L_101daee8: ;
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x104dfd98u));
    t27 = rd32(COW_IMG(0x104dfd98u));
    g->esp = sp0 - 8u;
    t28 = cow_cdecl(g, COW_IMG(0x100f9680u), 1, t27);
    t29 = g->ecx;
    if ((uint8_t)t28 != 0u)
    {
        eax = t28;
        ecx = t29;
        goto L_101daefe;
    }
    eax = t28;
    return eax;
L_101daefe: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = rd32(COW_IMG(0x104dfd98u));
    t30 = rd32(COW_IMG(0x104dfd98u));
    g->esp = sp0 - 8u;
    t31 = cow_cdecl(g, COW_IMG(0x100f9600u), 1, t30);
    t32 = g->ecx;
    t33 = g->edx;
    if (t31 == 0u)
    {
        eax = t31;
        ecx = t32;
        edx = t33;
        goto L_101daf26;
    }
    eax = t31;
    edx = t33;
    g->ebx = arg4;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t34 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0xbcu);
    g->ebx = in_ebx;
    return (t34 & 0xffffff00u) | 1u;
L_101daf26: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x100a1860u), 1, 0x2eu);
    t35 = g->edx;
    g->edx = t35;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066346cu))) + 0x58u), rd32(COW_IMG(0x1066346cu)), 1, 0u);
    t36 = g->edx;
    t37 = rd32(COW_IMG(0x10663468u));
    wr8(t37 + 0x70u, 1u);
    wr8(t37 + 0x71u, 0u);
    g->eax = t37;
    t38 = cow_fastcall(g, COW_IMG(0x101dc880u), rd32(COW_IMG(0x10663468u)), t36, 2, arg2, 0u);
    eax = t38;
L_101daf5c: ;
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101dae10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101dae10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
