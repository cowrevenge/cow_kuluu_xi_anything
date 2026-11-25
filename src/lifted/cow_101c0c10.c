/* f_0x101c0c10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_101c0c10(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_328;
    uint32_t loc_32c;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 860u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101c0c75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c0c75;
    case 0x101c0c7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c0c7f;
    case 0x101c0c8au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c0c8a;
    case 0x101c0c9fu: edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c0c9f;
    case 0x101c0ca4u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c0ca4;
    case 0x101c0ca6u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_328 = rd32(sp0 - 0x328u); goto E_101c0ca6;
    case 0x101c0cafu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_328 = rd32(sp0 - 0x328u); goto E_101c0caf;
    case 0x101c0cb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c0cb9;
    case 0x101c0cc6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c0cc6;
    case 0x101c0cd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c0cd5;
    case 0x101c0cebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c0ceb;
    case 0x101c0d01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c0d01;
    case 0x101c0d13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c0d13;
    case 0x101c0d1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c0d1e;
    case 0x101c0d25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c0d25;
    case 0x101c0d2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_32c = rd32(sp0 - 0x32cu); goto E_101c0d2e;
    case 0x101c0d34u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c0d34;
    case 0x101c0d3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_32c = rd32(sp0 - 0x32cu); goto E_101c0d3f;
    case 0x101c0d4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c0d4a;
    case 0x101c0d56u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c0d56;
    case 0x101c0d5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c0d5e;
    case 0x101c0d76u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c0d76;
    case 0x101c0d7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c0d7e;
    case 0x101c0d84u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c0d84;
    case 0x101c0da3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c0da3;
    case 0x101c0daau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c0daa;
    case 0x101c0dcfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c0dcf;
    case 0x101c0de5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c0de5;
    case 0x101c0df8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c0df8;
    case 0x101c0dfcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c0dfc;
    case 0x101c0e00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c0e00;
    case 0x101c0e04u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c0e04;
    case 0x101c0e0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c0e0a;
    case 0x101c0e0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c0e0d;
    case 0x101c0e1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c0e1c;
    default: break;
    }
#endif

    COW_AT(101c0c10)
    wr32(sp0 - 0x330u, in_ebx);
    wr32(sp0 - 0x334u, in_ebp);
    wr32(sp0 - 0x338u, in_esi);
    wr32(sp0 - 0x33cu, in_edi);
    wr32(sp0 - 0x324u, COW_IMG(0x10337200u));
    wr32(sp0 - 0x320u, 0u);
    edi = sp0 - 0x31cu;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x21cu, 0u);
    wr32(sp0 - 0x340u, arg1);
    wr32(sp0 - 0x218u, 0u);
    wr32(sp0 - 0x214u, 0u);
    wr32(sp0 - 0x210u, 0u);
    wr32(sp0 - 0x20cu, 0u);
    wr32(sp0 - 0x208u, 0u);
    wr32(sp0 - 0x204u, 0u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x340u;
    t1 = cow_stdcall(g, COW_IMG(0x10311875u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(101c0c75)
    wr32(sp0 - 0x344u, arg1);
    wr32(sp0 - 0x32cu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x344u;
    t4 = cow_stdcall(g, COW_IMG(0x10311875u), 0);
    t5 = g->edx;
    eax = t4;
    edx = t5;
    COW_AT(101c0c7f)
    if (eax == 0u) goto L_101c0e1c;
    COW_AT(101c0c8a)
    wr32(sp0 - 0x328u, arg4);
    if ((int32_t)(arg4 & 0x80000007u) >= 0)
    {
        ecx = arg4 & 0x80000007u;
        zf = (arg4 & 0x80000007u) == 0u;
    }
    else
    {
    COW_AT(101c0c9f)
        ecx = ((arg4 & 0x80000007u) - 1u | 0xfffffff8u) + 1u;
        zf = ((arg4 & 0x80000007u) - 1u | 0xfffffff8u) + 1u == 0u;
    }
    COW_AT(101c0ca4)
    if (zf)
    {
        loc_328 = arg4;
    }
    else
    {
    COW_AT(101c0ca6)
        t6 = arg4 - ecx + 8u;
        wr32(sp0 - 0x328u, t6);
        loc_328 = t6;
    }
    COW_AT(101c0caf)
    wr32(sp0 - 0x340u, loc_328);
    g->eax = loc_328;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x340u;
    t7 = cow_stdcall(g, COW_IMG(0x103118acu), 0);
    t8 = g->ecx;
    t9 = g->edx;
    eax = t7;
    ecx = t8;
    edx = t9;
    COW_AT(101c0cb9)
    if ((int32_t)eax < 0) goto L_101c0e1c;
    ebx = eax;
    COW_AT(101c0cc6)
    if (arg2 == 0u) goto L_101c0e1c;
    COW_AT(101c0cd5)
    edi = arg2;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx - 1u >= 0xffu) goto L_101c0e1c;
    COW_AT(101c0ceb)
    wr32(sp0 - 0x340u, 1u);
    wr32(sp0 - 0x344u, 0x1ffu);
    wr32(sp0 - 0x348u, sp0 - 0x200u);
    wr32(sp0 - 0x34cu, 0x24u);
    g->eax = eax;
    g->ecx = sp0 - 0x200u;
    g->esp = sp0 - 0x34cu;
    t10 = cow_stdcall(g, COW_IMG(0x1030ff10u), 0);
    t11 = g->ecx;
    eax = t10;
    ecx = t11;
    COW_AT(101c0d01)
    wr32(sp0 - 0x340u, 0u);
    wr32(sp0 - 0x344u, sp0 - 0x200u);
    g->eax = eax;
    g->edx = sp0 - 0x200u;
    g->esp = sp0 - 0x33cu;
    t12 = cow_stdcall(g, rd32(COW_IMG(0x10329208u)), 2, sp0 - 0x200u, 0u);   /* kernel32.dll!CreateDirectoryA */
    t13 = g->edx;
    eax = t12;
    edx = t13;
    COW_AT(101c0d13)
    g->eax = eax;
    t14 = rd32(self + 0x1f0u);
    g->esp = sp0 - 0x33cu;
    t15 = cow_fastcall(g, COW_IMG(0x1019fa90u), t14, edx, 0);
    t16 = g->ecx;
    t17 = g->edx;
    eax = t15;
    ecx = t16;
    edx = t17;
    COW_AT(101c0d1e)
    wr32(sp0 - 0x340u, 0u);
    wr32(sp0 - 0x344u, ebx);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x344u;
    t18 = cow_stdcall(g, COW_IMG(0x1031188bu), 0);
    t19 = g->ecx;
    t20 = g->edx;
    eax = t18;
    ecx = t19;
    edx = t20;
    COW_AT(101c0d25)
    if ((int32_t)eax < 0)
    {
        esi = eax;
        loc_32c = rd32(sp0 - 0x32cu);
        goto L_101c0d3f;
    }
    esi = eax;
L_101c0d2e: ;
    COW_AT(101c0d2e)
    wr32(sp0 - 0x340u, esi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x340u;
    t21 = cow_stdcall(g, COW_IMG(0x10311880u), 0);
    t22 = g->ecx;
    t23 = g->edx;
    eax = t21;
    ecx = t22;
    edx = t23;
    COW_AT(101c0d34)
    wr32(sp0 - 0x32cu, eax);
    if (eax == 0u) goto L_101c0d2e;
    loc_32c = eax;
L_101c0d3f: ;
    COW_AT(101c0d3f)
    g->esp = sp0 - 0x33cu;
    cow_fastcall(g, COW_IMG(0x1019fab0u), rd32(self + 0x1f0u), edx, 0);
    t24 = g->edx;
    edx = t24;
    COW_AT(101c0d4a)
    if ((int32_t)rd32(sp0 - 0x32cu) < 0)
    {
        eax = rd32(sp0 - 0x32cu);
        goto L_101c0e1c;
    }
    eax = rd32(sp0 - 0x32cu);
    COW_AT(101c0d56)
    if ((int32_t)esi < 0) goto L_101c0e1c;
    COW_AT(101c0d5e)
    wr32(sp0 - 0x340u, 1u);
    wr32(sp0 - 0x344u, sp0 - 0x31cu);
    wr32(sp0 - 0x348u, 0x24u);
    wr32(sp0 - 0x34cu, arg1);
    g->ebx = ebx;
    g->eax = sp0 - 0x31cu;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x33cu;
    t25 = cow_stdcall(g, COW_IMG(0x101c3e40u), 4, arg1, 0x24u, sp0 - 0x31cu, 1u);
    t26 = g->ecx;
    t27 = g->edx;
    eax = t25;
    ecx = t26;
    edx = t27;
    COW_AT(101c0d76)
    if ((int32_t)eax < 0) goto L_101c0e1c;
    COW_AT(101c0d7e)
    wr32(sp0 - 0x340u, ebx);
    g->eax = eax;
    g->esp = sp0 - 0x334u;
    t28 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, ebx, rd32(sp0 - 0x33cu), rd32(sp0 - 0x338u));
    eax = t28;
    COW_AT(101c0d84)
    wr32(sp0 - 0x344u, arg1);
    wr32(sp0 - 0x348u, arg2);
    wr32(sp0 - 0x34cu, ebx);
    wr32(sp0 - 0x350u, eax);
    t29 = rd32(sp0 - 0x328u);
    wr32(sp0 - 0x354u, t29);
    wr32(sp0 - 0x358u, arg3);
    g->eax = arg3;
    g->ecx = arg2;
    g->edx = t29;
    g->esp = sp0 - 0x358u;
    t30 = cow_stdcall(g, COW_IMG(0x103118a1u), 0);
    t31 = g->ecx;
    t32 = g->edx;
    ecx = t31;
    edx = t32;
    esi = eax;
    eax = t30;
    COW_AT(101c0da3)
    if ((int32_t)eax < 0)
    {
    COW_AT(101c0dfc)
        edi = rd32(sp0 - 0x32cu);
    }
    else
    {
    COW_AT(101c0daa)
        wr32(sp0 - 0x320u, 3u);
        wr32(sp0 - 0x340u, arg5);
        wr32(sp0 - 0x218u, esi);
        wr32(sp0 - 0x214u, ebx);
        g->eax = eax;
        g->ecx = self;
        g->esp = sp0 - 0x33cu;
        t33 = cow_stdcall(g, COW_IMG(0x101c3fb0u), 1, arg5);
        t34 = g->ecx;
        eax = t33;
        ecx = t34;
    COW_AT(101c0dcf)
        wr32(sp0 - 0x210u, eax);
        wr32(sp0 - 0x340u, sp0 - 0x31cu);
        wr32(sp0 - 0x344u, COW_IMG(0x1034f7e0u));
        g->ebx = ebx;
        g->edx = sp0 - 0x31cu;
        g->esp = sp0 - 0x33cu;
        cow_thiscall_cdecl(g, COW_IMG(0x101c0bc0u), ecx, 2, COW_IMG(0x1034f7e0u), sp0 - 0x31cu);
        t35 = g->edx;
        edx = t35;
    COW_AT(101c0de5)
        wr32(sp0 - 0x340u, sp0 - 0x324u);
        g->eax = sp0 - 0x324u;
        t36 = rd32(self + 0x1f0u);
        g->esp = sp0 - 0x33cu;
        t37 = cow_fastcall(g, COW_IMG(0x1019f960u), t36, edx, 1, sp0 - 0x324u);
        t38 = g->ecx;
        t39 = g->edx;
        eax = t37;
        ecx = t38;
        edx = t39;
    COW_AT(101c0df8)
        edi = eax;
    }
    COW_AT(101c0e00)
    if (esi != 0u)
    {
    COW_AT(101c0e04)
        wr32(sp0 - 0x340u, esi);
        g->esp = sp0 - 0x33cu;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, esi);
    COW_AT(101c0e0a)
    }
    COW_AT(101c0e0d)
    g->ebx = rd32(sp0 - 0x330u);
    g->esi = rd32(sp0 - 0x338u);
    g->edi = rd32(sp0 - 0x33cu);
    g->ebp = rd32(sp0 - 0x334u);
    return edi;
L_101c0e1c: ;
    COW_AT(101c0e1c)
    g->ebx = rd32(sp0 - 0x330u);
    g->esi = rd32(sp0 - 0x338u);
    g->edi = rd32(sp0 - 0x33cu);
    g->ebp = rd32(sp0 - 0x334u);
    return 0xffffffffu;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101c0c10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101c0c75u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x340u;
        g->esi = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c0c7fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x344u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101c0c8au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x33cu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101c0c9fu:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        unsigned cf;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x33cu;
        g->eax = arg4;
        g->ecx = arg4 & 0x80000007u;
        g->esi = 0u;
        wr32(sp0 - 0x328u, arg4);
        (void)sp0;
        return 1;
    }
    case 0x101c0ca4u:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        unsigned cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x33cu;
        g->eax = arg4;
        g->esi = 0u;
        wr32(sp0 - 0x328u, arg4);
        (void)sp0;
        return 1;
    }
    case 0x101c0ca6u:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        unsigned cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_328;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_328 = rd32(sp0 - 0x328u);
        g->esp = sp0 - 0x33cu;
        g->eax = arg4;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101c0cafu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_328;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_328 = rd32(sp0 - 0x328u);
        g->esp = sp0 - 0x33cu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101c0cb9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x340u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101c0cc6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x33cu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101c0cd5u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x33cu;
        g->esi = 0u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101c0cebu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x33cu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101c0d01u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x34cu;
        g->esi = 0u;
        wr32(sp0 - 0x348u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101c0d13u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x33cu;
        g->esi = 0u;
        wr32(sp0 - 0x348u, sp0 - 0x200u);
        wr32(sp0 - 0x344u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101c0d1eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x33cu;
        g->esi = 0u;
        wr32(sp0 - 0x348u, sp0 - 0x200u);
        wr32(sp0 - 0x344u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101c0d25u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x344u;
        wr32(sp0 - 0x348u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101c0d2eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_32c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_32c = rd32(sp0 - 0x32cu);
        g->esp = sp0 - 0x33cu;
        wr32(sp0 - 0x348u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101c0d34u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x340u;
        wr32(sp0 - 0x348u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101c0d3fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_32c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_32c = rd32(sp0 - 0x32cu);
        g->esp = sp0 - 0x33cu;
        wr32(sp0 - 0x348u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101c0d4au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x33cu;
        wr32(sp0 - 0x348u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101c0d56u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x33cu;
        wr32(sp0 - 0x348u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101c0d5eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x33cu;
        wr32(sp0 - 0x348u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101c0d76u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x33cu;
        g->edi = arg1;
        wr32(sp0 - 0x344u, sp0 - 0x31cu);
        (void)sp0;
        return 1;
    }
    case 0x101c0d7eu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x33cu;
        g->edi = arg1;
        wr32(sp0 - 0x344u, sp0 - 0x31cu);
        (void)sp0;
        return 1;
    }
    case 0x101c0d84u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x340u;
        g->edi = arg1;
        wr32(sp0 - 0x344u, sp0 - 0x31cu);
        (void)sp0;
        return 1;
    }
    case 0x101c0da3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x358u;
        (void)sp0;
        return 1;
    }
    case 0x101c0daau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x33cu;
        (void)sp0;
        return 1;
    }
    case 0x101c0dcfu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x33cu;
        (void)sp0;
        return 1;
    }
    case 0x101c0de5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x344u;
        wr32(sp0 - 0x340u, sp0 - 0x31cu);
        (void)sp0;
        return 1;
    }
    case 0x101c0df8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x33cu;
        wr32(sp0 - 0x340u, sp0 - 0x324u);
        (void)sp0;
        return 1;
    }
    case 0x101c0dfcu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x33cu;
        (void)sp0;
        return 1;
    }
    case 0x101c0e00u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x33cu;
        (void)sp0;
        return 1;
    }
    case 0x101c0e04u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x33cu;
        (void)sp0;
        return 1;
    }
    case 0x101c0e0au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x340u;
        (void)sp0;
        return 1;
    }
    case 0x101c0e0du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x33cu;
        (void)sp0;
        return 1;
    }
    case 0x101c0e1cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x33cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101c0c10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101c0c10(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
