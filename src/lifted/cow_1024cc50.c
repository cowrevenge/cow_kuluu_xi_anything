/* f_0x1024cc50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1024cc50(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
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
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1024cc67u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_1024cc67;
    case 0x1024cc92u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_1024cc92;
    case 0x1024cc97u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_1024cc97;
    case 0x1024ccd6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_1024ccd6;
    case 0x1024cd83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024cd83;
    case 0x1024cd93u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024cd93;
    default: break;
    }
#endif

    COW_AT(1024cc50)
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    t1 = cow_stdcall(g, COW_IMG(0x100f0fa0u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        ecx = t2;
        edx = t3;
        esi = 0xffffffffu;
        edi = t1;
        goto L_1024cc97;
    }
    edi = t1;
    COW_AT(1024cc67)
    t4 = rd8(edi + 6u);
    t5 = rd8(edi + 5u);
    wr32(sp0 - 0x14u, t5);
    t6 = rd16(edi + 2u);
    t7 = rd16(edi);
    wr32(COW_IMG(0x10669138u), 0u);
    wr32(COW_IMG(0x1066913cu), 0u);
    if ((int32_t)(t7 - 1u) < 0)
    {
        ecx = t5;
        edx = t4;
        esi = t7 - 1u;
        goto L_1024cc97;
    }
    ecx = t5;
    edx = t4;
    ebx = t6;
    ebp = t4 - 1u;
    esi = t7 - 1u;
    loc_14 = t5;
    COW_AT(1024cc92)
    if ((int32_t)esi <= 7)
    {
        eax = 0u;
        goto L_1024ccd6;
    }
L_1024cc97: ;
    COW_AT(1024cc97)
    wr32(sp0 - 0x28u, COW_IMG(0x10388d04u));
    g->eax = 0u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t8 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x2cu, edi);
    wr32(sp0 - 0x30u, COW_IMG(0x10388cf0u));
    g->ecx = t9;
    g->edx = t10;
    g->esp = sp0 - 0x30u;
    t11 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    t12 = g->ecx;
    t13 = g->edx;
    wr32(sp0 - 0x34u, esi);
    wr32(sp0 - 0x38u, COW_IMG(0x10388cdcu));
    g->ecx = t12;
    g->edx = t13;
    g->esp = sp0 - 0x38u;
    t14 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    t15 = g->ecx;
    t16 = g->edx;
    wr32(sp0 - 0x14u, 0u);
    wr32(COW_IMG(0x10669138u), 0u);
    wr32(COW_IMG(0x1066913cu), 0u);
    eax = t14;
    ecx = t15;
    edx = t16;
    ebx = 4u;
    ebp = 1u;
    esi = 0u;
    loc_14 = 0u;
L_1024ccd6: ;
    COW_AT(1024ccd6)
    wr32(sp0 - 0x28u, 0x84u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x1018b3a0u), 1, 0x84u);
    t17 = g->ecx;
    t18 = g->edx;
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->edx = t18;
    g->esp = sp0 - 0x28u;
    t19 = cow_thiscall_cdecl(g, COW_IMG(0x1018c180u), t17, 1, sp0 - 0x10u);
    t20 = g->edx;
    wr32(sp0 - 0x2cu, 0u);
    g->edx = t20;
    t21 = cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x28u, 1, 0u);
    t22 = g->edx;
    wr32(sp0 - 0x2cu, rd32(t19));
    wr32(sp0 - 0x30u, 0x656e6966u);
    g->ebx = ebx;
    g->esi = esi;
    g->edx = t22;
    t23 = rd32(COW_IMG(0x1065cb04u));
    g->esp = sp0 - 0x24u;
    t24 = cow_thiscall(g, COW_IMG(0x101874f0u), t23, 3, 0x656e6966u, rd32(t19), 0x84u);
    t25 = g->ecx;
    t26 = g->edx;
    wr32(sp0 - 0x28u, 0u);
    g->ecx = t25;
    t27 = cow_call_regs(g, COW_IMG(0x10035f00u), g->eax, g->ecx, t26, 1, 1, 0u);
    t28 = g->ecx;
    t29 = g->edx;
    t30 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    wr32(sp0 - 0x28u, sp0 - 0xcu);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 8u, 0xc0a00000u);
    wr32(sp0 - 4u, 0x42200000u);
    g->edx = sp0 - 0xcu;
    t31 = cow_thiscall(g, COW_IMG(0x1001e760u), t30, 1, sp0 - 0xcu);
    t32 = g->ecx;
    t33 = g->edx;
    g->edx = t33;
    t34 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t35 = g->edx;
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x28u, sp0 - 0xcu);
    wr32(sp0 - 8u, 0xc0000000u);
    wr32(sp0 - 4u, 0x41a00000u);
    g->edx = t35;
    t36 = cow_thiscall(g, COW_IMG(0x1001e780u), t34, 1, sp0 - 0xcu);
    t37 = g->edx;
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, COW_IMG(0x10385460u));
    g->ebx = ebx;
    g->edx = t37;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385460u), 1u, 0u);
    t38 = g->edx;
    if (rd32(COW_IMG(0x105783ecu)) == 0u)
    {
        eax = rd32(COW_IMG(0x105783ecu));
        edx = t38;
    }
    else
    {
        eax = rd32(COW_IMG(0x105783ecu));
    COW_AT(1024cd83)
        wr32(sp0 - 0x28u, 0u);
        t39 = rd32(eax + 8u);
        wr32(sp0 - 0x2cu, t39);
        g->eax = eax;
        g->esp = sp0 - 0x24u;
        t40 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t39, 2, t39, 0u);
        t41 = g->edx;
        eax = t40;
        edx = t41;
    }
    COW_AT(1024cd93)
    wr32(sp0 - 0x28u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t42 = cow_thiscall(g, COW_IMG(0x10251880u), rd32(COW_IMG(0x106693fcu)), 1, 0u);
    t43 = g->edx;
    wr32(sp0 - 0x28u, 3u);
    t44 = cow_fastcall(g, COW_IMG(0x10251770u), rd32(COW_IMG(0x106693fcu)), t43, 1, 3u);
    t45 = g->edx;
    wr32(sp0 - 0x28u, ebp);
    cow_fastcall(g, COW_IMG(0x10251740u), rd32(COW_IMG(0x106693fcu)), t45, 1, ebp);
    t46 = g->edx;
    t47 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x28u, t47);
    g->eax = t47;
    t48 = cow_fastcall(g, COW_IMG(0x102517a0u), rd32(COW_IMG(0x106693fcu)), t46, 1, t47);
    t49 = g->edx;
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, ebx);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, esi);
    cow_thiscall(g, COW_IMG(0x10251640u), rd32(COW_IMG(0x106693fcu)), 4, esi, 0u, ebx, 1u);
    t50 = rd32(sp0 - 0x1cu);
    t51 = rd32(sp0 - 0x20u);
    t52 = rd32(sp0 - 0x24u);
    wr32(COW_IMG(0x10669130u), 1u);
    wr32(COW_IMG(0x10669134u), 0u);
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = t51;
    g->edi = t52;
    g->ebp = t50;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1024cc50(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1024cc67u:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->eax = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1024cc92u:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        g->eax = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1024cc97u:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        g->eax = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1024ccd6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1024cd83u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1024cd93u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1024cc50(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1024cc50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
