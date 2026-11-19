/* f_0x1007cd60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_1007cd60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
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
    uint32_t t71;
    uint32_t t72;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1007cd71u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1007cd71;
    case 0x1007cd75u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1007cd75;
    case 0x1007cd80u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1007cd80;
    case 0x1007cd88u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1007cd88;
    case 0x1007cd96u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1007cd96;
    case 0x1007cd9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1007cd9e;
    case 0x1007cda7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1007cda7;
    case 0x1007cdabu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1007cdab;
    case 0x1007cdd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1007cdd0;
    case 0x1007cdd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1007cdd5;
    case 0x1007cddau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1007cdda;
    case 0x1007cddeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1007cdde;
    case 0x1007cdfau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007cdfa;
    case 0x1007ce20u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007ce20;
    case 0x1007ce2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007ce2c;
    case 0x1007ce38u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007ce38;
    case 0x1007ce41u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007ce41;
    case 0x1007ce56u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007ce56;
    case 0x1007ce77u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007ce77;
    case 0x1007ce90u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007ce90;
    case 0x1007ce9du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007ce9d;
    case 0x1007cea7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007cea7;
    case 0x1007ceaau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007ceaa;
    case 0x1007cebau: ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007ceba;
    case 0x1007cebeu: ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007cebe;
    case 0x1007ced2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007ced2;
    case 0x1007cedeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007cede;
    case 0x1007ceeau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007ceea;
    case 0x1007cef3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007cef3;
    case 0x1007ceffu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007ceff;
    case 0x1007cf20u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007cf20;
    case 0x1007cf2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007cf2e;
    case 0x1007cf35u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007cf35;
    case 0x1007cf42u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007cf42;
    case 0x1007cf45u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007cf45;
    case 0x1007cf62u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007cf62;
    case 0x1007cf77u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007cf77;
    default: break;
    }
#endif

    COW_AT(1007cd60)
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc0d0u), in_eax, g->ecx, in_edx, 1, 2, 0x63u, 0u);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        edx = t2;
        goto L_1007cd75;
    }
    COW_AT(1007cd71)
    g->esi = in_esi;
    g->edi = in_edi;
    return 0u;
L_1007cd75: ;
    COW_AT(1007cd75)
    if (rd16(COW_IMG(0x10485f7au)) != 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(COW_IMG(0x10485f7au));
        goto L_1007cd88;
    }
    COW_AT(1007cd80)
    g->esi = in_esi;
    g->edi = in_edi;
    return -arg3;
L_1007cd88: ;
    COW_AT(1007cd88)
    if (rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)eax * 4u) != 0u)
    {
        ecx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)eax * 4u);
        eax = (uint32_t)(int16_t)eax;
        goto L_1007cd9e;
    }
    COW_AT(1007cd96)
    g->esi = in_esi;
    g->edi = in_edi;
    return -arg3;
L_1007cd9e: ;
    COW_AT(1007cd9e)
    g->esp = sp0 - 4u;
    t3 = cow_call_regs(g, COW_IMG(0x1007cf80u), eax, g->ecx, g->edx, 1, 0);
    if ((uint8_t)t3 == 0u) goto L_1007cdab;
    COW_AT(1007cda7)
    g->esi = in_esi;
    g->edi = in_edi;
    return 0u;
L_1007cdab: ;
    COW_AT(1007cdab)
    wr32(rd32(COW_IMG(0x10456a28u)) + 0x18u, rd32(rd32(COW_IMG(0x10456a28u)) + 0x18u) & 0xfffffff7u);
    if (rd32(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0x170u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0x170u);
        ecx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
        edx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
        goto L_1007cdde;
    }
    eax = rd32(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0x170u);
    ecx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
    edx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
    COW_AT(1007cdd0)
    if (eax == 0x21u) goto L_1007cdde;
    COW_AT(1007cdd5)
    if (eax == 7u) goto L_1007cdde;
    COW_AT(1007cdda)
    g->esi = in_esi;
    g->edi = in_edi;
    return 0u;
L_1007cdde: ;
    COW_AT(1007cdde)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0xe7u, 0u, 0u);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 != 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        esi = t4;
    COW_AT(1007cdfa)
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_stdcall(g, COW_IMG(0x10160a50u), 0);
        t7 = g->edx;
        t8 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
        g->eax = rd32(COW_IMG(0x103551e0u));
        g->ecx = t8;
        g->edx = t7;
        t9 = rd32(COW_IMG(0x103551e0u));
        t10 = cow_cdecl(g, COW_IMG(0x10079170u), 1, t8);
        t11 = g->ecx;
        t12 = g->edx;
        wr16(esi + 4u, (uint16_t)t10);
        if ((uint8_t)arg4 != 1u)
        {
            eax = (t10 & 0xffffff00u) | (uint8_t)arg4;
            ecx = t11;
            edx = t12;
    COW_AT(1007ced2)
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t41 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
            t42 = g->ecx;
            t43 = g->edx;
            if ((t41 & 0x10000u) != 0u)
            {
                eax = t41;
                ecx = t42;
                edx = t43;
                goto L_1007cf20;
            }
            eax = t41;
            ecx = t42;
            edx = t43;
    COW_AT(1007cede)
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t44 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
            t45 = g->ecx;
            t46 = g->edx;
            if ((t44 & 0x80000u) != 0u)
            {
                ecx = t45;
                edx = t46;
                goto L_1007ceff;
            }
            eax = t44;
            ecx = t45;
            edx = t46;
    COW_AT(1007ceea)
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t47 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
            t48 = g->ecx;
            t49 = g->edx;
            if ((int8_t)(t47 >> 8u) < 0)
            {
                ecx = t48;
                edx = t49;
                goto L_1007ceff;
            }
            eax = t47;
            ecx = t48;
            edx = t49;
    COW_AT(1007cef3)
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_cdecl(g, COW_IMG(0x100fc180u), 1, 0x8000u);
            t50 = g->ecx;
            t51 = g->edx;
            ecx = t50;
            edx = t51;
L_1007cf42: ;
    COW_AT(1007cf42)
L_1007cf45: ;
    COW_AT(1007cf45)
            wr16(esi + 6u, 1u);
            t66 = rd32(COW_IMG(0x10456a28u));
            wr32(t66 + 0x18u, rd32(t66 + 0x18u) & 0xfffffff7u);
            g->eax = t66;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t67 = cow_cdecl(g, COW_IMG(0x100fc2b0u), 1, 0x80000u);
            t68 = g->ecx;
            t69 = g->edx;
            eax = t67;
            ecx = t68;
            edx = t69;
            loc_10 = 0x100000u;
        }
        else
        {
            eax = (t10 & 0xffffff00u) | (uint8_t)arg4;
            ecx = t11;
            edx = t12;
    COW_AT(1007ce20)
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t13 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
            t14 = g->ecx;
            t15 = g->edx;
            if ((t13 & 0x100000u) != 0u)
            {
                eax = t13;
                ecx = t14;
                edx = t15;
                goto L_1007ce77;
            }
            eax = t13;
            ecx = t14;
            edx = t15;
    COW_AT(1007ce2c)
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t16 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
            t17 = g->ecx;
            t18 = g->edx;
            if ((t16 & 0x80000u) != 0u)
            {
                ecx = t17;
                edx = t18;
                goto L_1007ce56;
            }
            eax = t16;
            ecx = t17;
            edx = t18;
    COW_AT(1007ce38)
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t19 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
            t20 = g->ecx;
            t21 = g->edx;
            if ((int8_t)(t19 >> 8u) < 0)
            {
                ecx = t20;
                edx = t21;
                goto L_1007ce56;
            }
            ecx = t20;
            edx = t21;
    COW_AT(1007ce41)
            t22 = rd32(COW_IMG(0x10456a28u));
            wr32(t22 + 0x18u, rd32(t22 + 0x18u) | 8u);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_cdecl(g, COW_IMG(0x100fc180u), 1, 0x80000u);
            t23 = g->ecx;
            t24 = g->edx;
            ecx = t23;
            edx = t24;
L_1007cea7: ;
    COW_AT(1007cea7)
L_1007ceaa: ;
    COW_AT(1007ceaa)
            t37 = rd16(esi + 4u);
            wr16(esi + 6u, 3u);
            if ((uint16_t)t37 == 1u)
            {
    COW_AT(1007ceba)
                wr16(esi + 4u, 3u);
            }
    COW_AT(1007cebe)
            g->eax = 3u;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t38 = cow_cdecl(g, COW_IMG(0x100fc2b0u), 1, 0x8000u);
            t39 = g->ecx;
            t40 = g->edx;
            eax = t38;
            ecx = t39;
            edx = t40;
            loc_10 = 0x10000u;
        }
    COW_AT(1007cf62)
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t70 = cow_cdecl(g, COW_IMG(0x100fc2b0u), 1, loc_10);
        t71 = g->ecx;
        t72 = g->edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, esi, 8u, 0u);
    }
    COW_AT(1007cf77)
    g->esi = in_esi;
    g->edi = in_edi;
    return arg3;
L_1007ce56: ;
    COW_AT(1007ce56)
    t25 = rd32(COW_IMG(0x10456a28u));
    wr32(t25 + 0x18u, rd32(t25 + 0x18u) & 0xfffffff7u);
    g->eax = t25;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t26 = cow_cdecl(g, COW_IMG(0x100fc2b0u), 1, 0x80000u);
    t27 = g->ecx;
    t28 = g->edx;
    g->ecx = t27;
    g->edx = t28;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x100fc180u), 1, 0x100000u);
    t29 = g->ecx;
    t30 = g->edx;
    ecx = t29;
    edx = t30;
    goto L_1007ceaa;
L_1007ce77: ;
    COW_AT(1007ce77)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t31 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t32 = g->ecx;
    if ((t31 & 0x80000u) != 0u)
    {
        eax = rd32(COW_IMG(0x10456a28u));
        ecx = t32;
        edx = rd32(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    COW_AT(1007ce9d)
        wr32(eax + 0x18u, edx & 0xfffffff7u);
        g->ecx = ecx;
        g->edx = edx & 0xfffffff7u;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x100fc2b0u), 1, 0x80000u);
        t35 = g->ecx;
        t36 = g->edx;
        ecx = t35;
        edx = t36;
    }
    else
    {
        eax = rd32(COW_IMG(0x10456a28u));
        ecx = t32;
        edx = rd32(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    COW_AT(1007ce90)
        wr32(eax + 0x18u, edx | 8u);
        g->ecx = ecx;
        g->edx = edx | 8u;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x100fc180u), 1, 0x80000u);
        t33 = g->ecx;
        t34 = g->edx;
        ecx = t33;
        edx = t34;
    }
    goto L_1007cea7;
L_1007ceff: ;
    COW_AT(1007ceff)
    t52 = rd32(COW_IMG(0x10456a28u));
    wr32(t52 + 0x18u, rd32(t52 + 0x18u) & 0xfffffff7u);
    g->eax = t52;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t53 = cow_cdecl(g, COW_IMG(0x100fc2b0u), 1, 0x8000u);
    t54 = g->ecx;
    t55 = g->edx;
    g->ecx = t54;
    g->edx = t55;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x100fc180u), 1, 0x10000u);
    t56 = g->ecx;
    t57 = g->edx;
    ecx = t56;
    edx = t57;
    goto L_1007cf45;
L_1007cf20: ;
    COW_AT(1007cf20)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t58 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t59 = g->ecx;
    t60 = g->edx;
    if ((int8_t)(t58 >> 8u) < 0)
    {
        ecx = t59;
        edx = t60;
    COW_AT(1007cf35)
        t63 = rd32(COW_IMG(0x10456a28u));
        wr32(t63 + 0x18u, rd32(t63 + 0x18u) & 0xfffffff7u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x100fc2b0u), 1, 0x8000u);
        t64 = g->ecx;
        t65 = g->edx;
        ecx = t64;
        edx = t65;
    }
    else
    {
        eax = t58;
        ecx = t59;
        edx = t60;
    COW_AT(1007cf2e)
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x100fc180u), 1, 0x8000u);
        t61 = g->ecx;
        t62 = g->edx;
        ecx = t61;
        edx = t62;
    }
    goto L_1007cf42;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1007cd60(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1007cd71u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1007cd75u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1007cd80u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1007cd88u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1007cd96u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1007cd9eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1007cda7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1007cdabu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1007cdd0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edi = 0xfffffff7u;
        (void)sp0;
        return 1;
    }
    case 0x1007cdd5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edi = 0xfffffff7u;
        (void)sp0;
        return 1;
    }
    case 0x1007cddau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1007cddeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edi = 0xfffffff7u;
        (void)sp0;
        return 1;
    }
    case 0x1007cdfau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0xfffffff7u;
        (void)sp0;
        return 1;
    }
    case 0x1007ce20u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0xfffffff7u;
        (void)sp0;
        return 1;
    }
    case 0x1007ce2cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0xfffffff7u;
        (void)sp0;
        return 1;
    }
    case 0x1007ce38u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0xfffffff7u;
        (void)sp0;
        return 1;
    }
    case 0x1007ce41u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1007ce56u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0xfffffff7u;
        (void)sp0;
        return 1;
    }
    case 0x1007ce77u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0xfffffff7u;
        (void)sp0;
        return 1;
    }
    case 0x1007ce90u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0xcu, 0x80000u);
        (void)sp0;
        return 1;
    }
    case 0x1007ce9du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->edi = 0xfffffff7u;
        wr32(sp0 - 0xcu, 0x80000u);
        (void)sp0;
        return 1;
    }
    case 0x1007cea7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1007ceaau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1007cebau:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = 3u;
        (void)sp0;
        return 1;
    }
    case 0x1007cebeu:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = 3u;
        (void)sp0;
        return 1;
    }
    case 0x1007ced2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0xfffffff7u;
        (void)sp0;
        return 1;
    }
    case 0x1007cedeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0xfffffff7u;
        (void)sp0;
        return 1;
    }
    case 0x1007ceeau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0xfffffff7u;
        (void)sp0;
        return 1;
    }
    case 0x1007cef3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0xfffffff7u;
        (void)sp0;
        return 1;
    }
    case 0x1007ceffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0xfffffff7u;
        (void)sp0;
        return 1;
    }
    case 0x1007cf20u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0xfffffff7u;
        (void)sp0;
        return 1;
    }
    case 0x1007cf2eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->edi = 0xfffffff7u;
        wr32(sp0 - 0xcu, 0x8000u);
        (void)sp0;
        return 1;
    }
    case 0x1007cf35u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->edi = 0xfffffff7u;
        wr32(sp0 - 0xcu, 0x8000u);
        (void)sp0;
        return 1;
    }
    case 0x1007cf42u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->edi = 0xfffffff7u;
        (void)sp0;
        return 1;
    }
    case 0x1007cf45u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0xfffffff7u;
        (void)sp0;
        return 1;
    }
    case 0x1007cf62u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1007cf77u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1007cd60(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1007cd60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
