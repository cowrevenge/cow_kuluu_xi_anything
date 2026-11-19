/* f_0x102c46a3 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_102c46a3(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_3c;
    uint32_t loc_4;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_4c;
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
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 104u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102c46b5u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x3cu); goto E_102c46b5;
    case 0x102c46edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102c46ed;
    case 0x102c4703u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); goto E_102c4703;
    case 0x102c470cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); goto E_102c470c;
    case 0x102c4716u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); goto E_102c4716;
    case 0x102c471fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); goto E_102c471f;
    case 0x102c4723u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); goto E_102c4723;
    case 0x102c4740u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102c4740;
    case 0x102c4757u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); goto E_102c4757;
    case 0x102c4781u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); goto E_102c4781;
    case 0x102c47a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102c47a1;
    case 0x102c47c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); goto E_102c47c1;
    case 0x102c4801u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); goto E_102c4801;
    case 0x102c480fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); goto E_102c480f;
    case 0x102c4827u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); goto E_102c4827;
    case 0x102c4831u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); goto E_102c4831;
    case 0x102c4836u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); goto E_102c4836;
    case 0x102c4840u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); goto E_102c4840;
    case 0x102c4843u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); goto E_102c4843;
    case 0x102c4848u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); goto E_102c4848;
    case 0x102c4862u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102c4862;
    case 0x102c4877u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_48 = rd32(sp0 - 0x48u); goto E_102c4877;
    case 0x102c488eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_48 = rd32(sp0 - 0x48u); goto E_102c488e;
    case 0x102c489du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); goto E_102c489d;
    case 0x102c48b3u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); goto E_102c48b3;
    case 0x102c48b6u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); goto E_102c48b6;
    case 0x102c48cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); goto E_102c48cd;
    case 0x102c48d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); goto E_102c48d7;
    case 0x102c48ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); goto E_102c48dd;
    case 0x102c48ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); goto E_102c48eb;
    case 0x102c48f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); goto E_102c48f1;
    case 0x102c48ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102c48ff;
    case 0x102c490bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_4 = rd32(sp0 - 4u); goto E_102c490b;
    case 0x102c492cu: edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102c492c;
    case 0x102c493cu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102c493c;
    case 0x102c4953u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_48 = rd32(sp0 - 0x48u); goto E_102c4953;
    case 0x102c4965u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); goto E_102c4965;
    case 0x102c4969u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); goto E_102c4969;
    case 0x102c498bu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x3cu); goto E_102c498b;
    case 0x102c49bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); goto E_102c49ba;
    default: break;
    }
#endif

    COW_AT(102c46a3)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x3cu, in_ebx);
    if (rd32(sp0 + 8u) != 0u)
    {
    COW_AT(102c498b)
        t76 = rd32(sp0 + 8u);
        wr32(sp0 - 0x40u, t76);
        wr32(sp0 - 0x44u, COW_IMG(0x103c86b0u));
        wr32(sp0 - 0x48u, sp0 - 0x38u);
        g->ebx = 0u;
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0x34u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x38u, COW_IMG(0x103c86b0u), t76, in_ebx, rd32(sp0 - 0x38u));
        t77 = g->ecx;
        t78 = g->edx;
        wr32(sp0 - 0x4cu, sp0 - 0x38u);
        t79 = rd32(sp0 + 4u);
        wr32(sp0 - 0x50u, t79);
        g->esp = sp0 - 0x48u;
        cow_cdecl(g, COW_IMG(0x102bca0au), 2, t79, sp0 - 0x38u);
        wr8(arg5 + arg3, 0u);
        wr32(arg6, arg5);
        ebx = arg3;
        esi = in_esi;
        edi = in_edi;
    }
    else
    {
    COW_AT(102c46b5)
        wr32(sp0 - 0x40u, in_esi);
        wr32(sp0 - 0x44u, in_edi);
        t1 = rd32(sp0 + 4u);
        wr32(t1 + 0x74u, arg5 + arg3);
        wr32(t1 + 0x78u, arg4 - arg5);
        t2 = rd32(t1 + 0xacu);
        wr32(t1 + 0x80u, t2);
        t3 = rd32(t1 + 0xb0u);
        wr32(t1 + 0x84u, t3);
        if (arg4 == arg5)
        {
            ecx = arg5;
            edx = in_edx;
            ebx = 0u;
            esi = t1;
            loc_4 = in_ebp;
            loc_3c = in_ebx;
            loc_40 = in_esi;
            loc_44 = in_edi;
            goto L_102c48ff;
        }
        ecx = arg5;
        edx = in_edx;
        ebx = 0u;
        esi = t1;
        edi = 0u;
        loc_4 = in_ebp;
        loc_3c = in_ebx;
        loc_40 = in_esi;
        loc_44 = in_edi;
L_102c46ed: ;
    COW_AT(102c46ed)
        wr32(sp0 - 0x48u, 1u);
        wr32(sp0 - 0x4cu, esi + 0x74u);
        g->eax = esi + 0x74u;
        g->edx = edx;
        g->esp = sp0 - 0x40u;
        t4 = cow_cdecl(g, COW_IMG(0x102c3e9eu), 3, esi + 0x74u, 1u, loc_44);
        t5 = g->edx;
        wr32(sp0 + 8u, t4);
        if (t4 == 0u)
        {
            ecx = t4;
            edx = t5;
            goto L_102c470c;
        }
        ecx = t4;
        edx = t5;
    COW_AT(102c4703)
        if (ecx != 1u) goto L_102c4836;
L_102c470c: ;
    COW_AT(102c470c)
        if (rd32(esi + 0x84u) == 0u)
        {
            eax = rd32(esi + 0x84u);
            goto L_102c471f;
        }
        eax = rd32(esi + 0x84u);
    COW_AT(102c4716)
        if (ecx != 1u) goto L_102c4827;
L_102c471f: ;
    COW_AT(102c471f)
        if (ebx != 0u)
        {
    COW_AT(102c4781)
            wr32(sp0 + 4u, ebx);
            t34 = edi + rd32(esi + 0xb0u) - eax + 1u;
            wr32(sp0 - 0x48u, t34);
            wr32(sp0 - 0x4cu, esi);
            g->eax = t34;
            g->esp = sp0 - 0x34u;
            t35 = cow_call_regs(g, COW_IMG(0x102c44bfu), g->eax, edi - eax, edx, 1, 6, esi, t34, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u));
            t36 = g->edx;
            if (t35 != 0u)
            {
                eax = t35;
                ecx = rd32(sp0 - 0x48u);
                edx = t36;
                ebx = t35;
            }
            else
            {
                eax = t35;
                ecx = rd32(sp0 - 0x48u);
                edx = t36;
                ebx = t35;
    COW_AT(102c47a1)
                t37 = rd32(sp0 + 4u);
                wr32(sp0 - 0x48u, t37);
                wr32(sp0 - 0x4cu, esi);
                g->eax = eax;
                g->ecx = ecx;
                g->esp = sp0 - 0x44u;
                t38 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, esi, t37);
                t39 = g->ecx;
                t40 = g->edx;
                wr32(sp0 - 0x50u, arg3);
                wr32(sp0 - 0x54u, esi);
                g->ecx = t39;
                g->esp = sp0 - 0x4cu;
                t41 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, t40, 1, 2, esi, arg3);
                t42 = g->ecx;
                t43 = g->edx;
                wr32(sp0 - 0x58u, COW_IMG(0x103c87acu));
                wr32(sp0 - 0x5cu, esi);
                g->ecx = t42;
                t44 = cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, t43, 1, 4, esi, COW_IMG(0x103c87acu), rd32(sp0 - 0x54u), arg3);
                t45 = g->ecx;
                t46 = g->edx;
                eax = t44;
                ecx = t45;
                edx = t46;
            }
    COW_AT(102c47c1)
            wr32(sp0 - 0x48u, edi);
            t47 = rd32(sp0 + 4u);
            wr32(sp0 - 0x4cu, t47);
            wr32(sp0 - 0x50u, ebx);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x3cu;
            t48 = cow_cdecl(g, COW_IMG(0x103169e0u), 5, ebx, t47, edi, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u));
            t49 = g->ecx;
            t50 = g->edx;
            t51 = rd32(sp0 + 4u);
            wr32(sp0 - 0x54u, t51);
            wr32(sp0 - 0x58u, esi);
            g->ecx = t49;
            g->esp = sp0 - 0x50u;
            cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, t50, 1, 2, esi, t51);
            t52 = g->ecx;
            t53 = g->edx;
            t54 = rd32(esi + 0xb0u) - rd32(esi + 0x84u);
            wr32(sp0 - 0x5cu, t54);
            t55 = rd32(esi + 0xacu);
            wr32(sp0 - 0x60u, t55);
            wr32(sp0 - 0x64u, ebx + edi);
            g->ecx = t52;
            g->edx = t53;
            cow_cdecl(g, COW_IMG(0x103169e0u), 5, ebx + edi, t55, t54, rd32(sp0 - 0x58u), rd32(sp0 - 0x54u));
            t56 = g->ecx;
            t57 = g->edx;
            ecx = t56;
            edx = t57;
            edi = edi + rd32(esi + 0xb0u) - rd32(esi + 0x84u);
        }
        else
        {
    COW_AT(102c4723)
            t20 = arg5 + rd32(esi + 0xb0u) - eax + 1u;
            wr32(sp0 - 0x48u, t20);
            wr32(sp0 - 0x4cu, esi);
            g->eax = t20;
            t21 = rd32(esi + 0xb0u);
            g->esp = sp0 - 0x34u;
            t22 = cow_call_regs(g, COW_IMG(0x102c44bfu), g->eax, ecx, edx, 1, 6, esi, t20, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u));
            t23 = g->edx;
            if (t22 != 0u)
            {
                edx = t23;
                ebx = t22;
                edi = arg5 + t21 - eax;
            }
            else
            {
                ecx = rd32(sp0 - 0x48u);
                edx = t23;
                ebx = t22;
                edi = arg5 + t21 - eax;
                eax = t22;
    COW_AT(102c4740)
                wr32(sp0 - 0x48u, arg3);
                wr32(sp0 - 0x4cu, esi);
                g->eax = eax;
                g->ecx = ecx;
                g->esp = sp0 - 0x44u;
                t24 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, esi, arg3);
                t25 = g->ecx;
                t26 = g->edx;
                wr32(sp0 - 0x50u, COW_IMG(0x103c87d4u));
                wr32(sp0 - 0x54u, esi);
                cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, t26, 1, 4, esi, COW_IMG(0x103c87d4u), rd32(sp0 - 0x4cu), arg3);
                t27 = g->edx;
                edx = t27;
            }
    COW_AT(102c4757)
            wr32(sp0 - 0x48u, edi - arg5);
            t28 = rd32(esi + 0xacu);
            wr32(sp0 - 0x4cu, t28);
            wr32(sp0 - 0x50u, arg5 + ebx);
            g->eax = arg5 + ebx;
            g->ecx = edi - arg5;
            g->edx = edx;
            g->esp = sp0 - 0x3cu;
            t29 = cow_cdecl(g, COW_IMG(0x103169e0u), 5, arg5 + ebx, t28, edi - arg5, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u));
            t30 = g->ecx;
            t31 = g->edx;
            wr32(sp0 - 0x54u, arg5);
            wr32(sp0 - 0x58u, arg3);
            wr32(sp0 - 0x5cu, ebx);
            g->ecx = t30;
            g->edx = t31;
            g->esp = sp0 - 0x48u;
            cow_cdecl(g, COW_IMG(0x103169e0u), 5, ebx, arg3, arg5, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu));
            t32 = g->ecx;
            t33 = g->edx;
            ecx = t32;
            edx = t33;
        }
    COW_AT(102c4801)
        wr8(ebx + edi, 0u);
        if (rd32(sp0 + 8u) == 1u) goto L_102c4969;
    COW_AT(102c480f)
        t58 = rd32(esi + 0xacu);
        wr32(esi + 0x80u, t58);
        t59 = rd32(esi + 0xb0u);
        wr32(esi + 0x84u, t59);
L_102c4827: ;
    COW_AT(102c4827)
        if (rd32(esi + 0x78u) != 0u)
        {
            loc_4 = rd32(sp0 - 4u);
            loc_3c = rd32(sp0 - 0x3cu);
            loc_40 = rd32(sp0 - 0x40u);
            loc_44 = rd32(sp0 - 0x44u);
            goto L_102c46ed;
        }
    COW_AT(102c4831)
L_102c48cd: ;
    COW_AT(102c48cd)
        if (rd32(sp0 + 8u) == 1u) goto L_102c4969;
    COW_AT(102c48d7)
        if (rd32(sp0 + 8u) != 0xfffffffbu) goto L_102c48eb;
    COW_AT(102c48dd)
        wr32(sp0 - 0x48u, esi + 0x11cu);
        wr32(sp0 - 0x4cu, COW_IMG(0x103c8750u));
        loc_4c = COW_IMG(0x103c8750u);
        loc_48 = esi + 0x11cu;
        loc_4 = rd32(sp0 - 4u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
L_102c490b: ;
    COW_AT(102c490b)
        wr32(sp0 - 0x50u, sp0 - 0x38u);
        g->ebx = ebx;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x3cu;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x38u, loc_4c, loc_48, loc_44, loc_40);
        t60 = g->ecx;
        t61 = g->edx;
        wr32(sp0 - 0x48u, sp0 - 0x38u);
        wr32(sp0 - 0x4cu, esi);
        g->edx = t61;
        g->esp = sp0 - 0x44u;
        cow_cdecl(g, COW_IMG(0x102bca0au), 2, esi, sp0 - 0x38u);
        t62 = g->edx;
        if (ebx != 0u)
        {
            ecx = sp0 - 0x38u;
            edx = t62;
        }
        else
        {
            edx = t62;
    COW_AT(102c492c)
            wr32(sp0 - 0x48u, arg5 + 1u);
            wr32(sp0 - 0x4cu, esi);
            g->eax = arg5 + 1u;
            g->esp = sp0 - 0x34u;
            t63 = cow_call_regs(g, COW_IMG(0x102c44bfu), g->eax, sp0 - 0x38u, edx, 1, 6, esi, arg5 + 1u, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u));
            t64 = g->edx;
            if (t63 != 0u)
            {
                eax = t63;
                ecx = arg5 + 1u;
                edx = t64;
                ebx = t63;
            }
            else
            {
                eax = t63;
                edx = t64;
                ebx = t63;
    COW_AT(102c493c)
                wr32(sp0 - 0x48u, arg3);
                wr32(sp0 - 0x4cu, esi);
                g->eax = eax;
                g->ecx = arg5 + 1u;
                g->esp = sp0 - 0x44u;
                t65 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, esi, arg3);
                t66 = g->ecx;
                t67 = g->edx;
                wr32(sp0 - 0x50u, COW_IMG(0x103c86d4u));
                wr32(sp0 - 0x54u, esi);
                g->ecx = t66;
                t68 = cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, t67, 1, 4, esi, COW_IMG(0x103c86d4u), rd32(sp0 - 0x4cu), arg3);
                t69 = g->ecx;
                t70 = g->edx;
                eax = t68;
                ecx = t69;
                edx = t70;
            }
    COW_AT(102c4953)
            wr32(sp0 - 0x48u, arg5);
            wr32(sp0 - 0x4cu, arg3);
            wr32(sp0 - 0x50u, ebx);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x3cu;
            cow_cdecl(g, COW_IMG(0x103169e0u), 5, ebx, arg3, arg5, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u));
            t71 = g->ecx;
            t72 = g->edx;
            ecx = t71;
            edx = t72;
        }
    COW_AT(102c4965)
        wr8(arg5 + ebx, 0u);
        edi = arg5;
L_102c4969: ;
    COW_AT(102c4969)
        wr32(sp0 - 0x48u, esi + 0x74u);
        g->eax = esi + 0x74u;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x44u;
        t73 = cow_cdecl(g, COW_IMG(0x102c3d20u), 1, esi + 0x74u);
        t74 = g->ecx;
        t75 = g->edx;
        wr32(sp0 - 0x4cu, arg3);
        wr32(esi + 0x78u, 0u);
        wr32(sp0 - 0x50u, esi);
        g->esp = sp0 - 0x48u;
        cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, t75, 1, 2, esi, arg3);
        wr32(arg6, edi);
        esi = rd32(sp0 - 0x40u);
        edi = rd32(sp0 - 0x44u);
    }
    COW_AT(102c49ba)
    g->ebx = rd32(sp0 - 0x3cu);
    g->esi = esi;
    g->edi = edi;
    g->ebp = rd32(sp0 - 4u);
    return ebx;
L_102c4836: ;
    COW_AT(102c4836)
    if (rd32(esi + 0x8cu) == 0u)
    {
        eax = rd32(esi + 0x8cu);
    COW_AT(102c4843)
        wr32(sp0 - 0x48u, COW_IMG(0x103c8684u));
        loc_48 = COW_IMG(0x103c8684u);
    }
    else
    {
        eax = rd32(esi + 0x8cu);
    COW_AT(102c4840)
        wr32(sp0 - 0x48u, eax);
        loc_48 = eax;
    }
    COW_AT(102c4848)
    wr32(sp0 - 0x4cu, esi);
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x102bca0au), 2, esi, loc_48);
    t6 = g->edx;
    t7 = rd32(sp0 - 0x48u);
    wr32(sp0 - 0x48u, esi + 0x74u);
    g->edx = t6;
    cow_cdecl(g, COW_IMG(0x102c3d20u), 1, esi + 0x74u);
    t8 = g->edx;
    wr32(esi + 0x78u, 0u);
    if (ebx != 0u)
    {
        edx = t8;
    }
    else
    {
        ecx = rd32(sp0 - 0x48u);
        edx = t8;
    COW_AT(102c4862)
        wr32(sp0 - 0x48u, arg5 + 0x20u);
        wr32(sp0 - 0x4cu, esi);
        g->eax = arg5;
        g->esp = sp0 - 0x34u;
        t9 = cow_call_regs(g, COW_IMG(0x102c44bfu), g->eax, ecx, edx, 1, 6, esi, arg5 + 0x20u, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u));
        t10 = g->edx;
        if (t9 != 0u)
        {
            eax = t9;
            ecx = arg5 + 0x20u;
            edx = t10;
            ebx = t9;
        }
        else
        {
            eax = t9;
            edx = t10;
            ebx = t9;
    COW_AT(102c4877)
            wr32(sp0 - 0x48u, arg3);
            wr32(sp0 - 0x4cu, esi);
            g->eax = eax;
            g->ecx = arg5 + 0x20u;
            g->esp = sp0 - 0x44u;
            t11 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, esi, arg3);
            t12 = g->ecx;
            t13 = g->edx;
            wr32(sp0 - 0x50u, COW_IMG(0x103c8784u));
            wr32(sp0 - 0x54u, esi);
            g->ecx = t12;
            t14 = cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, t13, 1, 4, esi, COW_IMG(0x103c8784u), rd32(sp0 - 0x4cu), arg3);
            t15 = g->ecx;
            t16 = g->edx;
            eax = t14;
            ecx = t15;
            edx = t16;
        }
    COW_AT(102c488e)
        wr32(sp0 - 0x48u, arg5);
        wr32(sp0 - 0x4cu, arg3);
        wr32(sp0 - 0x50u, ebx);
        g->edx = edx;
        g->esp = sp0 - 0x3cu;
        cow_cdecl(g, COW_IMG(0x103169e0u), 5, ebx, arg3, arg5, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u));
        t17 = g->edx;
        edx = t17;
        edi = arg5 + 0x20u;
    }
    COW_AT(102c489d)
    wr8(ebx + edi - 1u, 0u);
    if (arg4 + arg3 - ebx - 1u < 0x1fu)
    {
        edi = arg4 + arg3 - ebx - 1u;
    }
    else
    {
    COW_AT(102c48b3)
        wr32(sp0 - 0x48u, 0x1fu);
        edi = 0x1fu;
    }
    COW_AT(102c48b6)
    wr32(sp0 - 0x48u, edi + 1u);
    wr32(sp0 - 0x4cu, COW_IMG(0x103c8684u));
    wr32(sp0 - 0x50u, arg5 + ebx);
    g->ecx = arg4;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    cow_cdecl(g, COW_IMG(0x103169e0u), 5, arg5 + ebx, COW_IMG(0x103c8684u), edi + 1u, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u));
    t18 = g->ecx;
    t19 = g->edx;
    ecx = t18;
    edx = t19;
    goto L_102c48cd;
L_102c48eb: ;
    COW_AT(102c48eb)
    if (rd32(sp0 + 8u) != 0xfffffffdu)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
        goto L_102c48ff;
    }
    COW_AT(102c48f1)
    wr32(sp0 - 0x48u, esi + 0x11cu);
    wr32(sp0 - 0x4cu, COW_IMG(0x103c8720u));
    loc_4c = COW_IMG(0x103c8720u);
    loc_48 = esi + 0x11cu;
    loc_4 = rd32(sp0 - 4u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
    loc_44 = rd32(sp0 - 0x44u);
    goto L_102c490b;
L_102c48ff: ;
    COW_AT(102c48ff)
    wr32(sp0 - 0x48u, esi + 0x11cu);
    wr32(sp0 - 0x4cu, COW_IMG(0x103c86f0u));
    loc_4c = COW_IMG(0x103c86f0u);
    loc_48 = esi + 0x11cu;
    goto L_102c490b;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102c46a3(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102c46b5u:
    {
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
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c46edu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4703u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c470cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4716u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c471fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4723u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4740u:
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
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4757u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4781u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c47a1u:
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
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c47c1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4801u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c480fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4827u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4831u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4836u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4840u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4843u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4848u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4862u:
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
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4877u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x44u;
        g->ecx = arg5 + 0x20u;
        g->ebp = sp0 - 4u;
        g->edi = arg5 + 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102c488eu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = arg5 + 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102c489du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c48b3u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        uint32_t loc_4c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x44u;
        g->ecx = arg4;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c48b6u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        uint32_t loc_4c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x44u;
        g->ecx = arg4;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c48cdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c48d7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c48ddu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c48ebu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c48f1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c48ffu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c490bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c492cu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x44u;
        g->eax = arg5;
        g->ecx = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        g->edi = arg5;
        wr32(sp0 - 0x50u, sp0 - 0x38u);
        wr32(sp0 - 0x48u, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x102c493cu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x44u;
        g->ecx = arg5 + 1u;
        g->ebp = sp0 - 4u;
        g->edi = arg5;
        wr32(sp0 - 0x50u, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x102c4953u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x102c4965u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        uint32_t loc_4c;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x44u;
        g->eax = arg5;
        g->ebp = sp0 - 4u;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x102c4969u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c498bu:
    {
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c49bau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102c46a3(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102c46a3(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
