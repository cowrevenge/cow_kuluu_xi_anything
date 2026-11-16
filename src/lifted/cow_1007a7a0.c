/* f_0x1007a7a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007a7a0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc0d0u), in_eax, g->ecx, in_edx, 1, 2, 0x44u, 0u);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        edx = t2;
        loc_4 = self;
        goto L_1007a997;
    }
    edx = t2;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t4 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        edx = t4;
        goto L_1007a7d1;
    }
    edx = t4;
    g->edx = edx;
    return -arg3;
L_1007a7d1: ;
    t5 = rd32(eax + 0x70u);
    if (rd32(eax + 0x70u) != 0u)
    {
        edi = t5;
        loc_4 = t5;
        goto L_1007a7e7;
    }
    loc_4 = t5;
    g->edx = edx;
    return -arg3;
L_1007a7e7: ;
    if (rd8(COW_IMG(0x1047d498u)) == 0u) goto L_1007a804;
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047d498u));
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10157850u), rd32(COW_IMG(0x1057876cu)), 0);
    t6 = g->edx;
    g->edx = t6;
    return arg3;
L_1007a804: ;
    t7 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    g->ecx = t7;
    g->edx = edx;
    t8 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 0x10u;
    t9 = cow_cdecl(g, COW_IMG(0x10079170u), 1, t7);
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 == 1u)
    {
        eax = t9;
        edx = t11;
        esi = t9;
        goto L_1007a901;
    }
    eax = t9;
    ecx = t10;
    edx = t11;
    esi = t9;
    if (esi == 2u) goto L_1007a979;
    g->eax = eax;
    g->edx = edx;
    t12 = rd32(COW_IMG(0x1057876cu));
    g->esp = sp0 - 0x10u;
    t13 = cow_thiscall(g, COW_IMG(0x10157780u), t12, 2, 0u, 0u);
    t14 = g->ecx;
    t15 = g->edx;
    if (rd32(COW_IMG(0x1047d490u)) != 2u)
    {
        eax = t13;
        ecx = t14;
        edx = t15;
        goto L_1007a8f8;
    }
    ecx = t14;
    t16 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    g->edx = rd32(COW_IMG(0x103551e0u));
    t17 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 0x10u;
    t18 = cow_call_regs(g, COW_IMG(0x1007a1c0u), t16, g->ecx, g->edx, 1, 4, t16, 1u, 0u, 0u);
    t19 = g->edx;
    if (t18 == 0u)
    {
        edx = t19;
        goto L_1007a997;
    }
    eax = t18;
    esi = t18;
    t20 = rd32(COW_IMG(0x10480af0u) + rd32(esi) * 4u);
    g->edx = t20;
    t21 = rd32(esi + 4u);
    t22 = rd32(esi);
    g->esp = sp0 - 8u;
    t23 = cow_call_regs(g, COW_IMG(0x101cc220u), eax, g->ecx, g->edx, 1, 3, t20, in_edi, in_esi);
    t24 = g->edx;
    if ((uint8_t)t23 != 0u)
    {
        edx = t24;
        ebx = t21;
        edi = t22;
        goto L_1007a89b;
    }
    edx = t24;
    ebx = t21;
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x95u);
    t25 = g->edx;
    g->ebx = in_ebx;
    g->edx = t25;
    return arg3;
L_1007a89b: ;
    if (rd32(loc_4 + 0x170u) == 1u)
    {
        t27 = rd32(esi + 4u);
        eax = t27;
        ecx = rd32(esi);
    }
    else
    {
        eax = loc_4;
        t26 = rd32(esi + 4u);
        ecx = t26;
        edx = rd32(esi);
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t28 = cow_stdcall(g, COW_IMG(0x100780a0u), 0);
    t29 = g->edx;
    if (t28 != 0u)
    {
        edx = t29;
        goto L_1007a997;
    }
    eax = t28;
    edx = t29;
    if (rd32(COW_IMG(0x1057876cu)) == 0u) goto L_1007a997;
    ecx = rd32(COW_IMG(0x1057876cu));
    if (edi == 0u) goto L_1007a997;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10157c60u), ecx, 4, edi, ebx, eax, eax);
    t30 = g->edx;
    g->ebx = in_ebx;
    g->edx = t30;
    return arg3;
L_1007a8f8: ;
    if (rd32(edi + 0x170u) == 1u) goto L_1007a979;
L_1007a901: ;
    if (rd32(COW_IMG(0x1057876cu)) == 0u)
    {
        ecx = rd32(COW_IMG(0x1057876cu));
        goto L_1007a914;
    }
    ecx = rd32(COW_IMG(0x1057876cu));
    g->esp = sp0 - 0x10u;
    t36 = cow_call_regs(g, COW_IMG(0x101597f0u), eax, ecx, edx, 1, 0);
    t37 = g->ecx;
    if (t36 != 0u)
    {
        eax = t36;
        goto L_1007a940;
    }
    eax = t36;
    ecx = t37;
L_1007a914: ;
    if (esi != 0u)
    {
        t39 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
        ecx = rd32(COW_IMG(0x103551e0u));
        edx = t39;
    }
    else
    {
        t38 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
        eax = t38;
        edx = rd32(COW_IMG(0x103551e0u));
    }
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t40 = cow_call_regs(g, COW_IMG(0x1007a1c0u), eax, g->ecx, g->edx, 1, 0);
    t41 = g->edx;
    if (t40 == 0u)
    {
        edx = t41;
        goto L_1007a997;
    }
    eax = t40;
L_1007a940: ;
    t42 = rd32(eax + 4u);
    g->eax = eax;
    g->edx = rd32(eax);
    t43 = rd32(eax);
    g->esp = sp0 - 0x10u;
    t44 = cow_cdecl(g, COW_IMG(0x100780a0u), 5, t43, t42, 2u, 0u, 0u);
    t45 = g->edx;
    if (t44 != 0u)
    {
        edx = t45;
        goto L_1007a997;
    }
    eax = t44;
    edx = t45;
    esi = t43;
    edi = t42;
    if (esi == 0u) goto L_1007a997;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10157c60u), rd32(COW_IMG(0x1057876cu)), 4, esi, edi, eax, eax);
    t46 = g->edx;
    g->ebx = in_ebx;
    g->edx = t46;
    return arg3;
L_1007a979: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t31 = cow_stdcall(g, COW_IMG(0x100fc510u), 0);
    t32 = g->edx;
    if (t31 == 0u)
    {
        edx = t32;
    }
    else
    {
        eax = t31;
        t33 = rd32(eax + 4u);
        g->edx = rd32(eax);
        t34 = rd32(eax);
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x100780a0u), 5, t34, t33, 4u, 0u, 0u);
        t35 = g->edx;
        edx = t35;
    }
L_1007a997: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007a7a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007a7a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
