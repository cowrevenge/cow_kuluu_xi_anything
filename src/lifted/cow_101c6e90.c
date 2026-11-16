/* f_0x101c6e90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101c6e90(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_28;
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
    cow_frame(g, sp0, 84u);

    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 0x30u, in_ebp);
    wr32(sp0 - 0x34u, in_esi);
    wr32(sp0 - 0x38u, in_edi);
    wr32(sp0 - 0x24u, self);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x38u;
    t1 = cow_stdcall(g, COW_IMG(0x100dc080u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x3cu, 0x10u);
    g->ecx = t2;
    g->edx = t3;
    t4 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x10u);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0u)
    {
        ecx = t5;
        edx = t6;
        edi = t1;
        wr32(sp0 - 0x28u, 0u);
        loc_28 = 0u;
    }
    else
    {
        eax = t4;
        edx = t6;
        edi = t1;
        wr32(sp0 - 0x3cu, self);
        wr32(sp0 - 0x40u, 0x78u);
        wr32(sp0 - 0x44u, 0xa0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x38u;
        t7 = cow_thiscall(g, COW_IMG(0x101c7290u), eax, 3, 0xa0u, 0x78u, self);
        t8 = g->ecx;
        t9 = g->edx;
        wr32(sp0 - 0x28u, t7);
        ecx = t8;
        edx = t9;
        loc_28 = t7;
    }
    wr32(sp0 - 0x3cu, COW_IMG(0x1037ce68u));
    wr32(sp0 - 0x40u, 0u);
    wr32(sp0 - 0x44u, edi);
    wr32(sp0 - 0x48u, arg1);
    wr32(sp0 - 0x4cu, COW_IMG(0x1037ce54u));
    wr32(sp0 - 0x50u, sp0 - 0x20u);
    g->ebx = arg1;
    g->eax = sp0 - 0x20u;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t10 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1037ce54u), arg1, edi, 0u);
    t11 = g->edx;
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, sp0 - 0x20u);
    g->edx = t11;
    t12 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0x38u;
    t13 = cow_thiscall(g, COW_IMG(0x101c4c90u), t12, 2, sp0 - 0x20u, 0u);
    t14 = g->ecx;
    t15 = g->edx;
    if ((uint8_t)t13 == 0u)
    {
        eax = t13;
        edx = t15;
        esi = 0u;
        goto L_101c6f31;
    }
    eax = t13;
    ecx = t14;
    esi = 0u;
L_101c6f00: ;
    wr32(sp0 - 0x3cu, COW_IMG(0x1037ce68u));
    wr32(sp0 - 0x40u, esi + 1u);
    wr32(sp0 - 0x44u, edi);
    wr32(sp0 - 0x48u, arg1);
    wr32(sp0 - 0x4cu, COW_IMG(0x1037ce54u));
    wr32(sp0 - 0x50u, sp0 - 0x20u);
    g->ebx = arg1;
    g->edx = sp0 - 0x20u;
    g->esp = sp0 - 0x3cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1037ce54u), arg1, edi, esi + 1u);
    t16 = g->edx;
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, sp0 - 0x20u);
    g->eax = sp0 - 0x20u;
    g->edx = t16;
    t17 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0x38u;
    t18 = cow_thiscall(g, COW_IMG(0x101c4c90u), t17, 2, sp0 - 0x20u, 0u);
    t19 = g->ecx;
    t20 = g->edx;
    if ((uint8_t)t18 != 0u)
    {
        eax = t18;
        ecx = t19;
        esi = esi + 1u;
        goto L_101c6f00;
    }
    eax = t18;
    edx = t20;
    esi = esi + 1u;
L_101c6f31: ;
    wr32(sp0 - 0x3cu, sp0 - 0x20u);
    t21 = rd32(sp0 - 0x28u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x38u;
    t22 = cow_thiscall(g, COW_IMG(0x101c73d0u), t21, 1, sp0 - 0x20u);
    t23 = g->edx;
    if (t22 != 0u)
    {
        eax = t22;
        edx = t23;
        ebp = t21;
        goto L_101c6f7d;
    }
    eax = t22;
    edx = t23;
    ebp = t21;
    wr32(sp0 - 0x3cu, 0x78u);
    wr32(sp0 - 0x40u, 0xa0u);
    g->eax = eax;
    g->esp = sp0 - 0x38u;
    t24 = cow_thiscall(g, COW_IMG(0x101c76c0u), ebp, 2, 0xa0u, 0x78u);
    t25 = g->ecx;
    wr32(sp0 - 0x3cu, COW_IMG(0x1037ce4cu));
    wr32(sp0 - 0x40u, esi);
    wr32(sp0 - 0x44u, edi);
    wr32(sp0 - 0x48u, arg1);
    wr32(sp0 - 0x4cu, COW_IMG(0x1037ce54u));
    wr32(sp0 - 0x50u, sp0 - 0x20u);
    g->ebx = arg1;
    g->edx = sp0 - 0x20u;
    g->esp = sp0 - 0x3cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1037ce54u), arg1, edi, esi);
    t26 = g->edx;
    wr32(sp0 - 0x3cu, sp0 - 0x20u);
    g->eax = sp0 - 0x20u;
    g->edx = t26;
    g->esp = sp0 - 0x38u;
    t27 = cow_thiscall(g, COW_IMG(0x101c73d0u), ebp, 1, sp0 - 0x20u);
    t28 = g->edx;
    if (t27 == 0u)
    {
        eax = t27;
        edx = t28;
        goto L_101c6fa0;
    }
    eax = t27;
    edx = t28;
L_101c6f7d: ;
    if (ebp != 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 0x38u;
        t37 = cow_fastcall(g, COW_IMG(0x101c72d0u), ebp, edx, 0);
        t38 = g->ecx;
        t39 = g->edx;
        wr32(sp0 - 0x3cu, ebp);
        g->edx = t39;
        cow_cdecl(g, COW_IMG(0x1002c8b0u), 1, ebp);
        t40 = g->edx;
        edx = t40;
    }
    g->ebx = rd32(sp0 - 0x2cu);
    g->esi = rd32(sp0 - 0x34u);
    g->edi = rd32(sp0 - 0x38u);
    g->ebp = rd32(sp0 - 0x30u);
    g->edx = edx;
    return 4u;
L_101c6fa0: ;
    if (ebp != 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 0x38u;
        t29 = cow_fastcall(g, COW_IMG(0x101c72d0u), ebp, edx, 0);
        t30 = g->ecx;
        t31 = g->edx;
        wr32(sp0 - 0x3cu, ebp);
        g->edx = t31;
        t32 = cow_cdecl(g, COW_IMG(0x1002c8b0u), 1, ebp);
        t33 = g->edx;
        eax = t32;
        edx = t33;
    }
    t34 = rd32(sp0 - 0x24u);
    g->eax = eax;
    g->esp = sp0 - 0x38u;
    t35 = cow_thiscall(g, COW_IMG(0x101c6c50u), t34, 0);
    wr16(t35 + 6u, (uint16_t)arg1);
    wr32(t35, edi);
    wr16(t35 + 4u, (uint16_t)esi);
    t36 = rd32(t34 + 4u) + 1u;
    wr32(t34 + 4u, t36);
    if ((int32_t)t36 < 100)
    {
        edx = t36;
    }
    else
    {
        edx = t36;
        ebp = t34;
        wr32(ebp + 4u, 0x64u);
    }
    g->ebx = rd32(sp0 - 0x2cu);
    g->esi = rd32(sp0 - 0x34u);
    g->edi = rd32(sp0 - 0x38u);
    g->ebp = rd32(sp0 - 0x30u);
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c6e90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c6e90(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
