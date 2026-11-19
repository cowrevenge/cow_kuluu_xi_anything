/* f_0x101b5850 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=8 */
uint32_t cow_fn_101b5850(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
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
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg7 = rd32(sp0 + 0x1cu);
    const uint32_t arg8 = rd32(sp0 + 0x20u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101b585cu: edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101b585c;
    case 0x101b5863u: eax = g->eax; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101b5863;
    case 0x101b5888u: in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 4u); goto E_101b5888;
    case 0x101b588fu: edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 4u); goto E_101b588f;
    case 0x101b58e0u: edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 4u); goto E_101b58e0;
    case 0x101b590eu: in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 4u); goto E_101b590e;
    case 0x101b5920u: eax = g->eax; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 4u); goto E_101b5920;
    case 0x101b5946u: edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 4u); goto E_101b5946;
    case 0x101b5954u: edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 4u); goto E_101b5954;
    case 0x101b595du: edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 4u); goto E_101b595d;
    case 0x101b5963u: edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 4u); goto E_101b5963;
    case 0x101b59a6u: eax = g->eax; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 4u); goto E_101b59a6;
    case 0x101b59aeu: edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 4u); goto E_101b59ae;
    case 0x101b59b4u: edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 4u); goto E_101b59b4;
    case 0x101b59bcu: edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 4u); goto E_101b59bc;
    case 0x101b59c4u: edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 4u); goto E_101b59c4;
    case 0x101b59ceu: edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 4u); goto E_101b59ce;
    case 0x101b59fcu: edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 4u); goto E_101b59fc;
    case 0x101b5a04u: eax = g->eax; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 4u); goto E_101b5a04;
    case 0x101b5a0eu: eax = g->eax; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 4u); goto E_101b5a0e;
    case 0x101b5a16u: edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 4u); goto E_101b5a16;
    case 0x101b5a1eu: eax = g->eax; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 4u); goto E_101b5a1e;
    case 0x101b5a24u: eax = g->eax; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 4u); goto E_101b5a24;
    case 0x101b5a2cu: edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 4u); goto E_101b5a2c;
    case 0x101b5a3eu: eax = g->eax; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 4u); goto E_101b5a3e;
    case 0x101b5a47u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 4u); goto E_101b5a47;
    case 0x101b5a4au: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 4u); goto E_101b5a4a;
    default: break;
    }
#endif

    COW_AT(101b5850)
    if (rd32(self + 0xf108u) != 1u) goto L_101b5863;
    COW_AT(101b585c)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0xffffffffu;
L_101b5863: ;
    COW_AT(101b5863)
    wr8(self + 0xef22u, 0u);
    wr8(self + 0x8c80u, 0u);
    if (arg1 - 2u > 3u)
    {
        edx = in_edx;
        goto L_101b59a6;
    }
    COW_AT(101b5888)
    t1 = rd32(COW_IMG(0x101b5a5cu) + arg1 * 4u - 8u);
    switch (t1 - RD)
    {
    case 0x101b588fu: goto L_101b588f;
    case 0x101b58e0u: goto L_101b58e0;
    case 0x101b590eu: goto L_101b590e;
    case 0x101b5946u: goto L_101b5946;
    default: rt_fatal(g, COW_IMG(0x101b5888u), "switch");
    }
    return 0;
L_101b588f: ;
    COW_AT(101b588f)
    t20 = rd32(self);
    wr32(self + 0xf108u, 2u);
    wr8(self + 0xf11cu, 1u);
    wr8(self + 0xf100u, 0u);
    g->eax = arg1 - 2u;
    g->edx = t20;
    g->esp = sp0 - 0x10u;
    t21 = cow_thiscall(g, rd32(t20 + 0x5cu), self, 0);
    t22 = g->edx;
    g->edx = t22;
    t23 = cow_thiscall(g, COW_IMG(0x101abe50u), self + 0x7e30u, 0);
    t24 = g->edx;
    g->edx = t24;
    t25 = cow_thiscall(g, COW_IMG(0x101acf90u), self + 0x7e30u, 0);
    t26 = g->edx;
    g->edx = t26;
    cow_thiscall(g, COW_IMG(0x101b6ea0u), self, 0);
    t27 = g->edx;
    g->edx = t27;
    cow_thiscall(g, rd32(rd32(self) + 0x30u), self, 0);
    t28 = g->edx;
    wr8(rd32(COW_IMG(0x1066268cu)) + 0x10du, 0u);
    edx = t28;
L_101b59a6: ;
    COW_AT(101b59a6)
    if ((arg8 & 2u) == 0u)
    {
    COW_AT(101b59ae)
        wr8(self + 0xf11cu, 0u);
    }
    COW_AT(101b59b4)
    if (rd8(self + 0xf0ecu) != 0u)
    {
    COW_AT(101b59c4)
        wr32(self + 0xf10cu, 1u);
    }
    else
    {
    COW_AT(101b59bc)
        wr32(self + 0xf10cu, arg2);
    }
    COW_AT(101b59ce)
    wr32(self + 0xf114u, arg8);
    wr32(self + 0xf110u, arg3);
    wr32(self + 0xf118u, arg4);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x101abbd0u), self + 0x7e30u, 1, arg4);
    if (arg7 == 0u)
    {
    COW_AT(101b5a04)
        wr32(self + 0x8c78u, COW_IMG(0x101b7e90u));
    }
    else
    {
    COW_AT(101b59fc)
        wr32(self + 0x8c78u, arg7);
    }
    COW_AT(101b5a0e)
    if (arg6 == 0u)
    {
    COW_AT(101b5a1e)
        wr32(self + 0x8c7cu, self);
    }
    else
    {
    COW_AT(101b5a16)
        wr32(self + 0x8c7cu, arg6);
    }
    COW_AT(101b5a24)
    if (arg5 == 0u) goto L_101b5a3e;
    COW_AT(101b5a2c)
    wr32(self + 0xf104u, arg5);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 1u;
L_101b58e0: ;
    COW_AT(101b58e0)
    t18 = rd32(self);
    wr32(self + 0xf108u, 3u);
    wr8(self + 0xf11cu, 1u);
    wr8(self + 0xf100u, 0u);
    g->edx = t18;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(t18 + 0x30u), self, 0);
    t19 = g->edx;
    wr8(rd32(COW_IMG(0x1066268cu)) + 0x10du, 0u);
    edx = t19;
    goto L_101b59a6;
L_101b590e: ;
    COW_AT(101b590e)
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t14 = cow_call_regs(g, COW_IMG(0x10160c80u), arg1 - 2u, COW_IMG(0x10621838u), g->edx, 1, 0);
    t15 = g->edx;
    if ((uint8_t)t14 != 0u)
    {
        edx = t15;
    }
    else
    {
        eax = t14;
    COW_AT(101b5920)
        t16 = rd32(self);
        wr32(self + 0xf108u, 4u);
        wr8(self + 0xf11cu, 1u);
        g->edx = t16;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(t16 + 0x2cu), self, 0);
        t17 = g->edx;
        wr8(rd32(COW_IMG(0x1066268cu)) + 0x10du, 1u);
        edx = t17;
    }
    goto L_101b59a6;
L_101b5946: ;
    COW_AT(101b5946)
    wr32(self + 0xf108u, 5u);
    if (arg2 != 0u)
    {
    COW_AT(101b595d)
        wr8(self + 0xf11cu, 0u);
    }
    else
    {
    COW_AT(101b5954)
        wr8(self + 0xf11cu, 1u);
    }
    COW_AT(101b5963)
    g->eax = arg1 - 2u;
    g->edx = rd32(self);
    t2 = rd32(self);
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall(g, rd32(t2 + 0x5cu), self, 0);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x101abe50u), self + 0x7e30u, 0);
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x101acf90u), self + 0x7e30u, 0);
    t8 = g->edx;
    g->edx = t8;
    cow_thiscall(g, COW_IMG(0x101b6ea0u), self, 0);
    t9 = g->edx;
    g->eax = rd32(self);
    t10 = rd32(self);
    t11 = cow_thiscall(g, rd32(t10 + 0x58u), self, 0);
    g->edx = rd32(self);
    t12 = rd32(self);
    cow_thiscall(g, rd32(t12 + 0x30u), self, 0);
    t13 = g->edx;
    wr8(rd32(COW_IMG(0x1066268cu)) + 0x10du, 1u);
    wr8(self + 0x8c80u, 1u);
    edx = t13;
    goto L_101b59a6;
L_101b5a3e: ;
    COW_AT(101b5a3e)
    if (rd32(COW_IMG(0x10662d98u)) == 0u)
    {
        ebx = 0u;
    }
    else
    {
        eax = rd32(COW_IMG(0x10662d98u));
    COW_AT(101b5a47)
        ebx = eax + 0x18u;
    }
    COW_AT(101b5a4a)
    wr32(self + 0xf104u, ebx);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101b5850(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101b585cu:
    {
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101b5863u:
    {
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101b5888u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = arg1 - 2u;
        g->ebx = 0u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101b588fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = arg1 - 2u;
        g->ebx = 0u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101b58e0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = arg1 - 2u;
        g->ebx = 0u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101b590eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = arg1 - 2u;
        g->ebx = 0u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101b5920u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101b5946u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = arg1 - 2u;
        g->ebx = 0u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101b5954u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = arg1 - 2u;
        g->ebx = 0u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101b595du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = arg1 - 2u;
        g->ebx = 0u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101b5963u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = arg1 - 2u;
        g->ebx = 0u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101b59a6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101b59aeu:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = arg8;
        g->ebx = 0u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101b59b4u:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = arg8;
        g->ebx = 0u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101b59bcu:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = arg8;
        g->ebx = 0u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101b59c4u:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = arg8;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b59ceu:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = arg8;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b59fcu:
    {
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = arg7;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b5a04u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b5a0eu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b5a16u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = arg6;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b5a1eu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b5a24u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b5a2cu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = arg5;
        (void)sp0;
        return 1;
    }
    case 0x101b5a3eu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b5a47u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101b5a4au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101b5850(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101b5850(g);
    g->esp = sp0;
    rt_return(g, r, 32u);
}
/* COW_ADAPTER END */
