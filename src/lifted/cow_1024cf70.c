/* f_0x1024cf70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1024cf70(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1024d03eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1024d03e;
    case 0x1024d05fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1024d05f;
    case 0x1024d070u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1024d070;
    case 0x1024d095u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1024d095;
    case 0x1024d0adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1024d0ad;
    case 0x1024d0d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1024d0d7;
    case 0x1024d0e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1024d0e0;
    case 0x1024d0e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1024d0e8;
    case 0x1024d0f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1024d0f0;
    case 0x1024d107u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1024d107;
    case 0x1024d129u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1024d129;
    case 0x1024d136u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1024d136;
    default: break;
    }
#endif

    COW_AT(1024cf70)
    t1 = rd32(sp0 + 4u);
    wr32(t1, 1u);
    wr32(t1 + 4u, 0u);
    wr32(t1 + 8u, 0xffffffffu);
    wr32(t1 + 0xcu, 0xffffffffu);
    wr32(t1 + 0x10u, 0u);
    wr32(t1 + 0x14u, 0u);
    wr32(t1 + 0x18u, 0u);
    wr32(t1 + 0x1cu, 0u);
    wr32(t1 + 0x20u, 0xffffffffu);
    wr32(t1 + 0x40u, 0x1eu);
    wr32(t1 + 0x24u, 0xffffffffu);
    g->eax = 0xffffffffu;
    g->esp = sp0 - 0x10u;
    t2 = cow_fastcall(g, COW_IMG(0x102750b0u), self, in_edx, 0);
    t3 = g->edx;
    wr32(t1 + 0x28u, t2);
    wr32(t1 + 0x2cu, 0u);
    wr32(t1 + 0x30u, 0u);
    wr32(t1 + 0x34u, 0u);
    wr32(t1 + 0x38u, 0u);
    wr32(t1 + 0x3cu, 0u);
    wr32(t1 + 0x44u, 0u);
    wr32(t1 + 0x48u, 0u);
    wr32(t1 + 0x4cu, 0x47c35000u);
    wr32(t1 + 0x54u, 0x3f800000u);
    wr32(t1 + 0x58u, 0x3f800000u);
    wr32(t1 + 0x5cu, 0u);
    wr32(t1 + 0x60u, 0x3f800000u);
    wr32(t1 + 0x64u, 0x3f800000u);
    wr32(t1 + 0x68u, 0u);
    wr32(t1 + 0x6cu, 0x3f800000u);
    wr32(t1 + 0x70u, 0x3f800000u);
    wr32(t1 + 0x74u, 0u);
    g->eax = 0u;
    g->ecx = t1 + 0x88u;
    t4 = cow_cdecl(g, COW_IMG(0x10274d60u), 5, t1 + 0x88u, 0u, 0u, 0x41a00000u, 0x3f800000u);
    t5 = g->ecx;
    g->ecx = t5;
    g->edx = t1 + 0x98u;
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x10274d60u), 5, t1 + 0x98u, 0u, 0u, 0u, 0x3f800000u);
    t6 = g->ecx;
    t7 = g->edx;
    g->eax = t1 + 0x280u;
    g->esp = sp0 - 0x38u;
    t8 = cow_call_regs(g, COW_IMG(0x102738f0u), g->eax, g->ecx, t7, 1, 1, t1 + 0x280u);
    t9 = g->edx;
    g->ecx = t1 + 0xa8u;
    g->esp = sp0 - 0x3cu;
    t10 = cow_cdecl(g, COW_IMG(0x102524d0u), 1, t1 + 0xa8u);
    t11 = g->ecx;
    g->ecx = t11;
    g->edx = t1 + 0xccu;
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x102524d0u), 1, t1 + 0xccu);
    t12 = g->ecx;
    t13 = g->edx;
    ecx = t12;
    edx = t13;
    ebx = t1 + 0xf8u;
    esi = t1;
    edi = 0u;
L_1024d03e: ;
    COW_AT(1024d03e)
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall_cdecl(g, COW_IMG(0x10250da0u), ecx, 1, ebx - 8u);
    t14 = g->edx;
    t15 = 0xffffffffu - (edi & 1u);
    wr32(ebx, t15);
    if ((int32_t)(edi + 1u) < 4)
    {
        ecx = edi & 1u;
        edx = t15;
        ebx = ebx + 0x1cu;
        edi = edi + 1u;
        goto L_1024d03e;
    }
    ecx = edi & 1u;
    edx = t15;
    COW_AT(1024d05f)
    wr32(sp0 + 4u, 4u);
    ebx = esi + 0x78u;
    edi = esi + 0x1d0u;
L_1024d070: ;
    COW_AT(1024d070)
    wr32(ebx, 0u);
    g->eax = edi - 0x70u;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t16 = cow_thiscall_cdecl(g, COW_IMG(0x10250da0u), ecx, 1, edi - 0x70u);
    t17 = g->ecx;
    t18 = g->edx;
    g->edx = t18;
    g->esp = sp0 - 0x14u;
    cow_thiscall_cdecl(g, COW_IMG(0x10250da0u), t17, 1, edi);
    t19 = g->ecx;
    t20 = g->edx;
    t21 = rd32(sp0 + 4u) - 1u;
    t22 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t21);
    if (t22 != 1u)
    {
        ecx = t19;
        edx = t20;
        ebx = ebx + 4u;
        edi = edi + 0x1cu;
        goto L_1024d070;
    }
    eax = t21;
    ecx = t19;
    edx = t20;
    COW_AT(1024d095)
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10252ca0u), g->eax, g->ecx, edx, 1, 1, esi + 0x240u);
    t23 = g->ecx;
    t24 = g->edx;
    if (rd32(COW_IMG(0x1066914cu)) != 0u)
    {
        eax = rd32(COW_IMG(0x1066914cu));
        ecx = t23;
        edx = t24;
    }
    else
    {
    COW_AT(1024d0ad)
        t25 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        g->edx = rd32(t25);
        t26 = rd32(t25);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(t26 + 0xe4u), rd32(COW_IMG(0x1045666cu)), 3, t25, 1u, COW_IMG(0x1066914cu));
        t27 = g->edx;
        t28 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        g->eax = t28;
        g->edx = t27;
        t29 = rd32(t28);
        t30 = cow_thiscall(g, rd32(t29 + 0xd0u), t29, 1, t28);
        t31 = g->ecx;
        t32 = g->edx;
        eax = t30;
        ecx = t31;
        edx = t32;
    }
    COW_AT(1024d0d7)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t33 = cow_thiscall(g, COW_IMG(0x10270b80u), ecx, 0);
    t34 = g->ecx;
    t35 = g->edx;
    if (t33 == 0u)
    {
        eax = t33;
        ecx = t34;
        edx = t35;
        goto L_1024d0e8;
    }
    eax = t33;
    COW_AT(1024d0e0)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0xffffffffu;
L_1024d0e8: ;
    COW_AT(1024d0e8)
    if (rd32(COW_IMG(0x1066914cu)) != 0u)
    {
    COW_AT(1024d0f0)
        t36 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        g->eax = t36;
        g->edx = rd32(COW_IMG(0x1045666cu));
        t37 = rd32(t36);
        t38 = rd32(COW_IMG(0x1045666cu));
        g->esp = sp0 - 0x10u;
        t39 = cow_thiscall(g, rd32(t37 + 0xd4u), t37, 2, t36, COW_IMG(0x1066914cu));
        t40 = g->ecx;
        t41 = g->edx;
        eax = t39;
        ecx = t40;
        edx = t41;
    }
    COW_AT(1024d107)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t42 = cow_cdecl(g, COW_IMG(0x10271c80u), 2, 1u, 0x40u);
    t43 = g->ecx;
    t44 = g->edx;
    g->ecx = t43;
    g->edx = t44;
    g->esp = sp0 - 0x18u;
    t45 = cow_cdecl(g, COW_IMG(0x10271ca0u), 2, 0u, 0x40u);
    t46 = g->ecx;
    t47 = g->edx;
    g->ecx = t46;
    g->edx = t47;
    g->esp = sp0 - 0x10u;
    t48 = cow_stdcall(g, COW_IMG(0x1024d150u), 0);
    t49 = g->ecx;
    t50 = g->edx;
    g->ecx = t49;
    g->edx = t50;
    t51 = cow_call_regs(g, COW_IMG(0x1026e420u), t48, g->ecx, g->edx, 1, 0);
    t52 = g->ecx;
    t53 = g->edx;
    if (t51 == 0u)
    {
        eax = t51;
        ecx = t52;
        edx = t53;
        goto L_1024d136;
    }
    eax = t51;
    ecx = t52;
    edx = t53;
    COW_AT(1024d129)
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t54 = cow_fastcall(g, COW_IMG(0x10271b60u), ecx, edx, 0);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0xffffffffu;
L_1024d136: ;
    COW_AT(1024d136)
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x1026e480u), 5, 8u, 8u, in_edi, in_esi, in_ebp);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1024cf70(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1024d03eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1024d05fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1024d070u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1024d095u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1024d0adu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1024d0d7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1024d0e0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1024d0e8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1024d0f0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1024d107u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1024d129u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1024d136u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1024cf70(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1024cf70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
