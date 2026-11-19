/* f_0x101587f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_101587f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10158801u: eax = g->eax; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10158801;
    case 0x10158808u: eax = g->eax; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10158808;
    case 0x10158812u: eax = g->eax; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10158812;
    case 0x10158817u: in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10158817;
    case 0x1015881cu: ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1015881c;
    case 0x10158823u: eax = g->eax; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10158823;
    case 0x1015882fu: in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1015882f;
    case 0x10158836u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10158836;
    case 0x1015884du: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1015884d;
    case 0x10158858u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10158858;
    case 0x10158866u: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10158866;
    case 0x10158874u: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10158874;
    case 0x10158884u: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10158884;
    case 0x10158894u: in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10158894;
    case 0x1015889eu: in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1015889e;
    case 0x101588b4u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101588b4;
    case 0x101588c0u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101588c0;
    case 0x101588d1u: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101588d1;
    case 0x101588dbu: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101588db;
    case 0x101588efu: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101588ef;
    case 0x101588f9u: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101588f9;
    case 0x1015890du: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1015890d;
    case 0x1015891du: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1015891d;
    case 0x1015892du: in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1015892d;
    case 0x10158940u: in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10158940;
    case 0x10158956u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10158956;
    case 0x1015896du: in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1015896d;
    case 0x1015897fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1015897f;
    case 0x10158993u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10158993;
    case 0x101589a7u: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101589a7;
    case 0x101589b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101589b2;
    case 0x101589beu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101589be;
    case 0x101589c5u: eax = g->eax; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101589c5;
    case 0x101589c9u: eax = g->eax; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101589c9;
    case 0x101589d0u: eax = g->eax; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101589d0;
    case 0x101589d7u: eax = g->eax; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101589d7;
    case 0x101589dcu: eax = g->eax; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101589dc;
    case 0x101589e3u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101589e3;
    case 0x101589edu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101589ed;
    case 0x101589f4u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101589f4;
    case 0x101589fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101589fc;
    case 0x10158a03u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10158a03;
    case 0x10158a1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; in_ebx = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10158a1c;
    case 0x10158a21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; in_ebx = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10158a21;
    default: break;
    }
#endif

    COW_AT(101587f0)
    if ((rd8(self + 0x5cu) & 3u) == 0u) goto L_10158823;
    eax = (in_eax & 0xffffff00u) | rd8(self + 0x5cu);
    COW_AT(10158801)
    if (rd8(self + 0x59u) != 0u) goto L_10158823;
    COW_AT(10158808)
    if (rd32(self + 0xc4u) != 0u) goto L_10158823;
    COW_AT(10158812)
    if (arg1 == 1u) goto L_10158823;
    COW_AT(10158817)
    if (arg1 - 1u == 4u) goto L_10158823;
    COW_AT(1015881c)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return (arg1 - 5u & 0xffffff00u) | 1u;
L_10158823: ;
    COW_AT(10158823)
    if (arg1 - 1u > 0x1bu)
    {
        eax = arg1 - 1u;
        edx = in_edx;
        edi = 0u;
        goto L_101589fc;
    }
    COW_AT(1015882f)
    t1 = rd32(COW_IMG(0x10158a2cu) + arg1 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x10158836u: goto L_10158836;
    case 0x1015884du: goto L_1015884d;
    case 0x10158866u: goto L_10158866;
    case 0x10158874u: goto L_10158874;
    case 0x10158884u: goto L_10158884;
    case 0x10158894u: goto L_10158894;
    case 0x101588b4u: goto L_101588b4;
    case 0x101588d1u: goto L_101588d1;
    case 0x101588efu: goto L_101588ef;
    case 0x1015890du: goto L_1015890d;
    case 0x1015891du: goto L_1015891d;
    case 0x1015892du: goto L_1015892d;
    case 0x10158940u: goto L_10158940;
    case 0x1015896du: goto L_1015896d;
    case 0x10158993u: goto L_10158993;
    case 0x101589a7u: goto L_101589a7;
    case 0x101589c5u: goto L_101589c5;
    case 0x101589c9u: goto L_101589c9;
    case 0x101589d0u: goto L_101589d0;
    case 0x101589d7u: goto L_101589d7;
    default: rt_fatal(g, COW_IMG(0x1015882fu), "switch");
    }
    return 0;
L_10158836: ;
    COW_AT(10158836)
    t49 = rd32(self + 0x64u);
    t50 = rd32(self + 0x60u);
    g->eax = t49;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t51 = cow_cdecl(g, COW_IMG(0x10083620u), 2, t50, t49);
    t52 = g->edx;
    eax = t51;
    edx = t52;
    edi = t51;
L_101589fc: ;
    COW_AT(101589fc)
    if (edi == 0u)
    {
        ebx = in_ebx & 0xffffff00u;
    }
    else
    {
    COW_AT(10158a03)
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t53 = cow_fastcall(g, COW_IMG(0x10157b40u), self, edx, 3, edi, 0u, 0u);
        t54 = g->edx;
        g->edx = t54;
        t55 = cow_call_regs(g, COW_IMG(0x101598a0u), t53, self, g->edx, 1, 0);
        t56 = g->ecx;
        t57 = g->edx;
        if (t55 != edi)
        {
            eax = t55;
            ebx = (in_ebx & 0xffffff00u) | (uint8_t)t53;
        }
        else
        {
            eax = t55;
            ecx = t56;
            edx = t57;
            ebx = (in_ebx & 0xffffff00u) | (uint8_t)t53;
    COW_AT(10158a1c)
            g->eax = eax;
            g->esp = sp0 - 0xcu;
            t58 = cow_thiscall(g, COW_IMG(0x10037dd0u), ecx, 0);
            eax = t58;
        }
    }
    COW_AT(10158a21)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return (eax & 0xffffff00u) | (uint8_t)ebx;
L_1015884d: ;
    COW_AT(1015884d)
    if (rd8(self + 0x22u) != 0u)
    {
        eax = (arg1 - 1u & 0xffffff00u) | rd8(self + 0x22u);
        edx = in_edx;
        edi = 0u;
    }
    else
    {
        eax = (arg1 - 1u & 0xffffff00u) | rd8(self + 0x22u);
    COW_AT(10158858)
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t47 = cow_thiscall(g, COW_IMG(0x10158d90u), self, 0);
        t48 = g->edx;
        eax = t47;
        edx = t48;
        edi = t47;
    }
    goto L_101589fc;
L_10158866: ;
    COW_AT(10158866)
    g->esp = sp0 - 8u;
    t45 = cow_call_regs(g, COW_IMG(0x10158b60u), arg1 - 1u, self, in_edx, 1, 0);
    t46 = g->edx;
    eax = t45;
    edx = t46;
    edi = t45;
    goto L_101589fc;
L_10158874: ;
    COW_AT(10158874)
    g->esp = sp0 - 8u;
    t43 = cow_call_regs(g, COW_IMG(0x10158c40u), arg1 - 1u, self, in_edx, 0, 1, 0u);
    t44 = g->edx;
    eax = t43;
    edx = t44;
    edi = t43;
    goto L_101589fc;
L_10158884: ;
    COW_AT(10158884)
    g->esp = sp0 - 8u;
    t41 = cow_call_regs(g, COW_IMG(0x10158c40u), arg1 - 1u, self, in_edx, 0, 1, 1u);
    t42 = g->edx;
    eax = t41;
    edx = t42;
    edi = t41;
    goto L_101589fc;
L_10158894: ;
    COW_AT(10158894)
    if ((rd8(self + 0x60u) & 4u) == 0u)
    {
        eax = arg1 - 1u;
        edx = in_edx;
        edi = 0u;
    }
    else
    {
    COW_AT(1015889e)
        g->eax = arg1 - 1u;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t39 = cow_stdcall(g, COW_IMG(0x102034a0u), 1, arg1 - 6u);
        t40 = g->edx;
        eax = t39;
        edx = t40;
        edi = t39;
    }
    goto L_101589fc;
L_101588b4: ;
    COW_AT(101588b4)
    if ((rd32(self + 0x60u) >> 8u & 2u) == 0u)
    {
        eax = rd32(self + 0x60u);
        edx = in_edx;
        edi = 0u;
    }
    else
    {
        eax = rd32(self + 0x60u);
    COW_AT(101588c0)
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t37 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
        t38 = g->edx;
        eax = t37;
        edx = t38;
        edi = t37;
    }
    goto L_101589fc;
L_101588d1: ;
    COW_AT(101588d1)
    if ((rd8(self + 0x60u) & 8u) == 0u)
    {
        eax = arg1 - 1u;
        edx = in_edx;
        edi = 0u;
    }
    else
    {
    COW_AT(101588db)
        g->eax = arg1 - 1u;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t35 = cow_stdcall(g, COW_IMG(0x102034a0u), 1, 6u);
        t36 = g->edx;
        eax = t35;
        edx = t36;
        edi = t35;
    }
    goto L_101589fc;
L_101588ef: ;
    COW_AT(101588ef)
    if ((rd8(self + 0x60u) & 8u) == 0u)
    {
        eax = arg1 - 1u;
        edx = in_edx;
        edi = 0u;
    }
    else
    {
    COW_AT(101588f9)
        g->eax = arg1 - 1u;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t33 = cow_stdcall(g, COW_IMG(0x102034a0u), 1, 0xcu);
        t34 = g->edx;
        eax = t33;
        edx = t34;
        edi = t33;
    }
    goto L_101589fc;
L_1015890d: ;
    COW_AT(1015890d)
    g->esp = sp0 - 8u;
    t31 = cow_call_regs(g, COW_IMG(0x10158ca0u), arg1 - 1u, self, in_edx, 0, 1, 1u);
    t32 = g->edx;
    eax = t31;
    edx = t32;
    edi = t31;
    goto L_101589fc;
L_1015891d: ;
    COW_AT(1015891d)
    g->esp = sp0 - 8u;
    t29 = cow_call_regs(g, COW_IMG(0x10158ca0u), arg1 - 1u, self, in_edx, 0, 1, 0u);
    t30 = g->edx;
    eax = t29;
    edx = t30;
    edi = t29;
    goto L_101589fc;
L_1015892d: ;
    COW_AT(1015892d)
    g->eax = arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t27 = cow_cdecl(g, COW_IMG(0x10083f00u), 2, 0x10u, 0u);
    t28 = g->edx;
    eax = t27;
    edx = t28;
    edi = t27;
    goto L_101589fc;
L_10158940: ;
    COW_AT(10158940)
    g->eax = arg1 - 1u;
    g->ecx = arg1;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t20 = cow_cdecl(g, COW_IMG(0x10083ee0u), 2, 0x12u, 0u);
    t21 = g->ecx;
    t22 = g->edx;
    if (t20 != 0u)
    {
        eax = t20;
        edx = t22;
        edi = t20;
    }
    else
    {
        ecx = t21;
    COW_AT(10158956)
        t23 = rd32(self + 0x64u);
        t24 = rd32(self + 0x60u);
        g->eax = t24;
        g->edx = t23;
        g->esp = sp0 - 8u;
        t25 = cow_cdecl(g, COW_IMG(0x10083ee0u), 2, t24, t23);
        t26 = g->edx;
        eax = t25;
        edx = t26;
        edi = t25;
    }
    goto L_101589fc;
L_1015896d: ;
    COW_AT(1015896d)
    g->eax = arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t14 = cow_cdecl(g, COW_IMG(0x10083ee0u), 2, 0x10u, 0u);
    t15 = g->edx;
    if (t14 != 0u)
    {
        eax = t14;
        edx = t15;
        edi = t14;
    }
    else
    {
        eax = t14;
    COW_AT(1015897f)
        t16 = rd32(self + 0x64u);
        t17 = rd32(self + 0x60u);
        g->eax = eax;
        g->edx = t17;
        g->esp = sp0 - 8u;
        t18 = cow_cdecl(g, COW_IMG(0x10083ee0u), 2, t17, t16);
        t19 = g->edx;
        eax = t18;
        edx = t19;
        edi = t18;
    }
    goto L_101589fc;
L_10158993: ;
    COW_AT(10158993)
    t10 = rd32(self + 0x64u);
    t11 = rd32(self + 0x60u);
    g->eax = t10;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t12 = cow_cdecl(g, COW_IMG(0x10083ec0u), 2, t11, t10);
    t13 = g->edx;
    eax = t12;
    edx = t13;
    edi = t12;
    goto L_101589fc;
L_101589a7: ;
    COW_AT(101589a7)
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x101598a0u), arg1 - 1u, self, g->edx, 1, 0);
    t5 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
    }
    else
    {
        eax = t4;
        edx = t5;
    COW_AT(101589b2)
        g->eax = eax;
        g->esp = sp0 - 8u;
        t6 = cow_fastcall(g, COW_IMG(0x10158ff0u), self, edx, 0);
        t7 = g->ecx;
        t8 = g->edx;
        t9 = cow_stdcall(g, COW_IMG(0x10123e80u), 0);
        eax = t9;
    }
    COW_AT(101589be)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return (eax & 0xffffff00u) | 1u;
L_101589c5: ;
    COW_AT(101589c5)
    eax = 0u;
L_101589dc: ;
    COW_AT(101589dc)
    if (rd8(self + 0x59u) != 0u)
    {
        ecx = (arg1 & 0xffffff00u) | rd8(self + 0x59u);
        goto L_101589ed;
    }
    COW_AT(101589e3)
    if (rd32(self + 0xc4u) == 0u)
    {
        edx = in_edx;
        edi = 0u;
        goto L_101589fc;
    }
    ecx = rd32(self + 0xc4u);
L_101589ed: ;
    COW_AT(101589ed)
    if (rd8(self + 0x58u) == 0u)
    {
        edx = in_edx;
        edi = 0u;
    }
    else
    {
    COW_AT(101589f4)
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t2 = cow_call_regs(g, COW_IMG(0x10158ae0u), eax, self, g->edx, 0, 1, eax);
        t3 = g->edx;
        eax = t2;
        edx = t3;
        edi = 0u;
    }
    goto L_101589fc;
L_101589c9: ;
    COW_AT(101589c9)
    eax = 1u;
    goto L_101589dc;
L_101589d0: ;
    COW_AT(101589d0)
    eax = 2u;
    goto L_101589dc;
L_101589d7: ;
    COW_AT(101589d7)
    eax = 3u;
    goto L_101589dc;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101587f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10158801u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ecx = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10158808u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ecx = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10158812u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ecx = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10158817u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1 - 1u;
        g->ecx = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1015881cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1 - 5u;
        (void)sp0;
        return 1;
    }
    case 0x10158823u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ecx = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1015882fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1 - 1u;
        g->ecx = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10158836u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1015884du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1 - 1u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10158858u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10158866u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x10158874u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x10158884u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x10158894u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1 - 1u;
        g->ecx = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1015889eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1 - 1u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101588b4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101588c0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101588d1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1 - 1u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101588dbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101588efu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1 - 1u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101588f9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1015890du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1015891du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1015892du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1 - 1u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10158940u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1 - 1u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10158956u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1015896du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1 - 1u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1015897fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10158993u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101589a7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101589b2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101589beu:
    {
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
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101589c5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ecx = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101589c9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ecx = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101589d0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ecx = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101589d7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ecx = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101589dcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ecx = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101589e3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101589edu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101589f4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101589fcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10158a03u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = in_ebx & 0xffffff00u;
        (void)sp0;
        return 1;
    }
    case 0x10158a1cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10158a21u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101587f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101587f0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
