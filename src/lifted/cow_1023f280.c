/* f_0x1023f280 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1023f280(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 2140u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1023f32fu: eax = g->eax; ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x814u); in_ebp = rd32(sp0 - 0x810u); in_ebx = rd32(sp0 - 0x80cu); g->ebp = rd32(sp0 - 0x810u); g->ebx = rd32(sp0 - 0x80cu); g->esi = rd32(sp0 - 0x814u); goto E_1023f32f;
    case 0x1023f3f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x814u); in_ebp = rd32(sp0 - 0x810u); in_ebx = rd32(sp0 - 0x80cu); g->ebp = rd32(sp0 - 0x810u); g->ebx = rd32(sp0 - 0x80cu); g->esi = rd32(sp0 - 0x814u); goto E_1023f3f4;
    case 0x1023f41au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_1023f41a;
    case 0x1023f420u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x818u); g->edi = rd32(sp0 - 0x818u); goto E_1023f420;
    case 0x1023f43eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023f43e;
    case 0x1023f43fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1023f43f;
    default: break;
    }
#endif

    COW_AT(1023f280)
    wr32(sp0 - 0x80cu, in_ebx);
    wr32(sp0 - 0x810u, in_ebp);
    wr32(sp0 - 0x814u, in_esi);
    wr32(COW_IMG(0x10388480u), sp0 - 0x400u);
    wr32(COW_IMG(0x10388484u), sp0 - 0x600u);
    wr32(COW_IMG(0x10388488u), sp0 - 0x200u);
    wr32(COW_IMG(0x1038848cu), sp0 - 0x800u);
    wr32(COW_IMG(0x10388490u), sp0 - 0x700u);
    wr32(COW_IMG(0x10388494u), sp0 - 0x500u);
    wr32(COW_IMG(0x10388498u), sp0 - 0x300u);
    t1 = rd32(self + 0x14u);
    wr16(sp0 - 0x808u, 0u);
    wr16(sp0 - 0x806u, 0u);
    wr16(sp0 - 0x804u, 0u);
    wr16(sp0 - 0x802u, 0u);
    wr8(sp0 - 0x400u, 0u);
    wr8(sp0 - 0x600u, 0u);
    wr8(sp0 - 0x200u, 0u);
    wr8(sp0 - 0x800u, 0u);
    wr8(sp0 - 0x700u, 0u);
    wr8(sp0 - 0x500u, 0u);
    wr8(sp0 - 0x300u, 0u);
    if (t1 != 0u)
    {
        eax = t1;
    }
    else
    {
        eax = t1;
    COW_AT(1023f32f)
        wr32(sp0 - 0x818u, 7u);
        wr32(sp0 - 0x81cu, self + 0x18u);
        wr32(sp0 - 0x820u, sp0 - 0x100u);
        g->eax = eax;
        g->edx = sp0 - 0x100u;
        g->esp = sp0 - 0x818u;
        t2 = cow_thiscall_cdecl(g, COW_IMG(0x1023f450u), self + 0x18u, 2, sp0 - 0x100u, self + 0x18u);
        t3 = g->ecx;
        t4 = g->edx;
        wr32(sp0 - 0x824u, 0x40u);
        wr32(sp0 - 0x828u, 8u);
        g->ecx = t3;
        g->edx = t4;
        g->esp = sp0 - 0x820u;
        t5 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x40u);
        t6 = g->ecx;
        t7 = g->edx;
        wr32(sp0 - 0x82cu, t5);
        wr32(sp0 - 0x830u, sp0 - 0x400u);
        g->ebx = 0u;
        g->eax = sp0 - 0x400u;
        g->edx = t7;
        g->esp = sp0 - 0x81cu;
        t8 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x400u, t5, 8u, 0x40u, sp0 - 0x100u);
        t9 = g->edx;
        wr32(sp0 - 0x818u, sp0 - 0x100u);
        wr32(sp0 - 0x81cu, 0x41u);
        wr32(sp0 - 0x820u, 8u);
        g->ecx = sp0 - 0x100u;
        g->esp = sp0 - 0x818u;
        t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x41u);
        t11 = g->ecx;
        wr32(sp0 - 0x81cu, t10);
        wr32(sp0 - 0x820u, sp0 - 0x600u);
        g->ebx = 0u;
        g->ecx = t11;
        g->edx = sp0 - 0x600u;
        g->esp = sp0 - 0x80cu;
        t12 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x600u, t10, sp0 - 0x100u, in_esi, in_ebp);
        t13 = g->ecx;
        t14 = g->edx;
        wr32(sp0 - 0x824u, 0x42u);
        wr32(sp0 - 0x828u, 8u);
        g->ecx = t13;
        g->edx = t14;
        g->esp = sp0 - 0x820u;
        t15 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x42u);
        t16 = g->ecx;
        t17 = g->edx;
        wr32(sp0 - 0x82cu, t15);
        wr32(sp0 - 0x830u, sp0 - 0x200u);
        g->ebx = 0u;
        g->eax = sp0 - 0x200u;
        g->ecx = t16;
        g->edx = t17;
        g->esp = sp0 - 0x81cu;
        t18 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x200u, t15, 8u, 0x42u, sp0 - 0x600u);
        t19 = g->ecx;
        t20 = g->edx;
        wr32(sp0 - 0x834u, 0x43u);
        wr32(sp0 - 0x838u, 8u);
        g->edx = t20;
        g->esp = sp0 - 0x830u;
        t21 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x43u);
        t22 = g->edx;
        wr32(sp0 - 0x83cu, t21);
        wr32(sp0 - 0x840u, sp0 - 0x800u);
        g->ebx = 0u;
        g->ecx = sp0 - 0x800u;
        g->edx = t22;
        g->esp = sp0 - 0x82cu;
        t23 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x800u, t21, 8u, 0x43u, sp0 - 0x200u);
        t24 = g->ecx;
        t25 = g->edx;
        wr32(sp0 - 0x844u, 0x44u);
        wr32(sp0 - 0x848u, 8u);
        g->ecx = t24;
        g->esp = sp0 - 0x840u;
        t26 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x44u);
        t27 = g->ecx;
        wr32(sp0 - 0x84cu, t26);
        wr32(sp0 - 0x850u, sp0 - 0x700u);
        g->ebx = 0u;
        g->ecx = t27;
        g->edx = sp0 - 0x700u;
        g->esp = sp0 - 0x83cu;
        t28 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x700u, t26, 8u, 0x44u, sp0 - 0x800u);
        t29 = g->ecx;
        t30 = g->edx;
        wr32(sp0 - 0x854u, 0x45u);
        wr32(sp0 - 0x858u, 8u);
        g->ecx = t29;
        g->edx = t30;
        g->esp = sp0 - 0x850u;
        t31 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x45u);
        t32 = g->ecx;
        t33 = g->edx;
        wr32(sp0 - 0x818u, t31);
        wr32(sp0 - 0x81cu, sp0 - 0x500u);
        g->ebx = 0u;
        g->eax = sp0 - 0x500u;
        g->ecx = t32;
        g->edx = t33;
        g->esp = sp0 - 0x808u;
        t34 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x500u, t31, in_esi, in_ebp, in_ebx);
        t35 = g->ecx;
        t36 = g->edx;
        wr32(sp0 - 0x820u, 0x46u);
        wr32(sp0 - 0x824u, 8u);
        g->edx = t36;
        g->esp = sp0 - 0x81cu;
        t37 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x46u);
        t38 = g->edx;
        wr32(sp0 - 0x828u, t37);
        wr32(sp0 - 0x82cu, sp0 - 0x300u);
        g->ebx = 0u;
        g->esp = sp0 - 0x818u;
        t39 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x300u, t37, 8u, 0x46u, sp0 - 0x500u);
        eax = t39;
    }
    COW_AT(1023f3f4)
    wr32(sp0 - 0x818u, sp0 - 0x808u);
    g->edx = sp0 - 0x808u;
    t40 = rd32(self + 8u);
    g->esp = sp0 - 0x814u;
    cow_call_regs(g, COW_IMG(0x10118f70u), eax, t40, g->edx, 0, 1, sp0 - 0x808u);
    t41 = g->ecx;
    t42 = g->edx;
    if (rd32(COW_IMG(0x10388480u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10388480u));
        edx = t42;
        edi = in_edi;
    }
    else
    {
        eax = rd32(COW_IMG(0x10388480u));
        ecx = t41;
        edx = t42;
        ebp = (uint32_t)(int16_t)rd16(sp0 - 0x808u) + 0x30u;
        esi = (uint32_t)(int16_t)rd16(sp0 - 0x806u) + 4u;
    COW_AT(1023f41a)
        wr32(sp0 - 0x818u, in_edi);
        edi = COW_IMG(0x10388480u);
L_1023f420: ;
    COW_AT(1023f420)
        wr32(sp0 - 0x81cu, 0x80808080u);
        wr32(sp0 - 0x820u, 0u);
        wr32(sp0 - 0x824u, eax);
        wr32(sp0 - 0x828u, esi);
        wr32(sp0 - 0x82cu, ebp);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x800u;
        cow_cdecl(g, COW_IMG(0x10129f00u), 11, ebp, esi, eax, 0u, 0x80808080u, in_edi, rd32(sp0 - 0x814u), rd32(sp0 - 0x810u), rd32(sp0 - 0x80cu), rd32(sp0 - 0x808u), rd32(sp0 - 0x804u));
        t43 = g->ecx;
        t44 = g->edx;
        if (rd32(edi + 4u) != 0u)
        {
            eax = rd32(edi + 4u);
            ecx = t43;
            edx = t44;
            esi = esi + 0x10u;
            edi = edi + 4u;
            goto L_1023f420;
        }
        eax = rd32(edi + 4u);
        edx = t44;
    COW_AT(1023f43e)
        edi = rd32(sp0 - 0x818u);
    }
    COW_AT(1023f43f)
    g->ebx = rd32(sp0 - 0x80cu);
    g->esi = rd32(sp0 - 0x814u);
    g->edi = edi;
    g->ebp = rd32(sp0 - 0x810u);
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1023f280(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1023f32fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x814u);
        in_ebp = rd32(sp0 - 0x810u);
        in_ebx = rd32(sp0 - 0x80cu);
        g->esp = sp0 - 0x814u;
        g->ecx = sp0 - 0x700u;
        g->edx = sp0 - 0x500u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023f3f4u:
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
        ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x814u);
        in_ebp = rd32(sp0 - 0x810u);
        in_ebx = rd32(sp0 - 0x80cu);
        g->esp = sp0 - 0x814u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023f41au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x814u;
        g->ebx = 0u;
        wr32(sp0 - 0x818u, sp0 - 0x808u);
        (void)sp0;
        return 1;
    }
    case 0x1023f420u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x818u);
        g->esp = sp0 - 0x818u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023f43eu:
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
        g->esp = sp0 - 0x818u;
        (void)sp0;
        return 1;
    }
    case 0x1023f43fu:
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
        g->esp = sp0 - 0x814u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1023f280(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1023f280(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
