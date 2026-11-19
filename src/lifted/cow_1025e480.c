/* f_0x1025e480 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1025e480(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1025e4bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); self = g->edi - 0xc4u; g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_1025e4bb;
    case 0x1025e4d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_1025e4d3;
    case 0x1025e4f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_1025e4f1;
    case 0x1025e4fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_1025e4fd;
    case 0x1025e502u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_1025e502;
    case 0x1025e504u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_1025e504;
    case 0x1025e518u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_1025e518;
    case 0x1025e51au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_1025e51a;
    case 0x1025e526u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->edi - 0xc4u; goto E_1025e526;
    case 0x1025e546u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_1025e546;
    case 0x1025e54cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_1025e54c;
    case 0x1025e57au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_1025e57a;
    case 0x1025e58bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->edi - 0xc4u; goto E_1025e58b;
    default: break;
    }
#endif

    COW_AT(1025e480)
    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x103275f3u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    wr32(sp0 - 0x28u, self + 0xc4u);
    wr32(sp0 - 0x14u, self + 0xc4u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, self + 0xc4u);   /* kernel32.dll!EnterCriticalSection */
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 4u, 0u);
    if (rd32(self + 0x50u) == 0u)
    {
        eax = rd32(self + 0x50u);
        ecx = t2;
        edx = t3;
        goto L_1025e4d3;
    }
    eax = rd32(self + 0x50u);
    COW_AT(1025e4bb)
    wr32(sp0 - 0x28u, arg2);
    wr32(sp0 - 0x2cu, arg1);
    wr32(sp0 - 0x30u, eax + 8u);
    g->eax = eax + 8u;
    g->edx = arg1;
    t4 = rd32(eax + 8u);
    g->esp = sp0 - 0x24u;
    t5 = cow_thiscall(g, rd32(t4), t4, 3, eax + 8u, arg1, arg2);
    t6 = g->ecx;
    t7 = g->edx;
    eax = t5;
    ecx = t6;
    edx = t7;
    ebp = in_ebp;
L_1025e58b: ;
    COW_AT(1025e58b)
    wr32(sp0 - 0x28u, self + 0xc4u);
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, self + 0xc4u);   /* kernel32.dll!LeaveCriticalSection */
    t36 = g->edx;
    t37 = rd32(sp0 - 0xcu);
    t38 = rd32(sp0 - 0x1cu);
    t39 = rd32(sp0 - 0x20u);
    t40 = rd32(sp0 - 0x24u);
    wr32(g->fs_base, t37);
    g->ebx = t38;
    g->esi = t39;
    g->edi = t40;
    g->ebp = ebp;
    g->edx = t36;
    return eax;
L_1025e4d3: ;
    COW_AT(1025e4d3)
    wr32(sp0 - 0x28u, in_ebp);
    wr32(sp0 - 0x2cu, 0x50u);
    wr32(sp0 - 0x18u, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x20u;
    t8 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x50u, in_ebp, in_edi);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x10u, t8);
    wr8(sp0 - 4u, 1u);
    if (t8 == 0u)
    {
        ecx = t9;
        edx = t10;
    COW_AT(1025e518)
        eax = 0u;
    }
    else
    {
        edx = t10;
        ebp = t8;
    COW_AT(1025e4f1)
        wr32(sp0 - 0x2cu, 0u);
        g->eax = rd32(self);
        g->edx = edx;
        t11 = rd32(self);
        g->esp = sp0 - 0x28u;
        t12 = cow_thiscall(g, rd32(t11 + 0x1cu), self, 1, 0u);
        t13 = g->edx;
        if (t12 == 0u)
        {
            edx = t13;
    COW_AT(1025e502)
            ecx = 0u;
        }
        else
        {
            eax = t12;
            edx = t13;
    COW_AT(1025e4fd)
            ecx = eax + 0xcu;
        }
    COW_AT(1025e504)
        wr32(sp0 - 0x2cu, ecx);
        wr32(sp0 - 0x30u, sp0 - 0x18u);
        t14 = rd32(self + 4u);
        wr32(sp0 - 0x34u, t14);
        wr32(sp0 - 0x38u, 0u);
        g->eax = t14;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t15 = cow_thiscall(g, COW_IMG(0x10267ab0u), ebp, 4, 0u, t14, sp0 - 0x18u, ecx);
        t16 = g->ecx;
        t17 = g->edx;
        eax = t15;
        ecx = t16;
        edx = t17;
    }
    COW_AT(1025e51a)
    wr8(sp0 - 4u, 0u);
    wr32(self + 0x50u, eax);
    if (eax != 0u)
    {
        ebp = rd32(sp0 - 0x28u);
        goto L_1025e546;
    }
    ebp = rd32(sp0 - 0x28u);
    COW_AT(1025e526)
    wr32(sp0 - 0x28u, self + 0xc4u);
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, self + 0xc4u);   /* kernel32.dll!LeaveCriticalSection */
    t18 = g->edx;
    t19 = rd32(sp0 - 0xcu);
    t20 = rd32(sp0 - 0x1cu);
    t21 = rd32(sp0 - 0x20u);
    t22 = rd32(sp0 - 0x24u);
    wr32(g->fs_base, t19);
    g->ebx = t20;
    g->esi = t21;
    g->edi = t22;
    g->ebp = ebp;
    g->edx = t18;
    return 0x8007000eu;
L_1025e546: ;
    COW_AT(1025e546)
    if ((int32_t)rd32(sp0 - 0x18u) >= 0) goto L_1025e57a;
    COW_AT(1025e54c)
    wr32(sp0 - 0x28u, 1u);
    g->eax = eax;
    g->edx = rd32(eax + 8u);
    t23 = rd32(eax + 8u);
    g->esp = sp0 - 0x24u;
    t24 = cow_thiscall(g, rd32(t23 + 0xcu), eax + 8u, 1, 1u);
    t25 = g->ecx;
    t26 = g->edx;
    wr32(sp0 - 0x28u, self + 0xc4u);
    wr32(self + 0x50u, 0u);
    g->edx = t26;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, self + 0xc4u);   /* kernel32.dll!LeaveCriticalSection */
    t27 = g->edx;
    t28 = rd32(sp0 - 0xcu);
    t29 = rd32(sp0 - 0x1cu);
    t30 = rd32(sp0 - 0x20u);
    t31 = rd32(sp0 - 0x24u);
    wr32(g->fs_base, t28);
    g->ebx = t29;
    g->esi = t30;
    g->edi = t31;
    g->ebp = ebp;
    g->edx = t27;
    return 0x80004002u;
L_1025e57a: ;
    COW_AT(1025e57a)
    wr32(sp0 - 0x28u, arg2);
    wr32(sp0 - 0x2cu, arg1);
    g->eax = rd32(self);
    g->edx = arg1;
    t32 = rd32(self);
    g->esp = sp0 - 0x24u;
    t33 = cow_thiscall(g, rd32(t32 + 0x24u), self, 2, arg1, arg2);
    t34 = g->ecx;
    t35 = g->edx;
    eax = t33;
    ecx = t34;
    edx = t35;
    goto L_1025e58b;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1025e480(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1025e4bbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        self = g->edi - 0xc4u;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1025e4d3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        g->edi = self + 0xc4u;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1025e4f1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        g->edi = self + 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x1025e4fdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        g->edi = self + 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x1025e502u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        g->edi = self + 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x1025e504u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        g->edi = self + 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x1025e518u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        g->edi = self + 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x1025e51au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        g->edi = self + 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x1025e526u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->edi - 0xc4u;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1025e546u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        g->edi = self + 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x1025e54cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        g->edi = self + 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x1025e57au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x24u;
        g->edi = self + 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x1025e58bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->edi - 0xc4u;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1025e480(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1025e480(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
