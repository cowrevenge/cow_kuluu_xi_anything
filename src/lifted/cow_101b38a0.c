/* f_0x101b38a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101b38a0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_108;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 304u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101b38b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x114u); in_ebp = rd32(sp0 - 0x110u); g->ebp = rd32(sp0 - 0x110u); g->esi = rd32(sp0 - 0x114u); goto E_101b38b3;
    case 0x101b38cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x114u); in_ebp = rd32(sp0 - 0x110u); g->ebp = rd32(sp0 - 0x110u); g->esi = rd32(sp0 - 0x114u); goto E_101b38cd;
    case 0x101b38f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_101b38f0;
    case 0x101b3902u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_101b3902;
    case 0x101b391fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_101b391f;
    case 0x101b3969u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; goto E_101b3969;
    case 0x101b396eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b396e;
    case 0x101b397eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_108 = rd32(sp0 - 0x108u); goto E_101b397e;
    case 0x101b399fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_108 = rd32(sp0 - 0x108u); goto E_101b399f;
    case 0x101b39beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b39be;
    case 0x101b39c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b39c2;
    case 0x101b39ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_101b39ec;
    default: break;
    }
#endif

    COW_AT(101b38a0)
    wr32(sp0 - 0x110u, in_ebp);
    wr32(sp0 - 0x114u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x114u;
    t1 = cow_call_regs(g, COW_IMG(0x101b6e90u), in_eax, self, g->edx, 1, 0);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        goto L_101b38cd;
    }
    edx = t2;
    COW_AT(101b38b3)
    wr32(sp0 - 0x118u, arg1);
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    t3 = cow_call_regs(g, COW_IMG(0x101b56d0u), arg1, self, g->edx, 0, 1, arg1);
    t4 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t4;
    return t3;
L_101b38cd: ;
    COW_AT(101b38cd)
    t5 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x118u, t5);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x103d3c64u));
    g->edx = t5;
    t6 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x114u;
    t7 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t5);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x118u, t7);
    wr32(sp0 - 0x104u, t7);
    g->ecx = t8;
    g->edx = t9;
    t10 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, t7);
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 == 0u)
    {
        ecx = t11;
        ebp = t7;
        goto L_101b39ec;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    ebp = t7;
    COW_AT(101b38f0)
    wr32(sp0 - 0x118u, 0u);
    wr32(sp0 - 0x11cu, 0u);
    wr32(sp0 - 0x120u, 0u);
    wr32(sp0 - 0x124u, ebp);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    t13 = cow_stdcall(g, COW_IMG(0x102bc86au), 4, ebp, 0u, 0u, 0u);
    t14 = g->ecx;
    t15 = g->edx;
    if (t13 != 0u)
    {
        eax = t13;
        ecx = t14;
        esi = t13;
        goto L_101b391f;
    }
    edx = t15;
    COW_AT(101b3902)
    wr32(sp0 - 0x118u, ebp);
    t16 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x11cu, t16);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->edx = edx;
    t17 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x114u;
    t18 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t16, ebp);
    t19 = g->edx;
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x114u);
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 0x110u);
    g->edx = t19;
    return 0xffffffffu;
L_101b391f: ;
    COW_AT(101b391f)
    wr32(sp0 - 0x118u, in_ebx);
    wr32(sp0 - 0x11cu, in_edi);
    wr32(sp0 - 0x120u, COW_IMG(0x1037c47cu));
    wr32(sp0 - 0x124u, esi);
    wr32(sp0 - 0x128u, sp0 - 0x10cu);
    g->ecx = ecx;
    g->edx = sp0 - 0x10cu;
    g->esp = sp0 - 0x118u;
    cow_cdecl(g, COW_IMG(0x101907a0u), 4, sp0 - 0x10cu, esi, COW_IMG(0x1037c47cu), in_edi);
    t20 = g->ecx;
    t21 = g->edx;
    wr32(sp0 - 0x120u, esi);
    t22 = rd32(sp0 - 0x10cu);
    wr32(sp0 - 0x124u, t22);
    wr32(sp0 - 0x128u, 0u);
    wr32(sp0 - 0x12cu, ebp);
    g->esp = sp0 - 0x11cu;
    cow_stdcall(g, COW_IMG(0x102bc86au), 4, ebp, 0u, t22, esi);
    wr32(sp0 - 0x120u, esi * 3u);
    t23 = rd32(rd32(sp0 - 0x10cu) + 8u);
    wr32(sp0 - 0x124u, t23);
    t24 = rd32(sp0 - 0x10cu);
    cow_call_regs(g, COW_IMG(0x101b47b0u), t23, arg1, t24, 0, 2, t23, esi * 3u);
    t25 = g->edx;
    if (rd32(rd32(sp0 - 0x10cu) + 8u) == 0u)
    {
        eax = rd32(sp0 - 0x10cu);
        ecx = rd32(rd32(sp0 - 0x10cu) + 8u);
        edx = t25;
    }
    else
    {
        eax = rd32(sp0 - 0x10cu);
    COW_AT(101b3969)
        ebp = 0x18u;
        edi = 0u;
L_101b396e: ;
    COW_AT(101b396e)
        t26 = eax + rd32(eax + ebp);
        wr32(sp0 - 0x108u, t26);
        if (rd8(t26) == 0u)
        {
            esi = 0u;
            goto L_101b399f;
        }
        esi = 0u;
        loc_108 = t26;
L_101b397e: ;
    COW_AT(101b397e)
        wr32(sp0 - 0x120u, sp0 - 0x108u);
        t27 = esi + sp0 - 0x100u;
        wr32(sp0 - 0x124u, t27);
        g->eax = eax;
        g->esp = sp0 - 0x114u;
        t28 = cow_thiscall_cdecl(g, COW_IMG(0x101243b0u), sp0 - 0x108u, 4, t27, sp0 - 0x108u, rd32(sp0 - 0x11cu), rd32(sp0 - 0x118u));
        if (rd8(rd32(sp0 - 0x108u)) != 0u)
        {
            eax = ((uint32_t)(int16_t)t28 & 0xffffff00u) | rd8(rd32(sp0 - 0x108u));
            esi = esi + (uint32_t)(int16_t)t28;
            loc_108 = rd32(sp0 - 0x108u);
            goto L_101b397e;
        }
        eax = ((uint32_t)(int16_t)t28 & 0xffffff00u) | rd8(rd32(sp0 - 0x108u));
        esi = esi + (uint32_t)(int16_t)t28;
L_101b399f: ;
    COW_AT(101b399f)
        wr32(sp0 - 0x120u, esi);
        wr32(sp0 - 0x124u, sp0 - 0x100u);
        wr8(esi + sp0 - 0x100u, 0u);
        g->edx = sp0 - 0x100u;
        g->esp = sp0 - 0x11cu;
        cow_thiscall(g, COW_IMG(0x101b4a60u), arg1, 2, sp0 - 0x100u, esi);
        t29 = g->ecx;
        t30 = g->edx;
        if (edi + 1u < rd32(rd32(sp0 - 0x10cu) + 8u))
        {
            eax = rd32(sp0 - 0x10cu);
            ebp = ebp + 4u;
            edi = edi + 1u;
            goto L_101b396e;
        }
        eax = rd32(sp0 - 0x10cu);
        ecx = t29;
        edx = t30;
    COW_AT(101b39be)
        ebp = rd32(sp0 - 0x104u);
    }
    COW_AT(101b39c2)
    wr32(sp0 - 0x120u, eax);
    g->esp = sp0 - 0x11cu;
    cow_call_regs(g, COW_IMG(0x101907d0u), g->eax, ecx, edx, 1, 1, eax);
    t31 = g->edx;
    wr32(sp0 - 0x120u, ebp);
    t32 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x124u, t32);
    g->edx = t31;
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t32, ebp);
    t33 = g->edx;
    g->ebx = rd32(sp0 - 0x118u);
    g->esi = rd32(sp0 - 0x114u);
    g->edi = rd32(sp0 - 0x11cu);
    g->ebp = rd32(sp0 - 0x110u);
    g->edx = t33;
    return 1u;
L_101b39ec: ;
    COW_AT(101b39ec)
    wr32(sp0 - 0x118u, ebp);
    t34 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x11cu, t34);
    g->eax = t34;
    g->edx = rd32(COW_IMG(0x103d3c64u));
    t35 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x114u;
    t36 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t34, ebp);
    t37 = g->edx;
    wr32(sp0 - 0x118u, arg1);
    g->edx = t37;
    t38 = cow_call_regs(g, COW_IMG(0x101b56d0u), t36, self, g->edx, 0, 1, arg1);
    t39 = g->edx;
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x114u);
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 0x110u);
    g->edx = t39;
    return t38;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101b38a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101b38b3u:
    {
        uint32_t eax;
        uint32_t ebp;
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
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x114u);
        in_ebp = rd32(sp0 - 0x110u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x101b38cdu:
    {
        uint32_t eax;
        uint32_t ebp;
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
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x114u);
        in_ebp = rd32(sp0 - 0x110u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x101b38f0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x101b3902u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x101b391fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x101b3969u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x11cu;
        g->ebx = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b396eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x11cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b397eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_108;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x11cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b399fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_108;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x11cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b39beu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x11cu;
        wr32(sp0 - 0x124u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101b39c2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x11cu;
        (void)sp0;
        return 1;
    }
    case 0x101b39ecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101b38a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101b38a0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
