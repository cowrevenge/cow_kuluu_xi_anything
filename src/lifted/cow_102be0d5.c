/* f_0x102be0d5 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102be0d5(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if ((arg3 >> 8u & 4u) == 0u)
    {
        eax = in_eax;
        ecx = self;
        edx = in_edx;
    }
    else
    {
        wr32(sp0 - 0x14u, arg1);
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        t1 = cow_cdecl(g, COW_IMG(0x102c31b8u), 1, arg1);
        t2 = g->edx;
        eax = t1;
        ecx = arg1;
        edx = t2;
    }
    wr32(sp0 - 0x14u, arg2);
    wr32(sp0 - 0x18u, arg1);
    g->esp = sp0 - 0xcu;
    t3 = cow_call_regs(g, COW_IMG(0x102bd021u), eax, g->ecx, edx, 1, 3, arg1, arg2, in_edi);
    t4 = g->edx;
    if (!(arg3 & 1u))
    {
        eax = t3;
        ecx = arg2;
        edx = t4;
    }
    else
    {
        eax = t3;
        edx = t4;
        wr32(sp0 - 0x14u, arg1);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t5 = cow_cdecl(g, COW_IMG(0x102be319u), 1, arg1);
        t6 = g->edx;
        eax = t5;
        ecx = arg1;
        edx = t6;
    }
    if ((arg3 & 2u) != 0u)
    {
        wr32(sp0 - 0x14u, arg1);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t7 = cow_cdecl(g, COW_IMG(0x102be322u), 1, arg1);
        t8 = g->edx;
        eax = t7;
        ecx = arg1;
        edx = t8;
    }
    if ((arg3 & 8u) != 0u)
    {
        wr32(sp0 - 0x14u, arg1);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t9 = cow_cdecl(g, COW_IMG(0x102c311eu), 1, arg1);
        t10 = g->edx;
        eax = t9;
        ecx = arg1;
        edx = t10;
    }
    if ((arg3 & 0x10u) != 0u)
    {
        if (rd8(arg1 + 0x127u) < 8u) goto L_102be144;
        if (rd8(arg1 + 0x126u) == 3u) goto L_102be144;
        wr32(sp0 - 0x14u, 0x10u);
        wr32(sp0 - 0x18u, arg2);
        wr32(sp0 - 0x1cu, arg1);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t11 = cow_cdecl(g, COW_IMG(0x102c2784u), 3, arg1, arg2, 0x10u);
        t12 = g->ecx;
        t13 = g->edx;
        if (t11 == 0u)
        {
            eax = t11;
            ecx = t12;
            edx = t13;
            goto L_102be14b;
        }
        eax = t11;
        ecx = t12;
        edx = t13;
L_102be144: ;
        wr32(sp0 - 0x14u, arg1);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t14 = cow_cdecl(g, COW_IMG(0x102bea92u), 1, arg1);
        t15 = g->edx;
        eax = t14;
        ecx = arg1;
        edx = t15;
    }
L_102be14b: ;
    if ((arg3 & 0x20u) != 0u)
    {
        wr32(sp0 - 0x14u, arg1);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t16 = cow_cdecl(g, COW_IMG(0x102c31c1u), 1, arg1);
        t17 = g->edx;
        eax = t16;
        ecx = arg1;
        edx = t17;
    }
    if ((arg3 & 0x40u) != 0u)
    {
        wr32(sp0 - 0x14u, 2u);
        wr32(sp0 - 0x18u, arg2);
        wr32(sp0 - 0x1cu, arg1);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t18 = cow_cdecl(g, COW_IMG(0x102c2784u), 3, arg1, arg2, 2u);
        t19 = g->ecx;
        t20 = g->edx;
        if (t18 == 0u)
        {
            eax = t18;
            ecx = t19;
            edx = t20;
        }
        else
        {
            ecx = t19;
            edx = t20;
            wr32(sp0 - 0x14u, sp0 + 0xcu);
            wr32(sp0 - 0x18u, arg2);
            wr32(sp0 - 0x1cu, arg1);
            g->eax = sp0 + 0xcu;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t21 = cow_cdecl(g, COW_IMG(0x102c2f32u), 3, arg1, arg2, sp0 + 0xcu);
            t22 = g->ecx;
            t23 = g->edx;
            wr32(sp0 - 0x20u, arg3);
            wr32(sp0 - 0x24u, arg1);
            g->ecx = t22;
            g->edx = t23;
            g->esp = sp0 - 0x14u;
            t24 = cow_cdecl(g, COW_IMG(0x102c3130u), 4, arg1, arg3, arg1, arg2);
            t25 = g->ecx;
            t26 = g->edx;
            eax = t24;
            ecx = t25;
            edx = t26;
        }
    }
    if ((int8_t)arg3 < 0)
    {
        wr32(sp0 - 0x14u, arg1);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t27 = cow_cdecl(g, COW_IMG(0x102c30eau), 1, arg1);
        t28 = g->edx;
        eax = t27;
        ecx = arg1;
        edx = t28;
    }
    if (arg3 >> 8u & 1u)
    {
        wr32(sp0 - 0x14u, arg1);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t29 = cow_cdecl(g, COW_IMG(0x102c31afu), 1, arg1);
        t30 = g->edx;
        eax = t29;
        ecx = arg1;
        edx = t30;
    }
    if ((arg3 >> 8u & 2u) != 0u)
    {
        wr32(sp0 - 0x14u, arg1);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t31 = cow_cdecl(g, COW_IMG(0x102c30f3u), 1, arg1);
        t32 = g->edx;
        eax = t31;
        ecx = arg1;
        edx = t32;
    }
    wr32(sp0 - 0x14u, arg2);
    wr32(sp0 - 0x18u, arg1);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t33 = cow_thiscall_cdecl(g, COW_IMG(0x102bd4d1u), ecx, 3, arg1, arg2, rd32(sp0 - 0x10u));
    t34 = g->ecx;
    t35 = g->edx;
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0x40u);
    wr32(sp0 - 0x24u, arg2);
    wr32(sp0 - 0x28u, arg1);
    g->esp = sp0 - 0x18u;
    t36 = cow_call_regs(g, COW_IMG(0x102c379bu), g->eax, t34, t35, 1, 4, arg1, arg2, 0x40u, 0u);
    t37 = g->ecx;
    t38 = g->edx;
    if (rd32(arg2 + 0xf8u) != 0u)
    {
        eax = t36;
        ecx = t37;
        edx = t38;
    }
    else
    {
        ecx = t37;
        edx = t38;
        t39 = rd32(arg2 + 4u) << 2u;
        wr32(sp0 - 0x14u, t39);
        wr32(sp0 - 0x18u, arg1);
        g->eax = t39;
        g->esp = sp0 - 0xcu;
        t40 = cow_call_regs(g, COW_IMG(0x102c43fcu), g->eax, ecx, edx, 1, 3, arg1, t39, rd32(sp0 - 0x10u));
        t41 = g->edx;
        wr32(arg2 + 0xb8u, rd32(arg2 + 0xb8u) | 0x40u);
        t42 = rd32(arg2 + 4u);
        wr32(arg2 + 0xf8u, t40);
        if ((int32_t)t42 <= 0)
        {
            eax = t40;
            ecx = rd32(sp0 - 0x14u);
            edx = t41;
            goto L_102be205;
        }
        eax = t40;
        ecx = rd32(sp0 - 0x14u);
        edx = t41;
        ebx = 0u;
L_102be1e5: ;
        wr32(sp0 - 0x14u, arg2);
        wr32(sp0 - 0x18u, arg1);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t43 = cow_cdecl(g, COW_IMG(0x102c279eu), 2, arg1, arg2);
        t44 = g->ecx;
        t45 = g->edx;
        wr32(sp0 - 0x1cu, t43);
        wr32(sp0 - 0x20u, arg1);
        g->esp = sp0 - 0x14u;
        t46 = cow_call_regs(g, COW_IMG(0x102c43fcu), g->eax, t44, t45, 1, 3, arg1, t43, arg1);
        t47 = g->edx;
        t48 = rd32(arg2 + 0xf8u);
        wr32(ebx * 4u + t48, t46);
        if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg2 + 4u))
        {
            eax = t46;
            ecx = t48;
            edx = t47;
            ebx = ebx + 1u;
            goto L_102be1e5;
        }
        eax = t46;
        ecx = t48;
        edx = t47;
    }
L_102be205: ;
    t49 = rd32(arg2 + 0xf8u);
    wr32(sp0 - 0x14u, t49);
    wr32(sp0 - 0x18u, arg1);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t50 = cow_thiscall_cdecl(g, COW_IMG(0x102bd998u), ecx, 3, arg1, t49, rd32(sp0 - 0x10u));
    t51 = g->ecx;
    t52 = g->edx;
    wr8(arg2 + 9u, rd8(arg2 + 9u) | 0x80u);
    wr32(sp0 - 0x1cu, arg2);
    wr32(sp0 - 0x20u, arg1);
    g->edx = t52;
    g->esp = sp0 - 0x14u;
    t53 = cow_cdecl(g, COW_IMG(0x102bd9e5u), 3, arg1, arg2, arg1);
    t54 = g->edx;
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = t54;
    return t53;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102be0d5(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102be0d5(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
