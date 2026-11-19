/* f_0x102668c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_102668c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_40;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 88u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102668edu: eax = g->eax; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_102668ed;
    case 0x102668f1u: eax = g->eax; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_102668f1;
    case 0x102668f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; goto E_102668f7;
    case 0x102668fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102668fb;
    case 0x10266917u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; goto E_10266917;
    case 0x1026691fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; goto E_1026691f;
    case 0x1026693cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1026693c;
    case 0x10266940u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); goto E_10266940;
    case 0x10266945u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); goto E_10266945;
    case 0x1026694au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); goto E_1026694a;
    case 0x1026695eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1026695e;
    case 0x10266964u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10266964;
    case 0x10266970u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10266970;
    case 0x1026697cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1026697c;
    case 0x1026697eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1026697e;
    case 0x10266982u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10266982;
    case 0x10266990u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10266990;
    case 0x1026699cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1026699c;
    case 0x102669a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102669a0;
    case 0x102669abu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102669ab;
    case 0x102669b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102669b7;
    case 0x102669bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102669bb;
    case 0x102669cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102669ca;
    case 0x102669cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102669cf;
    case 0x102669d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102669d3;
    case 0x102669d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102669d9;
    case 0x102669e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102669e5;
    case 0x102669efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102669ef;
    case 0x102669f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102669f5;
    case 0x102669f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_102669f9;
    case 0x10266a01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_10266a01;
    case 0x10266a09u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10266a09;
    case 0x10266a10u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10266a10;
    case 0x10266a19u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_10266a19;
    case 0x10266a1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10266a1d;
    case 0x10266a24u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_10266a24;
    case 0x10266a2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_10266a2c;
    case 0x10266a40u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10266a40;
    case 0x10266a4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10266a4a;
    case 0x10266a53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10266a53;
    case 0x10266a5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10266a5e;
    case 0x10266a65u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10266a65;
    case 0x10266a6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); goto E_10266a6d;
    case 0x10266a74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); goto E_10266a74;
    case 0x10266a7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); goto E_10266a7d;
    case 0x10266a88u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); goto E_10266a88;
    case 0x10266a91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); goto E_10266a91;
    case 0x10266aa2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); goto E_10266aa2;
    case 0x10266aabu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); goto E_10266aab;
    case 0x10266ab6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10266ab6;
    case 0x10266abdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); goto E_10266abd;
    case 0x10266abfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); goto E_10266abf;
    default: break;
    }
#endif

    COW_AT(102668c0)
    wr32(sp0 - 0x34u, in_ebx);
    wr32(sp0 - 0x38u, in_esi);
    wr32(sp0 - 0x3cu, in_edi);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x28u, 0u);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 - 0x24u, t1);
    t2 = rd32(sp0 + 0x14u);
    wr32(sp0 - 0x20u, t2);
    if (rd32(sp0 + 8u) == 0xffffffffu)
    {
        eax = t1;
        ebx = rd32(sp0 + 8u);
        esi = t2;
        loc_34 = in_ebx;
        loc_38 = in_esi;
        loc_3c = in_edi;
        loc_2c = 0u;
        loc_30 = 0u;
        loc_28 = 0u;
    }
    else
    {
        eax = t1;
        ebx = rd32(sp0 + 8u);
        esi = t2;
    COW_AT(102668ed)
        if (ebx == 0u)
        {
            loc_34 = in_ebx;
            loc_38 = in_esi;
            loc_3c = in_edi;
            loc_2c = 0u;
            loc_30 = 0u;
            loc_28 = 0u;
        }
        else
        {
    COW_AT(102668f1)
            g->eax = eax;
            g->esp = sp0 - 0x3cu;
            t3 = cow_stdcall(g, rd32(COW_IMG(0x1032923cu)), 0);   /* kernel32.dll!GetTickCount */
            eax = t3;
    COW_AT(102668f7)
            wr32(sp0 - 0x30u, eax);
            loc_34 = rd32(sp0 - 0x34u);
            loc_38 = rd32(sp0 - 0x38u);
            loc_3c = rd32(sp0 - 0x3cu);
            loc_2c = rd32(sp0 - 0x2cu);
            loc_30 = eax;
            loc_28 = rd32(sp0 - 0x28u);
        }
    }
    COW_AT(102668fb)
    wr32(sp0 - 0x40u, 0u);
    t4 = (esi != 0u) + 1u;
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, sp0 - 0x24u);
    wr32(sp0 - 0x4cu, t4);
    wr32(sp0 + 0x14u, t4);
    g->eax = eax;
    g->esp = sp0 - 0x3cu;
    t5 = cow_stdcall(g, rd32(COW_IMG(0x103291c0u)), 4, t4, sp0 - 0x24u, 0u, 0u);   /* kernel32.dll!WaitForMultipleObjects */
    eax = t5;
    esi = t4;
    COW_AT(10266917)
    if (eax < esi)
    {
        ebp = in_ebp;
    }
    else
    {
    COW_AT(1026691f)
        wr32(sp0 - 0x40u, in_ebp);
        t6 = (arg3 != 0u) * 8u + 0x40u;
        wr32(sp0 + 4u, t6);
        eax = t6;
        loc_40 = in_ebp;
L_10266940: ;
    COW_AT(10266940)
        if (ebx > 0xau)
        {
    COW_AT(10266945)
            ebx = 0xau;
        }
    COW_AT(1026694a)
        t7 = rd32(sp0 + 4u);
        wr32(sp0 - 0x44u, t7);
        wr32(sp0 - 0x48u, ebx);
        wr32(sp0 - 0x4cu, 0u);
        wr32(sp0 - 0x50u, sp0 - 0x24u);
        wr32(sp0 - 0x54u, esi);
        g->eax = eax;
        g->ecx = t7;
        g->edx = sp0 - 0x24u;
        g->esp = sp0 - 0x40u;
        t8 = cow_stdcall(g, rd32(COW_IMG(0x10329330u)), 5, esi, sp0 - 0x24u, 0u, ebx, t7);   /* user32.dll!MsgWaitForMultipleObjects */
        t9 = g->ecx;
        t10 = g->edx;
        eax = t8;
        ecx = t9;
        edx = t10;
    COW_AT(1026695e)
        if (eax == esi) goto L_1026697e;
        edi = eax;
    COW_AT(10266964)
        if (edi != 0x102u) goto L_10266a4a;
    COW_AT(10266970)
        if (ebx == rd32(sp0 + 8u)) goto L_10266a4a;
        esi = rd32(sp0 + 8u);
    COW_AT(1026697c)
L_10266982: ;
    COW_AT(10266982)
        if (arg3 == 0u)
        {
            edi = rd32(COW_IMG(0x103293e8u));
        }
        else
        {
            edi = rd32(COW_IMG(0x103293e8u));
    COW_AT(10266990)
            wr32(sp0 - 0x44u, 1u);
            wr32(sp0 - 0x48u, arg4);
            wr32(sp0 - 0x4cu, arg4);
            wr32(sp0 - 0x50u, arg3);
            wr32(sp0 - 0x54u, sp0 - 0x1cu);
            g->eax = sp0 - 0x1cu;
            g->edx = edx;
            g->esp = sp0 - 0x40u;
            t11 = cow_thiscall(g, edi, ecx, 5, sp0 - 0x1cu, arg3, arg4, arg4, 1u);
            t12 = g->ecx;
            t13 = g->edx;
            eax = t11;
            ecx = t12;
            edx = t13;
    COW_AT(1026699c)
            if (eax == 0u) goto L_102669bb;
L_102669a0: ;
    COW_AT(102669a0)
            wr32(sp0 - 0x44u, sp0 - 0x1cu);
            g->eax = eax;
            g->ecx = sp0 - 0x1cu;
            g->esp = sp0 - 0x40u;
            t14 = cow_stdcall(g, rd32(COW_IMG(0x103293c8u)), 1, sp0 - 0x1cu);   /* user32.dll!DispatchMessageA */
            t15 = g->ecx;
            eax = t14;
            ecx = t15;
    COW_AT(102669ab)
            wr32(sp0 - 0x44u, 1u);
            wr32(sp0 - 0x48u, arg4);
            wr32(sp0 - 0x4cu, arg4);
            wr32(sp0 - 0x50u, arg3);
            wr32(sp0 - 0x54u, sp0 - 0x1cu);
            g->eax = eax;
            g->edx = sp0 - 0x1cu;
            g->esp = sp0 - 0x40u;
            t16 = cow_thiscall(g, edi, ecx, 5, sp0 - 0x1cu, arg3, arg4, arg4, 1u);
            t17 = g->ecx;
            t18 = g->edx;
            eax = t16;
            ecx = t17;
            edx = t18;
    COW_AT(102669b7)
            if (eax != 0u) goto L_102669a0;
        }
L_102669bb: ;
    COW_AT(102669bb)
        wr32(sp0 - 0x44u, 0u);
        wr32(sp0 - 0x48u, 0u);
        wr32(sp0 - 0x4cu, 0u);
        wr32(sp0 - 0x50u, 0u);
        wr32(sp0 - 0x54u, sp0 - 0x1cu);
        g->eax = sp0 - 0x1cu;
        g->edx = edx;
        g->esp = sp0 - 0x40u;
        t19 = cow_thiscall(g, edi, ecx, 5, sp0 - 0x1cu, 0u, 0u, 0u, 0u);
        t20 = g->ecx;
        t21 = g->edx;
        eax = t19;
        ecx = t20;
        edx = t21;
    COW_AT(102669ca)
        if (esi == 0xffffffffu)
        {
            loc_30 = rd32(sp0 - 0x30u);
        }
        else
        {
    COW_AT(102669cf)
            if (esi == 0u)
            {
                loc_30 = rd32(sp0 - 0x30u);
            }
            else
            {
    COW_AT(102669d3)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x40u;
                t22 = cow_stdcall(g, rd32(COW_IMG(0x1032923cu)), 0);   /* kernel32.dll!GetTickCount */
                t23 = g->edx;
                eax = t22;
                edx = t23;
    COW_AT(102669d9)
                if (eax - rd32(sp0 - 0x30u) <= esi)
                {
                    ecx = eax - rd32(sp0 - 0x30u);
    COW_AT(102669ef)
                    wr32(sp0 + 8u, esi - ecx);
                }
                else
                {
                    ecx = eax - rd32(sp0 - 0x30u);
    COW_AT(102669e5)
                    wr32(sp0 + 8u, 0u);
                }
    COW_AT(102669f5)
                wr32(sp0 - 0x30u, eax);
                loc_30 = eax;
            }
        }
    COW_AT(102669f9)
        if (rd32(sp0 - 0x2cu) != 0u)
        {
            eax = rd32(sp0 - 0x2cu);
            loc_28 = rd32(sp0 - 0x28u);
            loc_2c = rd32(sp0 - 0x2cu);
        }
        else
        {
            eax = rd32(sp0 - 0x2cu);
    COW_AT(10266a01)
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            t24 = rd32(COW_IMG(0x103291f4u));
            g->esp = sp0 - 0x40u;
            t25 = cow_stdcall(g, t24, 0);   /* kernel32.dll!GetCurrentThread */
            t26 = g->ecx;
            t27 = g->edx;
            eax = t25;
            ecx = t26;
            edx = t27;
            edi = t24;
    COW_AT(10266a09)
            wr32(sp0 - 0x44u, eax);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x40u;
            t28 = cow_stdcall(g, rd32(COW_IMG(0x10329238u)), 1, eax);   /* kernel32.dll!GetThreadPriority */
            t29 = g->ecx;
            t30 = g->edx;
            eax = t28;
            ecx = t29;
            edx = t30;
    COW_AT(10266a10)
            wr32(sp0 - 0x28u, eax);
            if (eax >= 2u)
            {
                loc_28 = eax;
            }
            else
            {
                loc_28 = eax;
    COW_AT(10266a19)
                wr32(sp0 - 0x44u, 2u);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x40u;
                t31 = cow_thiscall_cdecl(g, edi, ecx, 1, 2u);
                t32 = g->ecx;
                t33 = g->edx;
                eax = t31;
                ecx = t32;
                edx = t33;
    COW_AT(10266a1d)
                wr32(sp0 - 0x48u, eax);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x40u;
                t34 = cow_stdcall(g, rd32(COW_IMG(0x10329210u)), 2, eax, 2u);   /* kernel32.dll!SetThreadPriority */
                t35 = g->edx;
                eax = t34;
                edx = t35;
                loc_28 = rd32(sp0 - 0x28u);
            }
    COW_AT(10266a24)
            wr32(sp0 - 0x2cu, 1u);
            loc_30 = rd32(sp0 - 0x30u);
            loc_2c = 1u;
        }
    COW_AT(10266a2c)
        wr32(sp0 - 0x44u, 0u);
        wr32(sp0 - 0x48u, 0u);
        wr32(sp0 - 0x4cu, sp0 - 0x24u);
        t36 = rd32(sp0 + 0x14u);
        wr32(sp0 - 0x50u, t36);
        g->eax = eax;
        g->ecx = sp0 - 0x24u;
        g->esp = sp0 - 0x40u;
        t37 = cow_stdcall(g, rd32(COW_IMG(0x103291c0u)), 4, t36, sp0 - 0x24u, 0u, 0u);   /* kernel32.dll!WaitForMultipleObjects */
        t38 = g->ecx;
        eax = t37;
        ecx = t38;
        esi = t36;
    COW_AT(10266a40)
        if (eax >= esi) goto L_1026693c;
        edi = eax;
L_10266a4a: ;
    COW_AT(10266a4a)
        if (rd32(sp0 - 0x2cu) == 0u)
        {
            ebp = rd32(sp0 - 0x40u);
        }
        else
        {
            eax = rd32(sp0 - 0x2cu);
            ebp = rd32(sp0 - 0x40u);
    COW_AT(10266a53)
            t39 = rd32(sp0 - 0x28u);
            wr32(sp0 - 0x40u, t39);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = t39;
            g->esp = sp0 - 0x3cu;
            t40 = cow_cdecl(g, rd32(COW_IMG(0x103291f4u)), 1, t39);   /* kernel32.dll!GetCurrentThread */
            t41 = g->ecx;
            t42 = g->edx;
            eax = t40;
            ecx = t41;
            edx = t42;
    COW_AT(10266a5e)
            wr32(sp0 - 0x44u, eax);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x3cu;
            t43 = cow_stdcall(g, rd32(COW_IMG(0x10329210u)), 2, eax, rd32(sp0 - 0x40u));   /* kernel32.dll!SetThreadPriority */
            t44 = g->ecx;
            t45 = g->edx;
            eax = t43;
            ecx = t44;
            edx = t45;
    COW_AT(10266a65)
            wr32(sp0 - 0x40u, 8u);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x3cu;
            t46 = cow_stdcall(g, rd32(COW_IMG(0x1032932cu)), 1, 8u);   /* user32.dll!GetQueueStatus */
            t47 = g->ecx;
            t48 = g->edx;
            eax = t46;
            ecx = t47;
            edx = t48;
    COW_AT(10266a6d)
            if ((eax >> 0x10u & 8u) != 0u)
            {
    COW_AT(10266a74)
                if (rd32(COW_IMG(0x1067a2a4u)) != 0u)
                {
                    eax = rd32(COW_IMG(0x1067a2a4u));
                    goto L_10266a91;
                }
                eax = rd32(COW_IMG(0x1067a2a4u));
    COW_AT(10266a7d)
                wr32(sp0 - 0x40u, COW_IMG(0x103907d4u));
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x3cu;
                t49 = cow_stdcall(g, rd32(COW_IMG(0x1032933cu)), 1, COW_IMG(0x103907d4u));   /* user32.dll!RegisterWindowMessageA */
                t50 = g->ecx;
                t51 = g->edx;
                eax = t49;
                ecx = t50;
                edx = t51;
    COW_AT(10266a88)
                wr32(COW_IMG(0x1067a2a4u), eax);
                if (eax == 0u) goto L_10266aab;
L_10266a91: ;
    COW_AT(10266a91)
                wr32(sp0 - 0x40u, 1u);
                wr32(sp0 - 0x44u, eax);
                wr32(sp0 - 0x48u, eax);
                wr32(sp0 - 0x4cu, 0xffffffffu);
                wr32(sp0 - 0x50u, sp0 - 0x1cu);
                g->eax = sp0 - 0x1cu;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x3cu;
                t52 = cow_stdcall(g, rd32(COW_IMG(0x103293e8u)), 5, sp0 - 0x1cu, 0xffffffffu, eax, eax, 1u);   /* user32.dll!PeekMessageA */
                t53 = g->ecx;
                t54 = g->edx;
                eax = t52;
                ecx = t53;
                edx = t54;
    COW_AT(10266aa2)
                if (eax != 0u)
                {
                    eax = rd32(COW_IMG(0x1067a2a4u));
                    goto L_10266a91;
                }
                eax = rd32(COW_IMG(0x1067a2a4u));
L_10266aab: ;
    COW_AT(10266aab)
                wr32(sp0 - 0x40u, 0u);
                wr32(sp0 - 0x44u, 0u);
                wr32(sp0 - 0x48u, eax);
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x3cu;
                t55 = cow_cdecl(g, rd32(COW_IMG(0x10329218u)), 3, eax, 0u, 0u);   /* kernel32.dll!GetCurrentThreadId */
                t56 = g->ecx;
                t57 = g->edx;
                eax = t55;
                ecx = t56;
                edx = t57;
    COW_AT(10266ab6)
                wr32(sp0 - 0x4cu, eax);
                g->esp = sp0 - 0x3cu;
                cow_stdcall(g, rd32(COW_IMG(0x10329328u)), 4, eax, rd32(sp0 - 0x48u), 0u, 0u);   /* user32.dll!PostThreadMessageA */
            }
        }
    COW_AT(10266abd)
        eax = edi;
    }
    COW_AT(10266abf)
    g->ebx = rd32(sp0 - 0x34u);
    g->esi = rd32(sp0 - 0x38u);
    g->edi = rd32(sp0 - 0x3cu);
    g->ebp = ebp;
    return eax;
L_1026693c: ;
    COW_AT(1026693c)
    ebx = rd32(sp0 + 8u);
    loc_40 = rd32(sp0 - 0x40u);
    goto L_10266940;
L_1026697e: ;
    COW_AT(1026697e)
    esi = rd32(sp0 + 8u);
    goto L_10266982;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102668c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102668edu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        wr32(sp0 - 0x30u, 0u);
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x28u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102668f1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_30;
        eax = g->eax;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x28u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102668f7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102668fbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10266917u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        wr32(sp0 - 0x48u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x1026691fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        wr32(sp0 - 0x48u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x1026693cu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x40u;
        g->ebp = arg4;
        wr32(sp0 - 0x54u, sp0 - 0x1cu);
        wr32(sp0 - 0x4cu, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10266940u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x40u;
        g->ebp = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10266945u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x40u;
        g->ebp = arg4;
        (void)sp0;
        return 1;
    }
    case 0x1026694au:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x40u;
        g->ebp = arg4;
        (void)sp0;
        return 1;
    }
    case 0x1026695eu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x40u;
        g->ebp = arg4;
        wr32(sp0 - 0x50u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10266964u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x40u;
        g->ebp = arg4;
        wr32(sp0 - 0x50u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10266970u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x40u;
        g->ebp = arg4;
        wr32(sp0 - 0x50u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x1026697cu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x40u;
        g->ebp = arg4;
        wr32(sp0 - 0x50u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x1026697eu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x40u;
        g->ebp = arg4;
        wr32(sp0 - 0x50u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10266982u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x40u;
        g->ebp = arg4;
        wr32(sp0 - 0x50u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10266990u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = arg3;
        g->ebp = arg4;
        wr32(sp0 - 0x50u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x1026699cu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = arg3;
        g->ebp = arg4;
        wr32(sp0 - 0x54u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x102669a0u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = arg3;
        g->ebp = arg4;
        wr32(sp0 - 0x54u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x102669abu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = arg3;
        g->ebp = arg4;
        wr32(sp0 - 0x54u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x102669b7u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = arg3;
        g->ebp = arg4;
        wr32(sp0 - 0x54u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x102669bbu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x40u;
        g->ebp = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102669cau:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x40u;
        g->ebp = arg4;
        wr32(sp0 - 0x54u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x102669cfu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x40u;
        g->ebp = arg4;
        wr32(sp0 - 0x54u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x102669d3u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x40u;
        g->ebp = arg4;
        wr32(sp0 - 0x54u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x102669d9u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x40u;
        g->ebp = arg4;
        wr32(sp0 - 0x54u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x102669e5u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x40u;
        g->ebp = arg4;
        wr32(sp0 - 0x54u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x102669efu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x40u;
        g->ebp = arg4;
        wr32(sp0 - 0x54u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x102669f5u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x40u;
        g->ebp = arg4;
        wr32(sp0 - 0x54u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x102669f9u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x40u;
        g->ebp = arg4;
        wr32(sp0 - 0x54u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10266a01u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x40u;
        g->ebp = arg4;
        wr32(sp0 - 0x54u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10266a09u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x40u;
        g->ebp = arg4;
        wr32(sp0 - 0x54u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10266a10u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x40u;
        g->ebp = arg4;
        wr32(sp0 - 0x54u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10266a19u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        g->ebp = arg4;
        wr32(sp0 - 0x54u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10266a1du:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x44u;
        g->ebp = arg4;
        wr32(sp0 - 0x54u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, 2u);
        (void)sp0;
        return 1;
    }
    case 0x10266a24u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        g->ebp = arg4;
        wr32(sp0 - 0x54u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10266a2cu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x40u;
        g->ebp = arg4;
        wr32(sp0 - 0x54u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10266a40u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x40u;
        g->ebp = arg4;
        wr32(sp0 - 0x54u, sp0 - 0x1cu);
        wr32(sp0 - 0x4cu, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10266a4au:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x10266a53u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10266a5eu:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x10266a65u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10266a6du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10266a74u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10266a7du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10266a88u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10266a91u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10266aa2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x50u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10266aabu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10266ab6u:
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
        g->esp = sp0 - 0x48u;
        wr32(sp0 - 0x44u, 0u);
        wr32(sp0 - 0x40u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10266abdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10266abfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102668c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102668c0(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
