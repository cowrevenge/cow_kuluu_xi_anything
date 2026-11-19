/* f_0x102176d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102176d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_5c;
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
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 116u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102176e2u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x58u); goto E_102176e2;
    case 0x102176edu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x58u); goto E_102176ed;
    case 0x10217710u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; loc_5c = rd32(sp0 - 0x5cu); goto E_10217710;
    case 0x1021771fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); g->edi = rd32(sp0 - 0x5cu); goto E_1021771f;
    case 0x1021774cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; goto E_1021774c;
    case 0x1021775cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; goto E_1021775c;
    case 0x10217773u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; goto E_10217773;
    case 0x10217778u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; goto E_10217778;
    case 0x102177fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102177fa;
    case 0x10217802u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10217802;
    case 0x1021780au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1021780a;
    case 0x1021780fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1021780f;
    case 0x10217811u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10217811;
    case 0x10217815u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10217815;
    case 0x1021781au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1021781a;
    case 0x1021781cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1021781c;
    case 0x10217820u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10217820;
    case 0x10217826u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10217826;
    case 0x1021782au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1021782a;
    case 0x10217832u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10217832;
    case 0x10217834u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10217834;
    case 0x10217839u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10217839;
    case 0x1021783au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1021783a;
    case 0x10217841u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10217841;
    case 0x1021784du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1021784d;
    case 0x10217857u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10217857;
    case 0x1021785du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1021785d;
    case 0x1021786du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1021786d;
    case 0x10217872u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10217872;
    case 0x1021787fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1021787f;
    case 0x1021788fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1021788f;
    case 0x10217895u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10217895;
    case 0x1021789fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1021789f;
    case 0x102178a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102178a7;
    case 0x102178b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102178b1;
    case 0x102178b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102178b4;
    case 0x102178b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102178b8;
    case 0x102178c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102178c6;
    case 0x102178fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102178fc;
    case 0x10217901u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10217901;
    case 0x10217903u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10217903;
    case 0x10217907u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10217907;
    case 0x1021790cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1021790c;
    case 0x1021790eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1021790e;
    case 0x10217913u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10217913;
    case 0x10217919u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10217919;
    case 0x1021791du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1021791d;
    case 0x10217925u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10217925;
    case 0x10217927u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10217927;
    case 0x1021792cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1021792c;
    case 0x1021792du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1021792d;
    case 0x10217934u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10217934;
    case 0x10217940u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10217940;
    case 0x1021794au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1021794a;
    case 0x10217950u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10217950;
    case 0x10217960u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10217960;
    case 0x10217965u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10217965;
    case 0x10217972u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10217972;
    case 0x10217982u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10217982;
    case 0x10217988u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10217988;
    case 0x10217992u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10217992;
    case 0x1021799au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1021799a;
    case 0x102179a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102179a4;
    case 0x102179a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102179a7;
    case 0x102179abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102179ab;
    case 0x102179b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102179b9;
    case 0x10217a11u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10217a11;
    case 0x10217a24u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10217a24;
    case 0x10217a2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_5c = rd32(sp0 - 0x5cu); goto E_10217a2e;
    case 0x10217a3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_5c = rd32(sp0 - 0x5cu); goto E_10217a3b;
    default: break;
    }
#endif

    COW_AT(102176d0)
    wr32(sp0 - 0x58u, in_ebp);
    if (rd32(arg3 + 0x344u) == 0u)
    {
        eax = rd32(arg3 + 0x344u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(arg3 + 0x344u);
    COW_AT(102176e2)
        g->esp = sp0 - 0x58u;
        t1 = cow_call_regs(g, COW_IMG(0x101c68a0u), eax, rd32(COW_IMG(0x10662da0u)), in_edx, 1, 0);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    COW_AT(102176ed)
    wr32(sp0 - 0x5cu, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, 0u);
    t3 = g->edx;
    t4 = rd32(sp0 + 4u);
    wr32(arg3 + 0x344u, 0u);
    if (t4 != 0u)
    {
        eax = t4;
        edx = t3;
        ebx = in_ebx;
        esi = in_esi;
        edi = in_edi;
    }
    else
    {
        eax = t4;
        edx = t3;
    COW_AT(10217710)
        wr32(sp0 - 0x5cu, in_edi);
        if (rd32(COW_IMG(0x104e170cu)) == 0u)
        {
            ebx = in_ebx;
            esi = in_esi;
            loc_5c = in_edi;
        }
        else
        {
            edi = rd32(COW_IMG(0x104e170cu));
    COW_AT(1021771f)
            wr32(sp0 - 0x60u, in_ebx);
            wr32(sp0 - 0x64u, 0u);
            wr32(sp0 - 0x68u, 1u);
            wr32(sp0 - 0x6cu, 2u);
            t5 = rd32(edi + 0x8f0u);
            wr32(sp0 - 0x70u, t5);
            g->eax = t5;
            g->edx = edx;
            g->esp = sp0 - 0x60u;
            t6 = cow_thiscall(g, COW_IMG(0x1010f350u), sp0 - 0x1cu, 4, t5, 2u, 1u, 0u);
            t7 = g->edx;
            g->edx = t7;
            t8 = cow_call_regs(g, COW_IMG(0x1010f510u), t6, sp0 - 0x1cu, g->edx, 1, 0);
            t9 = g->edx;
            if ((uint8_t)t8 != 0u)
            {
                eax = t8;
                edx = t9;
                esi = in_esi;
                goto L_10217a24;
            }
            eax = t8;
            ebx = 1u;
L_1021774c: ;
    COW_AT(1021774c)
            if ((uint16_t)ebx == (uint32_t)(int16_t)rd16(arg3 + 0x14u))
            {
                edx = (uint16_t)ebx;
                goto L_10217778;
            }
            edx = (uint16_t)ebx;
    COW_AT(1021775c)
            g->ebx = ebx;
            g->edx = edx;
            g->esp = sp0 - 0x60u;
            t10 = cow_call_regs(g, COW_IMG(0x1010f540u), eax, sp0 - 0x1cu, g->edx, 1, 0);
            t11 = g->edx;
            g->edx = t11;
            t12 = cow_call_regs(g, COW_IMG(0x1010f510u), t10, sp0 - 0x1cu, g->edx, 1, 0);
            t13 = g->edx;
            if ((uint8_t)t12 == 0u)
            {
                eax = t12;
                ebx = ebx + 1u;
                goto L_1021774c;
            }
            eax = t12;
            edx = t13;
    COW_AT(10217773)
            esi = in_esi;
L_10217a24: ;
    COW_AT(10217a24)
            g->eax = eax;
            g->esp = sp0 - 0x60u;
            t67 = cow_thiscall(g, COW_IMG(0x1010f340u), sp0 - 0x1cu, 0);
            eax = t67;
            ebx = rd32(sp0 - 0x60u);
            loc_5c = rd32(sp0 - 0x5cu);
        }
    COW_AT(10217a2e)
        wr32(sp0 - 0x60u, 0u);
        wr32(sp0 - 0x64u, 1u);
        g->eax = eax;
        g->edx = rd32(arg3);
        t68 = rd32(arg3);
        g->esp = sp0 - 0x5cu;
        t69 = cow_thiscall(g, rd32(t68 + 0x18u), arg3, 2, 1u, 0u);
        t70 = g->edx;
        eax = t69;
        edx = t70;
        edi = rd32(sp0 - 0x5cu);
    }
    COW_AT(10217a3b)
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = rd32(sp0 - 0x58u);
    g->edx = edx;
    return eax;
L_10217778: ;
    COW_AT(10217778)
    wr32(sp0 - 0x64u, in_esi);
    g->edx = edx;
    g->esp = sp0 - 0x64u;
    t14 = cow_call_regs(g, COW_IMG(0x101124b0u), eax, sp0 - 0x18u, g->edx, 1, 0);
    t15 = g->edx;
    wr32(sp0 - 0x68u, t14 + 0x1cu);
    g->edx = t15;
    cow_thiscall(g, COW_IMG(0x101091b0u), sp0 - 0x50u, 1, t14 + 0x1cu);
    t16 = g->edx;
    wr32(sp0 - 0x68u, 1u);
    g->edx = t16;
    t17 = cow_call_regs(g, COW_IMG(0x101c5e50u), (uint16_t)ebx, rd32(arg3 + (uint16_t)ebx * 4u + 0x2c4u), g->edx, 0, 1, 1u);
    t18 = g->edx;
    wr32(sp0 - 0x68u, t17);
    g->edx = t18;
    t19 = cow_thiscall(g, COW_IMG(0x10109120u), sp0 - 0x30u, 1, t17);
    t20 = g->edx;
    wr32(sp0 - 0x68u, 0x14au);
    wr32(sp0 - 0x6cu, 0u);
    g->edx = t20;
    t21 = rd32(arg3 + (uint16_t)ebx * 4u + 0x2c4u);
    g->esp = sp0 - 0x68u;
    t22 = cow_call_regs(g, COW_IMG(0x101c5e50u), t19, t21, g->edx, 0, 1, 0u);
    t23 = g->ecx;
    t24 = g->edx;
    wr32(sp0 - 0x6cu, t22);
    wr32(sp0 - 0x70u, COW_IMG(0x10664550u));
    g->edx = t24;
    g->esp = sp0 - 0x64u;
    t25 = cow_call_regs(g, COW_IMG(0x10312090u), t22, g->ecx, g->edx, 1, 3, COW_IMG(0x10664550u), t22, 0x14au);
    t26 = g->edx;
    wr8(COW_IMG(0x1066469au), 0u);
    wr8(COW_IMG(0x1066469bu), (uint8_t)ebx);
    t27 = rd32(edi + 0x8f0u);
    wr32(sp0 - 0x54u, t27);
    g->edx = t26;
    t28 = cow_thiscall(g, COW_IMG(0x10109540u), sp0 - 0x50u, 0);
    t29 = g->edx;
    if ((uint16_t)t28 == 0u)
    {
        eax = t28;
        edx = t29;
    }
    else
    {
        eax = t28;
        edx = t29;
        edi = t27;
    COW_AT(102177fa)
        if (edi != 0u)
        {
    COW_AT(10217802)
            if (rd32(sp0 - 0x4cu) == 0u)
            {
                eax = rd32(sp0 - 0x4cu);
    COW_AT(1021780f)
                esi = 0u;
            }
            else
            {
                eax = rd32(sp0 - 0x4cu);
    COW_AT(1021780a)
                esi = rd32(eax + 4u);
            }
    COW_AT(10217811)
            if (esi != 0u)
            {
    COW_AT(10217815)
                if (rd8(esi) != 0u)
                {
    COW_AT(1021781a)
                    ecx = 0u;
L_1021781c: ;
    COW_AT(1021781c)
                    if ((int32_t)ecx >= 0) goto L_10217841;
    COW_AT(10217820)
                    if (rd8(esi) == 0u)
                    {
                        eax = (eax & 0xffffff00u) | rd8(esi);
                        goto L_1021783a;
                    }
                    eax = (eax & 0xffffff00u) | rd8(esi);
L_10217826: ;
    COW_AT(10217826)
                    if ((uint8_t)eax == 0x2eu) goto L_10217834;
    COW_AT(1021782a)
                    if (rd8(esi + 1u) != 0u)
                    {
                        eax = (eax & 0xffffff00u) | rd8(esi + 1u);
                        esi = esi + 1u;
                        goto L_10217826;
                    }
                    eax = (eax & 0xffffff00u) | rd8(esi + 1u);
                    esi = esi + 1u;
    COW_AT(10217832)
L_1021783a: ;
    COW_AT(1021783a)
                    if (rd8(esi) != 0u)
                    {
                        eax = (eax & 0xffffff00u) | rd8(esi);
                        ecx = ecx + 1u;
                        goto L_1021781c;
                    }
                    eax = (eax & 0xffffff00u) | rd8(esi);
                }
            }
L_10217841: ;
    COW_AT(10217841)
            wr32(sp0 + 4u, 3u);
            edi = sp0 - 0x28u;
L_1021784d: ;
    COW_AT(1021784d)
            wr32(edi, 0u);
            if (esi != 0u)
            {
    COW_AT(10217857)
                if (rd8(esi) != 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(esi);
    COW_AT(1021785d)
                    wr32(sp0 - 0x68u, 0x2eu);
                    wr32(sp0 - 0x6cu, eax);
                    g->edx = edx;
                    g->esp = sp0 - 0x64u;
                    t30 = cow_call_regs(g, COW_IMG(0x1010e680u), eax, g->ecx, g->edx, 0, 2, eax, 0x2eu);
                    t31 = g->edx;
                    if ((uint8_t)t30 != 0u)
                    {
                        edx = t31;
                    }
                    else
                    {
                        eax = t30;
    COW_AT(1021786d)
                        ebx = 5u;
L_10217872: ;
    COW_AT(10217872)
                        t32 = rd32(edi) << 6u;
                        wr32(edi, t32);
                        if (rd8(esi) == 0u)
                        {
                            eax = (eax & 0xffffff00u) | rd8(esi);
                            edx = t32;
                        }
                        else
                        {
                            eax = (eax & 0xffffff00u) | rd8(esi);
                            edx = t32;
    COW_AT(1021787f)
                            wr32(sp0 - 0x68u, 0x2eu);
                            wr32(sp0 - 0x6cu, eax);
                            g->edx = edx;
                            g->esp = sp0 - 0x64u;
                            t33 = cow_call_regs(g, COW_IMG(0x1010e680u), eax, g->ecx, g->edx, 0, 2, eax, 0x2eu);
                            t34 = g->edx;
                            if ((uint8_t)t33 != 0u)
                            {
                                eax = t33;
                                edx = t34;
                            }
                            else
                            {
                                eax = t33;
                                edx = t34;
    COW_AT(1021788f)
                                if (rd8(esi) <= 0x60u)
                                {
                                    eax = (eax & 0xffffff00u) | rd8(esi);
    COW_AT(1021789f)
                                    eax = (uint8_t)eax - 0x20u;
                                }
                                else
                                {
                                    eax = (eax & 0xffffff00u) | rd8(esi);
    COW_AT(10217895)
                                    eax = (uint8_t)eax - 0x40u;
                                }
    COW_AT(102178a7)
                                t35 = rd32(edi) | (eax & 0x3fu);
                                wr32(edi, t35);
                                eax = eax & 0x3fu;
                                esi = esi + 1u;
                            }
                        }
    COW_AT(102178b1)
                        if (ebx != 1u)
                        {
                            ebx = ebx - 1u;
                            goto L_10217872;
                        }
    COW_AT(102178b4)
                    }
                }
            }
    COW_AT(102178b8)
            t36 = rd32(sp0 + 4u) - 1u;
            t37 = rd32(sp0 + 4u);
            wr32(sp0 + 4u, t36);
            if (t37 != 1u)
            {
                eax = t36;
                edi = edi + 4u;
                goto L_1021784d;
            }
            eax = t36;
    COW_AT(102178c6)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x64u;
            t38 = cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x48u, 0);
            t39 = g->edx;
            wr32(sp0 - 0x68u, sp0 - 0x48u);
            t40 = cow_thiscall(g, COW_IMG(0x1010c4d0u), sp0 - 0x28u, 1, sp0 - 0x48u);
            wr32(sp0 - 0x68u, sp0 - 0x48u);
            g->edx = sp0 - 0x48u;
            t41 = cow_thiscall(g, COW_IMG(0x101091b0u), sp0 - 0x38u, 1, sp0 - 0x48u);
            t42 = g->edx;
            g->edx = t42;
            cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x48u, 0);
            t43 = g->edx;
            if (rd32(sp0 - 0x4cu) == 0u)
            {
                eax = rd32(sp0 - 0x4cu);
                edx = t43;
    COW_AT(10217901)
                esi = 0u;
            }
            else
            {
                eax = rd32(sp0 - 0x4cu);
                edx = t43;
    COW_AT(102178fc)
                esi = rd32(eax + 4u);
            }
    COW_AT(10217903)
            if (esi != 0u)
            {
    COW_AT(10217907)
                if (rd8(esi) != 0u)
                {
    COW_AT(1021790c)
                    ecx = 0u;
L_1021790e: ;
    COW_AT(1021790e)
                    if ((int32_t)ecx >= 1) goto L_10217934;
    COW_AT(10217913)
                    if (rd8(esi) == 0u)
                    {
                        eax = (eax & 0xffffff00u) | rd8(esi);
                        goto L_1021792d;
                    }
                    eax = (eax & 0xffffff00u) | rd8(esi);
L_10217919: ;
    COW_AT(10217919)
                    if ((uint8_t)eax == 0x2eu) goto L_10217927;
    COW_AT(1021791d)
                    if (rd8(esi + 1u) != 0u)
                    {
                        eax = (eax & 0xffffff00u) | rd8(esi + 1u);
                        esi = esi + 1u;
                        goto L_10217919;
                    }
                    eax = (eax & 0xffffff00u) | rd8(esi + 1u);
                    esi = esi + 1u;
    COW_AT(10217925)
L_1021792d: ;
    COW_AT(1021792d)
                    if (rd8(esi) != 0u)
                    {
                        eax = (eax & 0xffffff00u) | rd8(esi);
                        ecx = ecx + 1u;
                        goto L_1021790e;
                    }
                    eax = (eax & 0xffffff00u) | rd8(esi);
                }
            }
L_10217934: ;
    COW_AT(10217934)
            wr32(sp0 + 4u, 3u);
            edi = sp0 - 0x28u;
L_10217940: ;
    COW_AT(10217940)
            wr32(edi, 0u);
            if (esi != 0u)
            {
    COW_AT(1021794a)
                if (rd8(esi) != 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(esi);
    COW_AT(10217950)
                    wr32(sp0 - 0x68u, 0x2eu);
                    wr32(sp0 - 0x6cu, eax);
                    g->edx = edx;
                    g->esp = sp0 - 0x64u;
                    t44 = cow_call_regs(g, COW_IMG(0x1010e680u), eax, g->ecx, g->edx, 0, 2, eax, 0x2eu);
                    t45 = g->edx;
                    if ((uint8_t)t44 != 0u)
                    {
                        edx = t45;
                    }
                    else
                    {
                        eax = t44;
    COW_AT(10217960)
                        ebx = 5u;
L_10217965: ;
    COW_AT(10217965)
                        t46 = rd32(edi) << 6u;
                        wr32(edi, t46);
                        if (rd8(esi) == 0u)
                        {
                            eax = (eax & 0xffffff00u) | rd8(esi);
                            edx = t46;
                        }
                        else
                        {
                            eax = (eax & 0xffffff00u) | rd8(esi);
                            edx = t46;
    COW_AT(10217972)
                            wr32(sp0 - 0x68u, 0x2eu);
                            wr32(sp0 - 0x6cu, eax);
                            g->edx = edx;
                            g->esp = sp0 - 0x64u;
                            t47 = cow_call_regs(g, COW_IMG(0x1010e680u), eax, g->ecx, g->edx, 0, 2, eax, 0x2eu);
                            t48 = g->edx;
                            if ((uint8_t)t47 != 0u)
                            {
                                eax = t47;
                                edx = t48;
                            }
                            else
                            {
                                eax = t47;
                                edx = t48;
    COW_AT(10217982)
                                if (rd8(esi) <= 0x60u)
                                {
                                    eax = (eax & 0xffffff00u) | rd8(esi);
    COW_AT(10217992)
                                    eax = (uint8_t)eax - 0x20u;
                                }
                                else
                                {
                                    eax = (eax & 0xffffff00u) | rd8(esi);
    COW_AT(10217988)
                                    eax = (uint8_t)eax - 0x40u;
                                }
    COW_AT(1021799a)
                                t49 = rd32(edi) | (eax & 0x3fu);
                                wr32(edi, t49);
                                eax = eax & 0x3fu;
                                esi = esi + 1u;
                            }
                        }
    COW_AT(102179a4)
                        if (ebx != 1u)
                        {
                            ebx = ebx - 1u;
                            goto L_10217965;
                        }
    COW_AT(102179a7)
                    }
                }
            }
    COW_AT(102179ab)
            t50 = rd32(sp0 + 4u) - 1u;
            t51 = rd32(sp0 + 4u);
            wr32(sp0 + 4u, t50);
            if (t51 != 1u)
            {
                eax = t50;
                edi = edi + 4u;
                goto L_10217940;
            }
            eax = t50;
    COW_AT(102179b9)
            g->edx = edx;
            g->esp = sp0 - 0x64u;
            cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x48u, 0);
            t52 = g->edx;
            wr32(sp0 - 0x68u, sp0 - 0x48u);
            g->eax = sp0 - 0x48u;
            g->edx = t52;
            t53 = cow_thiscall(g, COW_IMG(0x1010c4d0u), sp0 - 0x28u, 1, sp0 - 0x48u);
            t54 = g->edx;
            wr32(sp0 - 0x68u, sp0 - 0x48u);
            g->edx = t54;
            t55 = cow_thiscall(g, COW_IMG(0x101091b0u), sp0 - 0x40u, 1, sp0 - 0x48u);
            t56 = g->edx;
            cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x48u, 0);
            wr32(sp0 - 0x68u, sp0 - 0x30u);
            wr32(sp0 - 0x6cu, sp0 - 0x40u);
            wr32(sp0 - 0x70u, sp0 - 0x38u);
            g->eax = sp0 - 0x40u;
            g->edx = sp0 - 0x30u;
            t57 = cow_thiscall(g, COW_IMG(0x1010d5e0u), rd32(sp0 - 0x54u), 3, sp0 - 0x38u, sp0 - 0x40u, sp0 - 0x30u);
            t58 = g->edx;
            g->edx = t58;
            t59 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x40u, 0);
            t60 = g->edx;
            g->edx = t60;
            t61 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x38u, 0);
            t62 = g->edx;
            eax = t61;
            edx = t62;
        }
    }
    COW_AT(10217a11)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x64u;
    t63 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x30u, 0);
    t64 = g->edx;
    g->edx = t64;
    t65 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x50u, 0);
    t66 = g->edx;
    eax = t65;
    edx = t66;
    esi = rd32(sp0 - 0x64u);
    goto L_10217a24;
L_10217834: ;
    COW_AT(10217834)
    if (rd8(esi) != 0u)
    {
    COW_AT(10217839)
        esi = esi + 1u;
    }
    goto L_1021783a;
L_10217927: ;
    COW_AT(10217927)
    if (rd8(esi) != 0u)
    {
    COW_AT(1021792c)
        esi = esi + 1u;
    }
    goto L_1021792d;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102176d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102176e2u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x58u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102176edu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x58u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10217710u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x58u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1021771fu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x5cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1021774cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x60u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1021775cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x60u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10217773u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x60u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10217778u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x60u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102177fau:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10217802u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1021780au:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1021780fu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10217811u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10217815u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1021781au:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1021781cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10217820u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10217826u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1021782au:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10217832u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10217834u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10217839u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1021783au:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10217841u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1021784du:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10217857u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1021785du:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1021786du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10217872u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1021787fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1021788fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10217895u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1021789fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x102178a7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x102178b1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x102178b4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x102178b8u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102178c6u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102178fcu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        wr32(sp0 - 0x68u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x10217901u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        wr32(sp0 - 0x68u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x10217903u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        wr32(sp0 - 0x68u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x10217907u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        wr32(sp0 - 0x68u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x1021790cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        wr32(sp0 - 0x68u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x1021790eu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        wr32(sp0 - 0x68u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x10217913u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        wr32(sp0 - 0x68u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x10217919u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        wr32(sp0 - 0x68u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x1021791du:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        wr32(sp0 - 0x68u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x10217925u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        wr32(sp0 - 0x68u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x10217927u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        wr32(sp0 - 0x68u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x1021792cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        wr32(sp0 - 0x68u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x1021792du:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        wr32(sp0 - 0x68u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x10217934u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        wr32(sp0 - 0x68u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x10217940u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1021794au:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10217950u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10217960u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10217965u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10217972u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10217982u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10217988u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10217992u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1021799au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x102179a4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x102179a7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x102179abu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102179b9u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10217a11u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10217a24u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x60u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10217a2eu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x5cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10217a3bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102176d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102176d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
