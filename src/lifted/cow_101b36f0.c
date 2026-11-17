/* f_0x101b36f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101b36f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_1c;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 68u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, arg1);
    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x1011d290u), in_eax, g->ecx, in_edx, 1, 1, arg1);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        loc_4 = self;
        loc_8 = in_ebx;
        loc_c = in_esi;
        loc_10 = in_edi;
        goto L_101b3869;
    }
    eax = t1;
    edx = t2;
    wr8(self + 0xef22u, 0u);
    if ((uint8_t)arg1 == 8u)
    {
        loc_4 = self;
        loc_8 = in_ebx;
        loc_c = in_esi;
        loc_10 = in_edi;
        goto L_101b3869;
    }
    if ((uint8_t)arg1 == 0x20u) goto L_101b378f;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall(g, COW_IMG(0x101b5c90u), self, 0);
    t4 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        loc_4 = self;
        loc_8 = in_ebx;
        loc_c = in_esi;
        loc_10 = in_edi;
        goto L_101b3869;
    }
    edx = t4;
    wr32(sp0 - 0x14u, in_ebp);
    t5 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x18u, t5);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->ecx = t5;
    g->edx = edx;
    t6 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x18u;
    t7 = cow_stdcall(g, COW_IMG(0x101aff50u), 0);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x1cu, t7);
    g->ecx = t8;
    g->esp = sp0 - 0x1cu;
    t10 = cow_stdcall(g, COW_IMG(0x102bc87cu), 0);
    t11 = g->ecx;
    wr32(sp0 - 0x20u, sp0 - 0xcu);
    wr32(sp0 - 0x24u, sp0 - 4u);
    wr32(sp0 - 0x28u, t7);
    g->eax = sp0 - 4u;
    g->edx = sp0 - 0xcu;
    g->esp = sp0 - 0x28u;
    t12 = cow_stdcall(g, COW_IMG(0x102bc882u), 0);
    t13 = g->edx;
    if (t10 == 0u)
    {
        eax = t12;
        edx = t13;
        ebp = rd32(sp0 - 0x28u);
        edi = t7;
        goto L_101b3766;
    }
    edx = t13;
    ebp = rd32(sp0 - 0x28u);
    edi = t7;
    if (!(rd32(sp0 - 0x10u) >> 8u & 1u))
    {
        eax = rd32(sp0 - 0x10u);
        goto L_101b3778;
    }
    eax = rd32(sp0 - 0x10u);
L_101b3766: ;
    wr32(sp0 - 0x28u, arg1);
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t14 = cow_call_regs(g, COW_IMG(0x101b6810u), eax, self, g->edx, 0, 1, arg1);
    t15 = g->ecx;
    t16 = g->edx;
    if (t14 != 0xffffffffu)
    {
        eax = t14;
    }
    else
    {
        eax = t14;
        ecx = t15;
        edx = t16;
        g->eax = eax;
        g->esp = sp0 - 0x24u;
        t17 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
        eax = t17;
    }
L_101b3778: ;
    wr32(sp0 - 0x28u, edi);
    t18 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x2cu, t18);
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, COW_IMG(0x101aff60u), 7, t18, edi, sp0 - 4u, sp0 - 0xcu, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = ebp;
    return;
L_101b378f: ;
    if (rd32(rd32(COW_IMG(0x10456a28u))) != 0x60u)
    {
        eax = rd32(COW_IMG(0x10456a28u));
        goto L_101b3855;
    }
    eax = rd32(COW_IMG(0x10456a28u));
    t19 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x14u, t19);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x103d3c64u));
    g->edx = t19;
    t20 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x14u;
    t21 = cow_stdcall(g, COW_IMG(0x101aff50u), 0);
    t22 = g->ecx;
    t23 = g->edx;
    wr32(sp0 - 0x18u, t21);
    g->edx = t23;
    g->esp = sp0 - 0x18u;
    t24 = cow_stdcall(g, COW_IMG(0x102bc87cu), 0);
    t25 = g->edx;
    g->edx = t25;
    t26 = cow_thiscall(g, COW_IMG(0x101b5cc0u), self, 0);
    t27 = g->edx;
    if ((uint8_t)t26 == 0u)
    {
        eax = t26;
        edx = t27;
        ebx = t24;
        edi = t21;
        goto L_101b3811;
    }
    edx = t27;
    ebx = t24;
    edi = t21;
    g->eax = rd32(self);
    g->edx = edx;
    t28 = rd32(self);
    g->esp = sp0 - 0x18u;
    t29 = cow_thiscall(g, rd32(t28 + 0x40u), self, 0);
    t30 = g->ecx;
    t31 = g->edx;
    if ((uint8_t)t29 == 0u)
    {
        eax = t29;
        edx = t31;
        goto L_101b3811;
    }
    eax = t29;
    ecx = t30;
    edx = t31;
    if (ebx != 0u)
    {
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, COW_IMG(0x103d3c84u));
        wr32(sp0 - 0x2cu, 9u);
        wr32(sp0 - 0x30u, edi);
        g->eax = eax;
        g->esp = sp0 - 0x18u;
        t32 = cow_stdcall(g, COW_IMG(0x102bc88eu), 6, edi, 9u, COW_IMG(0x103d3c84u), 0u, 0u, 0u);
        eax = t32;
    }
    wr32(sp0 - 0x1cu, edi);
    t33 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x20u, t33);
    g->edx = t33;
    g->esp = sp0 - 0x20u;
    cow_stdcall(g, COW_IMG(0x101aff60u), 0);
    t34 = g->edx;
    wr32(sp0 - 0x24u, 0xau);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, 0x78u);
    wr32(sp0 - 0x38u, 5u);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, 4u);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(rd32(self) + 0x28u), self, 12, 4u, 0u, 5u, 0x78u, 0u, 0u, 0u, 0xau, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    return;
L_101b3811: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t35 = cow_thiscall(g, COW_IMG(0x101b5c90u), self, 0);
    t36 = g->edx;
    wr32(sp0 - 0x1cu, edi);
    if ((uint8_t)t35 == 0u)
    {
        edx = t36;
        loc_1c = edi;
        goto L_101b3840;
    }
    eax = t35;
    loc_1c = edi;
    t37 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x20u, t37);
    g->eax = eax;
    g->edx = t37;
    g->esp = sp0 - 0x10u;
    t38 = cow_stdcall(g, COW_IMG(0x101aff60u), 4, t37, loc_1c, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t39 = g->edx;
    if (ebx != 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        goto L_101b3869;
    }
    eax = t38;
    edx = t39;
    wr32(sp0 - 0x14u, 0x20u);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x101b6810u), eax, self, g->edx, 0, 1, 0x20u);
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    return;
L_101b3840: ;
    t40 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x20u, t40);
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, COW_IMG(0x101aff60u), 4, t40, loc_1c, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    return;
L_101b3855: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t41 = cow_thiscall(g, COW_IMG(0x101b5c90u), self, 0);
    t42 = g->edx;
    if ((uint8_t)t41 == 0u)
    {
        loc_4 = self;
        loc_8 = in_ebx;
        loc_c = in_esi;
        loc_10 = in_edi;
    }
    else
    {
        eax = t41;
        edx = t42;
        wr32(sp0 - 0x14u, 0x20u);
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x101b6810u), eax, self, g->edx, 0, 1, 0x20u);
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
    }
L_101b3869: ;
    g->ebx = loc_8;
    g->esi = loc_c;
    g->edi = loc_10;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b36f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101b36f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
