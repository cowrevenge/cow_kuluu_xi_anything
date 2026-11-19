/* f_0x1027b670 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_1027b670(Guest* g)
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
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
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
    cow_frame(g, sp0, 96u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1027b67eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1027b67e;
    case 0x1027b68du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027b68d;
    case 0x1027b69cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027b69c;
    case 0x1027b6a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027b6a5;
    case 0x1027b6acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027b6ac;
    case 0x1027b6b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027b6b9;
    case 0x1027b6bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027b6bf;
    case 0x1027b6cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027b6cd;
    case 0x1027b6d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027b6d3;
    case 0x1027b6e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027b6e1;
    case 0x1027b6e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027b6e7;
    case 0x1027b6f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027b6f5;
    case 0x1027b6fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027b6fb;
    case 0x1027b709u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027b709;
    case 0x1027b71eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027b71e;
    case 0x1027b727u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027b727;
    case 0x1027b740u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027b740;
    case 0x1027b748u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027b748;
    case 0x1027b74du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027b74d;
    case 0x1027b753u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027b753;
    case 0x1027b75du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027b75d;
    case 0x1027b768u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027b768;
    case 0x1027b76eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027b76e;
    case 0x1027b778u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027b778;
    case 0x1027b784u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027b784;
    case 0x1027b787u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1027b787;
    case 0x1027b792u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027b792;
    case 0x1027b7a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027b7a3;
    case 0x1027b7b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027b7b4;
    case 0x1027b7b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027b7b5;
    default: break;
    }
#endif

    COW_AT(1027b670)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    t1 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x14u, t1);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, t1, in_edi, in_esi);
    t3 = g->ecx;
    t4 = g->edx;
    eax = t2;
    ecx = t3;
    edx = t4;
    edi = t1;
    COW_AT(1027b67e)
    t5 = rd32(sp0 + 4u);
    wr32(sp0 - 0x18u, t5);
    wr32(sp0 - 0x1cu, COW_IMG(0x103b41e8u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t6 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b41e8u), t5);
    t7 = g->ecx;
    t8 = g->edx;
    eax = t6;
    ecx = t7;
    edx = t8;
    esi = t5;
    COW_AT(1027b68d)
    if (rd32(sp0 + 8u) == 0u)
    {
        ebp = in_ebp;
    }
    else
    {
        ebx = rd32(sp0 + 8u);
    COW_AT(1027b69c)
        if (ebx == 3u)
        {
            ebp = in_ebp;
        }
        else
        {
    COW_AT(1027b6a5)
            wr32(sp0 - 0x14u, edi + 1u);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, edi + 1u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
            t9 = g->ecx;
            t10 = g->edx;
            ecx = t9;
            edx = t10;
            edi = edi + 1u;
    COW_AT(1027b6ac)
            wr32(sp0 - 0x18u, rd32(esi));
            wr32(sp0 - 0x1cu, COW_IMG(0x103b41dcu));
            g->ebx = ebx;
            g->eax = rd32(esi);
            g->ecx = ecx;
            g->edx = edx;
            t11 = rd32(esi);
            g->esp = sp0 - 0x14u;
            t12 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b41dcu), t11);
            t13 = g->ecx;
            t14 = g->edx;
            eax = t12;
            ecx = t13;
            edx = t14;
    COW_AT(1027b6b9)
            wr32(sp0 - 0x20u, edi);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t15 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, edi, COW_IMG(0x103b41dcu), rd32(sp0 - 0x18u));
            t16 = g->edx;
            eax = t15;
            edx = t16;
    COW_AT(1027b6bf)
            t17 = rd32(esi + 0x28u);
            wr32(sp0 - 0x24u, t17);
            wr32(sp0 - 0x28u, COW_IMG(0x103b41ccu));
            g->ebx = ebx;
            g->eax = eax;
            g->ecx = t17;
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            t18 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b41ccu), t17);
            t19 = g->ecx;
            t20 = g->edx;
            eax = t18;
            ecx = t19;
            edx = t20;
    COW_AT(1027b6cd)
            wr32(sp0 - 0x2cu, edi);
            g->eax = eax;
            g->ecx = ecx;
            g->esp = sp0 - 0x20u;
            t21 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, edi, COW_IMG(0x103b41ccu), rd32(sp0 - 0x24u));
            t22 = g->ecx;
            eax = t21;
            ecx = t22;
    COW_AT(1027b6d3)
            t23 = rd32(esi + 0x1cu);
            wr32(sp0 - 0x30u, t23);
            wr32(sp0 - 0x34u, COW_IMG(0x103b41bcu));
            g->ebx = ebx;
            g->eax = eax;
            g->ecx = ecx;
            g->edx = t23;
            g->esp = sp0 - 0x2cu;
            t24 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b41bcu), t23);
            t25 = g->ecx;
            t26 = g->edx;
            eax = t24;
            ecx = t25;
            edx = t26;
    COW_AT(1027b6e1)
            wr32(sp0 - 0x38u, edi);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x2cu;
            cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, edi, COW_IMG(0x103b41bcu), rd32(sp0 - 0x30u));
            t27 = g->ecx;
            t28 = g->edx;
            ecx = t27;
            edx = t28;
    COW_AT(1027b6e7)
            t29 = rd32(esi + 0x24u);
            wr32(sp0 - 0x3cu, t29);
            wr32(sp0 - 0x40u, COW_IMG(0x103b41a8u));
            g->ebx = ebx;
            g->eax = t29;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t30 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b41a8u), t29);
            t31 = g->ecx;
            t32 = g->edx;
            eax = t30;
            ecx = t31;
            edx = t32;
    COW_AT(1027b6f5)
            wr32(sp0 - 0x44u, edi);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t33 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, edi, COW_IMG(0x103b41a8u), rd32(sp0 - 0x3cu));
            t34 = g->edx;
            eax = t33;
            edx = t34;
    COW_AT(1027b6fb)
            t35 = rd32(esi + 0x20u);
            wr32(sp0 - 0x48u, t35);
            wr32(sp0 - 0x4cu, COW_IMG(0x103b4194u));
            g->ebx = ebx;
            g->esp = sp0 - 0x44u;
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b4194u), t35);
    COW_AT(1027b709)
            wr32(sp0 - 0x50u, sp0 + 0xcu);
            wr32(sp0 - 0x54u, sp0 + 4u);
            wr32(sp0 - 0x58u, sp0 - 4u);
            wr32(sp0 - 0x5cu, esi);
            g->eax = sp0 + 4u;
            g->ecx = sp0 - 4u;
            g->edx = sp0 + 0xcu;
            g->esp = sp0 - 0x38u;
            t36 = cow_cdecl(g, COW_IMG(0x1027cc90u), 9, esi, sp0 - 4u, sp0 + 4u, sp0 + 0xcu, COW_IMG(0x103b4194u), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu));
            t37 = g->ecx;
            t38 = g->edx;
            eax = t36;
            ecx = t37;
            edx = t38;
    COW_AT(1027b71e)
            wr32(sp0 - 0x14u, edi);
            g->esp = sp0 - 8u;
            cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, edi, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    COW_AT(1027b727)
            t39 = rd32(sp0 + 0xcu);
            wr32(sp0 - 0x18u, t39);
            t40 = rd32(sp0 + 4u);
            wr32(sp0 - 0x1cu, t40);
            t41 = rd32(sp0 - 4u);
            wr32(sp0 - 0x20u, t41);
            wr32(sp0 - 0x24u, COW_IMG(0x103b415cu));
            g->ebx = ebx;
            g->eax = t40;
            g->ecx = t41;
            g->edx = t39;
            g->esp = sp0 - 0x1cu;
            t42 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b415cu), t41);
            t43 = g->ecx;
            t44 = g->edx;
            eax = t42;
            ecx = t43;
            edx = t44;
    COW_AT(1027b740)
            if (ebx == 1u)
            {
                ebp = in_ebp;
            }
            else
            {
    COW_AT(1027b748)
                if (ebx == 4u)
                {
                    ebp = in_ebp;
                }
                else
                {
    COW_AT(1027b74d)
                    wr32(sp0 - 0x14u, edi);
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 8u;
                    t45 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, edi, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
                    t46 = g->ecx;
                    t47 = g->edx;
                    eax = t45;
                    ecx = t46;
                    edx = t47;
    COW_AT(1027b753)
                    wr32(sp0 - 0x18u, COW_IMG(0x103b4148u));
                    g->ebx = ebx;
                    g->eax = eax;
                    g->ecx = ecx;
                    g->esp = sp0 - 0x10u;
                    t48 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b4148u), rd32(sp0 - 0x14u));
                    t49 = g->ecx;
                    eax = t48;
                    ecx = t49;
    COW_AT(1027b75d)
                    wr32(sp0 - 0x1cu, edi);
                    wr32(sp0 - 0x20u, ebx);
                    t50 = rd32(esi + 0x1cu);
                    wr32(sp0 - 0x24u, t50);
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = t50;
                    g->esp = sp0;
                    t51 = cow_cdecl(g, COW_IMG(0x10291c80u), 9, t50, ebx, edi, COW_IMG(0x103b4148u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u), rd32(sp0 - 4u));
                    t52 = g->ecx;
                    t53 = g->edx;
                    eax = t51;
                    ecx = t52;
                    edx = t53;
    COW_AT(1027b768)
                    wr32(sp0 - 0x28u, edi);
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x1cu;
                    t54 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, edi, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
                    t55 = g->ecx;
                    t56 = g->edx;
                    eax = t54;
                    ecx = t55;
                    edx = t56;
    COW_AT(1027b76e)
                    wr32(sp0 - 0x2cu, COW_IMG(0x103b413cu));
                    g->ebx = ebx;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x24u;
                    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b413cu), rd32(sp0 - 0x28u));
                    t57 = g->ecx;
                    t58 = g->edx;
                    ecx = t57;
                    edx = t58;
    COW_AT(1027b778)
                    if ((int32_t)rd32(esi + 0x28u) <= 0)
                    {
                        eax = rd32(esi + 0x28u);
                        ebp = in_ebp;
                    }
                    else
                    {
                        eax = rd32(esi + 0x28u);
    COW_AT(1027b784)
                        wr32(sp0 - 0x14u, in_ebp);
                        ebx = 0u;
                        ebp = 0u;
                        loc_14 = in_ebp;
L_1027b787: ;
    COW_AT(1027b787)
                        wr32(sp0 - 0x18u, ebx);
                        wr32(sp0 - 0x1cu, COW_IMG(0x103b4134u));
                        g->ebx = ebx;
                        g->edx = edx;
                        g->esp = sp0 - 0x14u;
                        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b4134u), ebx);
                        t59 = g->edx;
                        edx = t59;
    COW_AT(1027b792)
                        wr32(sp0 - 0x20u, edi);
                        t60 = rd32(sp0 + 8u);
                        wr32(sp0 - 0x24u, t60);
                        t61 = ebp + rd32(esi + 0x24u);
                        wr32(sp0 - 0x28u, t61);
                        g->ecx = t61;
                        g->edx = edx;
                        g->esp = sp0 - 0xcu;
                        cow_cdecl(g, COW_IMG(0x10291490u), 7, t61, t60, edi, COW_IMG(0x103b4134u), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
                        t62 = g->ecx;
                        t63 = g->edx;
                        ecx = t62;
                        edx = t63;
    COW_AT(1027b7a3)
                        if ((int32_t)(ebx + 1u) < (int32_t)rd32(esi + 0x28u))
                        {
                            eax = rd32(esi + 0x28u);
                            ebx = ebx + 1u;
                            ebp = ebp + 0x9cu;
                            loc_14 = rd32(sp0 - 0x14u);
                            goto L_1027b787;
                        }
                        eax = rd32(esi + 0x28u);
    COW_AT(1027b7b4)
                        ebp = rd32(sp0 - 0x14u);
                    }
                }
            }
        }
    }
    COW_AT(1027b7b5)
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = ebp;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1027b670(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1027b67eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1027b68du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1027b69cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1027b6a5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1027b6acu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1027b6b9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x1cu, COW_IMG(0x103b41dcu));
        (void)sp0;
        return 1;
    }
    case 0x1027b6bfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1027b6cdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x28u, COW_IMG(0x103b41ccu));
        (void)sp0;
        return 1;
    }
    case 0x1027b6d3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1027b6e1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x34u, COW_IMG(0x103b41bcu));
        (void)sp0;
        return 1;
    }
    case 0x1027b6e7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1027b6f5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x40u, COW_IMG(0x103b41a8u));
        (void)sp0;
        return 1;
    }
    case 0x1027b6fbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1027b709u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x4cu, COW_IMG(0x103b4194u));
        (void)sp0;
        return 1;
    }
    case 0x1027b71eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x54u, sp0 + 4u);
        wr32(sp0 - 0x50u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1027b727u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x54u, sp0 + 4u);
        wr32(sp0 - 0x50u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1027b740u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x54u, sp0 + 4u);
        wr32(sp0 - 0x50u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1027b748u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x54u, sp0 + 4u);
        wr32(sp0 - 0x50u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1027b74du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x54u, sp0 + 4u);
        wr32(sp0 - 0x50u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1027b753u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x54u, sp0 + 4u);
        wr32(sp0 - 0x50u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1027b75du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x54u, sp0 + 4u);
        wr32(sp0 - 0x50u, sp0 + 0xcu);
        wr32(sp0 - 0x18u, COW_IMG(0x103b4148u));
        (void)sp0;
        return 1;
    }
    case 0x1027b768u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x54u, sp0 + 4u);
        wr32(sp0 - 0x50u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1027b76eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x54u, sp0 + 4u);
        wr32(sp0 - 0x50u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1027b778u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x54u, sp0 + 4u);
        wr32(sp0 - 0x50u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1027b784u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x54u, sp0 + 4u);
        wr32(sp0 - 0x50u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1027b787u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x54u, sp0 + 4u);
        wr32(sp0 - 0x50u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1027b792u:
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x54u, sp0 + 4u);
        wr32(sp0 - 0x50u, sp0 + 0xcu);
        wr32(sp0 - 0x1cu, COW_IMG(0x103b4134u));
        (void)sp0;
        return 1;
    }
    case 0x1027b7a3u:
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
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x54u, sp0 + 4u);
        wr32(sp0 - 0x50u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1027b7b4u:
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
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x54u, sp0 + 4u);
        wr32(sp0 - 0x50u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1027b7b5u:
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
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1027b670(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1027b670(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
